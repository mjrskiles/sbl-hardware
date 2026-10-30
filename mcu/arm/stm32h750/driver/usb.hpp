#pragma once
/**
 * @file usb.hpp
 * @brief USB driver for STM32H750
 *
 * Implements sbl::usb namespace functions using TinyUSB.
 * Supports USB2_OTG_FS on PA11/PA12 (Daisy Seed) or
 * USB1_OTG_HS on PB14/PB15 (Patch SM) via SBL_USB_OTG_HS define.
 *
 * TinyUSB is included as source files via CMake.
 * The sbl_usb_shim.h provides CMSIS-style definitions that TinyUSB expects.
 */

#include "tusb.h"

// The CMSIS compat shim (stm32h7xx.h → sbl_usb_shim.h) defines C macros
// that conflict with SBL's C++ register namespaces. Undefine them now that
// TinyUSB headers are done processing.
#undef RCC
#undef NVIC
#undef SCB

#include "init.hpp"             // For init_usb()
#include "priorities.hpp"       // For the soft-pended vector's level
#include <sbl/hw/reg/cortex_m.hpp>
#include <sbl/hw/reg/irq.hpp>
#include <sbl/hw/reg/usb_otg.hpp>  // For periph::usb2_global, GCCFG::, GOTGCTL::

// TinyUSB's millisecond hook is sound-byte-libs usb/tusb_time.cpp, over the system timer.

namespace sbl::usb {

/**
 * The vector that services tud_task(), software-pended at Level::SoftPend.
 * TAMP_STAMP is an unused peripheral line on this board. TinyUSB's class
 * drivers are not locked under OPT_OS_NONE, so this is the one context that
 * calls tud_task() and the tud_midi and tud_cdc functions.
 */
inline constexpr sbl::hw::reg::IRQn SOFT_PEND_IRQ = sbl::hw::reg::IRQn::TAMP_STAMP;

/// Pend tud_task(): the OTG interrupt calls this after tud_int_handler(), and task() does.
inline void pend_task() {
    using namespace sbl::hw::reg;
    const uint32_t n = static_cast<uint32_t>(SOFT_PEND_IRQ);
    periph::nvic->ISPR[n >> 5] = (1u << (n & 0x1Fu));
}

namespace detail {

// Select register instances based on USB peripheral
#ifdef SBL_USB_OTG_HS
inline auto* usb_global() { return sbl::hw::reg::periph::usb1_global; }
inline auto* usb_device() { return sbl::hw::reg::periph::usb1_device; }
#else
inline auto* usb_global() { return sbl::hw::reg::periph::usb2_global; }
inline auto* usb_device() { return sbl::hw::reg::periph::usb2_device; }
#endif

/**
 * @brief Force USB soft disconnect to trigger host re-enumeration
 *
 * After a debugger reset, the USB peripheral resets but the physical
 * D+/D- lines stay connected. Setting SDIS pulls D+ low, forcing the
 * host to detect a disconnect. Must be called BEFORE tusb_init().
 */
inline void force_usb_reenumerate() {
    constexpr uint32_t DCTL_SDIS = (1u << 1);

    auto* dev = usb_device();

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
 * 6. Applies VBUS bypass (no VBUS sensing on Daisy/Patch boards)
 * 7. Enables the software-pended tud_task() vector
 *
 * After init(), USB events are serviced automatically via TIM6 interrupt.
 * Applications do NOT need to call task() — it is a no-op when timer-driven
 * servicing is active. This prevents re-entrancy issues with the TinyUSB
 * event queue (SPSC FIFO: USB OTG ISR produces, tud_task consumes).
 *
 * Call after sbl::driver::init() to ensure HSE is running.
 *
 * @note Not ISR-safe — blocking. Boot-time only.
 */
inline void init() {
    // Initialize USB clocks and GPIO
    // This configures PLL3 for 48 MHz and enables the USB peripheral clock
    sbl::driver::init_usb();

    // Post-init PHY fixup using volatile pointer writes.
    //
    // TinyUSB's phy_fs_init() correctly sets PWRDWN, but GCCFG is outside
    // the DWC2 core reset domain and can be cleared during the reset
    // sequence. We re-apply PWRDWN, VBUS bypass, and TRDT after tusb_init()
    // as a safety net. Volatile pointer writes prevent -O2 tail-call
    // optimization from eliminating this code (see RPT-013).
    {
        auto* usb = detail::usb_global();
        auto* dev = detail::usb_device();
        using namespace sbl::hw::reg;

        // Initialize TinyUSB device stack
        tusb_init();

        // Volatile pointer write — cannot be optimized away or reordered
        // past the function return. This is the critical PWRDWN fixup.
        volatile uint32_t* gccfg = &usb->GCCFG;
        *gccfg = (*gccfg | GCCFG::PWRDWN) & ~GCCFG::VBDEN;

        // PHYSEL should already be 1 (restored by core reset), confirm it
        volatile uint32_t* gusbcfg = &usb->GUSBCFG;
        uint32_t cfg = *gusbcfg;
        cfg |= GUSBCFG::PHYSEL;
        cfg = (cfg & ~(0xFu << 10)) | (6u << 10);  // TRDT=6 for FS
        *gusbcfg = cfg;

        // Force B-session valid (bypass VBUS detection)
        volatile uint32_t* gotgctl = &usb->GOTGCTL;
        *gotgctl |= GOTGCTL::BVALOEN | GOTGCTL::BVALOVAL;

        // Soft disconnect/reconnect for clean enumeration
        constexpr uint32_t DCTL_SDIS = (1u << 1);
        volatile uint32_t* dctl = &dev->DCTL;
        *dctl |= DCTL_SDIS;
        for (volatile uint32_t i = 0; i < 100000; ++i) { __asm volatile("nop"); }
        *dctl &= ~DCTL_SDIS;
    }

    // tud_task() runs in the software-pended vector at Level::SoftPend:
    // the OTG interrupt pends it after each event, and task() pends it
    // for housekeeping. Nothing on a timer.
    sbl::driver::prio::enable_irq(SOFT_PEND_IRQ, sbl::driver::prio::kSoftPend);
    pend_task();
}

/**
 * @brief Request USB servicing
 *
 * Pends the tud_task() vector. Call once per control-tick run (or from the
 * main loop) for housekeeping; the OTG interrupt pends it on every event,
 * so this is the slow path.
 */
inline void task() { pend_task(); }

/**
 * @brief Check if USB device is ready (enumerated and configured)
 *
 * @note ISR-safe — TinyUSB state query.
 */
inline bool ready() {
    return tud_ready();
}

} // namespace sbl::usb

// The software-pended vector: tud_task() at Level::SoftPend. __attribute__((used))
// forces emission; the vector table references it by address.
extern "C" {
__attribute__((used)) inline void TAMP_STAMP_IRQHandler() { tud_task(); }
}
