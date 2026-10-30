/**
 * @file usb_irq.cpp
 * @brief USB OTG interrupt handler for STM32H750
 *
 * Forwards the active USB controller's interrupt to TinyUSB.
 * Must be compiled as part of the application (not startup) to link with TinyUSB.
 *
 * USB peripheral selection:
 *   Daisy Seed: USB2_OTG_FS (PA11/PA12) — IRQ 101 (OTG_FS_IRQHandler)
 *   Patch SM:   USB1_OTG_HS (PB14/PB15) — IRQ 77  (OTG_HS_IRQHandler)
 */

#include "tusb.h"
#include "usb.hpp"  // sbl::usb::pend_task()
#include <cstdint>

extern "C" {

#ifdef SBL_USB_OTG_HS

void OTG_HS_IRQHandler(void) {
    tud_int_handler(0);
    sbl::usb::pend_task();  // service the event at Level::SoftPend  // Port 0 = USB1_OTG_HS
}

#else

void OTG_FS_IRQHandler(void) {
    tud_int_handler(0);
    sbl::usb::pend_task();  // service the event at Level::SoftPend  // Port 0 = USB2_OTG_FS
}

#endif

} // extern "C"
