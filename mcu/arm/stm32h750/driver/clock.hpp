/**
 * @file clock.hpp
 * @brief STM32H750 kernel clock mux helpers
 *
 * Centralizes kernel clock source selection for peripherals that have
 * dedicated clock muxes in the RCC domain configuration registers.
 *
 * STM32H7 kernel clock pattern: every peripheral with a mux in
 * D1/D2/D3 CCIPR registers needs its kernel clock explicitly selected.
 * Don't assume defaults work - they often point to PLLs that aren't configured.
 *
 * Affected so far: USART (D2CCIP2R), ADC (D3CCIPR), I2C (D2CCIP2R, D3CCIPR).
 * Future: SPI, LPTIM, etc.
 */
#ifndef SBL_HW_DRIVER_CLOCK_HPP_
#define SBL_HW_DRIVER_CLOCK_HPP_

#include <cstdint>
#include <sbl/hw/reg/rcc.hpp>

namespace sbl::driver {

/**
 * @brief Kernel clock source identifiers
 *
 * Not all sources are valid for all peripherals. The per-peripheral
 * helpers enforce valid combinations.
 */
enum class KernelClockSrc : uint8_t {
    HSI,     ///< 64 MHz internal oscillator
    CSI,     ///< 4 MHz low-power oscillator
    PER,     ///< per_ck (HSI by default, configurable)
    PLL2P,   ///< PLL2 P output
    PLL2Q,   ///< PLL2 Q output
    PLL3Q,   ///< PLL3 Q output
    PLL3R,   ///< PLL3 R output
};

namespace detail {

/**
 * @brief Set USART1/6 kernel clock source (D2CCIP2R.USART16SEL)
 *
 * Valid sources: rcc_pclk2(0), pll2q(1), pll3q(2), hsi(3), csi(4), lse(5)
 */
inline void set_usart16_kernel_clock(KernelClockSrc src) {
    using namespace sbl::hw::reg;
    uint32_t sel;
    switch (src) {
        case KernelClockSrc::HSI:   sel = 3; break;
        case KernelClockSrc::CSI:   sel = 4; break;
        case KernelClockSrc::PLL2Q: sel = 1; break;
        case KernelClockSrc::PLL3Q: sel = 2; break;
        default:                    sel = 3; break;  // Default to HSI
    }
    uint32_t d2ccip2r = periph::rcc->D2CCIP2R;
    d2ccip2r &= ~RCC::D2CCIP2R_USART16SEL_Msk;
    d2ccip2r |= (sel << RCC::D2CCIP2R_USART16SEL_Pos);
    periph::rcc->D2CCIP2R = d2ccip2r;
}

/**
 * @brief Set USART2/3/4/5/7/8 kernel clock source (D2CCIP2R.USART234578SEL)
 *
 * Valid sources: rcc_pclk1(0), pll2q(1), pll3q(2), hsi(3), csi(4), lse(5)
 */
inline void set_usart234578_kernel_clock(KernelClockSrc src) {
    using namespace sbl::hw::reg;
    uint32_t sel;
    switch (src) {
        case KernelClockSrc::HSI:   sel = 3; break;
        case KernelClockSrc::CSI:   sel = 4; break;
        case KernelClockSrc::PLL2Q: sel = 1; break;
        case KernelClockSrc::PLL3Q: sel = 2; break;
        default:                    sel = 3; break;  // Default to HSI
    }
    uint32_t d2ccip2r = periph::rcc->D2CCIP2R;
    d2ccip2r &= ~RCC::D2CCIP2R_USART234578SEL_Msk;
    d2ccip2r |= (sel << RCC::D2CCIP2R_USART234578SEL_Pos);
    periph::rcc->D2CCIP2R = d2ccip2r;
}

/**
 * @brief Set ADC kernel clock source (D3CCIPR.ADCSEL)
 *
 * Valid sources: pll2_p(0), pll3_r(1), per_ck(2)
 *
 * Note: Default ADCSEL=00 selects pll2_p which may not be running.
 * Use PER (per_ck/HSI) for safe initialization.
 */
inline void set_adc_kernel_clock(KernelClockSrc src) {
    using namespace sbl::hw::reg;
    uint32_t sel;
    switch (src) {
        case KernelClockSrc::PER:   sel = 2; break;  // per_ck (HSI 64 MHz)
        case KernelClockSrc::PLL2P: sel = 0; break;
        case KernelClockSrc::PLL3R: sel = 1; break;
        default:                    sel = 2; break;  // Default to per_ck
    }
    periph::rcc->D3CCIPR = (periph::rcc->D3CCIPR & ~(0x3u << 16)) | (sel << 16);
}

/**
 * @brief Set I2C1/2/3 kernel clock source (D2CCIP2R.I2C123SEL)
 *
 * Valid sources: rcc_pclk1(0), pll3r(1), hsi(2), csi(3)
 *
 * Note: Default I2C123SEL=00 selects rcc_pclk1 which depends on PLL config.
 * Use HSI (64 MHz) for safe, PLL-independent initialization.
 */
inline void set_i2c123_kernel_clock(KernelClockSrc src) {
    using namespace sbl::hw::reg;
    uint32_t sel;
    switch (src) {
        case KernelClockSrc::HSI:   sel = 2; break;
        case KernelClockSrc::CSI:   sel = 3; break;
        case KernelClockSrc::PLL3R: sel = 1; break;
        default:                    sel = 2; break;  // Default to HSI
    }
    uint32_t d2ccip2r = periph::rcc->D2CCIP2R;
    d2ccip2r &= ~RCC::D2CCIP2R_I2C123SEL_Msk;
    d2ccip2r |= (sel << RCC::D2CCIP2R_I2C123SEL_Pos);
    periph::rcc->D2CCIP2R = d2ccip2r;
}

/**
 * @brief Set I2C4 kernel clock source (D3CCIPR.I2C4SEL)
 *
 * Valid sources: rcc_pclk4(0), pll3r(1), hsi(2), csi(3)
 *
 * Note: I2C4 is in D3 domain. Default I2C4SEL=00 selects rcc_pclk4.
 * Use HSI (64 MHz) for safe initialization.
 */
inline void set_i2c4_kernel_clock(KernelClockSrc src) {
    using namespace sbl::hw::reg;
    uint32_t sel;
    switch (src) {
        case KernelClockSrc::HSI:   sel = 2; break;
        case KernelClockSrc::CSI:   sel = 3; break;
        case KernelClockSrc::PLL3R: sel = 1; break;
        default:                    sel = 2; break;  // Default to HSI
    }
    uint32_t d3ccipr = periph::rcc->D3CCIPR;
    d3ccipr &= ~RCC::D3CCIPR_I2C4SEL_Msk;
    d3ccipr |= (sel << RCC::D3CCIPR_I2C4SEL_Pos);
    periph::rcc->D3CCIPR = d3ccipr;
}

} // namespace detail
} // namespace sbl::driver

#endif // SBL_HW_DRIVER_CLOCK_HPP_
