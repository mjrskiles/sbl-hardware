/**
 * @file timeout.hpp
 * @brief Hardware timeout utilities for STM32H750
 *
 * Iteration-based timeout helper for driver initialization.
 * Uses counted loops rather than Timer because the timer may not
 * be initialized when init() runs.
 *
 * At 480 MHz, 500k iterations is approximately 3 ms — generous for
 * any peripheral ready bit.
 */
#ifndef SBL_HW_DRIVER_TIMEOUT_HPP_
#define SBL_HW_DRIVER_TIMEOUT_HPP_

#include <cstdint>

namespace sbl::driver {

/// Default timeout iterations (~3 ms at 480 MHz)
constexpr uint32_t HW_TIMEOUT = 500'000;

namespace detail {

/**
 * @brief Wait for a register bit pattern with timeout
 *
 * Polls a volatile register until (reg & mask) == expected, or timeout.
 *
 * @param reg      Pointer to volatile register
 * @param mask     Bit mask to check
 * @param expected Expected value after masking
 * @param timeout  Maximum iterations (default: HW_TIMEOUT)
 * @return true if condition met, false if timed out
 */
inline bool wait_for(volatile uint32_t* reg, uint32_t mask, uint32_t expected,
                     uint32_t timeout = HW_TIMEOUT) {
    for (uint32_t i = 0; i < timeout; ++i) {
        if ((*reg & mask) == expected) {
            return true;
        }
    }
    return false;
}

} // namespace detail
} // namespace sbl::driver

#endif // SBL_HW_DRIVER_TIMEOUT_HPP_
