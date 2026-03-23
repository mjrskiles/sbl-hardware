/**
 * @file timer.hpp
 * @brief RP2350 timer driver wrapping pico-sdk
 */
#ifndef SBL_HW_DRIVER_TIMER_HPP_
#define SBL_HW_DRIVER_TIMER_HPP_
#include "pico/stdlib.h"
#include <cstdint>
namespace sbl::driver {
/**
 * @brief Timer driver for RP2350
 *
 * Static interface wrapping pico-sdk timing functions.
 */
class Timer {
public:
    /**
     * @brief Get milliseconds since boot
     * @note ISR-safe — reads volatile hardware timer register
     */
    static uint32_t millis() {
        return static_cast<uint32_t>(time_us_64() / 1000);
    }
    /**
     * @brief Get microseconds since boot
     * @note ISR-safe — reads volatile hardware timer register
     */
    static uint32_t micros() {
        return static_cast<uint32_t>(time_us_64());
    }
    /**
     * @brief Blocking delay in milliseconds
     * @note Not ISR-safe — blocking busy-wait.
     */
    static void busy_wait_ms(uint32_t ms) {
        sleep_ms(ms);
    }
};
} // namespace sbl::driver
// Compile-time interface validation
#include <sbl/hw/validation/timer_requirements.hpp>
static_assert(sbl::validation::timer_driver_valid<sbl::driver::Timer>,
              "RP2350 Timer driver incomplete");

#endif // SBL_HW_DRIVER_TIMER_HPP_
