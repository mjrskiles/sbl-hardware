/**
 * @file sdram.hpp
 * @brief STM32H750 bare-metal SDRAM driver via FMC
 *
 * Initializes 64 MB external SDRAM on SDRAM Bank 1 (0xC0000000).
 * Compatible with Daisy Seed / Daisy Patch SM (AS4C16M32MSA or equivalent).
 *
 * Configuration:
 *   - 32-bit data bus, 9 column bits, 13 row bits, 4 internal banks
 *   - CAS latency 3, burst length 4, sequential
 *   - FMC clock source: D1 HCLK (240 MHz), SDRAM clock: HCLK/2 = 120 MHz
 *   - Read pipe delay: 1 HCLK cycle (RPIPE=1) — required for clean data latching
 *   - MPU: cacheable + bufferable (write-back) for D-cache performance
 *
 * GPIO: ~57 pins across ports D, E, F, G, H, I — all AF12 (FMC).
 * These are internal to the Patch SM PCB; no conflict with exposed headers.
 *
 * Reference: RM0433 §22, libDaisy sdram.cpp, IS42S16160J / AS4C16M32MSA datasheet.
 *
 * @note Not ISR-safe — blocking. Boot-time only.
 */
#ifndef SBL_HW_DRIVER_SDRAM_HPP_
#define SBL_HW_DRIVER_SDRAM_HPP_

#include <cstdint>
#include <cstring>
#include <sbl/hw/reg/rcc.hpp>
#include <sbl/hw/reg/gpio.hpp>
#include <sbl/hw/reg/fmc.hpp>
#include <sbl/hw/reg/cortex_m.hpp>
#include "timeout.hpp"

// Linker symbols for .sdram_bss section
extern "C" {
    extern uint32_t _ssdram_bss;
    extern uint32_t _esdram_bss;
}

namespace sbl::driver {

namespace detail {

// SDRAM base address (FMC Bank 1, SDNE0)
inline constexpr uint32_t SDRAM_BASE = 0xC000'0000;
inline constexpr uint32_t SDRAM_SIZE = 64 * 1024 * 1024;  // 64 MB

// ============================================================================
// FMC SDCR1 field values (RM0433 §22.7.1)
// ============================================================================
inline constexpr uint32_t SDCR_NC_9       = (1u << sbl::hw::reg::FMC::FMC_SDCR1_NC_Pos);    // 9 column bits
inline constexpr uint32_t SDCR_NR_13      = (2u << sbl::hw::reg::FMC::FMC_SDCR1_NR_Pos);    // 13 row bits
inline constexpr uint32_t SDCR_MWID_32    = (2u << sbl::hw::reg::FMC::FMC_SDCR1_MWID_Pos);  // 32-bit data bus
inline constexpr uint32_t SDCR_NB_4       = sbl::hw::reg::FMC::FMC_SDCR1_NB;                // 4 internal banks
inline constexpr uint32_t SDCR_CAS_3      = (3u << sbl::hw::reg::FMC::FMC_SDCR1_CAS_Pos);   // CAS latency 3
inline constexpr uint32_t SDCR_SDCLK_2    = (2u << sbl::hw::reg::FMC::FMC_SDCR1_SDCLK_Pos); // SDCLK = FMC_CLK / 2
inline constexpr uint32_t SDCR_RBURST     = sbl::hw::reg::FMC::FMC_SDCR1_RBURST;            // Read burst enabled
inline constexpr uint32_t SDCR_RPIPE_0    = (0u << sbl::hw::reg::FMC::FMC_SDCR1_RPIPE_Pos); // No read pipe delay
inline constexpr uint32_t SDCR_RPIPE_1    = (1u << sbl::hw::reg::FMC::FMC_SDCR1_RPIPE_Pos); // 1 HCLK read pipe delay

// ============================================================================
// FMC SDCMR command mode values (RM0433 §22.7.4)
// ============================================================================
inline constexpr uint32_t SDCMR_MODE_NORMAL       = 0u;
inline constexpr uint32_t SDCMR_MODE_CLK_ENABLE   = 1u;
inline constexpr uint32_t SDCMR_MODE_PRECHARGE_ALL = 2u;
inline constexpr uint32_t SDCMR_MODE_AUTOREFRESH  = 3u;
inline constexpr uint32_t SDCMR_MODE_LOAD_MODE    = 4u;

// ============================================================================
// SDRAM Mode Register (programmed via SDCMR.MRD field)
// ============================================================================
inline constexpr uint32_t MODEREG_BURST_LENGTH_4   = 0x0002;
inline constexpr uint32_t MODEREG_BURST_SEQUENTIAL = 0x0000;
inline constexpr uint32_t MODEREG_CAS_LATENCY_3   = 0x0030;
inline constexpr uint32_t MODEREG_WRITEBURST_SINGLE = 0x0200;
inline constexpr uint32_t MODEREG_VALUE = MODEREG_BURST_LENGTH_4
                                        | MODEREG_BURST_SEQUENTIAL
                                        | MODEREG_CAS_LATENCY_3
                                        | MODEREG_WRITEBURST_SINGLE;  // = 0x0232

// ============================================================================
// SDRAM timing at 120 MHz SDCLK (8.33 ns per cycle)
// Values are in FMC clock cycles. Register stores (cycles - 1).
// Matched to libDaisy's proven values for AS4C16M32MSA on Daisy PCB.
// TRP and TRCD are much more conservative than datasheet minimums —
// libDaisy found these necessary for reliable operation (likely PCB SI).
// ============================================================================
inline constexpr uint32_t TMRD  = 2;   // Load mode register to active
inline constexpr uint32_t TXSR  = 7;   // Exit self-refresh delay
inline constexpr uint32_t TRAS  = 4;   // Self-refresh time (row active)
inline constexpr uint32_t TRC   = 8;   // Row cycle delay (libDaisy: "started at 7")
inline constexpr uint32_t TWR   = 3;   // Write recovery time
inline constexpr uint32_t TRP   = 16;  // Row precharge delay (libDaisy maxed this)
inline constexpr uint32_t TRCD  = 10;  // Row to column delay (libDaisy: "started at 2")

// Refresh rate: libDaisy uses 0x81A - 20 = 2054 (proven on Daisy hardware)
// Theoretical at HCLK=240 MHz: 64ms/8192 rows × 240 MHz = 1875 - 20 = 1855
// Using libDaisy's value for compatibility
inline constexpr uint32_t REFRESH_COUNT = 0x81A - 20;  // 2054

// ============================================================================
// MPU constants (Cortex-M7 MPU, ARMv7-M Architecture Reference)
// ============================================================================
inline constexpr uint32_t MPU_CTRL_ADDR    = 0xE000'ED94;
inline constexpr uint32_t MPU_RNR_ADDR     = 0xE000'ED98;
inline constexpr uint32_t MPU_RBAR_ADDR    = 0xE000'ED9C;
inline constexpr uint32_t MPU_RASR_ADDR    = 0xE000'EDA0;

inline constexpr uint32_t MPU_CTRL_ENABLE     = (1u << 0);
inline constexpr uint32_t MPU_CTRL_PRIVDEFENA = (1u << 2);  // Default map for privileged access

inline constexpr uint32_t MPU_RASR_ENABLE     = (1u << 0);
inline constexpr uint32_t MPU_RASR_SIZE_128KB = (16u << 1);  // 2^(16+1) = 128 KB
inline constexpr uint32_t MPU_RASR_SIZE_4KB   = (11u << 1);  // 2^(11+1) = 4 KB
inline constexpr uint32_t MPU_RASR_SIZE_64MB  = (25u << 1);  // 2^(25+1) = 64 MB
inline constexpr uint32_t MPU_RASR_B         = (1u << 16);  // Bufferable
inline constexpr uint32_t MPU_RASR_C         = (1u << 17);  // Cacheable
inline constexpr uint32_t MPU_RASR_S         = (1u << 18);  // Shareable
inline constexpr uint32_t MPU_RASR_TEX_0     = (0u << 19);  // TEX = 000
inline constexpr uint32_t MPU_RASR_TEX_1     = (1u << 19);  // TEX = 001
inline constexpr uint32_t MPU_RASR_AP_FULL   = (3u << 24);  // Full access (priv + unpriv)
inline constexpr uint32_t MPU_RASR_XN        = (1u << 28);  // Execute never

/**
 * @brief Configure a GPIO port's pins as AF12 (FMC), very high speed, no pull
 *
 * @param gpio  Pointer to GPIO register block
 * @param pins  Bitmask of pins to configure (e.g., 0x0003 for pins 0,1)
 */
inline void configure_fmc_gpio(sbl::hw::reg::GPIOA_t* gpio, uint16_t pins) {
    uint32_t moder   = gpio->GPIO_MODER;
    uint32_t ospeedr = gpio->GPIO_OSPEEDR;
    uint32_t pupdr   = gpio->GPIO_PUPDR;
    uint32_t afrl    = gpio->GPIO_AFRL;
    uint32_t afrh    = gpio->GPIO_AFRH;

    for (uint8_t pin = 0; pin < 16; ++pin) {
        if (!(pins & (1u << pin))) continue;

        // Alternate function mode (10b)
        moder &= ~(3u << (pin * 2));
        moder |= (2u << (pin * 2));

        // Very high speed (11b)
        ospeedr |= (3u << (pin * 2));

        // No pull-up/pull-down (00b)
        pupdr &= ~(3u << (pin * 2));

        // AF12 = FMC
        if (pin < 8) {
            afrl &= ~(0xFu << (pin * 4));
            afrl |= (12u << (pin * 4));
        } else {
            afrh &= ~(0xFu << ((pin - 8) * 4));
            afrh |= (12u << ((pin - 8) * 4));
        }
    }

    gpio->GPIO_MODER   = moder;
    gpio->GPIO_OSPEEDR = ospeedr;
    gpio->GPIO_PUPDR   = pupdr;
    gpio->GPIO_AFRL    = afrl;
    gpio->GPIO_AFRH    = afrh;
}

/**
 * @brief Configure all FMC GPIO pins for SDRAM
 *
 * Pin mapping (from libDaisy sdram.cpp, verified against Daisy schematic):
 *   Port D: PD0(D2), PD1(D3), PD8(D13), PD9(D14), PD10(D15), PD14(D0), PD15(D1)
 *   Port E: PE0(NBL0), PE1(NBL1), PE7(D4), PE8(D5), PE9(D6), PE10(D7),
 *           PE11(D8), PE12(D9), PE13(D10), PE14(D11), PE15(D12)
 *   Port F: PF0(A0), PF1(A1), PF2(A2), PF3(A3), PF4(A4), PF5(A5),
 *           PF11(SDNRAS), PF12(A6), PF13(A7), PF14(A8), PF15(A9)
 *   Port G: PG0(A10), PG1(A11), PG2(A12), PG4(BA0), PG5(BA1),
 *           PG8(SDCLK), PG15(SDNCAS)
 *   Port H: PH2(SDCKE0), PH3(SDNE0), PH5(SDNWE), PH8(D16), PH9(D17),
 *           PH10(D18), PH11(D19), PH12(D20), PH13(D21), PH14(D22), PH15(D23)
 *   Port I: PI0(D24), PI1(D25), PI2(D26), PI3(D27), PI4(NBL2), PI5(NBL3),
 *           PI6(D28), PI7(D29), PI9(D30), PI10(D31)
 */
inline void configure_sdram_gpio() {
    using namespace sbl::hw::reg;

    // Enable GPIO clocks for ports D, E, F, G, H, I
    periph::rcc->AHB4ENR |= RCC::AHB4ENR_GPIODEN
                           | RCC::AHB4ENR_GPIOEEN
                           | RCC::AHB4ENR_GPIOFEN
                           | RCC::AHB4ENR_GPIOGEN
                           | RCC::AHB4ENR_GPIOHEN
                           | RCC::AHB4ENR_GPIOIEN;
    volatile uint32_t dummy = periph::rcc->AHB4ENR;
    (void)dummy;

    //                            pins: 15 14   10  9  8     1  0
    configure_fmc_gpio(periph::gpiod, 0b1100'0111'0000'0011);  // PD0,1,8,9,10,14,15
    //                            pins: 15-7              1  0
    configure_fmc_gpio(periph::gpioe, 0b1111'1111'1000'0011);  // PE0,1,7-15
    //                            pins: 15-11        5-0
    configure_fmc_gpio(periph::gpiof, 0b1111'1000'0011'1111);  // PF0-5,11-15
    //                            pins: 15    8  5  4  2  1  0
    configure_fmc_gpio(periph::gpiog, 0b1000'0001'0011'0111);  // PG0,1,2,4,5,8,15
    //                            pins: 15-8     5  3  2
    configure_fmc_gpio(periph::gpioh, 0b1111'1111'0010'1100);  // PH2,3,5,8-15
    //                            pins: 10  9  7-0
    configure_fmc_gpio(periph::gpioi, 0b0000'0110'1111'1111);  // PI0-7,9,10
}

/**
 * @brief Send a command to SDRAM via FMC_SDCMR
 *
 * @param mode     Command mode (CLK_ENABLE, PRECHARGE_ALL, AUTOREFRESH, LOAD_MODE)
 * @param nrfs     Number of auto-refresh cycles minus 1 (only for AUTOREFRESH)
 * @param mrd      Mode register value (only for LOAD_MODE)
 */
inline void sdram_command(uint32_t mode, uint32_t nrfs = 0, uint32_t mrd = 0) {
    using namespace sbl::hw::reg;

    uint32_t cmd = (mode << FMC::FMC_SDCMR_MODE_Pos)
                 | FMC::FMC_SDCMR_CTB1              // Target Bank 1
                 | (nrfs << FMC::FMC_SDCMR_NRFS_Pos)
                 | (mrd << FMC::FMC_SDCMR_MRD_Pos);
    periph::fmc->FMC_SDCMR = cmd;

    // Wait for command to complete (SDSR.BUSY clears)
    // SDSR bit 5 is the busy flag — not in SVD, but bit 5 per RM0433 §22.7.6
    // Actually, we poll SDCMR.MODE != 0 → command pending. When MODE reads 0, done.
    for (volatile uint32_t i = 0; i < 100'000; ++i) {
        if ((periph::fmc->FMC_SDSR & 0x20) == 0) return;  // Not busy
    }
}

/**
 * @brief Configure MPU regions for SDRAM and DMA safety
 *
 * Derived from libDaisy's MPU configuration (system.cpp ConfigureMpu), with
 * one deliberate difference: region 0 covers ALL of SRAM1 (128 KB), not
 * libDaisy's 32 KB. libDaisy's region is smaller than its linker section, so
 * DMA buffers past the 32 KB mark silently land in cacheable memory. Our
 * region size must equal LENGTH(RAM_D2) in stm32h750.ld — the linker errors
 * on .dma_buffer overflow, so the two limits fail loudly together.
 *   Region 0: RAM_D2/SRAM1 (0x30000000, 128KB) — Non-cacheable, DMA buffers
 *   Region 1: SDRAM (0xC0000000, 64MB) — Normal, cacheable + bufferable
 *   Region 2: Backup SRAM (0x38800000, 4KB) — Non-cacheable
 *
 * Without MPU, 0xC0000000 defaults to "External Device" memory type on
 * Cortex-M7. Device memory generates single-beat AXI transactions —
 * incompatible with the FMC's burst mode, causing data corruption.
 *
 * D-cache is safe to enable AFTER this because RAM_D2 is explicitly
 * marked non-cacheable, so DMA audio buffers won't go stale.
 */
inline void configure_mpu() {
    __asm__ volatile("dmb" ::: "memory");
    auto& mpu_ctrl = *reinterpret_cast<volatile uint32_t*>(MPU_CTRL_ADDR);
    auto& mpu_rnr  = *reinterpret_cast<volatile uint32_t*>(MPU_RNR_ADDR);
    auto& mpu_rbar = *reinterpret_cast<volatile uint32_t*>(MPU_RBAR_ADDR);
    auto& mpu_rasr = *reinterpret_cast<volatile uint32_t*>(MPU_RASR_ADDR);

    mpu_ctrl = 0;  // Disable MPU

    // Region 0: RAM_D2 (SRAM1, 0x30000000, 128 KB) — Non-cacheable
    // DMA audio buffers live here. Must bypass D-cache. Size must match
    // LENGTH(RAM_D2) in stm32h750.ld (see doc comment above).
    // TEX=1, C=0, B=0 = Normal, Non-cacheable; S=1 = Shareable
    mpu_rnr  = 0;
    mpu_rbar = 0x3000'0000;
    mpu_rasr = MPU_RASR_ENABLE
             | MPU_RASR_SIZE_128KB
             | MPU_RASR_TEX_1
             | MPU_RASR_S
             | MPU_RASR_AP_FULL
             | MPU_RASR_XN;

    // Region 1: SDRAM (0xC0000000, 64 MB) — Write-back, read/write allocate
    // TEX=0, C=1, B=1 = Normal, Write-back, write allocate
    // Full D-cache performance for both reads and writes.
    // RPIPE_1 in FMC ensures clean data latching from SDRAM bus.
    mpu_rnr  = 1;
    mpu_rbar = SDRAM_BASE;
    mpu_rasr = MPU_RASR_ENABLE
             | MPU_RASR_SIZE_64MB
             | MPU_RASR_TEX_0
             | MPU_RASR_C
             | MPU_RASR_B
             | MPU_RASR_AP_FULL
             | MPU_RASR_XN;

    // Region 2: Backup SRAM (0x38800000, 4 KB) — Non-cacheable
    // TEX=1, C=0, B=0 = Normal, Non-cacheable; S=1 = Shareable
    mpu_rnr  = 2;
    mpu_rbar = 0x3880'0000;
    mpu_rasr = MPU_RASR_ENABLE
             | MPU_RASR_SIZE_4KB
             | MPU_RASR_TEX_1
             | MPU_RASR_S
             | MPU_RASR_AP_FULL
             | MPU_RASR_XN;

    // Enable MPU with default memory map for privileged access
    mpu_ctrl = MPU_CTRL_ENABLE | MPU_CTRL_PRIVDEFENA;
    __asm__ volatile("dsb" ::: "memory");
    __asm__ volatile("isb");

    // Enable D-cache and I-cache (safe now that RAM_D2 is non-cacheable)
    // SCB_CCSIDR addresses (ARMv7-M)
    constexpr uint32_t SCB_CCR_ADDR      = 0xE000'ED14;
    constexpr uint32_t SCB_CCSIDR_ADDR   = 0xE000'ED80;
    constexpr uint32_t SCB_CSSELR_ADDR   = 0xE000'ED84;
    constexpr uint32_t SCB_DCISW_ADDR    = 0xE000'EF60;
    constexpr uint32_t SCB_ICIALLU_ADDR  = 0xE000'EF50;

    constexpr uint32_t CCR_DC = (1u << 16);  // D-cache enable
    constexpr uint32_t CCR_IC = (1u << 17);  // I-cache enable

    auto& scb_ccr    = *reinterpret_cast<volatile uint32_t*>(SCB_CCR_ADDR);
    auto& scb_ccsidr = *reinterpret_cast<volatile uint32_t*>(SCB_CCSIDR_ADDR);
    auto& scb_csselr = *reinterpret_cast<volatile uint32_t*>(SCB_CSSELR_ADDR);
    auto& scb_dcisw  = *reinterpret_cast<volatile uint32_t*>(SCB_DCISW_ADDR);
    auto& scb_iciallu = *reinterpret_cast<volatile uint32_t*>(SCB_ICIALLU_ADDR);

    // Invalidate I-cache and enable
    scb_iciallu = 0;
    __asm__ volatile("dsb" ::: "memory");
    __asm__ volatile("isb");
    scb_ccr |= CCR_IC;

    // Invalidate D-cache (must invalidate before enabling)
    scb_csselr = 0;  // Select data cache (level 1)
    __asm__ volatile("dsb" ::: "memory");

    uint32_t ccsidr = scb_ccsidr;
    uint32_t sets = ((ccsidr >> 13) & 0x7FFF) + 1;
    uint32_t ways = ((ccsidr >> 3) & 0x3FF) + 1;
    for (uint32_t set = 0; set < sets; ++set) {
        for (uint32_t way = 0; way < ways; ++way) {
            scb_dcisw = (set << 5) | (way << 30);
        }
    }
    __asm__ volatile("dsb" ::: "memory");

    // Enable D-cache
    scb_ccr |= CCR_DC;
    __asm__ volatile("dsb" ::: "memory");
    __asm__ volatile("isb");
}

} // namespace detail

/**
 * @brief Initialize 64 MB external SDRAM via FMC
 *
 * Performs the full SDRAM bringup sequence:
 * 1. Enable FMC clock (HCLK source — no PLL conflict with audio)
 * 2. Configure ~57 FMC GPIO pins (AF12, very high speed)
 * 3. Set SDRAM controller geometry and timing (SDCR1, SDTR1)
 * 4. Execute SDRAM power-up command sequence (JEDEC standard)
 * 5. Configure MPU region (cacheable + bufferable) and enable D-cache
 * 6. Zero the .sdram_bss linker section
 *
 * After this returns, SDRAM is accessible at 0xC0000000 and any
 * SBL_SDRAM_BUFFER variables are zero-initialized.
 *
 * Must be called AFTER init() (HCLK must be running at 240 MHz).
 *
 * @note Not ISR-safe — blocking. Boot-time only.
 */
inline void init_sdram() {
    using namespace detail;
    using namespace sbl::hw::reg;

    // ---- Step 1: Enable FMC peripheral clock ----
    periph::rcc->AHB3ENR |= RCC::AHB3ENR_FMCEN;
    volatile uint32_t dummy = periph::rcc->AHB3ENR;
    (void)dummy;

    // ---- Step 2: Configure FMC GPIO ----
    configure_sdram_gpio();

    // ---- Step 3: FMC SDRAM controller configuration ----
    periph::fmc->FMC_SDCR1 = SDCR_NC_9
                            | SDCR_NR_13
                            | SDCR_MWID_32
                            | SDCR_NB_4
                            | SDCR_CAS_3
                            | SDCR_SDCLK_2
                            | SDCR_RBURST
                            | SDCR_RPIPE_1;

    periph::fmc->FMC_SDTR1 = ((TMRD - 1) << FMC::FMC_SDTR1_TMRD_Pos)
                            | ((TXSR - 1) << FMC::FMC_SDTR1_TXSR_Pos)
                            | ((TRAS - 1) << FMC::FMC_SDTR1_TRAS_Pos)
                            | ((TRC  - 1) << FMC::FMC_SDTR1_TRC_Pos)
                            | ((TWR  - 1) << FMC::FMC_SDTR1_TWR_Pos)
                            | ((TRP  - 1) << FMC::FMC_SDTR1_TRP_Pos)
                            | ((TRCD - 1) << FMC::FMC_SDTR1_TRCD_Pos);

    periph::fmc->FMC_BCR1 |= FMC::FMC_BCR1_FMCEN;

    // ---- Step 4: SDRAM command sequence (JEDEC) ----
    sdram_command(SDCMR_MODE_CLK_ENABLE);

    for (volatile uint32_t i = 0; i < 48'000'000; ++i) {
        __asm__ volatile("nop");
    }

    sdram_command(SDCMR_MODE_PRECHARGE_ALL);
    sdram_command(SDCMR_MODE_AUTOREFRESH, 8 - 1);
    sdram_command(SDCMR_MODE_LOAD_MODE, 0, MODEREG_VALUE);

    periph::fmc->FMC_SDRTR = (REFRESH_COUNT << FMC::FMC_SDRTR_COUNT_Pos);

    // ---- Step 5: Configure MPU ----
    // Mark SDRAM as Normal memory (instead of default Device type).
    // Also mark RAM_D2 as non-cacheable for DMA safety.
    configure_mpu();

    // ---- Step 6: Zero .sdram_bss section ----
    uint32_t* dst = &_ssdram_bss;
    while (dst < &_esdram_bss) {
        *dst++ = 0;
    }
}

/**
 * @brief Validate SDRAM with address-as-data pattern test
 *
 * Writes each 32-bit word's address as its value, reads back, and verifies.
 * Tests the full 64 MB. Takes ~500 ms.
 *
 * @return true if all 64 MB verified correctly
 */
inline bool validate_sdram() {
    volatile uint32_t* base = reinterpret_cast<volatile uint32_t*>(detail::SDRAM_BASE);
    const uint32_t word_count = detail::SDRAM_SIZE / sizeof(uint32_t);

    // Write: address-as-data pattern
    for (uint32_t i = 0; i < word_count; ++i) {
        base[i] = i;
    }

    // Read back and verify
    for (uint32_t i = 0; i < word_count; ++i) {
        if (base[i] != i) return false;
    }

    // Zero the memory
    for (uint32_t i = 0; i < word_count; ++i) {
        base[i] = 0;
    }

    return true;
}

} // namespace sbl::driver

#endif // SBL_HW_DRIVER_SDRAM_HPP_
