/*
 * NOT ST CODE - This is a Sound Byte Labs compatibility shim for TinyUSB
 *
 * TinyUSB's DWC2 driver expects to include "stm32h7xx.h" which normally
 * comes from ST's CMSIS device package. This file redirects to SBL's
 * bare-metal USB shim instead.
 *
 * To use: Add this directory to include path BEFORE TinyUSB:
 *   -I${SBL_HW_PATH}/mcu/arm/stm32h750/driver/tinyusb-compat
 *
 * See sbl_usb_shim.h for the actual implementation.
 */
#ifndef SBL_TINYUSB_COMPAT_STM32H7XX_H_
#define SBL_TINYUSB_COMPAT_STM32H7XX_H_

#include "../sbl_usb_shim.h"

#endif
