/**
 * @file sbl_usb_shim.h
 * @brief Sound Byte Labs bare-metal USB shim for TinyUSB
 *
 * This provides the minimal CMSIS-style definitions that TinyUSB's DWC2
 * driver expects, WITHOUT using ST's HAL or official CMSIS device headers.
 *
 * TinyUSB includes "stm32h7xx.h" expecting ST's CMSIS header. We provide
 * a redirect in tinyusb-compat/ that points here instead.
 *
 * Contents:
 * - SystemCoreClock variable
 * - USB OTG base addresses (USB1 at 0x40040000, USB2 at 0x40080000)
 * - IRQ numbers (OTG_FS_IRQn, OTG_HS_IRQn)
 * - NVIC functions (NVIC_EnableIRQ, NVIC_DisableIRQ)
 * - SCB cache maintenance stubs
 * - RCC sleep mode bit definitions
 * - USB register bit definitions (VBUS, mode forcing)
 *
 * This is NOT ST code. All definitions are derived from public ARM Cortex-M
 * documentation and the STM32H750 reference manual.
 */
#ifndef SBL_USB_SHIM_H_
#define SBL_USB_SHIM_H_

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

// ============================================================================
// System Core Clock (required by TinyUSB for timing)
// ============================================================================
// Defined in init.cpp or your application - typically 480 MHz for STM32H750
extern uint32_t SystemCoreClock;

// ============================================================================
// USB OTG Base Addresses
// ============================================================================
// STM32H750 has two USB OTG controllers:
//   - USB1_OTG_HS at 0x40040000 (High-Speed with ULPI PHY support)
//   - USB2_OTG_FS at 0x40080000 (Full-Speed with internal PHY, PA11/PA12)
//
// TinyUSB naming convention (for STM32 consistency):
//   - RHPort0 = "OTG_FS" = USB2_OTG_FS (0x40080000) - Daisy Seed uses this
//   - RHPort1 = "OTG_HS" = USB1_OTG_HS (0x40040000)

#define USB1_OTG_HS_PERIPH_BASE   0x40040000UL
#define USB2_OTG_FS_PERIPH_BASE   0x40080000UL

// Tell TinyUSB that STM32H750 has two USB controllers (USB2_OTG_FS exists)
// This prevents dwc2_stm32.h from remapping FS→USB1
#define USB2_OTG_FS               ((void*)USB2_OTG_FS_PERIPH_BASE)

// TinyUSB expects these names (guard against redefinition by dwc2_stm32.h)
#ifndef USB_OTG_FS_PERIPH_BASE
#define USB_OTG_FS_PERIPH_BASE    USB2_OTG_FS_PERIPH_BASE
#endif
#ifndef USB_OTG_HS_PERIPH_BASE
#define USB_OTG_HS_PERIPH_BASE    USB1_OTG_HS_PERIPH_BASE
#endif

// For H7 boards with single USB, TinyUSB maps FS to USB1
// But Daisy Seed has USB2 on PA11/PA12, so we use the standard mapping

// ============================================================================
// IRQ Numbers
// ============================================================================
// These must match the vector table positions in startup.cpp
typedef enum {
    OTG_FS_IRQn = 101,  // USB2_OTG_FS interrupt (position 101 in vector table)
    OTG_HS_IRQn = 77,   // USB1_OTG_HS interrupt (position 77 in vector table)
} IRQn_Type;

// ============================================================================
// NVIC Functions (from CMSIS core_cm7.h)
// ============================================================================
#define NVIC_BASE           0xE000E100UL
#define NVIC                ((NVIC_Type*)NVIC_BASE)

typedef struct {
    volatile uint32_t ISER[8];       // Interrupt Set Enable
    uint32_t RESERVED0[24];
    volatile uint32_t ICER[8];       // Interrupt Clear Enable
    uint32_t RESERVED1[24];
    volatile uint32_t ISPR[8];       // Interrupt Set Pending
    uint32_t RESERVED2[24];
    volatile uint32_t ICPR[8];       // Interrupt Clear Pending
    uint32_t RESERVED3[24];
    volatile uint32_t IABR[8];       // Interrupt Active Bit
    uint32_t RESERVED4[56];
    volatile uint8_t  IP[240];       // Interrupt Priority
    uint32_t RESERVED5[644];
    volatile uint32_t STIR;          // Software Trigger Interrupt
} NVIC_Type;

static inline void NVIC_EnableIRQ(IRQn_Type IRQn) {
    if ((int32_t)IRQn >= 0) {
        NVIC->ISER[(uint32_t)IRQn >> 5] = (1UL << ((uint32_t)IRQn & 0x1FUL));
    }
}

static inline void NVIC_DisableIRQ(IRQn_Type IRQn) {
    if ((int32_t)IRQn >= 0) {
        NVIC->ICER[(uint32_t)IRQn >> 5] = (1UL << ((uint32_t)IRQn & 0x1FUL));
    }
}

static inline void NVIC_SetPriority(IRQn_Type IRQn, uint32_t priority) {
    if ((int32_t)IRQn >= 0) {
        NVIC->IP[(uint32_t)IRQn] = (uint8_t)((priority << 4) & 0xFFUL);
    }
}

// ============================================================================
// SCB (System Control Block) for cache operations
// ============================================================================
#define SCB_BASE            0xE000ED00UL
#define SCB                 ((SCB_Type*)SCB_BASE)

typedef struct {
    volatile uint32_t CPUID;
    volatile uint32_t ICSR;
    volatile uint32_t VTOR;
    volatile uint32_t AIRCR;
    volatile uint32_t SCR;
    volatile uint32_t CCR;
    volatile uint8_t  SHP[12];
    volatile uint32_t SHCSR;
    volatile uint32_t CFSR;
    volatile uint32_t HFSR;
    volatile uint32_t DFSR;
    volatile uint32_t MMFAR;
    volatile uint32_t BFAR;
    volatile uint32_t AFSR;
    volatile uint32_t PFR[2];
    volatile uint32_t DFR;
    volatile uint32_t ADR;
    volatile uint32_t MMFR[4];
    volatile uint32_t ISAR[5];
    uint32_t RESERVED0[5];
    volatile uint32_t CPACR;
} SCB_Type;

#define SCB_CCR_DC_Msk      (1UL << 16)  // Data cache enable bit

// Cache line size for STM32H7
#define __SCB_DCACHE_LINE_SIZE  32

// Cache maintenance functions (simplified - full CMSIS has more)
static inline void SCB_EnableICache(void) {
    // Implementation would go here if needed
}

static inline void SCB_EnableDCache(void) {
    // Implementation would go here if needed
}

static inline void SCB_CleanDCache_by_Addr(uint32_t *addr, int32_t dsize) {
    // Clean D-Cache by address - simplified stub
    // Full implementation would use DCCMVAC register
    (void)addr;
    (void)dsize;
    __asm volatile ("dsb sy" ::: "memory");
}

static inline void SCB_InvalidateDCache_by_Addr(void *addr, int32_t dsize) {
    // Invalidate D-Cache by address - simplified stub
    (void)addr;
    (void)dsize;
    __asm volatile ("dsb sy" ::: "memory");
}

static inline void SCB_CleanInvalidateDCache_by_Addr(uint32_t *addr, int32_t dsize) {
    // Clean and invalidate D-Cache by address - simplified stub
    (void)addr;
    (void)dsize;
    __asm volatile ("dsb sy" ::: "memory");
}

// ============================================================================
// RCC Definitions (for TinyUSB sleep mode clock gating)
// ============================================================================
#define RCC_BASE            0x58024400UL
#define RCC                 ((RCC_Shim_Type*)RCC_BASE)

// Minimal RCC struct for TinyUSB's needs
typedef struct {
    uint32_t RESERVED0[32];          // Skip to AHB1LPENR at offset 0x80
    volatile uint32_t AHB1LPENR;     // Offset 0x80
} RCC_Shim_Type;

// Bit definitions for AHB1LPENR (low-power mode clock enable)
#define RCC_AHB1LPENR_USB1OTGHSLPEN_Pos     25
#define RCC_AHB1LPENR_USB1OTGHSLPEN         (1UL << RCC_AHB1LPENR_USB1OTGHSLPEN_Pos)
#define RCC_AHB1LPENR_USB1OTGHSULPILPEN_Pos 26
#define RCC_AHB1LPENR_USB1OTGHSULPILPEN     (1UL << RCC_AHB1LPENR_USB1OTGHSULPILPEN_Pos)
#define RCC_AHB1LPENR_USB2OTGFSLPEN_Pos     27
#define RCC_AHB1LPENR_USB2OTGFSLPEN         (1UL << RCC_AHB1LPENR_USB2OTGFSLPEN_Pos)
#define RCC_AHB1LPENR_USB2OTGFSULPILPEN_Pos 28
#define RCC_AHB1LPENR_USB2OTGFSULPILPEN     (1UL << RCC_AHB1LPENR_USB2OTGFSULPILPEN_Pos)

// ============================================================================
// USB OTG Register Bit Definitions
// ============================================================================
// These are used by TinyUSB's DWC2 driver for VBUS sensing configuration

// GCCFG register bits
#ifndef USB_OTG_GCCFG_VBDEN
#define USB_OTG_GCCFG_VBDEN         (1UL << 21)  // VBUS detection enable
#endif
#ifndef STM32_GCCFG_PWRDWN
#define STM32_GCCFG_PWRDWN          (1UL << 16)  // Power down (enable internal FS PHY)
#endif

// GOTGCTL register bits
#define USB_OTG_GOTGCTL_BVALOEN     (1UL << 6)   // B-device session valid override enable
#define USB_OTG_GOTGCTL_BVALOVAL    (1UL << 7)   // B-device session valid override value

// GUSBCFG register bits
#define USB_OTG_GUSBCFG_FDMOD       (1UL << 30)  // Force device mode
#define USB_OTG_GUSBCFG_FHMOD       (1UL << 29)  // Force host mode

// ============================================================================
// Unique Device ID (used by TinyUSB for serial number)
// ============================================================================
#define UID_BASE            0x1FF1E800UL

// ============================================================================
// NOP for delays
// ============================================================================
#ifndef __NOP
#define __NOP() __asm volatile ("nop")
#endif

#ifdef __cplusplus
}
#endif

#endif // SBL_USB_SHIM_H_
