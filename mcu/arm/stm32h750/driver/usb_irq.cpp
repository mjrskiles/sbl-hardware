/**
 * @file usb_irq.cpp
 * @brief USB OTG interrupt handlers for STM32H750
 *
 * These handlers forward USB interrupts to TinyUSB.
 * Must be compiled as part of the application (not startup) to link with TinyUSB.
 */

#include "tusb.h"
#include <cstdint>

// Debug counter to verify ISR is being called - visible to main.cpp
volatile uint32_t usb_irq_count = 0;

extern "C" {

/**
 * @brief USB2 OTG FS interrupt handler (PA11/PA12 on Daisy Seed)
 */
void OTG_FS_IRQHandler(void) {
    ++usb_irq_count;  // Increment counter for debug visibility
    tud_int_handler(0);  // RHPort 0 = USB2 OTG FS
}

/**
 * @brief USB1 OTG HS interrupt handler
 */
void OTG_HS_IRQHandler(void) {
    tud_int_handler(1);  // RHPort 1 = USB1 OTG HS
}

} // extern "C"
