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

// The CMSIS compat shim (stm32h7xx.h → sbl_usb_shim.h) defines C macros
// that conflict with SBL's C++ register namespaces. Undefine them now that
// TinyUSB headers are done processing.
#undef RCC
#undef NVIC
#undef SCB

#include "init.hpp"         // For init_usb()
#include "timer.hpp"        // For millis()
#include <sbl/hw/reg/usb_otg.hpp>  // For periph::usb2_global, GCCFG::, GOTGCTL::

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
    using namespace sbl::hw::reg;

    auto* usb = periph::usb2_global;

    // Disable VBUS sensing
    usb->GCCFG &= ~GCCFG::VBDEN;

    // Force B-session valid (bypass VBUS detection)
    usb->GOTGCTL |= GOTGCTL::BVALOEN | GOTGCTL::BVALOVAL;
}

/**
 * @brief Force USB soft disconnect to trigger host re-enumeration
 *
 * After a debugger reset, the USB peripheral resets but the physical
 * D+/D- lines stay connected. The host still thinks the old device
 * exists. Setting SDIS (soft disconnect, DCTL bit 1) pulls D+ low,
 * forcing the host to detect a disconnect. After a brief delay,
 * clearing SDIS allows the host to re-enumerate the device.
 *
 * Must be called BEFORE tusb_init().
 */
inline void force_usb_reenumerate() {
    constexpr uint32_t DCTL_SDIS = (1u << 1);

    auto* dev = sbl::hw::reg::periph::usb2_device;

    // Assert soft disconnect — host sees device disappear
    dev->DCTL |= DCTL_SDIS;

    // Wait for host to process disconnect (~10ms is sufficient)
    for (volatile uint32_t i = 0; i < 500000; ++i) { __asm volatile("nop"); }

    // Release soft disconnect — host will re-enumerate
    dev->DCTL &= ~DCTL_SDIS;
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
 *
 * @note Not ISR-safe — blocking. Boot-time only.
 */
inline void init() {
    // Initialize USB clocks and GPIO
    // This configures PLL3 for 48 MHz and enables USB2_OTG_FS
    sbl::driver::init_usb();

    // Force USB disconnect/reconnect so the host re-enumerates after
    // debugger resets (which reset the peripheral but not the physical
    // USB connection)
    detail::force_usb_reenumerate();

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
 *
 * @note Not ISR-safe — main loop only (calls TinyUSB stack).
 */
inline void task() {
    tud_task();
}

/**
 * @brief Check if USB device is ready (enumerated and configured)
 *
 * @note ISR-safe — TinyUSB state query.
 */
inline bool ready() {
    return tud_ready();
}

} // namespace sbl::usb
