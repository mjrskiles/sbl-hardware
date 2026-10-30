/**
 * @file clocks.hpp
 * @brief The clocks init() achieved, for drivers that derive rates from them
 *
 * init() (init.hpp) writes these once the clock tree is up; drivers read
 * them when they start, so a boot that stays on HSI gets correct
 * prescalers too (sbl-hardware#41).
 */
#ifndef SBL_HW_DRIVER_CLOCKS_HPP_
#define SBL_HW_DRIVER_CLOCKS_HPP_

#include <cstdint>

// SystemCoreClock - required by TinyUSB and other CMSIS-compatible code
// Updated by init() when clock configuration changes
extern "C" {
inline uint32_t SystemCoreClock = 64'000'000;  // Default to HSI
}

namespace sbl::driver {

/**
 * @brief The timer kernel clock init() achieved, in Hz
 *
 * 64 MHz on HSI; after the PLL path, SYSCLK/2: with D2PPRE1 = /2 and
 * TIMPRE = 0 the timers run at HCLK (RM0433 §8.7.7).
 */
inline uint32_t timer_kernel_clock_hz = 64'000'000;

} // namespace sbl::driver

#endif // SBL_HW_DRIVER_CLOCKS_HPP_
