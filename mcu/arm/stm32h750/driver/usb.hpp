#pragma once
/**
 * @file usb.hpp
 * @brief USB driver for STM32H750
 *
 * Implements sbl::usb namespace functions using TinyUSB.
 * Supports USB2_OTG_FS on PA11/PA12 (Daisy Seed) or
 * USB1_OTG_HS on PB14/PB15 (Patch SM) via SBL_USB_OTG_HS define.
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

// Select register instances based on USB peripheral
#ifdef SBL_USB_OTG_HS
inline auto* usb_global() { return sbl::hw::reg::periph::usb1_global; }
inline auto* usb_device() { return sbl::hw::reg::periph::usb1_device; }
#else
inline auto* usb_global() { return sbl::hw::reg::periph::usb2_global; }
inline auto* usb_device() { return sbl::hw::reg::periph::usb2_device; }
#endif

/**
 * @brief Reinitialize FS PHY after TinyUSB's incorrect HS PHY init
 *
 * Must be called AFTER tusb_init(). On STM32H750, both USB OTG
 * controllers report GHWCFG2.hs_phy_type = ULPI (2), even USB2_OTG_FS
 * which only has a dedicated FS PHY. TinyUSB reads this and takes the
 * HS PHY init path (phy_hs_init), which:
 *   1. Clears PHYSEL (selects non-existent ULPI PHY)
 *   2. Clears GCCFG.PWRDWN (powers down FS transceiver)
 *   3. Configures GUSBCFG for ULPI mode
 *
 * The DWC2 core reset inside TinyUSB restores PHYSEL=1 (FS PHY default),
 * but GCCFG.PWRDWN stays cleared because GCCFG is outside the DWC2
 * core reset domain. Result: D+ pull-up works (host detects device),
 * but the PHY can't transmit — descriptor reads timeout (error -110).
 *
 * This function redoes what phy_fs_init() should have done:
 *   - Re-enables FS PHY power (PWRDWN)
 *   - Confirms PHYSEL = 1 (FS PHY selected)
 *   - Sets correct FS turnaround time (TRDT = 6 for 480 MHz AHB)
 *   - Applies VBUS bypass for boards without VBUS sensing
 *   - Forces soft disconnect/reconnect to trigger clean enumeration
 */
inline void apply_post_tusb_fixup() {
    using namespace sbl::hw::reg;

    auto* usb = usb_global();
    auto* dev = usb_device();

    // 1. Assert soft disconnect — host sees device disappear
    constexpr uint32_t DCTL_SDIS = (1u << 1);
    dev->DCTL |= DCTL_SDIS;

    // 2. Re-enable FS PHY power (cleared by TinyUSB's HS PHY init path)
    usb->GCCFG |= GCCFG::PWRDWN;

    // 3. Ensure PHYSEL = 1 (select internal FS PHY, not ULPI)
    usb->GUSBCFG |= GUSBCFG::PHYSEL;

    // 4. Set correct FS turnaround time for AHB clock >= 32 MHz
    //    (TinyUSB may have set wrong TRDT for ULPI 8-bit = 9)
    constexpr uint32_t TRDT_MASK = 0xFu << 10;
    constexpr uint32_t TRDT_FS   = 6u << 10;  // FS @ >= 32 MHz AHB
    uint32_t gusbcfg = usb->GUSBCFG;
    gusbcfg &= ~TRDT_MASK;
    gusbcfg |= TRDT_FS;
    usb->GUSBCFG = gusbcfg;

    // 5. Disable VBUS sensing (no VBUS pin on Daisy/Patch boards)
    usb->GCCFG &= ~GCCFG::VBDEN;

    // 6. Force B-session valid (bypass VBUS detection)
    usb->GOTGCTL |= GOTGCTL::BVALOEN | GOTGCTL::BVALOVAL;

    // 7. Brief delay for PHY to stabilize
    for (volatile uint32_t i = 0; i < 100000; ++i) { __asm volatile("nop"); }

    // 8. Release soft disconnect — host will re-enumerate with working PHY
    dev->DCTL &= ~DCTL_SDIS;
}

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
 * 6. Applies VBUS bypass for Daisy Seed (no VBUS sensing)
 *
 * Call after sbl::driver::init() to ensure HSE is running.
 *
 * @note Not ISR-safe — blocking. Boot-time only.
 */
inline void init() {
    // Initialize USB clocks and GPIO
    // This configures PLL3 for 48 MHz and enables the USB peripheral clock
    sbl::driver::init_usb();

    // Apply FS PHY fixup BEFORE tusb_init(). We set PWRDWN and VBUS bypass
    // here so that TinyUSB's DWC2 driver finds the PHY already powered.
    // Previously this was done after tusb_init(), but -O2 tail-call
    // optimization eliminated the post-init fixup entirely.
    //
    // Background: STM32H750 USB2_OTG_FS reports GHWCFG2.hs_phy_type=ULPI(2),
    // causing TinyUSB to take the HS PHY init path which clears PWRDWN.
    // Setting PWRDWN before tusb_init() means TinyUSB may clear it during
    // core init, but the DWC2 core reset restores hardware defaults for
    // GCCFG. We set it again in the init_usb() -> enable_usb2_clock() path
    // AND we also need it after tusb clears it.
    //
    // Solution: Set PWRDWN in init_usb()'s enable_usb2_clock(), and also
    // directly manipulate the register here with a volatile write that
    // the optimizer cannot remove.
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
