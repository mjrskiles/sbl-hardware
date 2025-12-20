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

namespace detail {

/**
 * @brief Apply VBUS bypass workaround for boards without VBUS sensing
 *
 * Daisy Seed doesn't connect VBUS to the USB peripheral, so we need to
 * tell the USB core that VBUS is always valid. This must be called AFTER
 * tusb_init() because TinyUSB's dcd_init() may reset these registers.
 */
inline void apply_vbus_bypass() {
    constexpr uint32_t USB2_BASE = 0x40080000UL;
    constexpr uint32_t GOTGCTL_OFFSET = 0x000;
    constexpr uint32_t GCCFG_OFFSET = 0x038;

    volatile uint32_t& GOTGCTL = *reinterpret_cast<volatile uint32_t*>(USB2_BASE + GOTGCTL_OFFSET);
    volatile uint32_t& GCCFG = *reinterpret_cast<volatile uint32_t*>(USB2_BASE + GCCFG_OFFSET);

    // Disable VBUS sensing (GCCFG.VBDEN = 0)
    GCCFG &= ~(1u << 21);

    // Force B-session valid (bypass VBUS detection)
    // GOTGCTL.BVALOEN = 1 (enable override)
    // GOTGCTL.BVALOVAL = 1 (force valid)
    GOTGCTL |= (1u << 6) | (1u << 7);
}

} // namespace detail

/**
 * @brief Initialize USB subsystem
 *
 * For STM32H750, this:
 * 1. Configures USB 3.3V power supply
 * 2. Configures PLL3 for 48 MHz USB clock
 * 3. Enables USB2 peripheral clock
 * 4. Configures PA11/PA12 for USB
 * 5. Initializes TinyUSB device stack
 * 6. Applies VBUS bypass for Daisy Seed (no VBUS sensing)
 *
 * Call after sbl::driver::init() to ensure HSE is running.
 */
inline void init() {
    // Initialize USB clocks and GPIO
    // This configures PLL3 for 48 MHz and enables USB2_OTG_FS
    sbl::driver::init_usb();

    // Initialize TinyUSB device stack
    tusb_init();

    // Apply VBUS bypass AFTER TinyUSB init
    // TinyUSB's dcd_init() may reset USB registers, so we apply this last
    detail::apply_vbus_bypass();
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
