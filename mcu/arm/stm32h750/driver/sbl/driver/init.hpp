/**
 * @file init.hpp
 * @brief STM32H750 bare-metal system initialization
 *
 * Configures the STM32H7 clock tree for 480 MHz operation using HSE.
 * No HAL dependencies - uses SVD-generated register definitions.
 */
#pragma once

#include <cstdint>
#include <sbl/hw/reg/rcc.hpp>
#include <sbl/hw/reg/pwr.hpp>
#include <sbl/hw/reg/flash.hpp>
#include <sbl/hw/reg/cortex_m.hpp>
#include "timer.hpp"

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

/**
 * @brief Configure power supply and voltage scaling
 */
inline void configure_power() {
    using namespace sbl::hw::reg;

    // Enable LDO power supply (default for STM32H750)
    periph::pwr->PWR_CR3 |= PWR_CR3_LDOEN;
    periph::pwr->PWR_CR3 &= ~PWR_CR3_SCUEN;  // Disable SMPS

    // Set voltage scaling to VOS1 (needed for 480 MHz)
    uint32_t d3cr = periph::pwr->PWR_D3CR;
    d3cr &= ~PWR_D3CR_VOS_Msk;
    d3cr |= PWR_D3CR_VOS_SCALE1;
    periph::pwr->PWR_D3CR = d3cr;

    // Wait for voltage scaling ready
    while ((periph::pwr->PWR_D3CR & PWR_D3CR_VOSRDY) == 0) {
        // Wait
    }
}

/**
 * @brief Configure flash latency for target frequency
 */
inline void configure_flash(uint32_t sysclk_mhz) {
    using namespace sbl::hw::reg;

    // Flash latency depends on frequency and voltage scale
    // At VOS1 (1.15-1.26V): 4 wait states for 400-480 MHz
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
    for (uint32_t i = 0; i < 100000; ++i) {
        if (periph::rcc->CR & RCC_CR_HSERDY) {
            return true;
        }
    }
    return false;  // HSE failed to start
}

/**
 * @brief Configure PLL1 for target frequency
 *
 * For Daisy Seed (16 MHz HSE) to get 480 MHz SYSCLK:
 * - DIVM1 = 4 → PLL input = 16/4 = 4 MHz
 * - DIVN1 = 240 → VCO = 4 * 240 = 960 MHz
 * - DIVP1 = 2 → PLL1_P = 960/2 = 480 MHz
 */
inline void configure_pll1(uint32_t hse_mhz, uint32_t target_mhz) {
    using namespace sbl::hw::reg;

    // Disable PLL1 before configuring
    periph::rcc->CR &= ~RCC_CR_PLL1ON;
    while (periph::rcc->CR & RCC_CR_PLL1RDY) {
        // Wait for PLL to stop
    }

    // Select HSE as PLL source
    // DIVM1 = 4 (divider for PLL1 input)
    uint32_t divm1 = hse_mhz / 4;  // Target ~4 MHz PLL input
    if (divm1 < 1) divm1 = 1;
    if (divm1 > 63) divm1 = 63;

    uint32_t pll_input_mhz = hse_mhz / divm1;

    periph::rcc->PLLCKSELR = RCC_PLLCKSELR_PLLSRC_HSE | (divm1 << 4);

    // Configure PLL1 VCO and outputs
    // VCO range: Wide (192-836 MHz) - but we need 960 MHz, so careful
    // Actually H750 can do 150-420 or 192-960 MHz VCO ranges
    // Input range: 4-8 MHz when DIVM gives us 4 MHz

    // For 480 MHz: VCO = 960 MHz, DIVN = 240 (960/4), DIVP = 2
    uint32_t vco_mhz = target_mhz * 2;  // 960 MHz
    uint32_t divn = vco_mhz / pll_input_mhz;  // 240

    // PLL1CFGR: Input range 4-8 MHz, wide VCO, enable P output
    periph::rcc->PLLCFGR = RCC_PLLCFGR_PLL1RGE_4_8 | RCC_PLLCFGR_DIVP1EN;

    // PLL1DIVR: DIVN (bits 0-8), DIVP (bits 9-15), DIVQ (bits 16-22), DIVR (bits 24-30)
    // Values are actual divider - 1
    uint32_t divp = 2;  // DIVP = 2 → 960/2 = 480 MHz
    periph::rcc->PLL1DIVR = ((divn - 1) << 0) | ((divp - 1) << 9);

    // Enable PLL1
    periph::rcc->CR |= RCC_CR_PLL1ON;

    // Wait for PLL1 ready
    while ((periph::rcc->CR & RCC_CR_PLL1RDY) == 0) {
        // Wait
    }
}

/**
 * @brief Switch system clock to PLL1
 */
inline void switch_to_pll1() {
    using namespace sbl::hw::reg;

    // Configure domain clocks before switching
    // D1CFGR: D1CPRE (CPU prescaler), HPRE (AHB prescaler)
    // For 480 MHz CPU: D1CPRE = 1, HPRE = 2 → HCLK = 240 MHz
    periph::rcc->D1CFGR = (0 << 8) |  // D1CPRE = 1 (SYSCLK not divided)
                          (8 << 0);   // HPRE = 2 (AHB = SYSCLK/2 = 240 MHz)

    // D2CFGR: D2PPRE1, D2PPRE2 (APB1, APB2 prescalers)
    periph::rcc->D2CFGR = (4 << 4) |  // D2PPRE1 = 2 → APB1 = 120 MHz
                          (4 << 8);   // D2PPRE2 = 2 → APB2 = 120 MHz

    // D3CFGR: D3PPRE (APB4 prescaler)
    periph::rcc->D3CFGR = (4 << 4);   // D3PPRE = 2 → APB4 = 120 MHz

    // Switch SYSCLK to PLL1
    uint32_t cfgr = periph::rcc->CFGR;
    cfgr &= ~(7u << 0);  // Clear SW bits
    cfgr |= RCC_CFGR_SW_PLL1;
    periph::rcc->CFGR = cfgr;

    // Wait for switch to complete
    while ((periph::rcc->CFGR & (7u << 3)) != RCC_CFGR_SWS_PLL1) {
        // Wait
    }
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

    // Configure power supply and voltage scaling first
    configure_power();

    // Set flash latency for target frequency
    configure_flash(config.sysclk_mhz);

    // Enable HSE
    if (!enable_hse()) {
        return false;  // HSE failed
    }

    // Configure and enable PLL1
    configure_pll1(config.hse_mhz, config.sysclk_mhz);

    // Switch to PLL1
    switch_to_pll1();

    // Initialize SysTick with actual CPU frequency
    Timer::init(config.sysclk_mhz * 1'000'000);

    return true;
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

} // namespace sbl::driver
