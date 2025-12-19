/**
 * @file usb_irq.cpp
 * @brief USB OTG interrupt handler for STM32H750
 *
 * Forwards USB2_OTG_FS interrupt to TinyUSB.
 * Must be compiled as part of the application (not startup) to link with TinyUSB.
 *
 * IMPORTANT: Daisy Seed (LQFP100) uses USB2_OTG_FS (0x40080000) on PA11/PA12!
 * This matches the DFU bootloader. USB2 has only one IRQ (101).
 */

#include "tusb.h"
#include <cstdint>

// Debug counter to verify ISR is being called - visible to main.cpp
volatile uint32_t usb_irq_count = 0;

extern "C" {

/**
 * @brief USB2 OTG FS interrupt handler (IRQ 101)
 *
 * This is the only USB interrupt for Daisy Seed.
 * USB2_OTG_FS has a single combined interrupt, unlike USB1_OTG_HS which has 3.
 */
void OTG_FS_IRQHandler(void) {
    ++usb_irq_count;
    tud_int_handler(0);  // Port 0 = USB2_OTG_FS
}

} // extern "C"
