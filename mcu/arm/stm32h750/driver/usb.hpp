#pragma once
/**
 * @file usb.hpp
 * @brief USB driver for STM32H750 (Daisy Seed)
 *
 * Implements sbl::usb namespace functions using TinyUSB.
 * Uses USB2_OTG_FS on PA11/PA12 (common for Daisy Seed and similar boards).
 *
 * TinyUSB is included as source files via CMake (not via Pico SDK).
 * The sbl_usb_shim.h provides CMSIS-style definitions that TinyUSB expects.
 */

#include "tusb.h"
#include "init.hpp"  // For init_usb()
#include "timer.hpp" // For millis()

// TinyUSB requires a millisecond timer callback
extern "C" inline uint32_t tusb_time_millis_api(void) {
    return sbl::driver::Timer::millis();
}

namespace sbl::usb {

/**
 * @brief Initialize USB subsystem
 *
 * For STM32H750, this:
 * 1. Configures PLL3 for 48 MHz USB clock
 * 2. Enables USB2 peripheral clock
 * 3. Configures PA11/PA12 for USB
 * 4. Initializes TinyUSB device stack
 *
 * Call after sbl::driver::init() to ensure HSE is running.
 */
inline void init() {
    // Initialize USB clocks and GPIO
    // This configures PLL3 for 48 MHz and enables USB2_OTG_FS
    sbl::driver::init_usb();

    // Initialize TinyUSB device stack
    tusb_init();
}

/**
 * @brief Process USB events
 *
 * Must be called periodically to handle USB enumeration and data transfer.
 * Can be called from main loop or a timer interrupt.
 */
inline void task() {
    tud_task();
}

/**
 * @brief Check if USB device is ready (enumerated and configured)
 */
inline bool ready() {
    return tud_ready();
}

} // namespace sbl::usb
