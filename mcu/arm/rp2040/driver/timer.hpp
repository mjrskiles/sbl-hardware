/**
 * @file timer.hpp
 * @brief RP2040 timer driver wrapping pico-sdk
 */

#ifndef SBL_HW_DRIVER_TIMER_HPP_
#define SBL_HW_DRIVER_TIMER_HPP_

#include "pico/stdlib.h"
#include <cstdint>

namespace sbl::driver {

/**
 * @brief Timer driver for RP2040
 *
 * Static interface wrapping pico-sdk timing functions.
 */
class Timer {
public:
    /**
     * @brief Get milliseconds since boot
     */
    static uint32_t millis() {
        return static_cast<uint32_t>(time_us_64() / 1000);
    }

    /**
     * @brief Get microseconds since boot
     */
    static uint32_t micros() {
        return static_cast<uint32_t>(time_us_64());
    }

    /**
     * @brief Blocking delay in milliseconds
     */
    static void delay_ms(uint32_t ms) {
        sleep_ms(ms);
    }

    /**
     * @brief Blocking delay in microseconds
     */
    static void delay_us(uint32_t us) {
        sleep_us(us);
    }
};

} // namespace sbl::driver

// Compile-time interface validation
#include <sbl/validation/timer_requirements.hpp>
static_assert(sbl::validation::timer_driver_valid<sbl::driver::Timer>,
              "RP2040 Timer driver incomplete");

#endif // SBL_HW_DRIVER_TIMER_HPP_
