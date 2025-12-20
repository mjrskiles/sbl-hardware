/**
 * @file init.hpp
 * @brief STM32H750 bare-metal system initialization
 *
 * Configures the STM32H7 clock tree for 480 MHz operation using HSE.
 * No HAL dependencies - uses SVD-generated register definitions.
 */
#ifndef SBL_HW_DRIVER_INIT_HPP_
#define SBL_HW_DRIVER_INIT_HPP_

#include <cstdint>
#include <sbl/hw/reg/rcc.hpp>
#include <sbl/hw/reg/pwr.hpp>
#include <sbl/hw/reg/flash.hpp>
#include <sbl/hw/reg/gpio.hpp>
#include <sbl/hw/reg/cortex_m.hpp>
#include "timer.hpp"

// SystemCoreClock - required by TinyUSB and other CMSIS-compatible code
// Updated by init() when clock configuration changes
extern "C" inline uint32_t SystemCoreClock = 64'000'000;  // Default to HSI

namespace sbl::driver {

/**
 * @brief Clock configuration for STM32H750
 */
struct ClockConfig {
    uint32_t hse_mhz = 16;       // External oscillator (Daisy Seed: 16 MHz)
    uint32_t sysclk_mhz = 480;   // Target SYSCLK
    uint32_t hclk_mhz = 240;     // AHB clock (SYSCLK/2 max for D1)
    uint32_t pclk1_mhz = 120;    // APB1 clock
    uint32_t pclk2_mhz = 120;    // APB2 clock
};

namespace detail {

// RCC_CR bit definitions
constexpr uint32_t RCC_CR_HSEON = (1u << 16);
constexpr uint32_t RCC_CR_HSERDY = (1u << 17);
constexpr uint32_t RCC_CR_PLL1ON = (1u << 24);
constexpr uint32_t RCC_CR_PLL1RDY = (1u << 25);

// RCC_CFGR bit definitions
constexpr uint32_t RCC_CFGR_SW_HSI = 0;
constexpr uint32_t RCC_CFGR_SW_HSE = 1;
constexpr uint32_t RCC_CFGR_SW_PLL1 = 3;
constexpr uint32_t RCC_CFGR_SWS_PLL1 = (3u << 3);

// RCC_PLLCKSELR bit definitions
constexpr uint32_t RCC_PLLCKSELR_PLLSRC_HSE = (2u << 0);

// RCC_PLLCFGR bit definitions
constexpr uint32_t RCC_PLLCFGR_PLL1VCOSEL = (1u << 1);  // 0=wide VCO (192-836 MHz)
constexpr uint32_t RCC_PLLCFGR_PLL1RGE_4_8 = (2u << 2); // Input 4-8 MHz
constexpr uint32_t RCC_PLLCFGR_DIVP1EN = (1u << 16);
constexpr uint32_t RCC_PLLCFGR_DIVQ1EN = (1u << 17);
constexpr uint32_t RCC_PLLCFGR_DIVR1EN = (1u << 18);

// PWR_CR3 bit definitions
constexpr uint32_t PWR_CR3_LDOEN = (1u << 1);
constexpr uint32_t PWR_CR3_SCUEN = (1u << 2);

// PWR_D3CR bit definitions
constexpr uint32_t PWR_D3CR_VOS_Pos = 14;
constexpr uint32_t PWR_D3CR_VOS_Msk = (3u << 14);
constexpr uint32_t PWR_D3CR_VOS_SCALE1 = (3u << 14);  // VOS1 for 480 MHz
constexpr uint32_t PWR_D3CR_VOSRDY = (1u << 13);

// FLASH_ACR bit definitions
constexpr uint32_t FLASH_ACR_LATENCY_Msk = 0xFu;
constexpr uint32_t FLASH_ACR_WRHIGHFREQ_Pos = 4;

// PLL3 bit definitions (for USB clock)
constexpr uint32_t RCC_CR_PLL3ON = (1u << 28);
constexpr uint32_t RCC_CR_PLL3RDY = (1u << 29);
constexpr uint32_t RCC_PLLCFGR_PLL3RGE_Pos = 10;
constexpr uint32_t RCC_PLLCFGR_PLL3RGE_4_8 = (2u << 10);  // Input 4-8 MHz
constexpr uint32_t RCC_PLLCFGR_DIVQ3EN = (1u << 23);       // Enable Q output

// USB clock source selection
constexpr uint32_t RCC_D2CCIP2R_USBSEL_Pos = 20;
constexpr uint32_t RCC_D2CCIP2R_USBSEL_Msk = (3u << 20);
constexpr uint32_t RCC_D2CCIP2R_USBSEL_PLL3Q = (2u << 20);  // PLL3Q for USB

// USB peripheral clock enable bits in RCC_AHB1ENR
// Note: STM32H750 has USB1_OTG_HS (bit 25) and USB2_OTG_FS (bit 27)
// Daisy Seed uses USB2_OTG_FS on PA11/PA12
constexpr uint32_t RCC_AHB1ENR_USB2OTGFSEN = (1u << 27);

// SYSCFG registers (not yet in cecrops-generated headers)
constexpr uint32_t SYSCFG_BASE = 0x58000400UL;
constexpr uint32_t SYSCFG_PWRCR_OFFSET = 0x04;
constexpr uint32_t SYSCFG_PWRCR_ODEN = (1u << 0);  // Overdrive enable for VOS0

/**
 * @brief Configure power supply and voltage scaling for 480 MHz (VOS0)
 *
 * STM32H750 at 480 MHz requires VOS0 (overdrive mode). The sequence is:
 * 1. Set VOS1 in PWR_D3CR
 * 2. Wait for VOSRDY
 * 3. Enable SYSCFG clock
 * 4. Set ODEN bit in SYSCFG_PWRCR
 * 5. Wait for ACTVOSRDY in PWR_CSR1
 *
 * VOS1 only supports up to 400 MHz - this was the bug!
 */
inline void configure_power() {
    using namespace sbl::hw::reg;

    // Enable LDO power supply (default for STM32H750)
    periph::pwr->PWR_CR3 |= PWR_CR3_LDOEN;
    periph::pwr->PWR_CR3 &= ~PWR_CR3_SCUEN;  // Disable SMPS

    // Step 1: Set voltage scaling to VOS1 (prerequisite for VOS0)
    uint32_t d3cr = periph::pwr->PWR_D3CR;
    d3cr &= ~PWR_D3CR_VOS_Msk;
    d3cr |= PWR_D3CR_VOS_SCALE1;  // VOS1 = bits 15:14 = 11
    periph::pwr->PWR_D3CR = d3cr;

    // Step 2: Wait for VOS1 ready
    while ((periph::pwr->PWR_D3CR & PWR_D3CR_VOSRDY) == 0) {
        // Wait
    }

    // Step 3: Enable SYSCFG clock (needed to access SYSCFG_PWRCR)
    periph::rcc->APB4ENR |= RCC::APB4ENR_SYSCFGEN;
    volatile uint32_t dummy = periph::rcc->APB4ENR;  // Read-back for clock sync
    (void)dummy;

    // Step 4: Enable overdrive (VOS0) via SYSCFG_PWRCR.ODEN
    volatile uint32_t& SYSCFG_PWRCR = *reinterpret_cast<volatile uint32_t*>(SYSCFG_BASE + SYSCFG_PWRCR_OFFSET);
    SYSCFG_PWRCR |= SYSCFG_PWRCR_ODEN;

    // Step 5: Wait for VOS0 active (ACTVOSRDY in PWR_CSR1)
    while ((periph::pwr->PWR_CSR1 & PWR::PWR_CSR1_ACTVOSRDY) == 0) {
        // Wait for overdrive to stabilize
    }
}

/**
 * @brief Configure flash latency for target frequency
 */
inline void configure_flash(uint32_t sysclk_mhz) {
    using namespace sbl::hw::reg;

    // Flash latency depends on frequency and voltage scale
    // At VOS0 (overdrive): 4 wait states for 450-480 MHz
    uint32_t latency;
    if (sysclk_mhz <= 70) {
        latency = 0;
    } else if (sysclk_mhz <= 140) {
        latency = 1;
    } else if (sysclk_mhz <= 210) {
        latency = 2;
    } else if (sysclk_mhz <= 275) {
        latency = 3;
    } else {
        latency = 4;  // 280-480 MHz
    }

    // Also set WRHIGHFREQ for programming at high frequencies
    uint32_t wrhighfreq = (sysclk_mhz > 185) ? 2 : ((sysclk_mhz > 70) ? 1 : 0);

    uint32_t acr = periph::flash->ACR;
    acr &= ~(FLASH_ACR_LATENCY_Msk | (3u << FLASH_ACR_WRHIGHFREQ_Pos));
    acr |= latency | (wrhighfreq << FLASH_ACR_WRHIGHFREQ_Pos);
    periph::flash->ACR = acr;

    // Wait for latency to be applied
    while ((periph::flash->ACR & FLASH_ACR_LATENCY_Msk) != latency) {
        // Wait
    }
}

/**
 * @brief Enable HSE and wait for ready
 */
inline bool enable_hse() {
    using namespace sbl::hw::reg;

    periph::rcc->CR |= RCC_CR_HSEON;

    // Wait for HSE ready (with timeout)
    // At 64 MHz, 500k iterations ≈ 50ms - plenty for crystal startup
    for (uint32_t i = 0; i < 500'000; ++i) {
        if (periph::rcc->CR & RCC_CR_HSERDY) {
            return true;
        }
    }
    return false;  // HSE failed to start
}

/**
 * @brief Configure PLL3 to provide 48 MHz USB clock
 *
 * PLL3 config: 16 MHz HSE -> 4 MHz input -> 192 MHz VCO -> 48 MHz Q output
 * This must be called AFTER HSE is enabled.
 *
 * @param hse_mhz HSE frequency in MHz (typically 16 for Daisy Seed)
 * @return true if PLL3 locked successfully
 */
inline bool configure_pll3_usb(uint32_t hse_mhz) {
    using namespace sbl::hw::reg;

    // Disable PLL3 before configuring
    periph::rcc->CR &= ~RCC_CR_PLL3ON;
    while (periph::rcc->CR & RCC_CR_PLL3RDY) {}

    // Small delay after disabling PLL to ensure register writes are accepted
    for (volatile int i = 0; i < 100; ++i) { __asm__ volatile("nop"); }

    // Configure PLL3 dividers in PLLCKSELR
    // DIVM3 = HSE/4 = 4 MHz PLL input (same as PLL1)
    uint32_t divm3 = hse_mhz / 4;
    uint32_t pllckselr = periph::rcc->PLLCKSELR;
    pllckselr &= ~(0x3Fu << 20);  // Clear DIVM3 field
    pllckselr |= (divm3 << 20);   // Set DIVM3
    periph::rcc->PLLCKSELR = pllckselr;

    // Configure PLL3 in PLLCFGR
    // PLL3RGE = 4-8 MHz input range, enable Q output
    // IMPORTANT: Read-modify-write to preserve PLL1 settings
    uint32_t pllcfgr = periph::rcc->PLLCFGR;
    pllcfgr &= ~(3u << RCC_PLLCFGR_PLL3RGE_Pos);  // Clear PLL3RGE
    pllcfgr |= RCC_PLLCFGR_PLL3RGE_4_8;           // Set 4-8 MHz range
    pllcfgr |= RCC_PLLCFGR_DIVQ3EN;               // Enable Q output
    periph::rcc->PLLCFGR = pllcfgr;

    // Memory barrier to ensure write completes before continuing
    __asm__ volatile("dsb" ::: "memory");
    __asm__ volatile("isb");

    // Verify DIVQ3EN was actually set (debugging: some STM32H7 have errata)
    if ((periph::rcc->PLLCFGR & RCC_PLLCFGR_DIVQ3EN) == 0) {
        // Try direct write if read-modify-write failed
        periph::rcc->PLLCFGR |= RCC_PLLCFGR_DIVQ3EN;
        __asm__ volatile("dsb" ::: "memory");
    }

    // Configure PLL3 dividers for 48 MHz output
    // VCO = 4 MHz * 48 = 192 MHz, Q = VCO / 4 = 48 MHz
    // DIVN3 = 48 (N multiplier), DIVQ3 = 4 (Q divider)
    uint32_t divn3 = 48;
    uint32_t divq3 = 4;
    periph::rcc->PLL3DIVR = ((divn3 - 1) << 0) | ((divq3 - 1) << 16);

    // Enable PLL3 and wait for lock
    periph::rcc->CR |= RCC_CR_PLL3ON;
    for (uint32_t i = 0; i < 500000; ++i) {
        if (periph::rcc->CR & RCC_CR_PLL3RDY) {
            return true;
        }
    }
    return false;  // PLL3 failed to lock
}

/**
 * @brief Select PLL3Q as USB clock source
 */
inline void select_usb_clock_pll3() {
    using namespace sbl::hw::reg;

    uint32_t d2ccip2r = periph::rcc->D2CCIP2R;
    d2ccip2r &= ~RCC_D2CCIP2R_USBSEL_Msk;
    d2ccip2r |= RCC_D2CCIP2R_USBSEL_PLL3Q;
    periph::rcc->D2CCIP2R = d2ccip2r;
}


/**
 * @brief Enable USB2 OTG FS peripheral clock
 */
inline void enable_usb2_clock() {
    using namespace sbl::hw::reg;
    periph::rcc->AHB1ENR |= RCC_AHB1ENR_USB2OTGFSEN;
    // Longer delay for USB clock to stabilize before core can be accessed
    for (volatile int i = 0; i < 100000; ++i) {
        __asm__ volatile("nop");
    }
}

/**
 * @brief Configure PA11/PA12 as USB DM/DP pins
 *
 * Configures:
 * - PA11 as USB2 DM (alternate function 10)
 * - PA12 as USB2 DP (alternate function 10)
 * - Push-pull, no pull, very high speed
 */
inline void configure_usb_gpio() {
    using namespace sbl::hw::reg;

    // Enable GPIOA clock
    periph::rcc->AHB4ENR |= (1u << 0);  // GPIOAEN
    volatile uint32_t dummy = periph::rcc->AHB4ENR;
    (void)dummy;

    // PA11 and PA12 configuration
    // MODER: Alternate function (10b)
    // OSPEEDR: Very high speed (11b)
    // PUPDR: No pull (00b)
    // AFRH: AF10 for PA11 and PA12

    // Set PA11, PA12 to alternate function mode
    uint32_t moder = periph::gpioa->GPIO_MODER;
    moder &= ~((3u << (11 * 2)) | (3u << (12 * 2)));  // Clear bits
    moder |= (2u << (11 * 2)) | (2u << (12 * 2));     // Set to AF mode
    periph::gpioa->GPIO_MODER = moder;

    // Set to very high speed
    uint32_t ospeedr = periph::gpioa->GPIO_OSPEEDR;
    ospeedr |= (3u << (11 * 2)) | (3u << (12 * 2));
    periph::gpioa->GPIO_OSPEEDR = ospeedr;

    // No pull-up/pull-down
    uint32_t pupdr = periph::gpioa->GPIO_PUPDR;
    pupdr &= ~((3u << (11 * 2)) | (3u << (12 * 2)));
    periph::gpioa->GPIO_PUPDR = pupdr;

    // Set alternate function to AF10 (USB2 OTG FS)
    // PA11 is in AFRH (pins 8-15), bit positions [15:12]
    // PA12 is in AFRH (pins 8-15), bit positions [19:16]
    uint32_t afrh = periph::gpioa->GPIO_AFRH;
    afrh &= ~((0xFu << ((11 - 8) * 4)) | (0xFu << ((12 - 8) * 4)));
    afrh |= (10u << ((11 - 8) * 4)) | (10u << ((12 - 8) * 4));  // AF10
    periph::gpioa->GPIO_AFRH = afrh;
}

} // namespace detail

/**
 * @brief Initialize STM32H750 for 480 MHz operation
 *
 * Configures:
 * - Power supply (LDO, VOS1)
 * - Flash latency
 * - HSE oscillator
 * - PLL1 for 480 MHz
 * - Bus clocks (AHB, APB)
 * - SysTick timer
 *
 * @param config Clock configuration (defaults to 480 MHz from 16 MHz HSE)
 * @return true if initialization successful
 */
inline bool init(const ClockConfig& config = ClockConfig{}) {
    using namespace detail;
    using namespace sbl::hw::reg;

    // Init timer on HSI first (allows delays during clock setup if needed)
    Timer::init(64'000'000);

    // Power and flash config for target frequency
    configure_power();
    configure_flash(config.sysclk_mhz);

    // Try to start HSE
    if (!enable_hse()) {
        // HSE failed - stay on HSI
        return false;
    }

    // --- PLL1 Configuration ---
    // 16 MHz HSE -> 4 MHz PLL input -> 960 MHz VCO -> 480 MHz SYSCLK

    // Disable PLL1 before configuring
    periph::rcc->CR &= ~RCC_CR_PLL1ON;
    while (periph::rcc->CR & RCC_CR_PLL1RDY) {}

    // PLL source = HSE, DIVM1 = 4 (16MHz / 4 = 4MHz PLL input)
    uint32_t divm1 = config.hse_mhz / 4;
    periph::rcc->PLLCKSELR = (2u << 0) | (divm1 << 4);

    // PLL1 config: input range 4-8MHz (PLL1RGE=2), enable P output (DIVP1EN)
    periph::rcc->PLLCFGR = (2u << 2) | (1u << 16);

    // Calculate dividers for target frequency
    // VCO = target * 2 = 960 MHz, DIVN = VCO / PLL_input = 960 / 4 = 240
    uint32_t pll_input_mhz = config.hse_mhz / divm1;
    uint32_t vco_mhz = config.sysclk_mhz * 2;
    uint32_t divn = vco_mhz / pll_input_mhz;
    uint32_t divp = 2;
    periph::rcc->PLL1DIVR = ((divn - 1) << 0) | ((divp - 1) << 9);

    // Enable PLL1 and wait for lock
    periph::rcc->CR |= RCC_CR_PLL1ON;
    for (uint32_t i = 0; i < 500000; ++i) {
        if (periph::rcc->CR & RCC_CR_PLL1RDY) {
            // PLL locked - configure bus dividers and switch

            // D1: CPU=SYSCLK, AHB=SYSCLK/2 (240 MHz)
            periph::rcc->D1CFGR = (0 << 8) | (8 << 0);
            // D2: APB1=APB2=AHB/2 (120 MHz)
            periph::rcc->D2CFGR = (4 << 4) | (4 << 8);
            // D3: APB4=AHB/2 (120 MHz)
            periph::rcc->D3CFGR = (4 << 4);

            // Switch to PLL1
            periph::rcc->CFGR = (periph::rcc->CFGR & ~7u) | 3u;
            while ((periph::rcc->CFGR & (7u << 3)) != (3u << 3)) {}

            // Update SystemCoreClock for CMSIS-compatible code (e.g., TinyUSB)
            SystemCoreClock = config.sysclk_mhz * 1'000'000;

            // Reinit timer for actual frequency
            Timer::init(config.sysclk_mhz * 1'000'000);
            return true;
        }
    }

    // PLL failed to lock - stay on HSI
    return false;
}

/**
 * @brief Quick initialization using HSI (no HSE required)
 *
 * Runs at 64 MHz internal oscillator - useful for debugging
 * or when HSE is not available.
 */
inline void init_hsi() {
    // Default HSI is already running at 64 MHz
    // Just initialize the timer
    Timer::init(64'000'000);
}

/**
 * @brief Enable USB 3.3V internal power supply
 *
 * STM32H7 has an internal 3.3V supply for the USB transceiver.
 * This MUST be enabled before USB can work.
 */
inline void enable_usb_power() {
    using namespace sbl::hw::reg;

    // PWR_CR3.USB33DEN (bit 24) enables internal 3.3V supply for USB
    constexpr uint32_t PWR_CR3_USB33DEN = (1u << 24);
    periph::pwr->PWR_CR3 |= PWR_CR3_USB33DEN;

    // Wait for USB 3.3V regulator ready (PWR_CR3.USB33RDY bit 26)
    // Should stabilize in a few microseconds, use generous timeout
    constexpr uint32_t PWR_CR3_USB33RDY = (1u << 26);
    for (volatile uint32_t i = 0; i < 100000; ++i) {
        if (periph::pwr->PWR_CR3 & PWR_CR3_USB33RDY) {
            return;  // Regulator ready
        }
    }
    // Continue anyway - may work without explicit ready bit
}

/**
 * @brief Configure USB2 OTG FS peripheral for device mode
 *
 * Configures the DWC2 USB controller for device mode without VBUS sensing.
 * This is required for boards like Daisy Seed where VBUS isn't connected
 * to the USB peripheral.
 */
inline void configure_usb2_device_mode() {
    // USB2_OTG_FS base address and register offsets
    constexpr uint32_t USB2_BASE = 0x40080000UL;
    constexpr uint32_t GOTGCTL_OFFSET = 0x000;
    constexpr uint32_t GUSBCFG_OFFSET = 0x00C;
    constexpr uint32_t GCCFG_OFFSET = 0x038;

    volatile uint32_t& GOTGCTL = *reinterpret_cast<volatile uint32_t*>(USB2_BASE + GOTGCTL_OFFSET);
    volatile uint32_t& GUSBCFG = *reinterpret_cast<volatile uint32_t*>(USB2_BASE + GUSBCFG_OFFSET);
    volatile uint32_t& GCCFG = *reinterpret_cast<volatile uint32_t*>(USB2_BASE + GCCFG_OFFSET);

    // Disable VBUS sensing (GCCFG.VBDEN = 0)
    GCCFG &= ~(1u << 21);

    // Enable internal FS PHY (GCCFG.PWRDWN = 1, active high enables PHY)
    GCCFG |= (1u << 16);

    // Force B-session valid (bypass VBUS detection)
    // GOTGCTL.BVALOEN = 1 (enable override)
    // GOTGCTL.BVALOVAL = 1 (force valid)
    GOTGCTL |= (1u << 6) | (1u << 7);

    // Force device mode (GUSBCFG.FDMOD = 1)
    GUSBCFG |= (1u << 30);

    // Wait for mode change to take effect
    for (volatile int i = 0; i < 100000; ++i) {
        __asm__ volatile("nop");
    }
}

/**
 * @brief Enable USB2 OTG FS interrupt in NVIC
 *
 * USB2_OTG_FS is IRQ 101 (external interrupt 101)
 */
inline void enable_usb2_nvic() {
    // NVIC registers
    // ISER[n] enables interrupts 32*n to 32*n+31
    // IRQ 101 is in ISER[3] (96-127), bit 101-96 = 5
    constexpr uint32_t NVIC_ISER_BASE = 0xE000E100UL;
    constexpr uint32_t IRQ_NUM = 101;
    constexpr uint32_t ISER_INDEX = IRQ_NUM / 32;  // 3
    constexpr uint32_t ISER_BIT = IRQ_NUM % 32;    // 5

    volatile uint32_t& NVIC_ISER3 = *reinterpret_cast<volatile uint32_t*>(NVIC_ISER_BASE + ISER_INDEX * 4);
    NVIC_ISER3 = (1u << ISER_BIT);

    // Also set priority (optional but good practice)
    // NVIC_IPR[n] sets priority for interrupt n
    constexpr uint32_t NVIC_IPR_BASE = 0xE000E400UL;
    volatile uint8_t& NVIC_IPR101 = *reinterpret_cast<volatile uint8_t*>(NVIC_IPR_BASE + IRQ_NUM);
    NVIC_IPR101 = 0x40;  // Priority 4 (lower number = higher priority)
}

/**
 * @brief Initialize USB clocks and peripheral (USB2 OTG FS on PA11/PA12)
 *
 * Configures:
 * - USB 3.3V internal power supply
 * - PLL3 for 48 MHz USB clock
 * - USB2 OTG FS peripheral clock
 * - PA11/PA12 as USB DM/DP (AF10)
 * - NVIC interrupt enable
 *
 * NOTE: USB core configuration (VBUS bypass, device mode) is handled by TinyUSB.
 * We only set up clocks, GPIO, and enable the peripheral.
 *
 * Must be called AFTER init() to ensure HSE is running.
 * This is for Daisy Seed and similar boards using USB2 on PA11/PA12.
 *
 * @param hse_mhz HSE frequency (default 16 MHz for Daisy Seed)
 * @return true if USB clock setup successful
 */
inline bool init_usb(uint32_t hse_mhz = 16) {
    using namespace detail;

    // Enable USB 3.3V internal power supply (MUST be first!)
    enable_usb_power();

    // Configure PLL3 for 48 MHz USB clock
    if (!configure_pll3_usb(hse_mhz)) {
        return false;
    }

    // Select PLL3Q as USB clock source
    select_usb_clock_pll3();

    // Configure PA11/PA12 as USB DM/DP
    configure_usb_gpio();

    // Enable USB2 peripheral clock (PA11/PA12 use USB2_OTG_FS)
    enable_usb2_clock();

    // NOTE: Don't configure USB core here - TinyUSB's dcd_init() handles:
    // - GCCFG (PHY power, VBUS detection disable)
    // - GOTGCTL (B-session valid override for VBUS bypass)
    // - GUSBCFG (device mode forcing)
    // Doing it here can conflict with TinyUSB's initialization sequence.

    // Enable USB2 interrupt in NVIC
    enable_usb2_nvic();

    return true;
}

} // namespace sbl::driver

#endif // SBL_HW_DRIVER_INIT_HPP_
