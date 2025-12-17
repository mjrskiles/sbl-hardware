#pragma once
/**
 * @file usb.hpp
 * @brief USB driver for RP2350 (Pico 2)
 *
 * Implements sbl::usb namespace functions using TinyUSB.
 * TinyUSB is included via the Pico SDK.
 */

#include "tusb.h"

namespace sbl::usb {

/**
 * @brief Initialize USB subsystem
 *
 * For RP2350, this initializes TinyUSB. The Pico SDK handles
 * the low-level USB peripheral setup.
 */
inline void init() {
    // TinyUSB initialization
    tusb_init();
}

/**
 * @brief Process USB events
 *
 * Must be called periodically to handle USB enumeration and data transfer.
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
