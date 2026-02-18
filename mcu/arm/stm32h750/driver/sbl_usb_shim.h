/**
 * @file sbl_usb_shim.h
 * @brief Minimal CMSIS-style shim for TinyUSB's DWC2 driver
 *
 * TinyUSB includes "stm32h7xx.h" expecting ST's CMSIS header. We provide
 * a redirect in tinyusb-compat/ that points here instead. This file
 * contains ONLY what TinyUSB's DWC2 portable driver actually references.
 *
 * This is a C header (included by TinyUSB C sources). SBL's own C++ code
 * should use the proper register headers instead:
 *   - NVIC/SCB:    <sbl/hw/reg/cortex_m.hpp>
 *   - IRQ numbers: <sbl/hw/reg/irq.hpp>
 *   - USB OTG:     <sbl/hw/reg/usb_otg.hpp>
 *   - RCC:         <sbl/hw/reg/rcc.hpp>
 *
 * This is NOT ST code. All definitions are derived from public ARM Cortex-M
 * documentation and the STM32H750 reference manual (RM0433).
 */
#ifndef SBL_USB_SHIM_H_
#define SBL_USB_SHIM_H_

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

// ============================================================================
// System Core Clock (required by TinyUSB for PHY timing calculations)
// ============================================================================
extern uint32_t SystemCoreClock;

// ============================================================================
// USB OTG Base Addresses
// ============================================================================
// STM32H750 has two USB OTG controllers:
//   - USB1_OTG_HS at 0x40040000 (HS with ULPI or FS with internal PHY)
//   - USB2_OTG_FS at 0x40080000 (FS only with internal PHY)
//
// Daisy Seed (LQFP100) uses USB2_OTG_FS on PA11/PA12.

#define USB1_OTG_HS_PERIPH_BASE   0x40040000UL
#define USB2_OTG_FS_PERIPH_BASE   0x40080000UL

// Tell TinyUSB that USB2 exists on this chip — prevents remapping FS to HS.
// TinyUSB's dwc2_stm32.h checks: #if (! defined USB2_OTG_FS)
#define USB2_OTG_FS               1

// TinyUSB port mapping (dwc2_stm32.h uses these names):
#define USB_OTG_FS_PERIPH_BASE    USB2_OTG_FS_PERIPH_BASE  // Port 0 = USB2
#define USB_OTG_HS_PERIPH_BASE    USB1_OTG_HS_PERIPH_BASE  // Port 1 = USB1

// ============================================================================
// IRQ Numbers (TinyUSB controller table references these)
// ============================================================================
// Canonical source: reg/irq.hpp (sbl::hw::reg::IRQn)
// This C enum provides the subset TinyUSB needs with CMSIS naming.
typedef enum {
    OTG_HS_EP1_OUT_IRQn = 74,
    OTG_HS_EP1_IN_IRQn  = 75,
    OTG_HS_WKUP_IRQn    = 76,
    OTG_HS_IRQn          = 77,
    OTG_FS_IRQn          = 101,  // USB2_OTG_FS (Daisy Seed)
} IRQn_Type;

// ============================================================================
// NVIC (TinyUSB calls NVIC_EnableIRQ / NVIC_DisableIRQ)
// ============================================================================
// Canonical source: reg/cortex_m.hpp (sbl::hw::reg::NVIC_t)
#define NVIC_BASE           0xE000E100UL
#define NVIC                ((NVIC_Type*)NVIC_BASE)

typedef struct {
    volatile uint32_t ISER[8];
    uint32_t RESERVED0[24];
    volatile uint32_t ICER[8];
    uint32_t RESERVED1[24];
    volatile uint32_t ISPR[8];
    uint32_t RESERVED2[24];
    volatile uint32_t ICPR[8];
    uint32_t RESERVED3[24];
    volatile uint32_t IABR[8];
    uint32_t RESERVED4[56];
    volatile uint8_t  IP[240];
    uint32_t RESERVED5[644];
    volatile uint32_t STIR;
} NVIC_Type;

static inline void NVIC_EnableIRQ(IRQn_Type IRQn) {
    NVIC->ISER[(uint32_t)IRQn >> 5] = (1UL << ((uint32_t)IRQn & 0x1FUL));
}

static inline void NVIC_DisableIRQ(IRQn_Type IRQn) {
    NVIC->ICER[(uint32_t)IRQn >> 5] = (1UL << ((uint32_t)IRQn & 0x1FUL));
}

// ============================================================================
// SCB + D-Cache maintenance (TinyUSB checks cache status and cleans buffers)
// ============================================================================
// Canonical source: reg/cortex_m.hpp (sbl::hw::reg::SCB_t)
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

#define SCB_CCR_DC_Msk      (1UL << 16)

// D-Cache maintenance stubs — TinyUSB calls these for DMA buffer coherency.
// TODO: Implement real cache maintenance using DCCMVAC/DCIMVAC registers
// when DMA-based USB transfers are enabled.
static inline void SCB_CleanDCache_by_Addr(uint32_t *addr, int32_t dsize) {
    (void)addr; (void)dsize;
    __asm volatile ("dsb sy" ::: "memory");
}

static inline void SCB_InvalidateDCache_by_Addr(void *addr, int32_t dsize) {
    (void)addr; (void)dsize;
    __asm volatile ("dsb sy" ::: "memory");
}

static inline void SCB_CleanInvalidateDCache_by_Addr(uint32_t *addr, int32_t dsize) {
    (void)addr; (void)dsize;
    __asm volatile ("dsb sy" ::: "memory");
}

// ============================================================================
// RCC fragment (TinyUSB disables USB ULPI low-power clock gating)
// ============================================================================
#define RCC_BASE            0x58024400UL
#define RCC                 ((RCC_Shim_Type*)RCC_BASE)

typedef struct {
    uint32_t RESERVED0[32];          // Padding to AHB1LPENR at offset 0x80
    volatile uint32_t AHB1LPENR;
} RCC_Shim_Type;

#define RCC_AHB1LPENR_USB1OTGHSLPEN_Pos     25
#define RCC_AHB1LPENR_USB1OTGHSLPEN         (1UL << 25)
#define RCC_AHB1LPENR_USB1OTGHSULPILPEN_Pos 26
#define RCC_AHB1LPENR_USB1OTGHSULPILPEN     (1UL << 26)
#define RCC_AHB1LPENR_USB2OTGFSLPEN_Pos     27
#define RCC_AHB1LPENR_USB2OTGFSLPEN         (1UL << 27)
#define RCC_AHB1LPENR_USB2OTGFSULPILPEN_Pos 28
#define RCC_AHB1LPENR_USB2OTGFSULPILPEN     (1UL << 28)

// ============================================================================
// NOP intrinsic (TinyUSB uses in delay loops)
// ============================================================================
#ifndef __NOP
#define __NOP() __asm volatile ("nop")
#endif

#ifdef __cplusplus
}
#endif

#endif // SBL_USB_SHIM_H_
