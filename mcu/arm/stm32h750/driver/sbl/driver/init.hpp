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
    // At 64 MHz, 500k iterations ≈ 50ms - plenty for crystal startup
    for (uint32_t i = 0; i < 500'000; ++i) {
        if (periph::rcc->CR & RCC_CR_HSERDY) {
            return true;
        }
    }
    return false;  // HSE failed to start
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

} // namespace sbl::driver
