#pragma once
/**
 * @file usb.hpp
 * @brief USB driver for RP2040 (Pico)
 *
 * Implements sbl::usb namespace functions using TinyUSB.
 * TinyUSB is included via the Pico SDK.
 */

#include "tusb.h"

namespace sbl::usb {

/**
 * @brief Initialize USB subsystem
 *
 * For RP2040, this initializes TinyUSB. The Pico SDK handles
 * the low-level USB peripheral setup.
 * @note Not ISR-safe — call once at boot before USB interrupts fire
 */
inline void init() {
    tusb_init();
}

/**
 * @brief Process USB events
 *
 * Must be called periodically to handle USB enumeration and data transfer.
 * @note Not ISR-safe — manages shared USB state, call from main loop only
 */
inline void task() {
    tud_task();
}

/**
 * @brief Check if USB device is ready (enumerated and configured)
 * @note ISR-safe — reads a single TinyUSB state flag
 */
inline bool ready() {
    return tud_ready();
}

} // namespace sbl::usb
