/*
 * tusb_config.h - TinyUSB configuration for STM32H750
 *
 * MCU-specific TinyUSB configuration for Daisy Seed and similar boards.
 * Uses USB2_OTG_FS on PA11/PA12 (full-speed with internal PHY).
 */

#ifndef TUSB_CONFIG_H
#define TUSB_CONFIG_H

#ifdef __cplusplus
extern "C" {
#endif

//--------------------------------------------------------------------
// COMMON CONFIGURATION
//--------------------------------------------------------------------

// STM32H7 MCU selection
#define CFG_TUSB_MCU OPT_MCU_STM32H7

// No RTOS
#define CFG_TUSB_OS OPT_OS_NONE

// Debug level: 0=none, 1=error, 2=warn, 3=info
#ifndef CFG_TUSB_DEBUG
#define CFG_TUSB_DEBUG 0
#endif

// Memory alignment for DMA
#define CFG_TUSB_MEM_ALIGN __attribute__((aligned(4)))

//--------------------------------------------------------------------
// DEVICE CONFIGURATION
//--------------------------------------------------------------------

#define CFG_TUD_ENABLED 1

// USB device on PA11/PA12 (USB1_OTG_HS running in FS mode with internal PHY)
// Our sbl_usb_shim.h remaps Port 0 to USB1_OTG_HS (0x40040000), so use RHPORT0
#define CFG_TUSB_RHPORT0_MODE (OPT_MODE_DEVICE | OPT_MODE_FULL_SPEED)

// Use port 0 for device mode (mapped to USB1_OTG_HS via shim)
#define BOARD_TUD_RHPORT 0

// Use default speed for the MCU
#define CFG_TUD_MAX_SPEED OPT_MODE_DEFAULT_SPEED

// Endpoint 0 size
#define CFG_TUD_ENDPOINT0_SIZE 64

//--------------------------------------------------------------------
// DEVICE CLASS CONFIGURATION
//--------------------------------------------------------------------

// Enable CDC (Communications Device Class)
#define CFG_TUD_CDC 1

// Enable MIDI (USB MIDI 1.0 class — bidirectional)
#define CFG_TUD_MIDI 1

// Disable other classes
#define CFG_TUD_MSC 0
#define CFG_TUD_HID 0
#define CFG_TUD_AUDIO 0
#define CFG_TUD_VENDOR 0

//--------------------------------------------------------------------
// CDC CLASS CONFIGURATION
//--------------------------------------------------------------------

// CDC FIFO sizes
#define CFG_TUD_CDC_RX_BUFSIZE 256
#define CFG_TUD_CDC_TX_BUFSIZE 256

// Endpoint buffer size (must be power of 2, max 64 for full-speed)
#define CFG_TUD_CDC_EP_BUFSIZE 64

//--------------------------------------------------------------------
// MIDI CLASS CONFIGURATION
//--------------------------------------------------------------------

#define CFG_TUD_MIDI_RX_BUFSIZE 64
#define CFG_TUD_MIDI_TX_BUFSIZE 64

#ifdef __cplusplus
}
#endif

#endif // TUSB_CONFIG_H
