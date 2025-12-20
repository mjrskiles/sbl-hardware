/**
 * @file usb_otg.hpp
 * @brief Register definitions for STM32H750 - usb_otg
 *
 * Generated from: stm32h750.svd.patched
 * Generator: cecrops
 * Generated: 2025-12-19T21:10:07.263538
 *
 * DO NOT EDIT - Regenerate with: cecrops generate <mcu-dir>
 */

#ifndef SBL_HW_REG_STM32H750_USB_OTG_HPP
#define SBL_HW_REG_STM32H750_USB_OTG_HPP

#include <cstdint>

namespace sbl::hw::reg {

/** USB 1 on the go high speed */
struct OTG1_HS_GLOBAL_t {
    volatile uint32_t OTG_HS_GOTGCTL;  ///< OTG_HS control and status           register
    volatile uint32_t OTG_HS_GOTGINT;  ///< OTG_HS interrupt register
    volatile uint32_t OTG_HS_GAHBCFG;  ///< OTG_HS AHB configuration           register
    volatile uint32_t OTG_HS_GUSBCFG;  ///< OTG_HS USB configuration           register
    volatile uint32_t OTG_HS_GRSTCTL;  ///< OTG_HS reset register
    volatile uint32_t OTG_HS_GINTSTS;  ///< OTG_HS core interrupt register
    volatile uint32_t OTG_HS_GINTMSK;  ///< OTG_HS interrupt mask register
    volatile uint32_t OTG_HS_GRXSTSR_Host;  ///< OTG_HS Receive status debug read register           (host...
    volatile uint32_t OTG_HS_GRXSTSR_Device;  ///< OTG_HS Receive status debug read register           (peri...
    volatile uint32_t OTG_HS_GRXSTSP_Host;  ///< OTG_HS status read and pop register (host           mode)
    volatile uint32_t OTG_HS_GRXSTSP_Device;  ///< OTG_HS status read and pop register           (peripheral...
    volatile uint32_t OTG_HS_GRXFSIZ;  ///< OTG_HS Receive FIFO size           register
    volatile uint32_t OTG_HS_HNPTXFSIZ_Host;  ///< OTG_HS nonperiodic transmit FIFO size           register ...
    volatile uint32_t OTG_HS_DIEPTXF0_Device;  ///< Endpoint 0 transmit FIFO size (peripheral           mode)
    volatile uint32_t OTG_HS_GNPTXSTS;  ///< OTG_HS nonperiodic transmit FIFO/queue           status r...
    uint8_t _reserved0[8];
    volatile uint32_t OTG_HS_GCCFG;  ///< OTG_HS general core configuration           register
    volatile uint32_t OTG_HS_CID;  ///< OTG_HS core ID register
    uint8_t _reserved1[20];
    volatile uint32_t OTG_HS_GLPMCFG;  ///< OTG core LPM configuration           register
    uint8_t _reserved2[168];
    volatile uint32_t OTG_HS_HPTXFSIZ;  ///< OTG_HS Host periodic transmit FIFO size           register
    volatile uint32_t OTG_HS_DIEPTXF1;  ///< OTG_HS device IN endpoint transmit FIFO size           re...
    volatile uint32_t OTG_HS_DIEPTXF2;  ///< OTG_HS device IN endpoint transmit FIFO size           re...
    volatile uint32_t OTG_HS_DIEPTXF3;  ///< OTG_HS device IN endpoint transmit FIFO size           re...
    volatile uint32_t OTG_HS_DIEPTXF4;  ///< OTG_HS device IN endpoint transmit FIFO size           re...
    volatile uint32_t OTG_HS_DIEPTXF5;  ///< OTG_HS device IN endpoint transmit FIFO size           re...
    volatile uint32_t OTG_HS_DIEPTXF6;  ///< OTG_HS device IN endpoint transmit FIFO size           re...
    volatile uint32_t OTG_HS_DIEPTXF7;  ///< OTG_HS device IN endpoint transmit FIFO size           re...
    volatile uint32_t OTG_DIEPTXF8;  ///< 
};

/** USB 1 on the go high speed */
struct OTG2_HS_GLOBAL_t {
    volatile uint32_t OTG_HS_GOTGCTL;  ///< OTG_HS control and status           register
    volatile uint32_t OTG_HS_GOTGINT;  ///< OTG_HS interrupt register
    volatile uint32_t OTG_HS_GAHBCFG;  ///< OTG_HS AHB configuration           register
    volatile uint32_t OTG_HS_GUSBCFG;  ///< OTG_HS USB configuration           register
    volatile uint32_t OTG_HS_GRSTCTL;  ///< OTG_HS reset register
    volatile uint32_t OTG_HS_GINTSTS;  ///< OTG_HS core interrupt register
    volatile uint32_t OTG_HS_GINTMSK;  ///< OTG_HS interrupt mask register
    volatile uint32_t OTG_HS_GRXSTSR_Host;  ///< OTG_HS Receive status debug read register           (host...
    volatile uint32_t OTG_HS_GRXSTSR_Device;  ///< OTG_HS Receive status debug read register           (peri...
    volatile uint32_t OTG_HS_GRXSTSP_Host;  ///< OTG_HS status read and pop register (host           mode)
    volatile uint32_t OTG_HS_GRXSTSP_Device;  ///< OTG_HS status read and pop register           (peripheral...
    volatile uint32_t OTG_HS_GRXFSIZ;  ///< OTG_HS Receive FIFO size           register
    volatile uint32_t OTG_HS_HNPTXFSIZ_Host;  ///< OTG_HS nonperiodic transmit FIFO size           register ...
    volatile uint32_t OTG_HS_DIEPTXF0_Device;  ///< Endpoint 0 transmit FIFO size (peripheral           mode)
    volatile uint32_t OTG_HS_GNPTXSTS;  ///< OTG_HS nonperiodic transmit FIFO/queue           status r...
    uint8_t _reserved0[8];
    volatile uint32_t OTG_HS_GCCFG;  ///< OTG_HS general core configuration           register
    volatile uint32_t OTG_HS_CID;  ///< OTG_HS core ID register
    uint8_t _reserved1[20];
    volatile uint32_t OTG_HS_GLPMCFG;  ///< OTG core LPM configuration           register
    uint8_t _reserved2[168];
    volatile uint32_t OTG_HS_HPTXFSIZ;  ///< OTG_HS Host periodic transmit FIFO size           register
    volatile uint32_t OTG_HS_DIEPTXF1;  ///< OTG_HS device IN endpoint transmit FIFO size           re...
    volatile uint32_t OTG_HS_DIEPTXF2;  ///< OTG_HS device IN endpoint transmit FIFO size           re...
    volatile uint32_t OTG_HS_DIEPTXF3;  ///< OTG_HS device IN endpoint transmit FIFO size           re...
    volatile uint32_t OTG_HS_DIEPTXF4;  ///< OTG_HS device IN endpoint transmit FIFO size           re...
    volatile uint32_t OTG_HS_DIEPTXF5;  ///< OTG_HS device IN endpoint transmit FIFO size           re...
    volatile uint32_t OTG_HS_DIEPTXF6;  ///< OTG_HS device IN endpoint transmit FIFO size           re...
    volatile uint32_t OTG_HS_DIEPTXF7;  ///< OTG_HS device IN endpoint transmit FIFO size           re...
    volatile uint32_t OTG_DIEPTXF8;  ///< 
};

/** USB 1 on the go high speed */
struct OTG1_HS_DEVICE_t {
    volatile uint32_t OTG_HS_DCFG;  ///< OTG_HS device configuration           register
    volatile uint32_t OTG_HS_DCTL;  ///< OTG_HS device control register
    volatile uint32_t OTG_HS_DSTS;  ///< OTG_HS device status register
    uint8_t _reserved0[4];
    volatile uint32_t OTG_HS_DIEPMSK;  ///< OTG_HS device IN endpoint common interrupt           mask...
    volatile uint32_t OTG_HS_DOEPMSK;  ///< OTG_HS device OUT endpoint common interrupt           mas...
    volatile uint32_t OTG_HS_DAINT;  ///< OTG_HS device all endpoints interrupt           register
    volatile uint32_t OTG_HS_DAINTMSK;  ///< OTG_HS all endpoints interrupt mask           register
    uint8_t _reserved1[8];
    volatile uint32_t OTG_HS_DVBUSDIS;  ///< OTG_HS device VBUS discharge time           register
    volatile uint32_t OTG_HS_DVBUSPULSE;  ///< OTG_HS device VBUS pulsing time           register
    volatile uint32_t OTG_HS_DTHRCTL;  ///< OTG_HS Device threshold control           register
    volatile uint32_t OTG_HS_DIEPEMPMSK;  ///< OTG_HS device IN endpoint FIFO empty           interrupt ...
    volatile uint32_t OTG_HS_DEACHINT;  ///< OTG_HS device each endpoint interrupt           register
    volatile uint32_t OTG_HS_DEACHINTMSK;  ///< OTG_HS device each endpoint interrupt           register ...
    uint8_t _reserved2[192];
    volatile uint32_t OTG_HS_DIEPCTL0;  ///< OTG device endpoint-0 control           register
    uint8_t _reserved3[4];
    volatile uint32_t OTG_HS_DIEPINT0;  ///< OTG device endpoint-0 interrupt           register
    uint8_t _reserved4[4];
    volatile uint32_t OTG_HS_DIEPTSIZ0;  ///< OTG_HS device IN endpoint 0 transfer size           register
    volatile uint32_t OTG_HS_DIEPDMA1;  ///< OTG_HS device endpoint-1 DMA address           register
    volatile uint32_t OTG_HS_DTXFSTS0;  ///< OTG_HS device IN endpoint transmit FIFO           status ...
    uint8_t _reserved5[4];
    volatile uint32_t OTG_HS_DIEPCTL1;  ///< OTG device endpoint-1 control           register
    uint8_t _reserved6[4];
    volatile uint32_t OTG_HS_DIEPINT1;  ///< OTG device endpoint-1 interrupt           register
    uint8_t _reserved7[4];
    volatile uint32_t OTG_HS_DIEPTSIZ1;  ///< OTG_HS device endpoint transfer size           register
    volatile uint32_t OTG_HS_DIEPDMA2;  ///< OTG_HS device endpoint-2 DMA address           register
    volatile uint32_t OTG_HS_DTXFSTS1;  ///< OTG_HS device IN endpoint transmit FIFO           status ...
    uint8_t _reserved8[4];
    volatile uint32_t OTG_HS_DIEPCTL2;  ///< OTG device endpoint-2 control           register
    uint8_t _reserved9[4];
    volatile uint32_t OTG_HS_DIEPINT2;  ///< OTG device endpoint-2 interrupt           register
    uint8_t _reserved10[4];
    volatile uint32_t OTG_HS_DIEPTSIZ2;  ///< OTG_HS device endpoint transfer size           register
    volatile uint32_t OTG_HS_DIEPDMA3;  ///< OTG_HS device endpoint-3 DMA address           register
    volatile uint32_t OTG_HS_DTXFSTS2;  ///< OTG_HS device IN endpoint transmit FIFO           status ...
    uint8_t _reserved11[4];
    volatile uint32_t OTG_HS_DIEPCTL3;  ///< OTG device endpoint-3 control           register
    uint8_t _reserved12[4];
    volatile uint32_t OTG_HS_DIEPINT3;  ///< OTG device endpoint-3 interrupt           register
    uint8_t _reserved13[4];
    volatile uint32_t OTG_HS_DIEPTSIZ3;  ///< OTG_HS device endpoint transfer size           register
    volatile uint32_t OTG_HS_DIEPDMA4;  ///< OTG_HS device endpoint-4 DMA address           register
    volatile uint32_t OTG_HS_DTXFSTS3;  ///< OTG_HS device IN endpoint transmit FIFO           status ...
    uint8_t _reserved14[4];
    volatile uint32_t OTG_HS_DIEPCTL4;  ///< OTG device endpoint-4 control           register
    uint8_t _reserved15[4];
    volatile uint32_t OTG_HS_DIEPINT4;  ///< OTG device endpoint-4 interrupt           register
    uint8_t _reserved16[4];
    volatile uint32_t OTG_HS_DIEPTSIZ4;  ///< OTG_HS device endpoint transfer size           register
    volatile uint32_t OTG_HS_DIEPDMA5;  ///< OTG_HS device endpoint-5 DMA address           register
    volatile uint32_t OTG_HS_DTXFSTS4;  ///< OTG_HS device IN endpoint transmit FIFO           status ...
    uint8_t _reserved17[4];
    volatile uint32_t OTG_HS_DIEPCTL5;  ///< OTG device endpoint-5 control           register
    volatile uint32_t OTG_HS_DIEPTSIZ6;  ///< OTG_HS device endpoint transfer size           register
    volatile uint32_t OTG_HS_DTXFSTS6;  ///< OTG_HS device IN endpoint transmit FIFO           status ...
    volatile uint32_t OTG_HS_DIEPINT5;  ///< OTG device endpoint-5 interrupt           register
    volatile uint32_t OTG_HS_DIEPTSIZ7;  ///< OTG_HS device endpoint transfer size           register
    volatile uint32_t OTG_HS_DTXFSTS7;  ///< OTG_HS device IN endpoint transmit FIFO           status ...
    volatile uint32_t OTG_HS_DIEPTSIZ5;  ///< OTG_HS device endpoint transfer size           register
    uint8_t _reserved18[4];
    volatile uint32_t OTG_HS_DTXFSTS5;  ///< OTG_HS device IN endpoint transmit FIFO           status ...
    uint8_t _reserved19[4];
    volatile uint32_t OTG_HS_DIEPCTL6;  ///< OTG device endpoint-6 control           register
    uint8_t _reserved20[4];
    volatile uint32_t OTG_HS_DIEPINT6;  ///< OTG device endpoint-6 interrupt           register
    uint8_t _reserved21[20];
    volatile uint32_t OTG_HS_DIEPCTL7;  ///< OTG device endpoint-7 control           register
    uint8_t _reserved22[4];
    volatile uint32_t OTG_HS_DIEPINT7;  ///< OTG device endpoint-7 interrupt           register
    uint8_t _reserved23[276];
    volatile uint32_t OTG_HS_DOEPCTL0;  ///< OTG_HS device control OUT endpoint 0 control           re...
    uint8_t _reserved24[4];
    volatile uint32_t OTG_HS_DOEPINT0;  ///< OTG_HS device endpoint-0 interrupt           register
    uint8_t _reserved25[4];
    volatile uint32_t OTG_HS_DOEPTSIZ0;  ///< OTG_HS device endpoint-0 transfer size           register
    uint8_t _reserved26[12];
    volatile uint32_t OTG_HS_DOEPCTL1;  ///< OTG device endpoint-1 control           register
    uint8_t _reserved27[4];
    volatile uint32_t OTG_HS_DOEPINT1;  ///< OTG_HS device endpoint-1 interrupt           register
    uint8_t _reserved28[4];
    volatile uint32_t OTG_HS_DOEPTSIZ1;  ///< OTG_HS device endpoint-1 transfer size           register
    uint8_t _reserved29[12];
    volatile uint32_t OTG_HS_DOEPCTL2;  ///< OTG device endpoint-2 control           register
    uint8_t _reserved30[4];
    volatile uint32_t OTG_HS_DOEPINT2;  ///< OTG_HS device endpoint-2 interrupt           register
    uint8_t _reserved31[4];
    volatile uint32_t OTG_HS_DOEPTSIZ2;  ///< OTG_HS device endpoint-2 transfer size           register
    uint8_t _reserved32[12];
    volatile uint32_t OTG_HS_DOEPCTL3;  ///< OTG device endpoint-3 control           register
    uint8_t _reserved33[4];
    volatile uint32_t OTG_HS_DOEPINT3;  ///< OTG_HS device endpoint-3 interrupt           register
    uint8_t _reserved34[4];
    volatile uint32_t OTG_HS_DOEPTSIZ3;  ///< OTG_HS device endpoint-3 transfer size           register
    uint8_t _reserved35[12];
    volatile uint32_t OTG_HS_DOEPCTL4;  ///< OTG device endpoint-4 control           register
    uint8_t _reserved36[4];
    volatile uint32_t OTG_HS_DOEPINT4;  ///< OTG_HS device endpoint-4 interrupt           register
    uint8_t _reserved37[4];
    volatile uint32_t OTG_HS_DOEPTSIZ4;  ///< OTG_HS device endpoint-4 transfer size           register
    uint8_t _reserved38[12];
    volatile uint32_t OTG_HS_DOEPCTL5;  ///< OTG device endpoint-5 control           register
    uint8_t _reserved39[4];
    volatile uint32_t OTG_HS_DOEPINT5;  ///< OTG_HS device endpoint-5 interrupt           register
    uint8_t _reserved40[4];
    volatile uint32_t OTG_HS_DOEPTSIZ5;  ///< OTG_HS device endpoint-5 transfer size           register
    uint8_t _reserved41[12];
    volatile uint32_t OTG_HS_DOEPCTL6;  ///< OTG device endpoint-6 control           register
    uint8_t _reserved42[4];
    volatile uint32_t OTG_HS_DOEPINT6;  ///< OTG_HS device endpoint-6 interrupt           register
    uint8_t _reserved43[4];
    volatile uint32_t OTG_HS_DOEPTSIZ6;  ///< OTG_HS device endpoint-6 transfer size           register
    uint8_t _reserved44[12];
    volatile uint32_t OTG_HS_DOEPCTL7;  ///< OTG device endpoint-7 control           register
    uint8_t _reserved45[4];
    volatile uint32_t OTG_HS_DOEPINT7;  ///< OTG_HS device endpoint-7 interrupt           register
    uint8_t _reserved46[4];
    volatile uint32_t OTG_HS_DOEPTSIZ7;  ///< OTG_HS device endpoint-7 transfer size           register
};

/** USB 1 on the go high speed */
struct OTG2_HS_DEVICE_t {
    volatile uint32_t OTG_HS_DCFG;  ///< OTG_HS device configuration           register
    volatile uint32_t OTG_HS_DCTL;  ///< OTG_HS device control register
    volatile uint32_t OTG_HS_DSTS;  ///< OTG_HS device status register
    uint8_t _reserved0[4];
    volatile uint32_t OTG_HS_DIEPMSK;  ///< OTG_HS device IN endpoint common interrupt           mask...
    volatile uint32_t OTG_HS_DOEPMSK;  ///< OTG_HS device OUT endpoint common interrupt           mas...
    volatile uint32_t OTG_HS_DAINT;  ///< OTG_HS device all endpoints interrupt           register
    volatile uint32_t OTG_HS_DAINTMSK;  ///< OTG_HS all endpoints interrupt mask           register
    uint8_t _reserved1[8];
    volatile uint32_t OTG_HS_DVBUSDIS;  ///< OTG_HS device VBUS discharge time           register
    volatile uint32_t OTG_HS_DVBUSPULSE;  ///< OTG_HS device VBUS pulsing time           register
    volatile uint32_t OTG_HS_DTHRCTL;  ///< OTG_HS Device threshold control           register
    volatile uint32_t OTG_HS_DIEPEMPMSK;  ///< OTG_HS device IN endpoint FIFO empty           interrupt ...
    volatile uint32_t OTG_HS_DEACHINT;  ///< OTG_HS device each endpoint interrupt           register
    volatile uint32_t OTG_HS_DEACHINTMSK;  ///< OTG_HS device each endpoint interrupt           register ...
    uint8_t _reserved2[192];
    volatile uint32_t OTG_HS_DIEPCTL0;  ///< OTG device endpoint-0 control           register
    uint8_t _reserved3[4];
    volatile uint32_t OTG_HS_DIEPINT0;  ///< OTG device endpoint-0 interrupt           register
    uint8_t _reserved4[4];
    volatile uint32_t OTG_HS_DIEPTSIZ0;  ///< OTG_HS device IN endpoint 0 transfer size           register
    volatile uint32_t OTG_HS_DIEPDMA1;  ///< OTG_HS device endpoint-1 DMA address           register
    volatile uint32_t OTG_HS_DTXFSTS0;  ///< OTG_HS device IN endpoint transmit FIFO           status ...
    uint8_t _reserved5[4];
    volatile uint32_t OTG_HS_DIEPCTL1;  ///< OTG device endpoint-1 control           register
    uint8_t _reserved6[4];
    volatile uint32_t OTG_HS_DIEPINT1;  ///< OTG device endpoint-1 interrupt           register
    uint8_t _reserved7[4];
    volatile uint32_t OTG_HS_DIEPTSIZ1;  ///< OTG_HS device endpoint transfer size           register
    volatile uint32_t OTG_HS_DIEPDMA2;  ///< OTG_HS device endpoint-2 DMA address           register
    volatile uint32_t OTG_HS_DTXFSTS1;  ///< OTG_HS device IN endpoint transmit FIFO           status ...
    uint8_t _reserved8[4];
    volatile uint32_t OTG_HS_DIEPCTL2;  ///< OTG device endpoint-2 control           register
    uint8_t _reserved9[4];
    volatile uint32_t OTG_HS_DIEPINT2;  ///< OTG device endpoint-2 interrupt           register
    uint8_t _reserved10[4];
    volatile uint32_t OTG_HS_DIEPTSIZ2;  ///< OTG_HS device endpoint transfer size           register
    volatile uint32_t OTG_HS_DIEPDMA3;  ///< OTG_HS device endpoint-3 DMA address           register
    volatile uint32_t OTG_HS_DTXFSTS2;  ///< OTG_HS device IN endpoint transmit FIFO           status ...
    uint8_t _reserved11[4];
    volatile uint32_t OTG_HS_DIEPCTL3;  ///< OTG device endpoint-3 control           register
    uint8_t _reserved12[4];
    volatile uint32_t OTG_HS_DIEPINT3;  ///< OTG device endpoint-3 interrupt           register
    uint8_t _reserved13[4];
    volatile uint32_t OTG_HS_DIEPTSIZ3;  ///< OTG_HS device endpoint transfer size           register
    volatile uint32_t OTG_HS_DIEPDMA4;  ///< OTG_HS device endpoint-4 DMA address           register
    volatile uint32_t OTG_HS_DTXFSTS3;  ///< OTG_HS device IN endpoint transmit FIFO           status ...
    uint8_t _reserved14[4];
    volatile uint32_t OTG_HS_DIEPCTL4;  ///< OTG device endpoint-4 control           register
    uint8_t _reserved15[4];
    volatile uint32_t OTG_HS_DIEPINT4;  ///< OTG device endpoint-4 interrupt           register
    uint8_t _reserved16[4];
    volatile uint32_t OTG_HS_DIEPTSIZ4;  ///< OTG_HS device endpoint transfer size           register
    volatile uint32_t OTG_HS_DIEPDMA5;  ///< OTG_HS device endpoint-5 DMA address           register
    volatile uint32_t OTG_HS_DTXFSTS4;  ///< OTG_HS device IN endpoint transmit FIFO           status ...
    uint8_t _reserved17[4];
    volatile uint32_t OTG_HS_DIEPCTL5;  ///< OTG device endpoint-5 control           register
    volatile uint32_t OTG_HS_DIEPTSIZ6;  ///< OTG_HS device endpoint transfer size           register
    volatile uint32_t OTG_HS_DTXFSTS6;  ///< OTG_HS device IN endpoint transmit FIFO           status ...
    volatile uint32_t OTG_HS_DIEPINT5;  ///< OTG device endpoint-5 interrupt           register
    volatile uint32_t OTG_HS_DIEPTSIZ7;  ///< OTG_HS device endpoint transfer size           register
    volatile uint32_t OTG_HS_DTXFSTS7;  ///< OTG_HS device IN endpoint transmit FIFO           status ...
    volatile uint32_t OTG_HS_DIEPTSIZ5;  ///< OTG_HS device endpoint transfer size           register
    uint8_t _reserved18[4];
    volatile uint32_t OTG_HS_DTXFSTS5;  ///< OTG_HS device IN endpoint transmit FIFO           status ...
    uint8_t _reserved19[4];
    volatile uint32_t OTG_HS_DIEPCTL6;  ///< OTG device endpoint-6 control           register
    uint8_t _reserved20[4];
    volatile uint32_t OTG_HS_DIEPINT6;  ///< OTG device endpoint-6 interrupt           register
    uint8_t _reserved21[20];
    volatile uint32_t OTG_HS_DIEPCTL7;  ///< OTG device endpoint-7 control           register
    uint8_t _reserved22[4];
    volatile uint32_t OTG_HS_DIEPINT7;  ///< OTG device endpoint-7 interrupt           register
    uint8_t _reserved23[276];
    volatile uint32_t OTG_HS_DOEPCTL0;  ///< OTG_HS device control OUT endpoint 0 control           re...
    uint8_t _reserved24[4];
    volatile uint32_t OTG_HS_DOEPINT0;  ///< OTG_HS device endpoint-0 interrupt           register
    uint8_t _reserved25[4];
    volatile uint32_t OTG_HS_DOEPTSIZ0;  ///< OTG_HS device endpoint-0 transfer size           register
    uint8_t _reserved26[12];
    volatile uint32_t OTG_HS_DOEPCTL1;  ///< OTG device endpoint-1 control           register
    uint8_t _reserved27[4];
    volatile uint32_t OTG_HS_DOEPINT1;  ///< OTG_HS device endpoint-1 interrupt           register
    uint8_t _reserved28[4];
    volatile uint32_t OTG_HS_DOEPTSIZ1;  ///< OTG_HS device endpoint-1 transfer size           register
    uint8_t _reserved29[12];
    volatile uint32_t OTG_HS_DOEPCTL2;  ///< OTG device endpoint-2 control           register
    uint8_t _reserved30[4];
    volatile uint32_t OTG_HS_DOEPINT2;  ///< OTG_HS device endpoint-2 interrupt           register
    uint8_t _reserved31[4];
    volatile uint32_t OTG_HS_DOEPTSIZ2;  ///< OTG_HS device endpoint-2 transfer size           register
    uint8_t _reserved32[12];
    volatile uint32_t OTG_HS_DOEPCTL3;  ///< OTG device endpoint-3 control           register
    uint8_t _reserved33[4];
    volatile uint32_t OTG_HS_DOEPINT3;  ///< OTG_HS device endpoint-3 interrupt           register
    uint8_t _reserved34[4];
    volatile uint32_t OTG_HS_DOEPTSIZ3;  ///< OTG_HS device endpoint-3 transfer size           register
    uint8_t _reserved35[12];
    volatile uint32_t OTG_HS_DOEPCTL4;  ///< OTG device endpoint-4 control           register
    uint8_t _reserved36[4];
    volatile uint32_t OTG_HS_DOEPINT4;  ///< OTG_HS device endpoint-4 interrupt           register
    uint8_t _reserved37[4];
    volatile uint32_t OTG_HS_DOEPTSIZ4;  ///< OTG_HS device endpoint-4 transfer size           register
    uint8_t _reserved38[12];
    volatile uint32_t OTG_HS_DOEPCTL5;  ///< OTG device endpoint-5 control           register
    uint8_t _reserved39[4];
    volatile uint32_t OTG_HS_DOEPINT5;  ///< OTG_HS device endpoint-5 interrupt           register
    uint8_t _reserved40[4];
    volatile uint32_t OTG_HS_DOEPTSIZ5;  ///< OTG_HS device endpoint-5 transfer size           register
    uint8_t _reserved41[12];
    volatile uint32_t OTG_HS_DOEPCTL6;  ///< OTG device endpoint-6 control           register
    uint8_t _reserved42[4];
    volatile uint32_t OTG_HS_DOEPINT6;  ///< OTG_HS device endpoint-6 interrupt           register
    uint8_t _reserved43[4];
    volatile uint32_t OTG_HS_DOEPTSIZ6;  ///< OTG_HS device endpoint-6 transfer size           register
    uint8_t _reserved44[12];
    volatile uint32_t OTG_HS_DOEPCTL7;  ///< OTG device endpoint-7 control           register
    uint8_t _reserved45[4];
    volatile uint32_t OTG_HS_DOEPINT7;  ///< OTG_HS device endpoint-7 interrupt           register
    uint8_t _reserved46[4];
    volatile uint32_t OTG_HS_DOEPTSIZ7;  ///< OTG_HS device endpoint-7 transfer size           register
};

/** USB 1 on the go high speed */
struct OTG1_HS_PWRCLK_t {
    volatile uint32_t OTG_HS_PCGCR;  ///< Power and clock gating control           register
};

/** USB 1 on the go high speed */
struct OTG2_HS_PWRCLK_t {
    volatile uint32_t OTG_HS_PCGCR;  ///< Power and clock gating control           register
};

namespace OTG1_HS_GLOBAL {
    // OTG_HS_GOTGCTL fields
    inline constexpr uint32_t OTG_HS_GOTGCTL_SRQSCS_Pos = 0;
    inline constexpr uint32_t OTG_HS_GOTGCTL_SRQSCS_Msk = 0x00000001;
    inline constexpr uint32_t OTG_HS_GOTGCTL_SRQSCS = (1U << 0);
    inline constexpr uint32_t OTG_HS_GOTGCTL_SRQ_Pos = 1;
    inline constexpr uint32_t OTG_HS_GOTGCTL_SRQ_Msk = 0x00000002;
    inline constexpr uint32_t OTG_HS_GOTGCTL_SRQ = (1U << 1);
    inline constexpr uint32_t OTG_HS_GOTGCTL_VBVALOEN_Pos = 2;
    inline constexpr uint32_t OTG_HS_GOTGCTL_VBVALOEN_Msk = 0x00000004;
    inline constexpr uint32_t OTG_HS_GOTGCTL_VBVALOEN = (1U << 2);
    inline constexpr uint32_t OTG_HS_GOTGCTL_VBVALOVAL_Pos = 3;
    inline constexpr uint32_t OTG_HS_GOTGCTL_VBVALOVAL_Msk = 0x00000008;
    inline constexpr uint32_t OTG_HS_GOTGCTL_VBVALOVAL = (1U << 3);
    inline constexpr uint32_t OTG_HS_GOTGCTL_AVALOEN_Pos = 4;
    inline constexpr uint32_t OTG_HS_GOTGCTL_AVALOEN_Msk = 0x00000010;
    inline constexpr uint32_t OTG_HS_GOTGCTL_AVALOEN = (1U << 4);
    inline constexpr uint32_t OTG_HS_GOTGCTL_AVALOVAL_Pos = 5;
    inline constexpr uint32_t OTG_HS_GOTGCTL_AVALOVAL_Msk = 0x00000020;
    inline constexpr uint32_t OTG_HS_GOTGCTL_AVALOVAL = (1U << 5);
    inline constexpr uint32_t OTG_HS_GOTGCTL_BVALOEN_Pos = 6;
    inline constexpr uint32_t OTG_HS_GOTGCTL_BVALOEN_Msk = 0x00000040;
    inline constexpr uint32_t OTG_HS_GOTGCTL_BVALOEN = (1U << 6);
    inline constexpr uint32_t OTG_HS_GOTGCTL_BVALOVAL_Pos = 7;
    inline constexpr uint32_t OTG_HS_GOTGCTL_BVALOVAL_Msk = 0x00000080;
    inline constexpr uint32_t OTG_HS_GOTGCTL_BVALOVAL = (1U << 7);
    inline constexpr uint32_t OTG_HS_GOTGCTL_HNGSCS_Pos = 8;
    inline constexpr uint32_t OTG_HS_GOTGCTL_HNGSCS_Msk = 0x00000100;
    inline constexpr uint32_t OTG_HS_GOTGCTL_HNGSCS = (1U << 8);
    inline constexpr uint32_t OTG_HS_GOTGCTL_HNPRQ_Pos = 9;
    inline constexpr uint32_t OTG_HS_GOTGCTL_HNPRQ_Msk = 0x00000200;
    inline constexpr uint32_t OTG_HS_GOTGCTL_HNPRQ = (1U << 9);
    inline constexpr uint32_t OTG_HS_GOTGCTL_HSHNPEN_Pos = 10;
    inline constexpr uint32_t OTG_HS_GOTGCTL_HSHNPEN_Msk = 0x00000400;
    inline constexpr uint32_t OTG_HS_GOTGCTL_HSHNPEN = (1U << 10);
    inline constexpr uint32_t OTG_HS_GOTGCTL_DHNPEN_Pos = 11;
    inline constexpr uint32_t OTG_HS_GOTGCTL_DHNPEN_Msk = 0x00000800;
    inline constexpr uint32_t OTG_HS_GOTGCTL_DHNPEN = (1U << 11);
    inline constexpr uint32_t OTG_HS_GOTGCTL_EHEN_Pos = 12;
    inline constexpr uint32_t OTG_HS_GOTGCTL_EHEN_Msk = 0x00001000;
    inline constexpr uint32_t OTG_HS_GOTGCTL_EHEN = (1U << 12);
    inline constexpr uint32_t OTG_HS_GOTGCTL_CIDSTS_Pos = 16;
    inline constexpr uint32_t OTG_HS_GOTGCTL_CIDSTS_Msk = 0x00010000;
    inline constexpr uint32_t OTG_HS_GOTGCTL_CIDSTS = (1U << 16);
    inline constexpr uint32_t OTG_HS_GOTGCTL_DBCT_Pos = 17;
    inline constexpr uint32_t OTG_HS_GOTGCTL_DBCT_Msk = 0x00020000;
    inline constexpr uint32_t OTG_HS_GOTGCTL_DBCT = (1U << 17);
    inline constexpr uint32_t OTG_HS_GOTGCTL_ASVLD_Pos = 18;
    inline constexpr uint32_t OTG_HS_GOTGCTL_ASVLD_Msk = 0x00040000;
    inline constexpr uint32_t OTG_HS_GOTGCTL_ASVLD = (1U << 18);
    inline constexpr uint32_t OTG_HS_GOTGCTL_BSVLD_Pos = 19;
    inline constexpr uint32_t OTG_HS_GOTGCTL_BSVLD_Msk = 0x00080000;
    inline constexpr uint32_t OTG_HS_GOTGCTL_BSVLD = (1U << 19);
    inline constexpr uint32_t OTG_HS_GOTGCTL_OTGVER_Pos = 20;
    inline constexpr uint32_t OTG_HS_GOTGCTL_OTGVER_Msk = 0x00100000;
    inline constexpr uint32_t OTG_HS_GOTGCTL_OTGVER = (1U << 20);
    inline constexpr uint32_t OTG_HS_GOTGCTL_CURMOD_Pos = 21;
    inline constexpr uint32_t OTG_HS_GOTGCTL_CURMOD_Msk = 0x00200000;
    inline constexpr uint32_t OTG_HS_GOTGCTL_CURMOD = (1U << 21);

    // OTG_HS_GOTGINT fields
    inline constexpr uint32_t OTG_HS_GOTGINT_SEDET_Pos = 2;
    inline constexpr uint32_t OTG_HS_GOTGINT_SEDET_Msk = 0x00000004;
    inline constexpr uint32_t OTG_HS_GOTGINT_SEDET = (1U << 2);
    inline constexpr uint32_t OTG_HS_GOTGINT_SRSSCHG_Pos = 8;
    inline constexpr uint32_t OTG_HS_GOTGINT_SRSSCHG_Msk = 0x00000100;
    inline constexpr uint32_t OTG_HS_GOTGINT_SRSSCHG = (1U << 8);
    inline constexpr uint32_t OTG_HS_GOTGINT_HNSSCHG_Pos = 9;
    inline constexpr uint32_t OTG_HS_GOTGINT_HNSSCHG_Msk = 0x00000200;
    inline constexpr uint32_t OTG_HS_GOTGINT_HNSSCHG = (1U << 9);
    inline constexpr uint32_t OTG_HS_GOTGINT_HNGDET_Pos = 17;
    inline constexpr uint32_t OTG_HS_GOTGINT_HNGDET_Msk = 0x00020000;
    inline constexpr uint32_t OTG_HS_GOTGINT_HNGDET = (1U << 17);
    inline constexpr uint32_t OTG_HS_GOTGINT_ADTOCHG_Pos = 18;
    inline constexpr uint32_t OTG_HS_GOTGINT_ADTOCHG_Msk = 0x00040000;
    inline constexpr uint32_t OTG_HS_GOTGINT_ADTOCHG = (1U << 18);
    inline constexpr uint32_t OTG_HS_GOTGINT_DBCDNE_Pos = 19;
    inline constexpr uint32_t OTG_HS_GOTGINT_DBCDNE_Msk = 0x00080000;
    inline constexpr uint32_t OTG_HS_GOTGINT_DBCDNE = (1U << 19);
    inline constexpr uint32_t OTG_HS_GOTGINT_IDCHNG_Pos = 20;
    inline constexpr uint32_t OTG_HS_GOTGINT_IDCHNG_Msk = 0x00100000;
    inline constexpr uint32_t OTG_HS_GOTGINT_IDCHNG = (1U << 20);

    // OTG_HS_GAHBCFG fields
    inline constexpr uint32_t OTG_HS_GAHBCFG_GINT_Pos = 0;
    inline constexpr uint32_t OTG_HS_GAHBCFG_GINT_Msk = 0x00000001;
    inline constexpr uint32_t OTG_HS_GAHBCFG_GINT = (1U << 0);
    inline constexpr uint32_t OTG_HS_GAHBCFG_HBSTLEN_Pos = 1;
    inline constexpr uint32_t OTG_HS_GAHBCFG_HBSTLEN_Msk = 0x0000001E;
    inline constexpr uint32_t OTG_HS_GAHBCFG_DMAEN_Pos = 5;
    inline constexpr uint32_t OTG_HS_GAHBCFG_DMAEN_Msk = 0x00000020;
    inline constexpr uint32_t OTG_HS_GAHBCFG_DMAEN = (1U << 5);
    inline constexpr uint32_t OTG_HS_GAHBCFG_TXFELVL_Pos = 7;
    inline constexpr uint32_t OTG_HS_GAHBCFG_TXFELVL_Msk = 0x00000080;
    inline constexpr uint32_t OTG_HS_GAHBCFG_TXFELVL = (1U << 7);
    inline constexpr uint32_t OTG_HS_GAHBCFG_PTXFELVL_Pos = 8;
    inline constexpr uint32_t OTG_HS_GAHBCFG_PTXFELVL_Msk = 0x00000100;
    inline constexpr uint32_t OTG_HS_GAHBCFG_PTXFELVL = (1U << 8);

    // OTG_HS_GUSBCFG fields
    inline constexpr uint32_t OTG_HS_GUSBCFG_TOCAL_Pos = 0;
    inline constexpr uint32_t OTG_HS_GUSBCFG_TOCAL_Msk = 0x00000007;
    inline constexpr uint32_t OTG_HS_GUSBCFG_PHYSEL_Pos = 6;
    inline constexpr uint32_t OTG_HS_GUSBCFG_PHYSEL_Msk = 0x00000040;
    inline constexpr uint32_t OTG_HS_GUSBCFG_PHYSEL = (1U << 6);
    inline constexpr uint32_t OTG_HS_GUSBCFG_SRPCAP_Pos = 8;
    inline constexpr uint32_t OTG_HS_GUSBCFG_SRPCAP_Msk = 0x00000100;
    inline constexpr uint32_t OTG_HS_GUSBCFG_SRPCAP = (1U << 8);
    inline constexpr uint32_t OTG_HS_GUSBCFG_HNPCAP_Pos = 9;
    inline constexpr uint32_t OTG_HS_GUSBCFG_HNPCAP_Msk = 0x00000200;
    inline constexpr uint32_t OTG_HS_GUSBCFG_HNPCAP = (1U << 9);
    inline constexpr uint32_t OTG_HS_GUSBCFG_TRDT_Pos = 10;
    inline constexpr uint32_t OTG_HS_GUSBCFG_TRDT_Msk = 0x00003C00;
    inline constexpr uint32_t OTG_HS_GUSBCFG_PHYLPCS_Pos = 15;
    inline constexpr uint32_t OTG_HS_GUSBCFG_PHYLPCS_Msk = 0x00008000;
    inline constexpr uint32_t OTG_HS_GUSBCFG_PHYLPCS = (1U << 15);
    inline constexpr uint32_t OTG_HS_GUSBCFG_ULPIFSLS_Pos = 17;
    inline constexpr uint32_t OTG_HS_GUSBCFG_ULPIFSLS_Msk = 0x00020000;
    inline constexpr uint32_t OTG_HS_GUSBCFG_ULPIFSLS = (1U << 17);
    inline constexpr uint32_t OTG_HS_GUSBCFG_ULPIAR_Pos = 18;
    inline constexpr uint32_t OTG_HS_GUSBCFG_ULPIAR_Msk = 0x00040000;
    inline constexpr uint32_t OTG_HS_GUSBCFG_ULPIAR = (1U << 18);
    inline constexpr uint32_t OTG_HS_GUSBCFG_ULPICSM_Pos = 19;
    inline constexpr uint32_t OTG_HS_GUSBCFG_ULPICSM_Msk = 0x00080000;
    inline constexpr uint32_t OTG_HS_GUSBCFG_ULPICSM = (1U << 19);
    inline constexpr uint32_t OTG_HS_GUSBCFG_ULPIEVBUSD_Pos = 20;
    inline constexpr uint32_t OTG_HS_GUSBCFG_ULPIEVBUSD_Msk = 0x00100000;
    inline constexpr uint32_t OTG_HS_GUSBCFG_ULPIEVBUSD = (1U << 20);
    inline constexpr uint32_t OTG_HS_GUSBCFG_ULPIEVBUSI_Pos = 21;
    inline constexpr uint32_t OTG_HS_GUSBCFG_ULPIEVBUSI_Msk = 0x00200000;
    inline constexpr uint32_t OTG_HS_GUSBCFG_ULPIEVBUSI = (1U << 21);
    inline constexpr uint32_t OTG_HS_GUSBCFG_TSDPS_Pos = 22;
    inline constexpr uint32_t OTG_HS_GUSBCFG_TSDPS_Msk = 0x00400000;
    inline constexpr uint32_t OTG_HS_GUSBCFG_TSDPS = (1U << 22);
    inline constexpr uint32_t OTG_HS_GUSBCFG_PCCI_Pos = 23;
    inline constexpr uint32_t OTG_HS_GUSBCFG_PCCI_Msk = 0x00800000;
    inline constexpr uint32_t OTG_HS_GUSBCFG_PCCI = (1U << 23);
    inline constexpr uint32_t OTG_HS_GUSBCFG_PTCI_Pos = 24;
    inline constexpr uint32_t OTG_HS_GUSBCFG_PTCI_Msk = 0x01000000;
    inline constexpr uint32_t OTG_HS_GUSBCFG_PTCI = (1U << 24);
    inline constexpr uint32_t OTG_HS_GUSBCFG_ULPIIPD_Pos = 25;
    inline constexpr uint32_t OTG_HS_GUSBCFG_ULPIIPD_Msk = 0x02000000;
    inline constexpr uint32_t OTG_HS_GUSBCFG_ULPIIPD = (1U << 25);
    inline constexpr uint32_t OTG_HS_GUSBCFG_FHMOD_Pos = 29;
    inline constexpr uint32_t OTG_HS_GUSBCFG_FHMOD_Msk = 0x20000000;
    inline constexpr uint32_t OTG_HS_GUSBCFG_FHMOD = (1U << 29);
    inline constexpr uint32_t OTG_HS_GUSBCFG_FDMOD_Pos = 30;
    inline constexpr uint32_t OTG_HS_GUSBCFG_FDMOD_Msk = 0x40000000;
    inline constexpr uint32_t OTG_HS_GUSBCFG_FDMOD = (1U << 30);

    // OTG_HS_GRSTCTL fields
    inline constexpr uint32_t OTG_HS_GRSTCTL_CSRST_Pos = 0;
    inline constexpr uint32_t OTG_HS_GRSTCTL_CSRST_Msk = 0x00000001;
    inline constexpr uint32_t OTG_HS_GRSTCTL_CSRST = (1U << 0);
    inline constexpr uint32_t OTG_HS_GRSTCTL_HSRST_Pos = 1;
    inline constexpr uint32_t OTG_HS_GRSTCTL_HSRST_Msk = 0x00000002;
    inline constexpr uint32_t OTG_HS_GRSTCTL_HSRST = (1U << 1);
    inline constexpr uint32_t OTG_HS_GRSTCTL_FCRST_Pos = 2;
    inline constexpr uint32_t OTG_HS_GRSTCTL_FCRST_Msk = 0x00000004;
    inline constexpr uint32_t OTG_HS_GRSTCTL_FCRST = (1U << 2);
    inline constexpr uint32_t OTG_HS_GRSTCTL_RXFFLSH_Pos = 4;
    inline constexpr uint32_t OTG_HS_GRSTCTL_RXFFLSH_Msk = 0x00000010;
    inline constexpr uint32_t OTG_HS_GRSTCTL_RXFFLSH = (1U << 4);
    inline constexpr uint32_t OTG_HS_GRSTCTL_TXFFLSH_Pos = 5;
    inline constexpr uint32_t OTG_HS_GRSTCTL_TXFFLSH_Msk = 0x00000020;
    inline constexpr uint32_t OTG_HS_GRSTCTL_TXFFLSH = (1U << 5);
    inline constexpr uint32_t OTG_HS_GRSTCTL_TXFNUM_Pos = 6;
    inline constexpr uint32_t OTG_HS_GRSTCTL_TXFNUM_Msk = 0x000007C0;
    inline constexpr uint32_t OTG_HS_GRSTCTL_DMAREQ_Pos = 30;
    inline constexpr uint32_t OTG_HS_GRSTCTL_DMAREQ_Msk = 0x40000000;
    inline constexpr uint32_t OTG_HS_GRSTCTL_DMAREQ = (1U << 30);
    inline constexpr uint32_t OTG_HS_GRSTCTL_AHBIDL_Pos = 31;
    inline constexpr uint32_t OTG_HS_GRSTCTL_AHBIDL_Msk = 0x80000000;
    inline constexpr uint32_t OTG_HS_GRSTCTL_AHBIDL = (1U << 31);

    // OTG_HS_GINTSTS fields
    inline constexpr uint32_t OTG_HS_GINTSTS_CMOD_Pos = 0;
    inline constexpr uint32_t OTG_HS_GINTSTS_CMOD_Msk = 0x00000001;
    inline constexpr uint32_t OTG_HS_GINTSTS_CMOD = (1U << 0);
    inline constexpr uint32_t OTG_HS_GINTSTS_MMIS_Pos = 1;
    inline constexpr uint32_t OTG_HS_GINTSTS_MMIS_Msk = 0x00000002;
    inline constexpr uint32_t OTG_HS_GINTSTS_MMIS = (1U << 1);
    inline constexpr uint32_t OTG_HS_GINTSTS_OTGINT_Pos = 2;
    inline constexpr uint32_t OTG_HS_GINTSTS_OTGINT_Msk = 0x00000004;
    inline constexpr uint32_t OTG_HS_GINTSTS_OTGINT = (1U << 2);
    inline constexpr uint32_t OTG_HS_GINTSTS_SOF_Pos = 3;
    inline constexpr uint32_t OTG_HS_GINTSTS_SOF_Msk = 0x00000008;
    inline constexpr uint32_t OTG_HS_GINTSTS_SOF = (1U << 3);
    inline constexpr uint32_t OTG_HS_GINTSTS_RXFLVL_Pos = 4;
    inline constexpr uint32_t OTG_HS_GINTSTS_RXFLVL_Msk = 0x00000010;
    inline constexpr uint32_t OTG_HS_GINTSTS_RXFLVL = (1U << 4);
    inline constexpr uint32_t OTG_HS_GINTSTS_NPTXFE_Pos = 5;
    inline constexpr uint32_t OTG_HS_GINTSTS_NPTXFE_Msk = 0x00000020;
    inline constexpr uint32_t OTG_HS_GINTSTS_NPTXFE = (1U << 5);
    inline constexpr uint32_t OTG_HS_GINTSTS_GINAKEFF_Pos = 6;
    inline constexpr uint32_t OTG_HS_GINTSTS_GINAKEFF_Msk = 0x00000040;
    inline constexpr uint32_t OTG_HS_GINTSTS_GINAKEFF = (1U << 6);
    inline constexpr uint32_t OTG_HS_GINTSTS_BOUTNAKEFF_Pos = 7;
    inline constexpr uint32_t OTG_HS_GINTSTS_BOUTNAKEFF_Msk = 0x00000080;
    inline constexpr uint32_t OTG_HS_GINTSTS_BOUTNAKEFF = (1U << 7);
    inline constexpr uint32_t OTG_HS_GINTSTS_ESUSP_Pos = 10;
    inline constexpr uint32_t OTG_HS_GINTSTS_ESUSP_Msk = 0x00000400;
    inline constexpr uint32_t OTG_HS_GINTSTS_ESUSP = (1U << 10);
    inline constexpr uint32_t OTG_HS_GINTSTS_USBSUSP_Pos = 11;
    inline constexpr uint32_t OTG_HS_GINTSTS_USBSUSP_Msk = 0x00000800;
    inline constexpr uint32_t OTG_HS_GINTSTS_USBSUSP = (1U << 11);
    inline constexpr uint32_t OTG_HS_GINTSTS_USBRST_Pos = 12;
    inline constexpr uint32_t OTG_HS_GINTSTS_USBRST_Msk = 0x00001000;
    inline constexpr uint32_t OTG_HS_GINTSTS_USBRST = (1U << 12);
    inline constexpr uint32_t OTG_HS_GINTSTS_ENUMDNE_Pos = 13;
    inline constexpr uint32_t OTG_HS_GINTSTS_ENUMDNE_Msk = 0x00002000;
    inline constexpr uint32_t OTG_HS_GINTSTS_ENUMDNE = (1U << 13);
    inline constexpr uint32_t OTG_HS_GINTSTS_ISOODRP_Pos = 14;
    inline constexpr uint32_t OTG_HS_GINTSTS_ISOODRP_Msk = 0x00004000;
    inline constexpr uint32_t OTG_HS_GINTSTS_ISOODRP = (1U << 14);
    inline constexpr uint32_t OTG_HS_GINTSTS_EOPF_Pos = 15;
    inline constexpr uint32_t OTG_HS_GINTSTS_EOPF_Msk = 0x00008000;
    inline constexpr uint32_t OTG_HS_GINTSTS_EOPF = (1U << 15);
    inline constexpr uint32_t OTG_HS_GINTSTS_IEPINT_Pos = 18;
    inline constexpr uint32_t OTG_HS_GINTSTS_IEPINT_Msk = 0x00040000;
    inline constexpr uint32_t OTG_HS_GINTSTS_IEPINT = (1U << 18);
    inline constexpr uint32_t OTG_HS_GINTSTS_OEPINT_Pos = 19;
    inline constexpr uint32_t OTG_HS_GINTSTS_OEPINT_Msk = 0x00080000;
    inline constexpr uint32_t OTG_HS_GINTSTS_OEPINT = (1U << 19);
    inline constexpr uint32_t OTG_HS_GINTSTS_IISOIXFR_Pos = 20;
    inline constexpr uint32_t OTG_HS_GINTSTS_IISOIXFR_Msk = 0x00100000;
    inline constexpr uint32_t OTG_HS_GINTSTS_IISOIXFR = (1U << 20);
    inline constexpr uint32_t OTG_HS_GINTSTS_PXFR_INCOMPISOOUT_Pos = 21;
    inline constexpr uint32_t OTG_HS_GINTSTS_PXFR_INCOMPISOOUT_Msk = 0x00200000;
    inline constexpr uint32_t OTG_HS_GINTSTS_PXFR_INCOMPISOOUT = (1U << 21);
    inline constexpr uint32_t OTG_HS_GINTSTS_DATAFSUSP_Pos = 22;
    inline constexpr uint32_t OTG_HS_GINTSTS_DATAFSUSP_Msk = 0x00400000;
    inline constexpr uint32_t OTG_HS_GINTSTS_DATAFSUSP = (1U << 22);
    inline constexpr uint32_t OTG_HS_GINTSTS_HPRTINT_Pos = 24;
    inline constexpr uint32_t OTG_HS_GINTSTS_HPRTINT_Msk = 0x01000000;
    inline constexpr uint32_t OTG_HS_GINTSTS_HPRTINT = (1U << 24);
    inline constexpr uint32_t OTG_HS_GINTSTS_HCINT_Pos = 25;
    inline constexpr uint32_t OTG_HS_GINTSTS_HCINT_Msk = 0x02000000;
    inline constexpr uint32_t OTG_HS_GINTSTS_HCINT = (1U << 25);
    inline constexpr uint32_t OTG_HS_GINTSTS_PTXFE_Pos = 26;
    inline constexpr uint32_t OTG_HS_GINTSTS_PTXFE_Msk = 0x04000000;
    inline constexpr uint32_t OTG_HS_GINTSTS_PTXFE = (1U << 26);
    inline constexpr uint32_t OTG_HS_GINTSTS_CIDSCHG_Pos = 28;
    inline constexpr uint32_t OTG_HS_GINTSTS_CIDSCHG_Msk = 0x10000000;
    inline constexpr uint32_t OTG_HS_GINTSTS_CIDSCHG = (1U << 28);
    inline constexpr uint32_t OTG_HS_GINTSTS_DISCINT_Pos = 29;
    inline constexpr uint32_t OTG_HS_GINTSTS_DISCINT_Msk = 0x20000000;
    inline constexpr uint32_t OTG_HS_GINTSTS_DISCINT = (1U << 29);
    inline constexpr uint32_t OTG_HS_GINTSTS_SRQINT_Pos = 30;
    inline constexpr uint32_t OTG_HS_GINTSTS_SRQINT_Msk = 0x40000000;
    inline constexpr uint32_t OTG_HS_GINTSTS_SRQINT = (1U << 30);
    inline constexpr uint32_t OTG_HS_GINTSTS_WKUINT_Pos = 31;
    inline constexpr uint32_t OTG_HS_GINTSTS_WKUINT_Msk = 0x80000000;
    inline constexpr uint32_t OTG_HS_GINTSTS_WKUINT = (1U << 31);

    // OTG_HS_GINTMSK fields
    inline constexpr uint32_t OTG_HS_GINTMSK_MMISM_Pos = 1;
    inline constexpr uint32_t OTG_HS_GINTMSK_MMISM_Msk = 0x00000002;
    inline constexpr uint32_t OTG_HS_GINTMSK_MMISM = (1U << 1);
    inline constexpr uint32_t OTG_HS_GINTMSK_OTGINT_Pos = 2;
    inline constexpr uint32_t OTG_HS_GINTMSK_OTGINT_Msk = 0x00000004;
    inline constexpr uint32_t OTG_HS_GINTMSK_OTGINT = (1U << 2);
    inline constexpr uint32_t OTG_HS_GINTMSK_SOFM_Pos = 3;
    inline constexpr uint32_t OTG_HS_GINTMSK_SOFM_Msk = 0x00000008;
    inline constexpr uint32_t OTG_HS_GINTMSK_SOFM = (1U << 3);
    inline constexpr uint32_t OTG_HS_GINTMSK_RXFLVLM_Pos = 4;
    inline constexpr uint32_t OTG_HS_GINTMSK_RXFLVLM_Msk = 0x00000010;
    inline constexpr uint32_t OTG_HS_GINTMSK_RXFLVLM = (1U << 4);
    inline constexpr uint32_t OTG_HS_GINTMSK_NPTXFEM_Pos = 5;
    inline constexpr uint32_t OTG_HS_GINTMSK_NPTXFEM_Msk = 0x00000020;
    inline constexpr uint32_t OTG_HS_GINTMSK_NPTXFEM = (1U << 5);
    inline constexpr uint32_t OTG_HS_GINTMSK_GINAKEFFM_Pos = 6;
    inline constexpr uint32_t OTG_HS_GINTMSK_GINAKEFFM_Msk = 0x00000040;
    inline constexpr uint32_t OTG_HS_GINTMSK_GINAKEFFM = (1U << 6);
    inline constexpr uint32_t OTG_HS_GINTMSK_GONAKEFFM_Pos = 7;
    inline constexpr uint32_t OTG_HS_GINTMSK_GONAKEFFM_Msk = 0x00000080;
    inline constexpr uint32_t OTG_HS_GINTMSK_GONAKEFFM = (1U << 7);
    inline constexpr uint32_t OTG_HS_GINTMSK_ESUSPM_Pos = 10;
    inline constexpr uint32_t OTG_HS_GINTMSK_ESUSPM_Msk = 0x00000400;
    inline constexpr uint32_t OTG_HS_GINTMSK_ESUSPM = (1U << 10);
    inline constexpr uint32_t OTG_HS_GINTMSK_USBSUSPM_Pos = 11;
    inline constexpr uint32_t OTG_HS_GINTMSK_USBSUSPM_Msk = 0x00000800;
    inline constexpr uint32_t OTG_HS_GINTMSK_USBSUSPM = (1U << 11);
    inline constexpr uint32_t OTG_HS_GINTMSK_USBRST_Pos = 12;
    inline constexpr uint32_t OTG_HS_GINTMSK_USBRST_Msk = 0x00001000;
    inline constexpr uint32_t OTG_HS_GINTMSK_USBRST = (1U << 12);
    inline constexpr uint32_t OTG_HS_GINTMSK_ENUMDNEM_Pos = 13;
    inline constexpr uint32_t OTG_HS_GINTMSK_ENUMDNEM_Msk = 0x00002000;
    inline constexpr uint32_t OTG_HS_GINTMSK_ENUMDNEM = (1U << 13);
    inline constexpr uint32_t OTG_HS_GINTMSK_ISOODRPM_Pos = 14;
    inline constexpr uint32_t OTG_HS_GINTMSK_ISOODRPM_Msk = 0x00004000;
    inline constexpr uint32_t OTG_HS_GINTMSK_ISOODRPM = (1U << 14);
    inline constexpr uint32_t OTG_HS_GINTMSK_EOPFM_Pos = 15;
    inline constexpr uint32_t OTG_HS_GINTMSK_EOPFM_Msk = 0x00008000;
    inline constexpr uint32_t OTG_HS_GINTMSK_EOPFM = (1U << 15);
    inline constexpr uint32_t OTG_HS_GINTMSK_IEPINT_Pos = 18;
    inline constexpr uint32_t OTG_HS_GINTMSK_IEPINT_Msk = 0x00040000;
    inline constexpr uint32_t OTG_HS_GINTMSK_IEPINT = (1U << 18);
    inline constexpr uint32_t OTG_HS_GINTMSK_OEPINT_Pos = 19;
    inline constexpr uint32_t OTG_HS_GINTMSK_OEPINT_Msk = 0x00080000;
    inline constexpr uint32_t OTG_HS_GINTMSK_OEPINT = (1U << 19);
    inline constexpr uint32_t OTG_HS_GINTMSK_IISOIXFRM_Pos = 20;
    inline constexpr uint32_t OTG_HS_GINTMSK_IISOIXFRM_Msk = 0x00100000;
    inline constexpr uint32_t OTG_HS_GINTMSK_IISOIXFRM = (1U << 20);
    inline constexpr uint32_t OTG_HS_GINTMSK_PXFRM_IISOOXFRM_Pos = 21;
    inline constexpr uint32_t OTG_HS_GINTMSK_PXFRM_IISOOXFRM_Msk = 0x00200000;
    inline constexpr uint32_t OTG_HS_GINTMSK_PXFRM_IISOOXFRM = (1U << 21);
    inline constexpr uint32_t OTG_HS_GINTMSK_FSUSPM_Pos = 22;
    inline constexpr uint32_t OTG_HS_GINTMSK_FSUSPM_Msk = 0x00400000;
    inline constexpr uint32_t OTG_HS_GINTMSK_FSUSPM = (1U << 22);
    inline constexpr uint32_t OTG_HS_GINTMSK_RSTDE_Pos = 23;
    inline constexpr uint32_t OTG_HS_GINTMSK_RSTDE_Msk = 0x00800000;
    inline constexpr uint32_t OTG_HS_GINTMSK_RSTDE = (1U << 23);
    inline constexpr uint32_t OTG_HS_GINTMSK_PRTIM_Pos = 24;
    inline constexpr uint32_t OTG_HS_GINTMSK_PRTIM_Msk = 0x01000000;
    inline constexpr uint32_t OTG_HS_GINTMSK_PRTIM = (1U << 24);
    inline constexpr uint32_t OTG_HS_GINTMSK_HCIM_Pos = 25;
    inline constexpr uint32_t OTG_HS_GINTMSK_HCIM_Msk = 0x02000000;
    inline constexpr uint32_t OTG_HS_GINTMSK_HCIM = (1U << 25);
    inline constexpr uint32_t OTG_HS_GINTMSK_PTXFEM_Pos = 26;
    inline constexpr uint32_t OTG_HS_GINTMSK_PTXFEM_Msk = 0x04000000;
    inline constexpr uint32_t OTG_HS_GINTMSK_PTXFEM = (1U << 26);
    inline constexpr uint32_t OTG_HS_GINTMSK_LPMINTM_Pos = 27;
    inline constexpr uint32_t OTG_HS_GINTMSK_LPMINTM_Msk = 0x08000000;
    inline constexpr uint32_t OTG_HS_GINTMSK_LPMINTM = (1U << 27);
    inline constexpr uint32_t OTG_HS_GINTMSK_CIDSCHGM_Pos = 28;
    inline constexpr uint32_t OTG_HS_GINTMSK_CIDSCHGM_Msk = 0x10000000;
    inline constexpr uint32_t OTG_HS_GINTMSK_CIDSCHGM = (1U << 28);
    inline constexpr uint32_t OTG_HS_GINTMSK_DISCINT_Pos = 29;
    inline constexpr uint32_t OTG_HS_GINTMSK_DISCINT_Msk = 0x20000000;
    inline constexpr uint32_t OTG_HS_GINTMSK_DISCINT = (1U << 29);
    inline constexpr uint32_t OTG_HS_GINTMSK_SRQIM_Pos = 30;
    inline constexpr uint32_t OTG_HS_GINTMSK_SRQIM_Msk = 0x40000000;
    inline constexpr uint32_t OTG_HS_GINTMSK_SRQIM = (1U << 30);
    inline constexpr uint32_t OTG_HS_GINTMSK_WUIM_Pos = 31;
    inline constexpr uint32_t OTG_HS_GINTMSK_WUIM_Msk = 0x80000000;
    inline constexpr uint32_t OTG_HS_GINTMSK_WUIM = (1U << 31);

    // OTG_HS_GRXSTSR_Host fields
    inline constexpr uint32_t OTG_HS_GRXSTSR_Host_CHNUM_Pos = 0;
    inline constexpr uint32_t OTG_HS_GRXSTSR_Host_CHNUM_Msk = 0x0000000F;
    inline constexpr uint32_t OTG_HS_GRXSTSR_Host_BCNT_Pos = 4;
    inline constexpr uint32_t OTG_HS_GRXSTSR_Host_BCNT_Msk = 0x00007FF0;
    inline constexpr uint32_t OTG_HS_GRXSTSR_Host_DPID_Pos = 15;
    inline constexpr uint32_t OTG_HS_GRXSTSR_Host_DPID_Msk = 0x00018000;
    inline constexpr uint32_t OTG_HS_GRXSTSR_Host_PKTSTS_Pos = 17;
    inline constexpr uint32_t OTG_HS_GRXSTSR_Host_PKTSTS_Msk = 0x001E0000;

    // OTG_HS_GRXSTSR_Device fields
    inline constexpr uint32_t OTG_HS_GRXSTSR_Device_EPNUM_Pos = 0;
    inline constexpr uint32_t OTG_HS_GRXSTSR_Device_EPNUM_Msk = 0x0000000F;
    inline constexpr uint32_t OTG_HS_GRXSTSR_Device_BCNT_Pos = 4;
    inline constexpr uint32_t OTG_HS_GRXSTSR_Device_BCNT_Msk = 0x00007FF0;
    inline constexpr uint32_t OTG_HS_GRXSTSR_Device_DPID_Pos = 15;
    inline constexpr uint32_t OTG_HS_GRXSTSR_Device_DPID_Msk = 0x00018000;
    inline constexpr uint32_t OTG_HS_GRXSTSR_Device_PKTSTS_Pos = 17;
    inline constexpr uint32_t OTG_HS_GRXSTSR_Device_PKTSTS_Msk = 0x001E0000;
    inline constexpr uint32_t OTG_HS_GRXSTSR_Device_FRMNUM_Pos = 21;
    inline constexpr uint32_t OTG_HS_GRXSTSR_Device_FRMNUM_Msk = 0x01E00000;

    // OTG_HS_GRXSTSP_Host fields
    inline constexpr uint32_t OTG_HS_GRXSTSP_Host_CHNUM_Pos = 0;
    inline constexpr uint32_t OTG_HS_GRXSTSP_Host_CHNUM_Msk = 0x0000000F;
    inline constexpr uint32_t OTG_HS_GRXSTSP_Host_BCNT_Pos = 4;
    inline constexpr uint32_t OTG_HS_GRXSTSP_Host_BCNT_Msk = 0x00007FF0;
    inline constexpr uint32_t OTG_HS_GRXSTSP_Host_DPID_Pos = 15;
    inline constexpr uint32_t OTG_HS_GRXSTSP_Host_DPID_Msk = 0x00018000;
    inline constexpr uint32_t OTG_HS_GRXSTSP_Host_PKTSTS_Pos = 17;
    inline constexpr uint32_t OTG_HS_GRXSTSP_Host_PKTSTS_Msk = 0x001E0000;

    // OTG_HS_GRXSTSP_Device fields
    inline constexpr uint32_t OTG_HS_GRXSTSP_Device_EPNUM_Pos = 0;
    inline constexpr uint32_t OTG_HS_GRXSTSP_Device_EPNUM_Msk = 0x0000000F;
    inline constexpr uint32_t OTG_HS_GRXSTSP_Device_BCNT_Pos = 4;
    inline constexpr uint32_t OTG_HS_GRXSTSP_Device_BCNT_Msk = 0x00007FF0;
    inline constexpr uint32_t OTG_HS_GRXSTSP_Device_DPID_Pos = 15;
    inline constexpr uint32_t OTG_HS_GRXSTSP_Device_DPID_Msk = 0x00018000;
    inline constexpr uint32_t OTG_HS_GRXSTSP_Device_PKTSTS_Pos = 17;
    inline constexpr uint32_t OTG_HS_GRXSTSP_Device_PKTSTS_Msk = 0x001E0000;
    inline constexpr uint32_t OTG_HS_GRXSTSP_Device_FRMNUM_Pos = 21;
    inline constexpr uint32_t OTG_HS_GRXSTSP_Device_FRMNUM_Msk = 0x01E00000;

    // OTG_HS_GRXFSIZ fields
    inline constexpr uint32_t OTG_HS_GRXFSIZ_RXFD_Pos = 0;
    inline constexpr uint32_t OTG_HS_GRXFSIZ_RXFD_Msk = 0x0000FFFF;

    // OTG_HS_HNPTXFSIZ_Host fields
    inline constexpr uint32_t OTG_HS_HNPTXFSIZ_Host_NPTXFSA_Pos = 0;
    inline constexpr uint32_t OTG_HS_HNPTXFSIZ_Host_NPTXFSA_Msk = 0x0000FFFF;
    inline constexpr uint32_t OTG_HS_HNPTXFSIZ_Host_NPTXFD_Pos = 16;
    inline constexpr uint32_t OTG_HS_HNPTXFSIZ_Host_NPTXFD_Msk = 0xFFFF0000;

    // OTG_HS_DIEPTXF0_Device fields
    inline constexpr uint32_t OTG_HS_DIEPTXF0_Device_TX0FSA_Pos = 0;
    inline constexpr uint32_t OTG_HS_DIEPTXF0_Device_TX0FSA_Msk = 0x0000FFFF;
    inline constexpr uint32_t OTG_HS_DIEPTXF0_Device_TX0FD_Pos = 16;
    inline constexpr uint32_t OTG_HS_DIEPTXF0_Device_TX0FD_Msk = 0xFFFF0000;

    // OTG_HS_GNPTXSTS fields
    inline constexpr uint32_t OTG_HS_GNPTXSTS_NPTXFSAV_Pos = 0;
    inline constexpr uint32_t OTG_HS_GNPTXSTS_NPTXFSAV_Msk = 0x0000FFFF;
    inline constexpr uint32_t OTG_HS_GNPTXSTS_NPTQXSAV_Pos = 16;
    inline constexpr uint32_t OTG_HS_GNPTXSTS_NPTQXSAV_Msk = 0x00FF0000;
    inline constexpr uint32_t OTG_HS_GNPTXSTS_NPTXQTOP_Pos = 24;
    inline constexpr uint32_t OTG_HS_GNPTXSTS_NPTXQTOP_Msk = 0x7F000000;

    // OTG_HS_GCCFG fields
    inline constexpr uint32_t OTG_HS_GCCFG_DCDET_Pos = 0;
    inline constexpr uint32_t OTG_HS_GCCFG_DCDET_Msk = 0x00000001;
    inline constexpr uint32_t OTG_HS_GCCFG_DCDET = (1U << 0);
    inline constexpr uint32_t OTG_HS_GCCFG_PDET_Pos = 1;
    inline constexpr uint32_t OTG_HS_GCCFG_PDET_Msk = 0x00000002;
    inline constexpr uint32_t OTG_HS_GCCFG_PDET = (1U << 1);
    inline constexpr uint32_t OTG_HS_GCCFG_SDET_Pos = 2;
    inline constexpr uint32_t OTG_HS_GCCFG_SDET_Msk = 0x00000004;
    inline constexpr uint32_t OTG_HS_GCCFG_SDET = (1U << 2);
    inline constexpr uint32_t OTG_HS_GCCFG_PS2DET_Pos = 3;
    inline constexpr uint32_t OTG_HS_GCCFG_PS2DET_Msk = 0x00000008;
    inline constexpr uint32_t OTG_HS_GCCFG_PS2DET = (1U << 3);
    inline constexpr uint32_t OTG_HS_GCCFG_PWRDWN_Pos = 16;
    inline constexpr uint32_t OTG_HS_GCCFG_PWRDWN_Msk = 0x00010000;
    inline constexpr uint32_t OTG_HS_GCCFG_PWRDWN = (1U << 16);
    inline constexpr uint32_t OTG_HS_GCCFG_BCDEN_Pos = 17;
    inline constexpr uint32_t OTG_HS_GCCFG_BCDEN_Msk = 0x00020000;
    inline constexpr uint32_t OTG_HS_GCCFG_BCDEN = (1U << 17);
    inline constexpr uint32_t OTG_HS_GCCFG_DCDEN_Pos = 18;
    inline constexpr uint32_t OTG_HS_GCCFG_DCDEN_Msk = 0x00040000;
    inline constexpr uint32_t OTG_HS_GCCFG_DCDEN = (1U << 18);
    inline constexpr uint32_t OTG_HS_GCCFG_PDEN_Pos = 19;
    inline constexpr uint32_t OTG_HS_GCCFG_PDEN_Msk = 0x00080000;
    inline constexpr uint32_t OTG_HS_GCCFG_PDEN = (1U << 19);
    inline constexpr uint32_t OTG_HS_GCCFG_SDEN_Pos = 20;
    inline constexpr uint32_t OTG_HS_GCCFG_SDEN_Msk = 0x00100000;
    inline constexpr uint32_t OTG_HS_GCCFG_SDEN = (1U << 20);
    inline constexpr uint32_t OTG_HS_GCCFG_VBDEN_Pos = 21;
    inline constexpr uint32_t OTG_HS_GCCFG_VBDEN_Msk = 0x00200000;
    inline constexpr uint32_t OTG_HS_GCCFG_VBDEN = (1U << 21);

    // OTG_HS_CID fields
    inline constexpr uint32_t OTG_HS_CID_PRODUCT_ID_Pos = 0;
    inline constexpr uint32_t OTG_HS_CID_PRODUCT_ID_Msk = 0xFFFFFFFF;

    // OTG_HS_GLPMCFG fields
    inline constexpr uint32_t OTG_HS_GLPMCFG_LPMEN_Pos = 0;
    inline constexpr uint32_t OTG_HS_GLPMCFG_LPMEN_Msk = 0x00000001;
    inline constexpr uint32_t OTG_HS_GLPMCFG_LPMEN = (1U << 0);
    inline constexpr uint32_t OTG_HS_GLPMCFG_LPMACK_Pos = 1;
    inline constexpr uint32_t OTG_HS_GLPMCFG_LPMACK_Msk = 0x00000002;
    inline constexpr uint32_t OTG_HS_GLPMCFG_LPMACK = (1U << 1);
    inline constexpr uint32_t OTG_HS_GLPMCFG_BESL_Pos = 2;
    inline constexpr uint32_t OTG_HS_GLPMCFG_BESL_Msk = 0x0000003C;
    inline constexpr uint32_t OTG_HS_GLPMCFG_REMWAKE_Pos = 6;
    inline constexpr uint32_t OTG_HS_GLPMCFG_REMWAKE_Msk = 0x00000040;
    inline constexpr uint32_t OTG_HS_GLPMCFG_REMWAKE = (1U << 6);
    inline constexpr uint32_t OTG_HS_GLPMCFG_L1SSEN_Pos = 7;
    inline constexpr uint32_t OTG_HS_GLPMCFG_L1SSEN_Msk = 0x00000080;
    inline constexpr uint32_t OTG_HS_GLPMCFG_L1SSEN = (1U << 7);
    inline constexpr uint32_t OTG_HS_GLPMCFG_BESLTHRS_Pos = 8;
    inline constexpr uint32_t OTG_HS_GLPMCFG_BESLTHRS_Msk = 0x00000F00;
    inline constexpr uint32_t OTG_HS_GLPMCFG_L1DSEN_Pos = 12;
    inline constexpr uint32_t OTG_HS_GLPMCFG_L1DSEN_Msk = 0x00001000;
    inline constexpr uint32_t OTG_HS_GLPMCFG_L1DSEN = (1U << 12);
    inline constexpr uint32_t OTG_HS_GLPMCFG_LPMRST_Pos = 13;
    inline constexpr uint32_t OTG_HS_GLPMCFG_LPMRST_Msk = 0x00006000;
    inline constexpr uint32_t OTG_HS_GLPMCFG_SLPSTS_Pos = 15;
    inline constexpr uint32_t OTG_HS_GLPMCFG_SLPSTS_Msk = 0x00008000;
    inline constexpr uint32_t OTG_HS_GLPMCFG_SLPSTS = (1U << 15);
    inline constexpr uint32_t OTG_HS_GLPMCFG_L1RSMOK_Pos = 16;
    inline constexpr uint32_t OTG_HS_GLPMCFG_L1RSMOK_Msk = 0x00010000;
    inline constexpr uint32_t OTG_HS_GLPMCFG_L1RSMOK = (1U << 16);
    inline constexpr uint32_t OTG_HS_GLPMCFG_LPMCHIDX_Pos = 17;
    inline constexpr uint32_t OTG_HS_GLPMCFG_LPMCHIDX_Msk = 0x001E0000;
    inline constexpr uint32_t OTG_HS_GLPMCFG_LPMRCNT_Pos = 21;
    inline constexpr uint32_t OTG_HS_GLPMCFG_LPMRCNT_Msk = 0x00E00000;
    inline constexpr uint32_t OTG_HS_GLPMCFG_SNDLPM_Pos = 24;
    inline constexpr uint32_t OTG_HS_GLPMCFG_SNDLPM_Msk = 0x01000000;
    inline constexpr uint32_t OTG_HS_GLPMCFG_SNDLPM = (1U << 24);
    inline constexpr uint32_t OTG_HS_GLPMCFG_LPMRCNTSTS_Pos = 25;
    inline constexpr uint32_t OTG_HS_GLPMCFG_LPMRCNTSTS_Msk = 0x0E000000;
    inline constexpr uint32_t OTG_HS_GLPMCFG_ENBESL_Pos = 28;
    inline constexpr uint32_t OTG_HS_GLPMCFG_ENBESL_Msk = 0x10000000;
    inline constexpr uint32_t OTG_HS_GLPMCFG_ENBESL = (1U << 28);

    // OTG_HS_HPTXFSIZ fields
    inline constexpr uint32_t OTG_HS_HPTXFSIZ_PTXSA_Pos = 0;
    inline constexpr uint32_t OTG_HS_HPTXFSIZ_PTXSA_Msk = 0x0000FFFF;
    inline constexpr uint32_t OTG_HS_HPTXFSIZ_PTXFD_Pos = 16;
    inline constexpr uint32_t OTG_HS_HPTXFSIZ_PTXFD_Msk = 0xFFFF0000;

    // OTG_HS_DIEPTXF1 fields
    inline constexpr uint32_t OTG_HS_DIEPTXF1_INEPTXSA_Pos = 0;
    inline constexpr uint32_t OTG_HS_DIEPTXF1_INEPTXSA_Msk = 0x0000FFFF;
    inline constexpr uint32_t OTG_HS_DIEPTXF1_INEPTXFD_Pos = 16;
    inline constexpr uint32_t OTG_HS_DIEPTXF1_INEPTXFD_Msk = 0xFFFF0000;

    // OTG_HS_DIEPTXF2 fields
    inline constexpr uint32_t OTG_HS_DIEPTXF2_INEPTXSA_Pos = 0;
    inline constexpr uint32_t OTG_HS_DIEPTXF2_INEPTXSA_Msk = 0x0000FFFF;
    inline constexpr uint32_t OTG_HS_DIEPTXF2_INEPTXFD_Pos = 16;
    inline constexpr uint32_t OTG_HS_DIEPTXF2_INEPTXFD_Msk = 0xFFFF0000;

    // OTG_HS_DIEPTXF3 fields
    inline constexpr uint32_t OTG_HS_DIEPTXF3_INEPTXSA_Pos = 0;
    inline constexpr uint32_t OTG_HS_DIEPTXF3_INEPTXSA_Msk = 0x0000FFFF;
    inline constexpr uint32_t OTG_HS_DIEPTXF3_INEPTXFD_Pos = 16;
    inline constexpr uint32_t OTG_HS_DIEPTXF3_INEPTXFD_Msk = 0xFFFF0000;

    // OTG_HS_DIEPTXF4 fields
    inline constexpr uint32_t OTG_HS_DIEPTXF4_INEPTXSA_Pos = 0;
    inline constexpr uint32_t OTG_HS_DIEPTXF4_INEPTXSA_Msk = 0x0000FFFF;
    inline constexpr uint32_t OTG_HS_DIEPTXF4_INEPTXFD_Pos = 16;
    inline constexpr uint32_t OTG_HS_DIEPTXF4_INEPTXFD_Msk = 0xFFFF0000;

    // OTG_HS_DIEPTXF5 fields
    inline constexpr uint32_t OTG_HS_DIEPTXF5_INEPTXSA_Pos = 0;
    inline constexpr uint32_t OTG_HS_DIEPTXF5_INEPTXSA_Msk = 0x0000FFFF;
    inline constexpr uint32_t OTG_HS_DIEPTXF5_INEPTXFD_Pos = 16;
    inline constexpr uint32_t OTG_HS_DIEPTXF5_INEPTXFD_Msk = 0xFFFF0000;

    // OTG_HS_DIEPTXF6 fields
    inline constexpr uint32_t OTG_HS_DIEPTXF6_INEPTXSA_Pos = 0;
    inline constexpr uint32_t OTG_HS_DIEPTXF6_INEPTXSA_Msk = 0x0000FFFF;
    inline constexpr uint32_t OTG_HS_DIEPTXF6_INEPTXFD_Pos = 16;
    inline constexpr uint32_t OTG_HS_DIEPTXF6_INEPTXFD_Msk = 0xFFFF0000;

    // OTG_HS_DIEPTXF7 fields
    inline constexpr uint32_t OTG_HS_DIEPTXF7_INEPTXSA_Pos = 0;
    inline constexpr uint32_t OTG_HS_DIEPTXF7_INEPTXSA_Msk = 0x0000FFFF;
    inline constexpr uint32_t OTG_HS_DIEPTXF7_INEPTXFD_Pos = 16;
    inline constexpr uint32_t OTG_HS_DIEPTXF7_INEPTXFD_Msk = 0xFFFF0000;

    // OTG_DIEPTXF8 fields
    inline constexpr uint32_t OTG_DIEPTXF8_INEPTXSA_Pos = 0;
    inline constexpr uint32_t OTG_DIEPTXF8_INEPTXSA_Msk = 0x0000FFFF;
    inline constexpr uint32_t OTG_DIEPTXF8_INEPTXFD_Pos = 16;
    inline constexpr uint32_t OTG_DIEPTXF8_INEPTXFD_Msk = 0xFFFF0000;

} // namespace OTG1_HS_GLOBAL

namespace OTG2_HS_GLOBAL {
    // OTG_HS_GOTGCTL fields
    inline constexpr uint32_t OTG_HS_GOTGCTL_SRQSCS_Pos = 0;
    inline constexpr uint32_t OTG_HS_GOTGCTL_SRQSCS_Msk = 0x00000001;
    inline constexpr uint32_t OTG_HS_GOTGCTL_SRQSCS = (1U << 0);
    inline constexpr uint32_t OTG_HS_GOTGCTL_SRQ_Pos = 1;
    inline constexpr uint32_t OTG_HS_GOTGCTL_SRQ_Msk = 0x00000002;
    inline constexpr uint32_t OTG_HS_GOTGCTL_SRQ = (1U << 1);
    inline constexpr uint32_t OTG_HS_GOTGCTL_VBVALOEN_Pos = 2;
    inline constexpr uint32_t OTG_HS_GOTGCTL_VBVALOEN_Msk = 0x00000004;
    inline constexpr uint32_t OTG_HS_GOTGCTL_VBVALOEN = (1U << 2);
    inline constexpr uint32_t OTG_HS_GOTGCTL_VBVALOVAL_Pos = 3;
    inline constexpr uint32_t OTG_HS_GOTGCTL_VBVALOVAL_Msk = 0x00000008;
    inline constexpr uint32_t OTG_HS_GOTGCTL_VBVALOVAL = (1U << 3);
    inline constexpr uint32_t OTG_HS_GOTGCTL_AVALOEN_Pos = 4;
    inline constexpr uint32_t OTG_HS_GOTGCTL_AVALOEN_Msk = 0x00000010;
    inline constexpr uint32_t OTG_HS_GOTGCTL_AVALOEN = (1U << 4);
    inline constexpr uint32_t OTG_HS_GOTGCTL_AVALOVAL_Pos = 5;
    inline constexpr uint32_t OTG_HS_GOTGCTL_AVALOVAL_Msk = 0x00000020;
    inline constexpr uint32_t OTG_HS_GOTGCTL_AVALOVAL = (1U << 5);
    inline constexpr uint32_t OTG_HS_GOTGCTL_BVALOEN_Pos = 6;
    inline constexpr uint32_t OTG_HS_GOTGCTL_BVALOEN_Msk = 0x00000040;
    inline constexpr uint32_t OTG_HS_GOTGCTL_BVALOEN = (1U << 6);
    inline constexpr uint32_t OTG_HS_GOTGCTL_BVALOVAL_Pos = 7;
    inline constexpr uint32_t OTG_HS_GOTGCTL_BVALOVAL_Msk = 0x00000080;
    inline constexpr uint32_t OTG_HS_GOTGCTL_BVALOVAL = (1U << 7);
    inline constexpr uint32_t OTG_HS_GOTGCTL_HNGSCS_Pos = 8;
    inline constexpr uint32_t OTG_HS_GOTGCTL_HNGSCS_Msk = 0x00000100;
    inline constexpr uint32_t OTG_HS_GOTGCTL_HNGSCS = (1U << 8);
    inline constexpr uint32_t OTG_HS_GOTGCTL_HNPRQ_Pos = 9;
    inline constexpr uint32_t OTG_HS_GOTGCTL_HNPRQ_Msk = 0x00000200;
    inline constexpr uint32_t OTG_HS_GOTGCTL_HNPRQ = (1U << 9);
    inline constexpr uint32_t OTG_HS_GOTGCTL_HSHNPEN_Pos = 10;
    inline constexpr uint32_t OTG_HS_GOTGCTL_HSHNPEN_Msk = 0x00000400;
    inline constexpr uint32_t OTG_HS_GOTGCTL_HSHNPEN = (1U << 10);
    inline constexpr uint32_t OTG_HS_GOTGCTL_DHNPEN_Pos = 11;
    inline constexpr uint32_t OTG_HS_GOTGCTL_DHNPEN_Msk = 0x00000800;
    inline constexpr uint32_t OTG_HS_GOTGCTL_DHNPEN = (1U << 11);
    inline constexpr uint32_t OTG_HS_GOTGCTL_EHEN_Pos = 12;
    inline constexpr uint32_t OTG_HS_GOTGCTL_EHEN_Msk = 0x00001000;
    inline constexpr uint32_t OTG_HS_GOTGCTL_EHEN = (1U << 12);
    inline constexpr uint32_t OTG_HS_GOTGCTL_CIDSTS_Pos = 16;
    inline constexpr uint32_t OTG_HS_GOTGCTL_CIDSTS_Msk = 0x00010000;
    inline constexpr uint32_t OTG_HS_GOTGCTL_CIDSTS = (1U << 16);
    inline constexpr uint32_t OTG_HS_GOTGCTL_DBCT_Pos = 17;
    inline constexpr uint32_t OTG_HS_GOTGCTL_DBCT_Msk = 0x00020000;
    inline constexpr uint32_t OTG_HS_GOTGCTL_DBCT = (1U << 17);
    inline constexpr uint32_t OTG_HS_GOTGCTL_ASVLD_Pos = 18;
    inline constexpr uint32_t OTG_HS_GOTGCTL_ASVLD_Msk = 0x00040000;
    inline constexpr uint32_t OTG_HS_GOTGCTL_ASVLD = (1U << 18);
    inline constexpr uint32_t OTG_HS_GOTGCTL_BSVLD_Pos = 19;
    inline constexpr uint32_t OTG_HS_GOTGCTL_BSVLD_Msk = 0x00080000;
    inline constexpr uint32_t OTG_HS_GOTGCTL_BSVLD = (1U << 19);
    inline constexpr uint32_t OTG_HS_GOTGCTL_OTGVER_Pos = 20;
    inline constexpr uint32_t OTG_HS_GOTGCTL_OTGVER_Msk = 0x00100000;
    inline constexpr uint32_t OTG_HS_GOTGCTL_OTGVER = (1U << 20);
    inline constexpr uint32_t OTG_HS_GOTGCTL_CURMOD_Pos = 21;
    inline constexpr uint32_t OTG_HS_GOTGCTL_CURMOD_Msk = 0x00200000;
    inline constexpr uint32_t OTG_HS_GOTGCTL_CURMOD = (1U << 21);

    // OTG_HS_GOTGINT fields
    inline constexpr uint32_t OTG_HS_GOTGINT_SEDET_Pos = 2;
    inline constexpr uint32_t OTG_HS_GOTGINT_SEDET_Msk = 0x00000004;
    inline constexpr uint32_t OTG_HS_GOTGINT_SEDET = (1U << 2);
    inline constexpr uint32_t OTG_HS_GOTGINT_SRSSCHG_Pos = 8;
    inline constexpr uint32_t OTG_HS_GOTGINT_SRSSCHG_Msk = 0x00000100;
    inline constexpr uint32_t OTG_HS_GOTGINT_SRSSCHG = (1U << 8);
    inline constexpr uint32_t OTG_HS_GOTGINT_HNSSCHG_Pos = 9;
    inline constexpr uint32_t OTG_HS_GOTGINT_HNSSCHG_Msk = 0x00000200;
    inline constexpr uint32_t OTG_HS_GOTGINT_HNSSCHG = (1U << 9);
    inline constexpr uint32_t OTG_HS_GOTGINT_HNGDET_Pos = 17;
    inline constexpr uint32_t OTG_HS_GOTGINT_HNGDET_Msk = 0x00020000;
    inline constexpr uint32_t OTG_HS_GOTGINT_HNGDET = (1U << 17);
    inline constexpr uint32_t OTG_HS_GOTGINT_ADTOCHG_Pos = 18;
    inline constexpr uint32_t OTG_HS_GOTGINT_ADTOCHG_Msk = 0x00040000;
    inline constexpr uint32_t OTG_HS_GOTGINT_ADTOCHG = (1U << 18);
    inline constexpr uint32_t OTG_HS_GOTGINT_DBCDNE_Pos = 19;
    inline constexpr uint32_t OTG_HS_GOTGINT_DBCDNE_Msk = 0x00080000;
    inline constexpr uint32_t OTG_HS_GOTGINT_DBCDNE = (1U << 19);
    inline constexpr uint32_t OTG_HS_GOTGINT_IDCHNG_Pos = 20;
    inline constexpr uint32_t OTG_HS_GOTGINT_IDCHNG_Msk = 0x00100000;
    inline constexpr uint32_t OTG_HS_GOTGINT_IDCHNG = (1U << 20);

    // OTG_HS_GAHBCFG fields
    inline constexpr uint32_t OTG_HS_GAHBCFG_GINT_Pos = 0;
    inline constexpr uint32_t OTG_HS_GAHBCFG_GINT_Msk = 0x00000001;
    inline constexpr uint32_t OTG_HS_GAHBCFG_GINT = (1U << 0);
    inline constexpr uint32_t OTG_HS_GAHBCFG_HBSTLEN_Pos = 1;
    inline constexpr uint32_t OTG_HS_GAHBCFG_HBSTLEN_Msk = 0x0000001E;
    inline constexpr uint32_t OTG_HS_GAHBCFG_DMAEN_Pos = 5;
    inline constexpr uint32_t OTG_HS_GAHBCFG_DMAEN_Msk = 0x00000020;
    inline constexpr uint32_t OTG_HS_GAHBCFG_DMAEN = (1U << 5);
    inline constexpr uint32_t OTG_HS_GAHBCFG_TXFELVL_Pos = 7;
    inline constexpr uint32_t OTG_HS_GAHBCFG_TXFELVL_Msk = 0x00000080;
    inline constexpr uint32_t OTG_HS_GAHBCFG_TXFELVL = (1U << 7);
    inline constexpr uint32_t OTG_HS_GAHBCFG_PTXFELVL_Pos = 8;
    inline constexpr uint32_t OTG_HS_GAHBCFG_PTXFELVL_Msk = 0x00000100;
    inline constexpr uint32_t OTG_HS_GAHBCFG_PTXFELVL = (1U << 8);

    // OTG_HS_GUSBCFG fields
    inline constexpr uint32_t OTG_HS_GUSBCFG_TOCAL_Pos = 0;
    inline constexpr uint32_t OTG_HS_GUSBCFG_TOCAL_Msk = 0x00000007;
    inline constexpr uint32_t OTG_HS_GUSBCFG_PHYSEL_Pos = 6;
    inline constexpr uint32_t OTG_HS_GUSBCFG_PHYSEL_Msk = 0x00000040;
    inline constexpr uint32_t OTG_HS_GUSBCFG_PHYSEL = (1U << 6);
    inline constexpr uint32_t OTG_HS_GUSBCFG_SRPCAP_Pos = 8;
    inline constexpr uint32_t OTG_HS_GUSBCFG_SRPCAP_Msk = 0x00000100;
    inline constexpr uint32_t OTG_HS_GUSBCFG_SRPCAP = (1U << 8);
    inline constexpr uint32_t OTG_HS_GUSBCFG_HNPCAP_Pos = 9;
    inline constexpr uint32_t OTG_HS_GUSBCFG_HNPCAP_Msk = 0x00000200;
    inline constexpr uint32_t OTG_HS_GUSBCFG_HNPCAP = (1U << 9);
    inline constexpr uint32_t OTG_HS_GUSBCFG_TRDT_Pos = 10;
    inline constexpr uint32_t OTG_HS_GUSBCFG_TRDT_Msk = 0x00003C00;
    inline constexpr uint32_t OTG_HS_GUSBCFG_PHYLPCS_Pos = 15;
    inline constexpr uint32_t OTG_HS_GUSBCFG_PHYLPCS_Msk = 0x00008000;
    inline constexpr uint32_t OTG_HS_GUSBCFG_PHYLPCS = (1U << 15);
    inline constexpr uint32_t OTG_HS_GUSBCFG_ULPIFSLS_Pos = 17;
    inline constexpr uint32_t OTG_HS_GUSBCFG_ULPIFSLS_Msk = 0x00020000;
    inline constexpr uint32_t OTG_HS_GUSBCFG_ULPIFSLS = (1U << 17);
    inline constexpr uint32_t OTG_HS_GUSBCFG_ULPIAR_Pos = 18;
    inline constexpr uint32_t OTG_HS_GUSBCFG_ULPIAR_Msk = 0x00040000;
    inline constexpr uint32_t OTG_HS_GUSBCFG_ULPIAR = (1U << 18);
    inline constexpr uint32_t OTG_HS_GUSBCFG_ULPICSM_Pos = 19;
    inline constexpr uint32_t OTG_HS_GUSBCFG_ULPICSM_Msk = 0x00080000;
    inline constexpr uint32_t OTG_HS_GUSBCFG_ULPICSM = (1U << 19);
    inline constexpr uint32_t OTG_HS_GUSBCFG_ULPIEVBUSD_Pos = 20;
    inline constexpr uint32_t OTG_HS_GUSBCFG_ULPIEVBUSD_Msk = 0x00100000;
    inline constexpr uint32_t OTG_HS_GUSBCFG_ULPIEVBUSD = (1U << 20);
    inline constexpr uint32_t OTG_HS_GUSBCFG_ULPIEVBUSI_Pos = 21;
    inline constexpr uint32_t OTG_HS_GUSBCFG_ULPIEVBUSI_Msk = 0x00200000;
    inline constexpr uint32_t OTG_HS_GUSBCFG_ULPIEVBUSI = (1U << 21);
    inline constexpr uint32_t OTG_HS_GUSBCFG_TSDPS_Pos = 22;
    inline constexpr uint32_t OTG_HS_GUSBCFG_TSDPS_Msk = 0x00400000;
    inline constexpr uint32_t OTG_HS_GUSBCFG_TSDPS = (1U << 22);
    inline constexpr uint32_t OTG_HS_GUSBCFG_PCCI_Pos = 23;
    inline constexpr uint32_t OTG_HS_GUSBCFG_PCCI_Msk = 0x00800000;
    inline constexpr uint32_t OTG_HS_GUSBCFG_PCCI = (1U << 23);
    inline constexpr uint32_t OTG_HS_GUSBCFG_PTCI_Pos = 24;
    inline constexpr uint32_t OTG_HS_GUSBCFG_PTCI_Msk = 0x01000000;
    inline constexpr uint32_t OTG_HS_GUSBCFG_PTCI = (1U << 24);
    inline constexpr uint32_t OTG_HS_GUSBCFG_ULPIIPD_Pos = 25;
    inline constexpr uint32_t OTG_HS_GUSBCFG_ULPIIPD_Msk = 0x02000000;
    inline constexpr uint32_t OTG_HS_GUSBCFG_ULPIIPD = (1U << 25);
    inline constexpr uint32_t OTG_HS_GUSBCFG_FHMOD_Pos = 29;
    inline constexpr uint32_t OTG_HS_GUSBCFG_FHMOD_Msk = 0x20000000;
    inline constexpr uint32_t OTG_HS_GUSBCFG_FHMOD = (1U << 29);
    inline constexpr uint32_t OTG_HS_GUSBCFG_FDMOD_Pos = 30;
    inline constexpr uint32_t OTG_HS_GUSBCFG_FDMOD_Msk = 0x40000000;
    inline constexpr uint32_t OTG_HS_GUSBCFG_FDMOD = (1U << 30);

    // OTG_HS_GRSTCTL fields
    inline constexpr uint32_t OTG_HS_GRSTCTL_CSRST_Pos = 0;
    inline constexpr uint32_t OTG_HS_GRSTCTL_CSRST_Msk = 0x00000001;
    inline constexpr uint32_t OTG_HS_GRSTCTL_CSRST = (1U << 0);
    inline constexpr uint32_t OTG_HS_GRSTCTL_HSRST_Pos = 1;
    inline constexpr uint32_t OTG_HS_GRSTCTL_HSRST_Msk = 0x00000002;
    inline constexpr uint32_t OTG_HS_GRSTCTL_HSRST = (1U << 1);
    inline constexpr uint32_t OTG_HS_GRSTCTL_FCRST_Pos = 2;
    inline constexpr uint32_t OTG_HS_GRSTCTL_FCRST_Msk = 0x00000004;
    inline constexpr uint32_t OTG_HS_GRSTCTL_FCRST = (1U << 2);
    inline constexpr uint32_t OTG_HS_GRSTCTL_RXFFLSH_Pos = 4;
    inline constexpr uint32_t OTG_HS_GRSTCTL_RXFFLSH_Msk = 0x00000010;
    inline constexpr uint32_t OTG_HS_GRSTCTL_RXFFLSH = (1U << 4);
    inline constexpr uint32_t OTG_HS_GRSTCTL_TXFFLSH_Pos = 5;
    inline constexpr uint32_t OTG_HS_GRSTCTL_TXFFLSH_Msk = 0x00000020;
    inline constexpr uint32_t OTG_HS_GRSTCTL_TXFFLSH = (1U << 5);
    inline constexpr uint32_t OTG_HS_GRSTCTL_TXFNUM_Pos = 6;
    inline constexpr uint32_t OTG_HS_GRSTCTL_TXFNUM_Msk = 0x000007C0;
    inline constexpr uint32_t OTG_HS_GRSTCTL_DMAREQ_Pos = 30;
    inline constexpr uint32_t OTG_HS_GRSTCTL_DMAREQ_Msk = 0x40000000;
    inline constexpr uint32_t OTG_HS_GRSTCTL_DMAREQ = (1U << 30);
    inline constexpr uint32_t OTG_HS_GRSTCTL_AHBIDL_Pos = 31;
    inline constexpr uint32_t OTG_HS_GRSTCTL_AHBIDL_Msk = 0x80000000;
    inline constexpr uint32_t OTG_HS_GRSTCTL_AHBIDL = (1U << 31);

    // OTG_HS_GINTSTS fields
    inline constexpr uint32_t OTG_HS_GINTSTS_CMOD_Pos = 0;
    inline constexpr uint32_t OTG_HS_GINTSTS_CMOD_Msk = 0x00000001;
    inline constexpr uint32_t OTG_HS_GINTSTS_CMOD = (1U << 0);
    inline constexpr uint32_t OTG_HS_GINTSTS_MMIS_Pos = 1;
    inline constexpr uint32_t OTG_HS_GINTSTS_MMIS_Msk = 0x00000002;
    inline constexpr uint32_t OTG_HS_GINTSTS_MMIS = (1U << 1);
    inline constexpr uint32_t OTG_HS_GINTSTS_OTGINT_Pos = 2;
    inline constexpr uint32_t OTG_HS_GINTSTS_OTGINT_Msk = 0x00000004;
    inline constexpr uint32_t OTG_HS_GINTSTS_OTGINT = (1U << 2);
    inline constexpr uint32_t OTG_HS_GINTSTS_SOF_Pos = 3;
    inline constexpr uint32_t OTG_HS_GINTSTS_SOF_Msk = 0x00000008;
    inline constexpr uint32_t OTG_HS_GINTSTS_SOF = (1U << 3);
    inline constexpr uint32_t OTG_HS_GINTSTS_RXFLVL_Pos = 4;
    inline constexpr uint32_t OTG_HS_GINTSTS_RXFLVL_Msk = 0x00000010;
    inline constexpr uint32_t OTG_HS_GINTSTS_RXFLVL = (1U << 4);
    inline constexpr uint32_t OTG_HS_GINTSTS_NPTXFE_Pos = 5;
    inline constexpr uint32_t OTG_HS_GINTSTS_NPTXFE_Msk = 0x00000020;
    inline constexpr uint32_t OTG_HS_GINTSTS_NPTXFE = (1U << 5);
    inline constexpr uint32_t OTG_HS_GINTSTS_GINAKEFF_Pos = 6;
    inline constexpr uint32_t OTG_HS_GINTSTS_GINAKEFF_Msk = 0x00000040;
    inline constexpr uint32_t OTG_HS_GINTSTS_GINAKEFF = (1U << 6);
    inline constexpr uint32_t OTG_HS_GINTSTS_BOUTNAKEFF_Pos = 7;
    inline constexpr uint32_t OTG_HS_GINTSTS_BOUTNAKEFF_Msk = 0x00000080;
    inline constexpr uint32_t OTG_HS_GINTSTS_BOUTNAKEFF = (1U << 7);
    inline constexpr uint32_t OTG_HS_GINTSTS_ESUSP_Pos = 10;
    inline constexpr uint32_t OTG_HS_GINTSTS_ESUSP_Msk = 0x00000400;
    inline constexpr uint32_t OTG_HS_GINTSTS_ESUSP = (1U << 10);
    inline constexpr uint32_t OTG_HS_GINTSTS_USBSUSP_Pos = 11;
    inline constexpr uint32_t OTG_HS_GINTSTS_USBSUSP_Msk = 0x00000800;
    inline constexpr uint32_t OTG_HS_GINTSTS_USBSUSP = (1U << 11);
    inline constexpr uint32_t OTG_HS_GINTSTS_USBRST_Pos = 12;
    inline constexpr uint32_t OTG_HS_GINTSTS_USBRST_Msk = 0x00001000;
    inline constexpr uint32_t OTG_HS_GINTSTS_USBRST = (1U << 12);
    inline constexpr uint32_t OTG_HS_GINTSTS_ENUMDNE_Pos = 13;
    inline constexpr uint32_t OTG_HS_GINTSTS_ENUMDNE_Msk = 0x00002000;
    inline constexpr uint32_t OTG_HS_GINTSTS_ENUMDNE = (1U << 13);
    inline constexpr uint32_t OTG_HS_GINTSTS_ISOODRP_Pos = 14;
    inline constexpr uint32_t OTG_HS_GINTSTS_ISOODRP_Msk = 0x00004000;
    inline constexpr uint32_t OTG_HS_GINTSTS_ISOODRP = (1U << 14);
    inline constexpr uint32_t OTG_HS_GINTSTS_EOPF_Pos = 15;
    inline constexpr uint32_t OTG_HS_GINTSTS_EOPF_Msk = 0x00008000;
    inline constexpr uint32_t OTG_HS_GINTSTS_EOPF = (1U << 15);
    inline constexpr uint32_t OTG_HS_GINTSTS_IEPINT_Pos = 18;
    inline constexpr uint32_t OTG_HS_GINTSTS_IEPINT_Msk = 0x00040000;
    inline constexpr uint32_t OTG_HS_GINTSTS_IEPINT = (1U << 18);
    inline constexpr uint32_t OTG_HS_GINTSTS_OEPINT_Pos = 19;
    inline constexpr uint32_t OTG_HS_GINTSTS_OEPINT_Msk = 0x00080000;
    inline constexpr uint32_t OTG_HS_GINTSTS_OEPINT = (1U << 19);
    inline constexpr uint32_t OTG_HS_GINTSTS_IISOIXFR_Pos = 20;
    inline constexpr uint32_t OTG_HS_GINTSTS_IISOIXFR_Msk = 0x00100000;
    inline constexpr uint32_t OTG_HS_GINTSTS_IISOIXFR = (1U << 20);
    inline constexpr uint32_t OTG_HS_GINTSTS_PXFR_INCOMPISOOUT_Pos = 21;
    inline constexpr uint32_t OTG_HS_GINTSTS_PXFR_INCOMPISOOUT_Msk = 0x00200000;
    inline constexpr uint32_t OTG_HS_GINTSTS_PXFR_INCOMPISOOUT = (1U << 21);
    inline constexpr uint32_t OTG_HS_GINTSTS_DATAFSUSP_Pos = 22;
    inline constexpr uint32_t OTG_HS_GINTSTS_DATAFSUSP_Msk = 0x00400000;
    inline constexpr uint32_t OTG_HS_GINTSTS_DATAFSUSP = (1U << 22);
    inline constexpr uint32_t OTG_HS_GINTSTS_HPRTINT_Pos = 24;
    inline constexpr uint32_t OTG_HS_GINTSTS_HPRTINT_Msk = 0x01000000;
    inline constexpr uint32_t OTG_HS_GINTSTS_HPRTINT = (1U << 24);
    inline constexpr uint32_t OTG_HS_GINTSTS_HCINT_Pos = 25;
    inline constexpr uint32_t OTG_HS_GINTSTS_HCINT_Msk = 0x02000000;
    inline constexpr uint32_t OTG_HS_GINTSTS_HCINT = (1U << 25);
    inline constexpr uint32_t OTG_HS_GINTSTS_PTXFE_Pos = 26;
    inline constexpr uint32_t OTG_HS_GINTSTS_PTXFE_Msk = 0x04000000;
    inline constexpr uint32_t OTG_HS_GINTSTS_PTXFE = (1U << 26);
    inline constexpr uint32_t OTG_HS_GINTSTS_CIDSCHG_Pos = 28;
    inline constexpr uint32_t OTG_HS_GINTSTS_CIDSCHG_Msk = 0x10000000;
    inline constexpr uint32_t OTG_HS_GINTSTS_CIDSCHG = (1U << 28);
    inline constexpr uint32_t OTG_HS_GINTSTS_DISCINT_Pos = 29;
    inline constexpr uint32_t OTG_HS_GINTSTS_DISCINT_Msk = 0x20000000;
    inline constexpr uint32_t OTG_HS_GINTSTS_DISCINT = (1U << 29);
    inline constexpr uint32_t OTG_HS_GINTSTS_SRQINT_Pos = 30;
    inline constexpr uint32_t OTG_HS_GINTSTS_SRQINT_Msk = 0x40000000;
    inline constexpr uint32_t OTG_HS_GINTSTS_SRQINT = (1U << 30);
    inline constexpr uint32_t OTG_HS_GINTSTS_WKUINT_Pos = 31;
    inline constexpr uint32_t OTG_HS_GINTSTS_WKUINT_Msk = 0x80000000;
    inline constexpr uint32_t OTG_HS_GINTSTS_WKUINT = (1U << 31);

    // OTG_HS_GINTMSK fields
    inline constexpr uint32_t OTG_HS_GINTMSK_MMISM_Pos = 1;
    inline constexpr uint32_t OTG_HS_GINTMSK_MMISM_Msk = 0x00000002;
    inline constexpr uint32_t OTG_HS_GINTMSK_MMISM = (1U << 1);
    inline constexpr uint32_t OTG_HS_GINTMSK_OTGINT_Pos = 2;
    inline constexpr uint32_t OTG_HS_GINTMSK_OTGINT_Msk = 0x00000004;
    inline constexpr uint32_t OTG_HS_GINTMSK_OTGINT = (1U << 2);
    inline constexpr uint32_t OTG_HS_GINTMSK_SOFM_Pos = 3;
    inline constexpr uint32_t OTG_HS_GINTMSK_SOFM_Msk = 0x00000008;
    inline constexpr uint32_t OTG_HS_GINTMSK_SOFM = (1U << 3);
    inline constexpr uint32_t OTG_HS_GINTMSK_RXFLVLM_Pos = 4;
    inline constexpr uint32_t OTG_HS_GINTMSK_RXFLVLM_Msk = 0x00000010;
    inline constexpr uint32_t OTG_HS_GINTMSK_RXFLVLM = (1U << 4);
    inline constexpr uint32_t OTG_HS_GINTMSK_NPTXFEM_Pos = 5;
    inline constexpr uint32_t OTG_HS_GINTMSK_NPTXFEM_Msk = 0x00000020;
    inline constexpr uint32_t OTG_HS_GINTMSK_NPTXFEM = (1U << 5);
    inline constexpr uint32_t OTG_HS_GINTMSK_GINAKEFFM_Pos = 6;
    inline constexpr uint32_t OTG_HS_GINTMSK_GINAKEFFM_Msk = 0x00000040;
    inline constexpr uint32_t OTG_HS_GINTMSK_GINAKEFFM = (1U << 6);
    inline constexpr uint32_t OTG_HS_GINTMSK_GONAKEFFM_Pos = 7;
    inline constexpr uint32_t OTG_HS_GINTMSK_GONAKEFFM_Msk = 0x00000080;
    inline constexpr uint32_t OTG_HS_GINTMSK_GONAKEFFM = (1U << 7);
    inline constexpr uint32_t OTG_HS_GINTMSK_ESUSPM_Pos = 10;
    inline constexpr uint32_t OTG_HS_GINTMSK_ESUSPM_Msk = 0x00000400;
    inline constexpr uint32_t OTG_HS_GINTMSK_ESUSPM = (1U << 10);
    inline constexpr uint32_t OTG_HS_GINTMSK_USBSUSPM_Pos = 11;
    inline constexpr uint32_t OTG_HS_GINTMSK_USBSUSPM_Msk = 0x00000800;
    inline constexpr uint32_t OTG_HS_GINTMSK_USBSUSPM = (1U << 11);
    inline constexpr uint32_t OTG_HS_GINTMSK_USBRST_Pos = 12;
    inline constexpr uint32_t OTG_HS_GINTMSK_USBRST_Msk = 0x00001000;
    inline constexpr uint32_t OTG_HS_GINTMSK_USBRST = (1U << 12);
    inline constexpr uint32_t OTG_HS_GINTMSK_ENUMDNEM_Pos = 13;
    inline constexpr uint32_t OTG_HS_GINTMSK_ENUMDNEM_Msk = 0x00002000;
    inline constexpr uint32_t OTG_HS_GINTMSK_ENUMDNEM = (1U << 13);
    inline constexpr uint32_t OTG_HS_GINTMSK_ISOODRPM_Pos = 14;
    inline constexpr uint32_t OTG_HS_GINTMSK_ISOODRPM_Msk = 0x00004000;
    inline constexpr uint32_t OTG_HS_GINTMSK_ISOODRPM = (1U << 14);
    inline constexpr uint32_t OTG_HS_GINTMSK_EOPFM_Pos = 15;
    inline constexpr uint32_t OTG_HS_GINTMSK_EOPFM_Msk = 0x00008000;
    inline constexpr uint32_t OTG_HS_GINTMSK_EOPFM = (1U << 15);
    inline constexpr uint32_t OTG_HS_GINTMSK_IEPINT_Pos = 18;
    inline constexpr uint32_t OTG_HS_GINTMSK_IEPINT_Msk = 0x00040000;
    inline constexpr uint32_t OTG_HS_GINTMSK_IEPINT = (1U << 18);
    inline constexpr uint32_t OTG_HS_GINTMSK_OEPINT_Pos = 19;
    inline constexpr uint32_t OTG_HS_GINTMSK_OEPINT_Msk = 0x00080000;
    inline constexpr uint32_t OTG_HS_GINTMSK_OEPINT = (1U << 19);
    inline constexpr uint32_t OTG_HS_GINTMSK_IISOIXFRM_Pos = 20;
    inline constexpr uint32_t OTG_HS_GINTMSK_IISOIXFRM_Msk = 0x00100000;
    inline constexpr uint32_t OTG_HS_GINTMSK_IISOIXFRM = (1U << 20);
    inline constexpr uint32_t OTG_HS_GINTMSK_PXFRM_IISOOXFRM_Pos = 21;
    inline constexpr uint32_t OTG_HS_GINTMSK_PXFRM_IISOOXFRM_Msk = 0x00200000;
    inline constexpr uint32_t OTG_HS_GINTMSK_PXFRM_IISOOXFRM = (1U << 21);
    inline constexpr uint32_t OTG_HS_GINTMSK_FSUSPM_Pos = 22;
    inline constexpr uint32_t OTG_HS_GINTMSK_FSUSPM_Msk = 0x00400000;
    inline constexpr uint32_t OTG_HS_GINTMSK_FSUSPM = (1U << 22);
    inline constexpr uint32_t OTG_HS_GINTMSK_RSTDE_Pos = 23;
    inline constexpr uint32_t OTG_HS_GINTMSK_RSTDE_Msk = 0x00800000;
    inline constexpr uint32_t OTG_HS_GINTMSK_RSTDE = (1U << 23);
    inline constexpr uint32_t OTG_HS_GINTMSK_PRTIM_Pos = 24;
    inline constexpr uint32_t OTG_HS_GINTMSK_PRTIM_Msk = 0x01000000;
    inline constexpr uint32_t OTG_HS_GINTMSK_PRTIM = (1U << 24);
    inline constexpr uint32_t OTG_HS_GINTMSK_HCIM_Pos = 25;
    inline constexpr uint32_t OTG_HS_GINTMSK_HCIM_Msk = 0x02000000;
    inline constexpr uint32_t OTG_HS_GINTMSK_HCIM = (1U << 25);
    inline constexpr uint32_t OTG_HS_GINTMSK_PTXFEM_Pos = 26;
    inline constexpr uint32_t OTG_HS_GINTMSK_PTXFEM_Msk = 0x04000000;
    inline constexpr uint32_t OTG_HS_GINTMSK_PTXFEM = (1U << 26);
    inline constexpr uint32_t OTG_HS_GINTMSK_LPMINTM_Pos = 27;
    inline constexpr uint32_t OTG_HS_GINTMSK_LPMINTM_Msk = 0x08000000;
    inline constexpr uint32_t OTG_HS_GINTMSK_LPMINTM = (1U << 27);
    inline constexpr uint32_t OTG_HS_GINTMSK_CIDSCHGM_Pos = 28;
    inline constexpr uint32_t OTG_HS_GINTMSK_CIDSCHGM_Msk = 0x10000000;
    inline constexpr uint32_t OTG_HS_GINTMSK_CIDSCHGM = (1U << 28);
    inline constexpr uint32_t OTG_HS_GINTMSK_DISCINT_Pos = 29;
    inline constexpr uint32_t OTG_HS_GINTMSK_DISCINT_Msk = 0x20000000;
    inline constexpr uint32_t OTG_HS_GINTMSK_DISCINT = (1U << 29);
    inline constexpr uint32_t OTG_HS_GINTMSK_SRQIM_Pos = 30;
    inline constexpr uint32_t OTG_HS_GINTMSK_SRQIM_Msk = 0x40000000;
    inline constexpr uint32_t OTG_HS_GINTMSK_SRQIM = (1U << 30);
    inline constexpr uint32_t OTG_HS_GINTMSK_WUIM_Pos = 31;
    inline constexpr uint32_t OTG_HS_GINTMSK_WUIM_Msk = 0x80000000;
    inline constexpr uint32_t OTG_HS_GINTMSK_WUIM = (1U << 31);

    // OTG_HS_GRXSTSR_Host fields
    inline constexpr uint32_t OTG_HS_GRXSTSR_Host_CHNUM_Pos = 0;
    inline constexpr uint32_t OTG_HS_GRXSTSR_Host_CHNUM_Msk = 0x0000000F;
    inline constexpr uint32_t OTG_HS_GRXSTSR_Host_BCNT_Pos = 4;
    inline constexpr uint32_t OTG_HS_GRXSTSR_Host_BCNT_Msk = 0x00007FF0;
    inline constexpr uint32_t OTG_HS_GRXSTSR_Host_DPID_Pos = 15;
    inline constexpr uint32_t OTG_HS_GRXSTSR_Host_DPID_Msk = 0x00018000;
    inline constexpr uint32_t OTG_HS_GRXSTSR_Host_PKTSTS_Pos = 17;
    inline constexpr uint32_t OTG_HS_GRXSTSR_Host_PKTSTS_Msk = 0x001E0000;

    // OTG_HS_GRXSTSR_Device fields
    inline constexpr uint32_t OTG_HS_GRXSTSR_Device_EPNUM_Pos = 0;
    inline constexpr uint32_t OTG_HS_GRXSTSR_Device_EPNUM_Msk = 0x0000000F;
    inline constexpr uint32_t OTG_HS_GRXSTSR_Device_BCNT_Pos = 4;
    inline constexpr uint32_t OTG_HS_GRXSTSR_Device_BCNT_Msk = 0x00007FF0;
    inline constexpr uint32_t OTG_HS_GRXSTSR_Device_DPID_Pos = 15;
    inline constexpr uint32_t OTG_HS_GRXSTSR_Device_DPID_Msk = 0x00018000;
    inline constexpr uint32_t OTG_HS_GRXSTSR_Device_PKTSTS_Pos = 17;
    inline constexpr uint32_t OTG_HS_GRXSTSR_Device_PKTSTS_Msk = 0x001E0000;
    inline constexpr uint32_t OTG_HS_GRXSTSR_Device_FRMNUM_Pos = 21;
    inline constexpr uint32_t OTG_HS_GRXSTSR_Device_FRMNUM_Msk = 0x01E00000;

    // OTG_HS_GRXSTSP_Host fields
    inline constexpr uint32_t OTG_HS_GRXSTSP_Host_CHNUM_Pos = 0;
    inline constexpr uint32_t OTG_HS_GRXSTSP_Host_CHNUM_Msk = 0x0000000F;
    inline constexpr uint32_t OTG_HS_GRXSTSP_Host_BCNT_Pos = 4;
    inline constexpr uint32_t OTG_HS_GRXSTSP_Host_BCNT_Msk = 0x00007FF0;
    inline constexpr uint32_t OTG_HS_GRXSTSP_Host_DPID_Pos = 15;
    inline constexpr uint32_t OTG_HS_GRXSTSP_Host_DPID_Msk = 0x00018000;
    inline constexpr uint32_t OTG_HS_GRXSTSP_Host_PKTSTS_Pos = 17;
    inline constexpr uint32_t OTG_HS_GRXSTSP_Host_PKTSTS_Msk = 0x001E0000;

    // OTG_HS_GRXSTSP_Device fields
    inline constexpr uint32_t OTG_HS_GRXSTSP_Device_EPNUM_Pos = 0;
    inline constexpr uint32_t OTG_HS_GRXSTSP_Device_EPNUM_Msk = 0x0000000F;
    inline constexpr uint32_t OTG_HS_GRXSTSP_Device_BCNT_Pos = 4;
    inline constexpr uint32_t OTG_HS_GRXSTSP_Device_BCNT_Msk = 0x00007FF0;
    inline constexpr uint32_t OTG_HS_GRXSTSP_Device_DPID_Pos = 15;
    inline constexpr uint32_t OTG_HS_GRXSTSP_Device_DPID_Msk = 0x00018000;
    inline constexpr uint32_t OTG_HS_GRXSTSP_Device_PKTSTS_Pos = 17;
    inline constexpr uint32_t OTG_HS_GRXSTSP_Device_PKTSTS_Msk = 0x001E0000;
    inline constexpr uint32_t OTG_HS_GRXSTSP_Device_FRMNUM_Pos = 21;
    inline constexpr uint32_t OTG_HS_GRXSTSP_Device_FRMNUM_Msk = 0x01E00000;

    // OTG_HS_GRXFSIZ fields
    inline constexpr uint32_t OTG_HS_GRXFSIZ_RXFD_Pos = 0;
    inline constexpr uint32_t OTG_HS_GRXFSIZ_RXFD_Msk = 0x0000FFFF;

    // OTG_HS_HNPTXFSIZ_Host fields
    inline constexpr uint32_t OTG_HS_HNPTXFSIZ_Host_NPTXFSA_Pos = 0;
    inline constexpr uint32_t OTG_HS_HNPTXFSIZ_Host_NPTXFSA_Msk = 0x0000FFFF;
    inline constexpr uint32_t OTG_HS_HNPTXFSIZ_Host_NPTXFD_Pos = 16;
    inline constexpr uint32_t OTG_HS_HNPTXFSIZ_Host_NPTXFD_Msk = 0xFFFF0000;

    // OTG_HS_DIEPTXF0_Device fields
    inline constexpr uint32_t OTG_HS_DIEPTXF0_Device_TX0FSA_Pos = 0;
    inline constexpr uint32_t OTG_HS_DIEPTXF0_Device_TX0FSA_Msk = 0x0000FFFF;
    inline constexpr uint32_t OTG_HS_DIEPTXF0_Device_TX0FD_Pos = 16;
    inline constexpr uint32_t OTG_HS_DIEPTXF0_Device_TX0FD_Msk = 0xFFFF0000;

    // OTG_HS_GNPTXSTS fields
    inline constexpr uint32_t OTG_HS_GNPTXSTS_NPTXFSAV_Pos = 0;
    inline constexpr uint32_t OTG_HS_GNPTXSTS_NPTXFSAV_Msk = 0x0000FFFF;
    inline constexpr uint32_t OTG_HS_GNPTXSTS_NPTQXSAV_Pos = 16;
    inline constexpr uint32_t OTG_HS_GNPTXSTS_NPTQXSAV_Msk = 0x00FF0000;
    inline constexpr uint32_t OTG_HS_GNPTXSTS_NPTXQTOP_Pos = 24;
    inline constexpr uint32_t OTG_HS_GNPTXSTS_NPTXQTOP_Msk = 0x7F000000;

    // OTG_HS_GCCFG fields
    inline constexpr uint32_t OTG_HS_GCCFG_DCDET_Pos = 0;
    inline constexpr uint32_t OTG_HS_GCCFG_DCDET_Msk = 0x00000001;
    inline constexpr uint32_t OTG_HS_GCCFG_DCDET = (1U << 0);
    inline constexpr uint32_t OTG_HS_GCCFG_PDET_Pos = 1;
    inline constexpr uint32_t OTG_HS_GCCFG_PDET_Msk = 0x00000002;
    inline constexpr uint32_t OTG_HS_GCCFG_PDET = (1U << 1);
    inline constexpr uint32_t OTG_HS_GCCFG_SDET_Pos = 2;
    inline constexpr uint32_t OTG_HS_GCCFG_SDET_Msk = 0x00000004;
    inline constexpr uint32_t OTG_HS_GCCFG_SDET = (1U << 2);
    inline constexpr uint32_t OTG_HS_GCCFG_PS2DET_Pos = 3;
    inline constexpr uint32_t OTG_HS_GCCFG_PS2DET_Msk = 0x00000008;
    inline constexpr uint32_t OTG_HS_GCCFG_PS2DET = (1U << 3);
    inline constexpr uint32_t OTG_HS_GCCFG_PWRDWN_Pos = 16;
    inline constexpr uint32_t OTG_HS_GCCFG_PWRDWN_Msk = 0x00010000;
    inline constexpr uint32_t OTG_HS_GCCFG_PWRDWN = (1U << 16);
    inline constexpr uint32_t OTG_HS_GCCFG_BCDEN_Pos = 17;
    inline constexpr uint32_t OTG_HS_GCCFG_BCDEN_Msk = 0x00020000;
    inline constexpr uint32_t OTG_HS_GCCFG_BCDEN = (1U << 17);
    inline constexpr uint32_t OTG_HS_GCCFG_DCDEN_Pos = 18;
    inline constexpr uint32_t OTG_HS_GCCFG_DCDEN_Msk = 0x00040000;
    inline constexpr uint32_t OTG_HS_GCCFG_DCDEN = (1U << 18);
    inline constexpr uint32_t OTG_HS_GCCFG_PDEN_Pos = 19;
    inline constexpr uint32_t OTG_HS_GCCFG_PDEN_Msk = 0x00080000;
    inline constexpr uint32_t OTG_HS_GCCFG_PDEN = (1U << 19);
    inline constexpr uint32_t OTG_HS_GCCFG_SDEN_Pos = 20;
    inline constexpr uint32_t OTG_HS_GCCFG_SDEN_Msk = 0x00100000;
    inline constexpr uint32_t OTG_HS_GCCFG_SDEN = (1U << 20);
    inline constexpr uint32_t OTG_HS_GCCFG_VBDEN_Pos = 21;
    inline constexpr uint32_t OTG_HS_GCCFG_VBDEN_Msk = 0x00200000;
    inline constexpr uint32_t OTG_HS_GCCFG_VBDEN = (1U << 21);

    // OTG_HS_CID fields
    inline constexpr uint32_t OTG_HS_CID_PRODUCT_ID_Pos = 0;
    inline constexpr uint32_t OTG_HS_CID_PRODUCT_ID_Msk = 0xFFFFFFFF;

    // OTG_HS_GLPMCFG fields
    inline constexpr uint32_t OTG_HS_GLPMCFG_LPMEN_Pos = 0;
    inline constexpr uint32_t OTG_HS_GLPMCFG_LPMEN_Msk = 0x00000001;
    inline constexpr uint32_t OTG_HS_GLPMCFG_LPMEN = (1U << 0);
    inline constexpr uint32_t OTG_HS_GLPMCFG_LPMACK_Pos = 1;
    inline constexpr uint32_t OTG_HS_GLPMCFG_LPMACK_Msk = 0x00000002;
    inline constexpr uint32_t OTG_HS_GLPMCFG_LPMACK = (1U << 1);
    inline constexpr uint32_t OTG_HS_GLPMCFG_BESL_Pos = 2;
    inline constexpr uint32_t OTG_HS_GLPMCFG_BESL_Msk = 0x0000003C;
    inline constexpr uint32_t OTG_HS_GLPMCFG_REMWAKE_Pos = 6;
    inline constexpr uint32_t OTG_HS_GLPMCFG_REMWAKE_Msk = 0x00000040;
    inline constexpr uint32_t OTG_HS_GLPMCFG_REMWAKE = (1U << 6);
    inline constexpr uint32_t OTG_HS_GLPMCFG_L1SSEN_Pos = 7;
    inline constexpr uint32_t OTG_HS_GLPMCFG_L1SSEN_Msk = 0x00000080;
    inline constexpr uint32_t OTG_HS_GLPMCFG_L1SSEN = (1U << 7);
    inline constexpr uint32_t OTG_HS_GLPMCFG_BESLTHRS_Pos = 8;
    inline constexpr uint32_t OTG_HS_GLPMCFG_BESLTHRS_Msk = 0x00000F00;
    inline constexpr uint32_t OTG_HS_GLPMCFG_L1DSEN_Pos = 12;
    inline constexpr uint32_t OTG_HS_GLPMCFG_L1DSEN_Msk = 0x00001000;
    inline constexpr uint32_t OTG_HS_GLPMCFG_L1DSEN = (1U << 12);
    inline constexpr uint32_t OTG_HS_GLPMCFG_LPMRST_Pos = 13;
    inline constexpr uint32_t OTG_HS_GLPMCFG_LPMRST_Msk = 0x00006000;
    inline constexpr uint32_t OTG_HS_GLPMCFG_SLPSTS_Pos = 15;
    inline constexpr uint32_t OTG_HS_GLPMCFG_SLPSTS_Msk = 0x00008000;
    inline constexpr uint32_t OTG_HS_GLPMCFG_SLPSTS = (1U << 15);
    inline constexpr uint32_t OTG_HS_GLPMCFG_L1RSMOK_Pos = 16;
    inline constexpr uint32_t OTG_HS_GLPMCFG_L1RSMOK_Msk = 0x00010000;
    inline constexpr uint32_t OTG_HS_GLPMCFG_L1RSMOK = (1U << 16);
    inline constexpr uint32_t OTG_HS_GLPMCFG_LPMCHIDX_Pos = 17;
    inline constexpr uint32_t OTG_HS_GLPMCFG_LPMCHIDX_Msk = 0x001E0000;
    inline constexpr uint32_t OTG_HS_GLPMCFG_LPMRCNT_Pos = 21;
    inline constexpr uint32_t OTG_HS_GLPMCFG_LPMRCNT_Msk = 0x00E00000;
    inline constexpr uint32_t OTG_HS_GLPMCFG_SNDLPM_Pos = 24;
    inline constexpr uint32_t OTG_HS_GLPMCFG_SNDLPM_Msk = 0x01000000;
    inline constexpr uint32_t OTG_HS_GLPMCFG_SNDLPM = (1U << 24);
    inline constexpr uint32_t OTG_HS_GLPMCFG_LPMRCNTSTS_Pos = 25;
    inline constexpr uint32_t OTG_HS_GLPMCFG_LPMRCNTSTS_Msk = 0x0E000000;
    inline constexpr uint32_t OTG_HS_GLPMCFG_ENBESL_Pos = 28;
    inline constexpr uint32_t OTG_HS_GLPMCFG_ENBESL_Msk = 0x10000000;
    inline constexpr uint32_t OTG_HS_GLPMCFG_ENBESL = (1U << 28);

    // OTG_HS_HPTXFSIZ fields
    inline constexpr uint32_t OTG_HS_HPTXFSIZ_PTXSA_Pos = 0;
    inline constexpr uint32_t OTG_HS_HPTXFSIZ_PTXSA_Msk = 0x0000FFFF;
    inline constexpr uint32_t OTG_HS_HPTXFSIZ_PTXFD_Pos = 16;
    inline constexpr uint32_t OTG_HS_HPTXFSIZ_PTXFD_Msk = 0xFFFF0000;

    // OTG_HS_DIEPTXF1 fields
    inline constexpr uint32_t OTG_HS_DIEPTXF1_INEPTXSA_Pos = 0;
    inline constexpr uint32_t OTG_HS_DIEPTXF1_INEPTXSA_Msk = 0x0000FFFF;
    inline constexpr uint32_t OTG_HS_DIEPTXF1_INEPTXFD_Pos = 16;
    inline constexpr uint32_t OTG_HS_DIEPTXF1_INEPTXFD_Msk = 0xFFFF0000;

    // OTG_HS_DIEPTXF2 fields
    inline constexpr uint32_t OTG_HS_DIEPTXF2_INEPTXSA_Pos = 0;
    inline constexpr uint32_t OTG_HS_DIEPTXF2_INEPTXSA_Msk = 0x0000FFFF;
    inline constexpr uint32_t OTG_HS_DIEPTXF2_INEPTXFD_Pos = 16;
    inline constexpr uint32_t OTG_HS_DIEPTXF2_INEPTXFD_Msk = 0xFFFF0000;

    // OTG_HS_DIEPTXF3 fields
    inline constexpr uint32_t OTG_HS_DIEPTXF3_INEPTXSA_Pos = 0;
    inline constexpr uint32_t OTG_HS_DIEPTXF3_INEPTXSA_Msk = 0x0000FFFF;
    inline constexpr uint32_t OTG_HS_DIEPTXF3_INEPTXFD_Pos = 16;
    inline constexpr uint32_t OTG_HS_DIEPTXF3_INEPTXFD_Msk = 0xFFFF0000;

    // OTG_HS_DIEPTXF4 fields
    inline constexpr uint32_t OTG_HS_DIEPTXF4_INEPTXSA_Pos = 0;
    inline constexpr uint32_t OTG_HS_DIEPTXF4_INEPTXSA_Msk = 0x0000FFFF;
    inline constexpr uint32_t OTG_HS_DIEPTXF4_INEPTXFD_Pos = 16;
    inline constexpr uint32_t OTG_HS_DIEPTXF4_INEPTXFD_Msk = 0xFFFF0000;

    // OTG_HS_DIEPTXF5 fields
    inline constexpr uint32_t OTG_HS_DIEPTXF5_INEPTXSA_Pos = 0;
    inline constexpr uint32_t OTG_HS_DIEPTXF5_INEPTXSA_Msk = 0x0000FFFF;
    inline constexpr uint32_t OTG_HS_DIEPTXF5_INEPTXFD_Pos = 16;
    inline constexpr uint32_t OTG_HS_DIEPTXF5_INEPTXFD_Msk = 0xFFFF0000;

    // OTG_HS_DIEPTXF6 fields
    inline constexpr uint32_t OTG_HS_DIEPTXF6_INEPTXSA_Pos = 0;
    inline constexpr uint32_t OTG_HS_DIEPTXF6_INEPTXSA_Msk = 0x0000FFFF;
    inline constexpr uint32_t OTG_HS_DIEPTXF6_INEPTXFD_Pos = 16;
    inline constexpr uint32_t OTG_HS_DIEPTXF6_INEPTXFD_Msk = 0xFFFF0000;

    // OTG_HS_DIEPTXF7 fields
    inline constexpr uint32_t OTG_HS_DIEPTXF7_INEPTXSA_Pos = 0;
    inline constexpr uint32_t OTG_HS_DIEPTXF7_INEPTXSA_Msk = 0x0000FFFF;
    inline constexpr uint32_t OTG_HS_DIEPTXF7_INEPTXFD_Pos = 16;
    inline constexpr uint32_t OTG_HS_DIEPTXF7_INEPTXFD_Msk = 0xFFFF0000;

    // OTG_DIEPTXF8 fields
    inline constexpr uint32_t OTG_DIEPTXF8_INEPTXSA_Pos = 0;
    inline constexpr uint32_t OTG_DIEPTXF8_INEPTXSA_Msk = 0x0000FFFF;
    inline constexpr uint32_t OTG_DIEPTXF8_INEPTXFD_Pos = 16;
    inline constexpr uint32_t OTG_DIEPTXF8_INEPTXFD_Msk = 0xFFFF0000;

} // namespace OTG2_HS_GLOBAL

namespace OTG1_HS_DEVICE {
    // OTG_HS_DCFG fields
    inline constexpr uint32_t OTG_HS_DCFG_DSPD_Pos = 0;
    inline constexpr uint32_t OTG_HS_DCFG_DSPD_Msk = 0x00000003;
    inline constexpr uint32_t OTG_HS_DCFG_NZLSOHSK_Pos = 2;
    inline constexpr uint32_t OTG_HS_DCFG_NZLSOHSK_Msk = 0x00000004;
    inline constexpr uint32_t OTG_HS_DCFG_NZLSOHSK = (1U << 2);
    inline constexpr uint32_t OTG_HS_DCFG_DAD_Pos = 4;
    inline constexpr uint32_t OTG_HS_DCFG_DAD_Msk = 0x000007F0;
    inline constexpr uint32_t OTG_HS_DCFG_PFIVL_Pos = 11;
    inline constexpr uint32_t OTG_HS_DCFG_PFIVL_Msk = 0x00001800;
    inline constexpr uint32_t OTG_HS_DCFG_PERSCHIVL_Pos = 24;
    inline constexpr uint32_t OTG_HS_DCFG_PERSCHIVL_Msk = 0x03000000;

    // OTG_HS_DCTL fields
    inline constexpr uint32_t OTG_HS_DCTL_RWUSIG_Pos = 0;
    inline constexpr uint32_t OTG_HS_DCTL_RWUSIG_Msk = 0x00000001;
    inline constexpr uint32_t OTG_HS_DCTL_RWUSIG = (1U << 0);
    inline constexpr uint32_t OTG_HS_DCTL_SDIS_Pos = 1;
    inline constexpr uint32_t OTG_HS_DCTL_SDIS_Msk = 0x00000002;
    inline constexpr uint32_t OTG_HS_DCTL_SDIS = (1U << 1);
    inline constexpr uint32_t OTG_HS_DCTL_GINSTS_Pos = 2;
    inline constexpr uint32_t OTG_HS_DCTL_GINSTS_Msk = 0x00000004;
    inline constexpr uint32_t OTG_HS_DCTL_GINSTS = (1U << 2);
    inline constexpr uint32_t OTG_HS_DCTL_GONSTS_Pos = 3;
    inline constexpr uint32_t OTG_HS_DCTL_GONSTS_Msk = 0x00000008;
    inline constexpr uint32_t OTG_HS_DCTL_GONSTS = (1U << 3);
    inline constexpr uint32_t OTG_HS_DCTL_TCTL_Pos = 4;
    inline constexpr uint32_t OTG_HS_DCTL_TCTL_Msk = 0x00000070;
    inline constexpr uint32_t OTG_HS_DCTL_SGINAK_Pos = 7;
    inline constexpr uint32_t OTG_HS_DCTL_SGINAK_Msk = 0x00000080;
    inline constexpr uint32_t OTG_HS_DCTL_SGINAK = (1U << 7);
    inline constexpr uint32_t OTG_HS_DCTL_CGINAK_Pos = 8;
    inline constexpr uint32_t OTG_HS_DCTL_CGINAK_Msk = 0x00000100;
    inline constexpr uint32_t OTG_HS_DCTL_CGINAK = (1U << 8);
    inline constexpr uint32_t OTG_HS_DCTL_SGONAK_Pos = 9;
    inline constexpr uint32_t OTG_HS_DCTL_SGONAK_Msk = 0x00000200;
    inline constexpr uint32_t OTG_HS_DCTL_SGONAK = (1U << 9);
    inline constexpr uint32_t OTG_HS_DCTL_CGONAK_Pos = 10;
    inline constexpr uint32_t OTG_HS_DCTL_CGONAK_Msk = 0x00000400;
    inline constexpr uint32_t OTG_HS_DCTL_CGONAK = (1U << 10);
    inline constexpr uint32_t OTG_HS_DCTL_POPRGDNE_Pos = 11;
    inline constexpr uint32_t OTG_HS_DCTL_POPRGDNE_Msk = 0x00000800;
    inline constexpr uint32_t OTG_HS_DCTL_POPRGDNE = (1U << 11);

    // OTG_HS_DSTS fields
    inline constexpr uint32_t OTG_HS_DSTS_SUSPSTS_Pos = 0;
    inline constexpr uint32_t OTG_HS_DSTS_SUSPSTS_Msk = 0x00000001;
    inline constexpr uint32_t OTG_HS_DSTS_SUSPSTS = (1U << 0);
    inline constexpr uint32_t OTG_HS_DSTS_ENUMSPD_Pos = 1;
    inline constexpr uint32_t OTG_HS_DSTS_ENUMSPD_Msk = 0x00000006;
    inline constexpr uint32_t OTG_HS_DSTS_EERR_Pos = 3;
    inline constexpr uint32_t OTG_HS_DSTS_EERR_Msk = 0x00000008;
    inline constexpr uint32_t OTG_HS_DSTS_EERR = (1U << 3);
    inline constexpr uint32_t OTG_HS_DSTS_FNSOF_Pos = 8;
    inline constexpr uint32_t OTG_HS_DSTS_FNSOF_Msk = 0x003FFF00;

    // OTG_HS_DIEPMSK fields
    inline constexpr uint32_t OTG_HS_DIEPMSK_XFRCM_Pos = 0;
    inline constexpr uint32_t OTG_HS_DIEPMSK_XFRCM_Msk = 0x00000001;
    inline constexpr uint32_t OTG_HS_DIEPMSK_XFRCM = (1U << 0);
    inline constexpr uint32_t OTG_HS_DIEPMSK_EPDM_Pos = 1;
    inline constexpr uint32_t OTG_HS_DIEPMSK_EPDM_Msk = 0x00000002;
    inline constexpr uint32_t OTG_HS_DIEPMSK_EPDM = (1U << 1);
    inline constexpr uint32_t OTG_HS_DIEPMSK_TOM_Pos = 3;
    inline constexpr uint32_t OTG_HS_DIEPMSK_TOM_Msk = 0x00000008;
    inline constexpr uint32_t OTG_HS_DIEPMSK_TOM = (1U << 3);
    inline constexpr uint32_t OTG_HS_DIEPMSK_ITTXFEMSK_Pos = 4;
    inline constexpr uint32_t OTG_HS_DIEPMSK_ITTXFEMSK_Msk = 0x00000010;
    inline constexpr uint32_t OTG_HS_DIEPMSK_ITTXFEMSK = (1U << 4);
    inline constexpr uint32_t OTG_HS_DIEPMSK_INEPNMM_Pos = 5;
    inline constexpr uint32_t OTG_HS_DIEPMSK_INEPNMM_Msk = 0x00000020;
    inline constexpr uint32_t OTG_HS_DIEPMSK_INEPNMM = (1U << 5);
    inline constexpr uint32_t OTG_HS_DIEPMSK_INEPNEM_Pos = 6;
    inline constexpr uint32_t OTG_HS_DIEPMSK_INEPNEM_Msk = 0x00000040;
    inline constexpr uint32_t OTG_HS_DIEPMSK_INEPNEM = (1U << 6);
    inline constexpr uint32_t OTG_HS_DIEPMSK_TXFURM_Pos = 8;
    inline constexpr uint32_t OTG_HS_DIEPMSK_TXFURM_Msk = 0x00000100;
    inline constexpr uint32_t OTG_HS_DIEPMSK_TXFURM = (1U << 8);
    inline constexpr uint32_t OTG_HS_DIEPMSK_BIM_Pos = 9;
    inline constexpr uint32_t OTG_HS_DIEPMSK_BIM_Msk = 0x00000200;
    inline constexpr uint32_t OTG_HS_DIEPMSK_BIM = (1U << 9);

    // OTG_HS_DOEPMSK fields
    inline constexpr uint32_t OTG_HS_DOEPMSK_XFRCM_Pos = 0;
    inline constexpr uint32_t OTG_HS_DOEPMSK_XFRCM_Msk = 0x00000001;
    inline constexpr uint32_t OTG_HS_DOEPMSK_XFRCM = (1U << 0);
    inline constexpr uint32_t OTG_HS_DOEPMSK_EPDM_Pos = 1;
    inline constexpr uint32_t OTG_HS_DOEPMSK_EPDM_Msk = 0x00000002;
    inline constexpr uint32_t OTG_HS_DOEPMSK_EPDM = (1U << 1);
    inline constexpr uint32_t OTG_HS_DOEPMSK_STUPM_Pos = 3;
    inline constexpr uint32_t OTG_HS_DOEPMSK_STUPM_Msk = 0x00000008;
    inline constexpr uint32_t OTG_HS_DOEPMSK_STUPM = (1U << 3);
    inline constexpr uint32_t OTG_HS_DOEPMSK_OTEPDM_Pos = 4;
    inline constexpr uint32_t OTG_HS_DOEPMSK_OTEPDM_Msk = 0x00000010;
    inline constexpr uint32_t OTG_HS_DOEPMSK_OTEPDM = (1U << 4);
    inline constexpr uint32_t OTG_HS_DOEPMSK_B2BSTUP_Pos = 6;
    inline constexpr uint32_t OTG_HS_DOEPMSK_B2BSTUP_Msk = 0x00000040;
    inline constexpr uint32_t OTG_HS_DOEPMSK_B2BSTUP = (1U << 6);
    inline constexpr uint32_t OTG_HS_DOEPMSK_OPEM_Pos = 8;
    inline constexpr uint32_t OTG_HS_DOEPMSK_OPEM_Msk = 0x00000100;
    inline constexpr uint32_t OTG_HS_DOEPMSK_OPEM = (1U << 8);
    inline constexpr uint32_t OTG_HS_DOEPMSK_BOIM_Pos = 9;
    inline constexpr uint32_t OTG_HS_DOEPMSK_BOIM_Msk = 0x00000200;
    inline constexpr uint32_t OTG_HS_DOEPMSK_BOIM = (1U << 9);

    // OTG_HS_DAINT fields
    inline constexpr uint32_t OTG_HS_DAINT_IEPINT_Pos = 0;
    inline constexpr uint32_t OTG_HS_DAINT_IEPINT_Msk = 0x0000FFFF;
    inline constexpr uint32_t OTG_HS_DAINT_OEPINT_Pos = 16;
    inline constexpr uint32_t OTG_HS_DAINT_OEPINT_Msk = 0xFFFF0000;

    // OTG_HS_DAINTMSK fields
    inline constexpr uint32_t OTG_HS_DAINTMSK_IEPM_Pos = 0;
    inline constexpr uint32_t OTG_HS_DAINTMSK_IEPM_Msk = 0x0000FFFF;
    inline constexpr uint32_t OTG_HS_DAINTMSK_OEPM_Pos = 16;
    inline constexpr uint32_t OTG_HS_DAINTMSK_OEPM_Msk = 0xFFFF0000;

    // OTG_HS_DVBUSDIS fields
    inline constexpr uint32_t OTG_HS_DVBUSDIS_VBUSDT_Pos = 0;
    inline constexpr uint32_t OTG_HS_DVBUSDIS_VBUSDT_Msk = 0x0000FFFF;

    // OTG_HS_DVBUSPULSE fields
    inline constexpr uint32_t OTG_HS_DVBUSPULSE_DVBUSP_Pos = 0;
    inline constexpr uint32_t OTG_HS_DVBUSPULSE_DVBUSP_Msk = 0x00000FFF;

    // OTG_HS_DTHRCTL fields
    inline constexpr uint32_t OTG_HS_DTHRCTL_NONISOTHREN_Pos = 0;
    inline constexpr uint32_t OTG_HS_DTHRCTL_NONISOTHREN_Msk = 0x00000001;
    inline constexpr uint32_t OTG_HS_DTHRCTL_NONISOTHREN = (1U << 0);
    inline constexpr uint32_t OTG_HS_DTHRCTL_ISOTHREN_Pos = 1;
    inline constexpr uint32_t OTG_HS_DTHRCTL_ISOTHREN_Msk = 0x00000002;
    inline constexpr uint32_t OTG_HS_DTHRCTL_ISOTHREN = (1U << 1);
    inline constexpr uint32_t OTG_HS_DTHRCTL_TXTHRLEN_Pos = 2;
    inline constexpr uint32_t OTG_HS_DTHRCTL_TXTHRLEN_Msk = 0x000007FC;
    inline constexpr uint32_t OTG_HS_DTHRCTL_RXTHREN_Pos = 16;
    inline constexpr uint32_t OTG_HS_DTHRCTL_RXTHREN_Msk = 0x00010000;
    inline constexpr uint32_t OTG_HS_DTHRCTL_RXTHREN = (1U << 16);
    inline constexpr uint32_t OTG_HS_DTHRCTL_RXTHRLEN_Pos = 17;
    inline constexpr uint32_t OTG_HS_DTHRCTL_RXTHRLEN_Msk = 0x03FE0000;
    inline constexpr uint32_t OTG_HS_DTHRCTL_ARPEN_Pos = 27;
    inline constexpr uint32_t OTG_HS_DTHRCTL_ARPEN_Msk = 0x08000000;
    inline constexpr uint32_t OTG_HS_DTHRCTL_ARPEN = (1U << 27);

    // OTG_HS_DIEPEMPMSK fields
    inline constexpr uint32_t OTG_HS_DIEPEMPMSK_INEPTXFEM_Pos = 0;
    inline constexpr uint32_t OTG_HS_DIEPEMPMSK_INEPTXFEM_Msk = 0x0000FFFF;

    // OTG_HS_DEACHINT fields
    inline constexpr uint32_t OTG_HS_DEACHINT_IEP1INT_Pos = 1;
    inline constexpr uint32_t OTG_HS_DEACHINT_IEP1INT_Msk = 0x00000002;
    inline constexpr uint32_t OTG_HS_DEACHINT_IEP1INT = (1U << 1);
    inline constexpr uint32_t OTG_HS_DEACHINT_OEP1INT_Pos = 17;
    inline constexpr uint32_t OTG_HS_DEACHINT_OEP1INT_Msk = 0x00020000;
    inline constexpr uint32_t OTG_HS_DEACHINT_OEP1INT = (1U << 17);

    // OTG_HS_DEACHINTMSK fields
    inline constexpr uint32_t OTG_HS_DEACHINTMSK_IEP1INTM_Pos = 1;
    inline constexpr uint32_t OTG_HS_DEACHINTMSK_IEP1INTM_Msk = 0x00000002;
    inline constexpr uint32_t OTG_HS_DEACHINTMSK_IEP1INTM = (1U << 1);
    inline constexpr uint32_t OTG_HS_DEACHINTMSK_OEP1INTM_Pos = 17;
    inline constexpr uint32_t OTG_HS_DEACHINTMSK_OEP1INTM_Msk = 0x00020000;
    inline constexpr uint32_t OTG_HS_DEACHINTMSK_OEP1INTM = (1U << 17);

    // OTG_HS_DIEPCTL0 fields
    inline constexpr uint32_t OTG_HS_DIEPCTL0_MPSIZ_Pos = 0;
    inline constexpr uint32_t OTG_HS_DIEPCTL0_MPSIZ_Msk = 0x000007FF;
    inline constexpr uint32_t OTG_HS_DIEPCTL0_USBAEP_Pos = 15;
    inline constexpr uint32_t OTG_HS_DIEPCTL0_USBAEP_Msk = 0x00008000;
    inline constexpr uint32_t OTG_HS_DIEPCTL0_USBAEP = (1U << 15);
    inline constexpr uint32_t OTG_HS_DIEPCTL0_EONUM_DPID_Pos = 16;
    inline constexpr uint32_t OTG_HS_DIEPCTL0_EONUM_DPID_Msk = 0x00010000;
    inline constexpr uint32_t OTG_HS_DIEPCTL0_EONUM_DPID = (1U << 16);
    inline constexpr uint32_t OTG_HS_DIEPCTL0_NAKSTS_Pos = 17;
    inline constexpr uint32_t OTG_HS_DIEPCTL0_NAKSTS_Msk = 0x00020000;
    inline constexpr uint32_t OTG_HS_DIEPCTL0_NAKSTS = (1U << 17);
    inline constexpr uint32_t OTG_HS_DIEPCTL0_EPTYP_Pos = 18;
    inline constexpr uint32_t OTG_HS_DIEPCTL0_EPTYP_Msk = 0x000C0000;
    inline constexpr uint32_t OTG_HS_DIEPCTL0_Stall_Pos = 21;
    inline constexpr uint32_t OTG_HS_DIEPCTL0_Stall_Msk = 0x00200000;
    inline constexpr uint32_t OTG_HS_DIEPCTL0_Stall = (1U << 21);
    inline constexpr uint32_t OTG_HS_DIEPCTL0_TXFNUM_Pos = 22;
    inline constexpr uint32_t OTG_HS_DIEPCTL0_TXFNUM_Msk = 0x03C00000;
    inline constexpr uint32_t OTG_HS_DIEPCTL0_CNAK_Pos = 26;
    inline constexpr uint32_t OTG_HS_DIEPCTL0_CNAK_Msk = 0x04000000;
    inline constexpr uint32_t OTG_HS_DIEPCTL0_CNAK = (1U << 26);
    inline constexpr uint32_t OTG_HS_DIEPCTL0_SNAK_Pos = 27;
    inline constexpr uint32_t OTG_HS_DIEPCTL0_SNAK_Msk = 0x08000000;
    inline constexpr uint32_t OTG_HS_DIEPCTL0_SNAK = (1U << 27);
    inline constexpr uint32_t OTG_HS_DIEPCTL0_SD0PID_SEVNFRM_Pos = 28;
    inline constexpr uint32_t OTG_HS_DIEPCTL0_SD0PID_SEVNFRM_Msk = 0x10000000;
    inline constexpr uint32_t OTG_HS_DIEPCTL0_SD0PID_SEVNFRM = (1U << 28);
    inline constexpr uint32_t OTG_HS_DIEPCTL0_SODDFRM_Pos = 29;
    inline constexpr uint32_t OTG_HS_DIEPCTL0_SODDFRM_Msk = 0x20000000;
    inline constexpr uint32_t OTG_HS_DIEPCTL0_SODDFRM = (1U << 29);
    inline constexpr uint32_t OTG_HS_DIEPCTL0_EPDIS_Pos = 30;
    inline constexpr uint32_t OTG_HS_DIEPCTL0_EPDIS_Msk = 0x40000000;
    inline constexpr uint32_t OTG_HS_DIEPCTL0_EPDIS = (1U << 30);
    inline constexpr uint32_t OTG_HS_DIEPCTL0_EPENA_Pos = 31;
    inline constexpr uint32_t OTG_HS_DIEPCTL0_EPENA_Msk = 0x80000000;
    inline constexpr uint32_t OTG_HS_DIEPCTL0_EPENA = (1U << 31);

    // OTG_HS_DIEPINT0 fields
    inline constexpr uint32_t OTG_HS_DIEPINT0_XFRC_Pos = 0;
    inline constexpr uint32_t OTG_HS_DIEPINT0_XFRC_Msk = 0x00000001;
    inline constexpr uint32_t OTG_HS_DIEPINT0_XFRC = (1U << 0);
    inline constexpr uint32_t OTG_HS_DIEPINT0_EPDISD_Pos = 1;
    inline constexpr uint32_t OTG_HS_DIEPINT0_EPDISD_Msk = 0x00000002;
    inline constexpr uint32_t OTG_HS_DIEPINT0_EPDISD = (1U << 1);
    inline constexpr uint32_t OTG_HS_DIEPINT0_TOC_Pos = 3;
    inline constexpr uint32_t OTG_HS_DIEPINT0_TOC_Msk = 0x00000008;
    inline constexpr uint32_t OTG_HS_DIEPINT0_TOC = (1U << 3);
    inline constexpr uint32_t OTG_HS_DIEPINT0_ITTXFE_Pos = 4;
    inline constexpr uint32_t OTG_HS_DIEPINT0_ITTXFE_Msk = 0x00000010;
    inline constexpr uint32_t OTG_HS_DIEPINT0_ITTXFE = (1U << 4);
    inline constexpr uint32_t OTG_HS_DIEPINT0_INEPNE_Pos = 6;
    inline constexpr uint32_t OTG_HS_DIEPINT0_INEPNE_Msk = 0x00000040;
    inline constexpr uint32_t OTG_HS_DIEPINT0_INEPNE = (1U << 6);
    inline constexpr uint32_t OTG_HS_DIEPINT0_TXFE_Pos = 7;
    inline constexpr uint32_t OTG_HS_DIEPINT0_TXFE_Msk = 0x00000080;
    inline constexpr uint32_t OTG_HS_DIEPINT0_TXFE = (1U << 7);
    inline constexpr uint32_t OTG_HS_DIEPINT0_TXFIFOUDRN_Pos = 8;
    inline constexpr uint32_t OTG_HS_DIEPINT0_TXFIFOUDRN_Msk = 0x00000100;
    inline constexpr uint32_t OTG_HS_DIEPINT0_TXFIFOUDRN = (1U << 8);
    inline constexpr uint32_t OTG_HS_DIEPINT0_BNA_Pos = 9;
    inline constexpr uint32_t OTG_HS_DIEPINT0_BNA_Msk = 0x00000200;
    inline constexpr uint32_t OTG_HS_DIEPINT0_BNA = (1U << 9);
    inline constexpr uint32_t OTG_HS_DIEPINT0_PKTDRPSTS_Pos = 11;
    inline constexpr uint32_t OTG_HS_DIEPINT0_PKTDRPSTS_Msk = 0x00000800;
    inline constexpr uint32_t OTG_HS_DIEPINT0_PKTDRPSTS = (1U << 11);
    inline constexpr uint32_t OTG_HS_DIEPINT0_BERR_Pos = 12;
    inline constexpr uint32_t OTG_HS_DIEPINT0_BERR_Msk = 0x00001000;
    inline constexpr uint32_t OTG_HS_DIEPINT0_BERR = (1U << 12);
    inline constexpr uint32_t OTG_HS_DIEPINT0_NAK_Pos = 13;
    inline constexpr uint32_t OTG_HS_DIEPINT0_NAK_Msk = 0x00002000;
    inline constexpr uint32_t OTG_HS_DIEPINT0_NAK = (1U << 13);

    // OTG_HS_DIEPTSIZ0 fields
    inline constexpr uint32_t OTG_HS_DIEPTSIZ0_XFRSIZ_Pos = 0;
    inline constexpr uint32_t OTG_HS_DIEPTSIZ0_XFRSIZ_Msk = 0x0000007F;
    inline constexpr uint32_t OTG_HS_DIEPTSIZ0_PKTCNT_Pos = 19;
    inline constexpr uint32_t OTG_HS_DIEPTSIZ0_PKTCNT_Msk = 0x00180000;

    // OTG_HS_DIEPDMA1 fields
    inline constexpr uint32_t OTG_HS_DIEPDMA1_DMAADDR_Pos = 0;
    inline constexpr uint32_t OTG_HS_DIEPDMA1_DMAADDR_Msk = 0xFFFFFFFF;

    // OTG_HS_DTXFSTS0 fields
    inline constexpr uint32_t OTG_HS_DTXFSTS0_INEPTFSAV_Pos = 0;
    inline constexpr uint32_t OTG_HS_DTXFSTS0_INEPTFSAV_Msk = 0x0000FFFF;

    // OTG_HS_DIEPCTL1 fields
    inline constexpr uint32_t OTG_HS_DIEPCTL1_MPSIZ_Pos = 0;
    inline constexpr uint32_t OTG_HS_DIEPCTL1_MPSIZ_Msk = 0x000007FF;
    inline constexpr uint32_t OTG_HS_DIEPCTL1_USBAEP_Pos = 15;
    inline constexpr uint32_t OTG_HS_DIEPCTL1_USBAEP_Msk = 0x00008000;
    inline constexpr uint32_t OTG_HS_DIEPCTL1_USBAEP = (1U << 15);
    inline constexpr uint32_t OTG_HS_DIEPCTL1_EONUM_DPID_Pos = 16;
    inline constexpr uint32_t OTG_HS_DIEPCTL1_EONUM_DPID_Msk = 0x00010000;
    inline constexpr uint32_t OTG_HS_DIEPCTL1_EONUM_DPID = (1U << 16);
    inline constexpr uint32_t OTG_HS_DIEPCTL1_NAKSTS_Pos = 17;
    inline constexpr uint32_t OTG_HS_DIEPCTL1_NAKSTS_Msk = 0x00020000;
    inline constexpr uint32_t OTG_HS_DIEPCTL1_NAKSTS = (1U << 17);
    inline constexpr uint32_t OTG_HS_DIEPCTL1_EPTYP_Pos = 18;
    inline constexpr uint32_t OTG_HS_DIEPCTL1_EPTYP_Msk = 0x000C0000;
    inline constexpr uint32_t OTG_HS_DIEPCTL1_Stall_Pos = 21;
    inline constexpr uint32_t OTG_HS_DIEPCTL1_Stall_Msk = 0x00200000;
    inline constexpr uint32_t OTG_HS_DIEPCTL1_Stall = (1U << 21);
    inline constexpr uint32_t OTG_HS_DIEPCTL1_TXFNUM_Pos = 22;
    inline constexpr uint32_t OTG_HS_DIEPCTL1_TXFNUM_Msk = 0x03C00000;
    inline constexpr uint32_t OTG_HS_DIEPCTL1_CNAK_Pos = 26;
    inline constexpr uint32_t OTG_HS_DIEPCTL1_CNAK_Msk = 0x04000000;
    inline constexpr uint32_t OTG_HS_DIEPCTL1_CNAK = (1U << 26);
    inline constexpr uint32_t OTG_HS_DIEPCTL1_SNAK_Pos = 27;
    inline constexpr uint32_t OTG_HS_DIEPCTL1_SNAK_Msk = 0x08000000;
    inline constexpr uint32_t OTG_HS_DIEPCTL1_SNAK = (1U << 27);
    inline constexpr uint32_t OTG_HS_DIEPCTL1_SD0PID_SEVNFRM_Pos = 28;
    inline constexpr uint32_t OTG_HS_DIEPCTL1_SD0PID_SEVNFRM_Msk = 0x10000000;
    inline constexpr uint32_t OTG_HS_DIEPCTL1_SD0PID_SEVNFRM = (1U << 28);
    inline constexpr uint32_t OTG_HS_DIEPCTL1_SODDFRM_Pos = 29;
    inline constexpr uint32_t OTG_HS_DIEPCTL1_SODDFRM_Msk = 0x20000000;
    inline constexpr uint32_t OTG_HS_DIEPCTL1_SODDFRM = (1U << 29);
    inline constexpr uint32_t OTG_HS_DIEPCTL1_EPDIS_Pos = 30;
    inline constexpr uint32_t OTG_HS_DIEPCTL1_EPDIS_Msk = 0x40000000;
    inline constexpr uint32_t OTG_HS_DIEPCTL1_EPDIS = (1U << 30);
    inline constexpr uint32_t OTG_HS_DIEPCTL1_EPENA_Pos = 31;
    inline constexpr uint32_t OTG_HS_DIEPCTL1_EPENA_Msk = 0x80000000;
    inline constexpr uint32_t OTG_HS_DIEPCTL1_EPENA = (1U << 31);

    // OTG_HS_DIEPINT1 fields
    inline constexpr uint32_t OTG_HS_DIEPINT1_XFRC_Pos = 0;
    inline constexpr uint32_t OTG_HS_DIEPINT1_XFRC_Msk = 0x00000001;
    inline constexpr uint32_t OTG_HS_DIEPINT1_XFRC = (1U << 0);
    inline constexpr uint32_t OTG_HS_DIEPINT1_EPDISD_Pos = 1;
    inline constexpr uint32_t OTG_HS_DIEPINT1_EPDISD_Msk = 0x00000002;
    inline constexpr uint32_t OTG_HS_DIEPINT1_EPDISD = (1U << 1);
    inline constexpr uint32_t OTG_HS_DIEPINT1_TOC_Pos = 3;
    inline constexpr uint32_t OTG_HS_DIEPINT1_TOC_Msk = 0x00000008;
    inline constexpr uint32_t OTG_HS_DIEPINT1_TOC = (1U << 3);
    inline constexpr uint32_t OTG_HS_DIEPINT1_ITTXFE_Pos = 4;
    inline constexpr uint32_t OTG_HS_DIEPINT1_ITTXFE_Msk = 0x00000010;
    inline constexpr uint32_t OTG_HS_DIEPINT1_ITTXFE = (1U << 4);
    inline constexpr uint32_t OTG_HS_DIEPINT1_INEPNE_Pos = 6;
    inline constexpr uint32_t OTG_HS_DIEPINT1_INEPNE_Msk = 0x00000040;
    inline constexpr uint32_t OTG_HS_DIEPINT1_INEPNE = (1U << 6);
    inline constexpr uint32_t OTG_HS_DIEPINT1_TXFE_Pos = 7;
    inline constexpr uint32_t OTG_HS_DIEPINT1_TXFE_Msk = 0x00000080;
    inline constexpr uint32_t OTG_HS_DIEPINT1_TXFE = (1U << 7);
    inline constexpr uint32_t OTG_HS_DIEPINT1_TXFIFOUDRN_Pos = 8;
    inline constexpr uint32_t OTG_HS_DIEPINT1_TXFIFOUDRN_Msk = 0x00000100;
    inline constexpr uint32_t OTG_HS_DIEPINT1_TXFIFOUDRN = (1U << 8);
    inline constexpr uint32_t OTG_HS_DIEPINT1_BNA_Pos = 9;
    inline constexpr uint32_t OTG_HS_DIEPINT1_BNA_Msk = 0x00000200;
    inline constexpr uint32_t OTG_HS_DIEPINT1_BNA = (1U << 9);
    inline constexpr uint32_t OTG_HS_DIEPINT1_PKTDRPSTS_Pos = 11;
    inline constexpr uint32_t OTG_HS_DIEPINT1_PKTDRPSTS_Msk = 0x00000800;
    inline constexpr uint32_t OTG_HS_DIEPINT1_PKTDRPSTS = (1U << 11);
    inline constexpr uint32_t OTG_HS_DIEPINT1_BERR_Pos = 12;
    inline constexpr uint32_t OTG_HS_DIEPINT1_BERR_Msk = 0x00001000;
    inline constexpr uint32_t OTG_HS_DIEPINT1_BERR = (1U << 12);
    inline constexpr uint32_t OTG_HS_DIEPINT1_NAK_Pos = 13;
    inline constexpr uint32_t OTG_HS_DIEPINT1_NAK_Msk = 0x00002000;
    inline constexpr uint32_t OTG_HS_DIEPINT1_NAK = (1U << 13);

    // OTG_HS_DIEPTSIZ1 fields
    inline constexpr uint32_t OTG_HS_DIEPTSIZ1_XFRSIZ_Pos = 0;
    inline constexpr uint32_t OTG_HS_DIEPTSIZ1_XFRSIZ_Msk = 0x0007FFFF;
    inline constexpr uint32_t OTG_HS_DIEPTSIZ1_PKTCNT_Pos = 19;
    inline constexpr uint32_t OTG_HS_DIEPTSIZ1_PKTCNT_Msk = 0x1FF80000;
    inline constexpr uint32_t OTG_HS_DIEPTSIZ1_MCNT_Pos = 29;
    inline constexpr uint32_t OTG_HS_DIEPTSIZ1_MCNT_Msk = 0x60000000;

    // OTG_HS_DIEPDMA2 fields
    inline constexpr uint32_t OTG_HS_DIEPDMA2_DMAADDR_Pos = 0;
    inline constexpr uint32_t OTG_HS_DIEPDMA2_DMAADDR_Msk = 0xFFFFFFFF;

    // OTG_HS_DTXFSTS1 fields
    inline constexpr uint32_t OTG_HS_DTXFSTS1_INEPTFSAV_Pos = 0;
    inline constexpr uint32_t OTG_HS_DTXFSTS1_INEPTFSAV_Msk = 0x0000FFFF;

    // OTG_HS_DIEPCTL2 fields
    inline constexpr uint32_t OTG_HS_DIEPCTL2_MPSIZ_Pos = 0;
    inline constexpr uint32_t OTG_HS_DIEPCTL2_MPSIZ_Msk = 0x000007FF;
    inline constexpr uint32_t OTG_HS_DIEPCTL2_USBAEP_Pos = 15;
    inline constexpr uint32_t OTG_HS_DIEPCTL2_USBAEP_Msk = 0x00008000;
    inline constexpr uint32_t OTG_HS_DIEPCTL2_USBAEP = (1U << 15);
    inline constexpr uint32_t OTG_HS_DIEPCTL2_EONUM_DPID_Pos = 16;
    inline constexpr uint32_t OTG_HS_DIEPCTL2_EONUM_DPID_Msk = 0x00010000;
    inline constexpr uint32_t OTG_HS_DIEPCTL2_EONUM_DPID = (1U << 16);
    inline constexpr uint32_t OTG_HS_DIEPCTL2_NAKSTS_Pos = 17;
    inline constexpr uint32_t OTG_HS_DIEPCTL2_NAKSTS_Msk = 0x00020000;
    inline constexpr uint32_t OTG_HS_DIEPCTL2_NAKSTS = (1U << 17);
    inline constexpr uint32_t OTG_HS_DIEPCTL2_EPTYP_Pos = 18;
    inline constexpr uint32_t OTG_HS_DIEPCTL2_EPTYP_Msk = 0x000C0000;
    inline constexpr uint32_t OTG_HS_DIEPCTL2_Stall_Pos = 21;
    inline constexpr uint32_t OTG_HS_DIEPCTL2_Stall_Msk = 0x00200000;
    inline constexpr uint32_t OTG_HS_DIEPCTL2_Stall = (1U << 21);
    inline constexpr uint32_t OTG_HS_DIEPCTL2_TXFNUM_Pos = 22;
    inline constexpr uint32_t OTG_HS_DIEPCTL2_TXFNUM_Msk = 0x03C00000;
    inline constexpr uint32_t OTG_HS_DIEPCTL2_CNAK_Pos = 26;
    inline constexpr uint32_t OTG_HS_DIEPCTL2_CNAK_Msk = 0x04000000;
    inline constexpr uint32_t OTG_HS_DIEPCTL2_CNAK = (1U << 26);
    inline constexpr uint32_t OTG_HS_DIEPCTL2_SNAK_Pos = 27;
    inline constexpr uint32_t OTG_HS_DIEPCTL2_SNAK_Msk = 0x08000000;
    inline constexpr uint32_t OTG_HS_DIEPCTL2_SNAK = (1U << 27);
    inline constexpr uint32_t OTG_HS_DIEPCTL2_SD0PID_SEVNFRM_Pos = 28;
    inline constexpr uint32_t OTG_HS_DIEPCTL2_SD0PID_SEVNFRM_Msk = 0x10000000;
    inline constexpr uint32_t OTG_HS_DIEPCTL2_SD0PID_SEVNFRM = (1U << 28);
    inline constexpr uint32_t OTG_HS_DIEPCTL2_SODDFRM_Pos = 29;
    inline constexpr uint32_t OTG_HS_DIEPCTL2_SODDFRM_Msk = 0x20000000;
    inline constexpr uint32_t OTG_HS_DIEPCTL2_SODDFRM = (1U << 29);
    inline constexpr uint32_t OTG_HS_DIEPCTL2_EPDIS_Pos = 30;
    inline constexpr uint32_t OTG_HS_DIEPCTL2_EPDIS_Msk = 0x40000000;
    inline constexpr uint32_t OTG_HS_DIEPCTL2_EPDIS = (1U << 30);
    inline constexpr uint32_t OTG_HS_DIEPCTL2_EPENA_Pos = 31;
    inline constexpr uint32_t OTG_HS_DIEPCTL2_EPENA_Msk = 0x80000000;
    inline constexpr uint32_t OTG_HS_DIEPCTL2_EPENA = (1U << 31);

    // OTG_HS_DIEPINT2 fields
    inline constexpr uint32_t OTG_HS_DIEPINT2_XFRC_Pos = 0;
    inline constexpr uint32_t OTG_HS_DIEPINT2_XFRC_Msk = 0x00000001;
    inline constexpr uint32_t OTG_HS_DIEPINT2_XFRC = (1U << 0);
    inline constexpr uint32_t OTG_HS_DIEPINT2_EPDISD_Pos = 1;
    inline constexpr uint32_t OTG_HS_DIEPINT2_EPDISD_Msk = 0x00000002;
    inline constexpr uint32_t OTG_HS_DIEPINT2_EPDISD = (1U << 1);
    inline constexpr uint32_t OTG_HS_DIEPINT2_TOC_Pos = 3;
    inline constexpr uint32_t OTG_HS_DIEPINT2_TOC_Msk = 0x00000008;
    inline constexpr uint32_t OTG_HS_DIEPINT2_TOC = (1U << 3);
    inline constexpr uint32_t OTG_HS_DIEPINT2_ITTXFE_Pos = 4;
    inline constexpr uint32_t OTG_HS_DIEPINT2_ITTXFE_Msk = 0x00000010;
    inline constexpr uint32_t OTG_HS_DIEPINT2_ITTXFE = (1U << 4);
    inline constexpr uint32_t OTG_HS_DIEPINT2_INEPNE_Pos = 6;
    inline constexpr uint32_t OTG_HS_DIEPINT2_INEPNE_Msk = 0x00000040;
    inline constexpr uint32_t OTG_HS_DIEPINT2_INEPNE = (1U << 6);
    inline constexpr uint32_t OTG_HS_DIEPINT2_TXFE_Pos = 7;
    inline constexpr uint32_t OTG_HS_DIEPINT2_TXFE_Msk = 0x00000080;
    inline constexpr uint32_t OTG_HS_DIEPINT2_TXFE = (1U << 7);
    inline constexpr uint32_t OTG_HS_DIEPINT2_TXFIFOUDRN_Pos = 8;
    inline constexpr uint32_t OTG_HS_DIEPINT2_TXFIFOUDRN_Msk = 0x00000100;
    inline constexpr uint32_t OTG_HS_DIEPINT2_TXFIFOUDRN = (1U << 8);
    inline constexpr uint32_t OTG_HS_DIEPINT2_BNA_Pos = 9;
    inline constexpr uint32_t OTG_HS_DIEPINT2_BNA_Msk = 0x00000200;
    inline constexpr uint32_t OTG_HS_DIEPINT2_BNA = (1U << 9);
    inline constexpr uint32_t OTG_HS_DIEPINT2_PKTDRPSTS_Pos = 11;
    inline constexpr uint32_t OTG_HS_DIEPINT2_PKTDRPSTS_Msk = 0x00000800;
    inline constexpr uint32_t OTG_HS_DIEPINT2_PKTDRPSTS = (1U << 11);
    inline constexpr uint32_t OTG_HS_DIEPINT2_BERR_Pos = 12;
    inline constexpr uint32_t OTG_HS_DIEPINT2_BERR_Msk = 0x00001000;
    inline constexpr uint32_t OTG_HS_DIEPINT2_BERR = (1U << 12);
    inline constexpr uint32_t OTG_HS_DIEPINT2_NAK_Pos = 13;
    inline constexpr uint32_t OTG_HS_DIEPINT2_NAK_Msk = 0x00002000;
    inline constexpr uint32_t OTG_HS_DIEPINT2_NAK = (1U << 13);

    // OTG_HS_DIEPTSIZ2 fields
    inline constexpr uint32_t OTG_HS_DIEPTSIZ2_XFRSIZ_Pos = 0;
    inline constexpr uint32_t OTG_HS_DIEPTSIZ2_XFRSIZ_Msk = 0x0007FFFF;
    inline constexpr uint32_t OTG_HS_DIEPTSIZ2_PKTCNT_Pos = 19;
    inline constexpr uint32_t OTG_HS_DIEPTSIZ2_PKTCNT_Msk = 0x1FF80000;
    inline constexpr uint32_t OTG_HS_DIEPTSIZ2_MCNT_Pos = 29;
    inline constexpr uint32_t OTG_HS_DIEPTSIZ2_MCNT_Msk = 0x60000000;

    // OTG_HS_DIEPDMA3 fields
    inline constexpr uint32_t OTG_HS_DIEPDMA3_DMAADDR_Pos = 0;
    inline constexpr uint32_t OTG_HS_DIEPDMA3_DMAADDR_Msk = 0xFFFFFFFF;

    // OTG_HS_DTXFSTS2 fields
    inline constexpr uint32_t OTG_HS_DTXFSTS2_INEPTFSAV_Pos = 0;
    inline constexpr uint32_t OTG_HS_DTXFSTS2_INEPTFSAV_Msk = 0x0000FFFF;

    // OTG_HS_DIEPCTL3 fields
    inline constexpr uint32_t OTG_HS_DIEPCTL3_MPSIZ_Pos = 0;
    inline constexpr uint32_t OTG_HS_DIEPCTL3_MPSIZ_Msk = 0x000007FF;
    inline constexpr uint32_t OTG_HS_DIEPCTL3_USBAEP_Pos = 15;
    inline constexpr uint32_t OTG_HS_DIEPCTL3_USBAEP_Msk = 0x00008000;
    inline constexpr uint32_t OTG_HS_DIEPCTL3_USBAEP = (1U << 15);
    inline constexpr uint32_t OTG_HS_DIEPCTL3_EONUM_DPID_Pos = 16;
    inline constexpr uint32_t OTG_HS_DIEPCTL3_EONUM_DPID_Msk = 0x00010000;
    inline constexpr uint32_t OTG_HS_DIEPCTL3_EONUM_DPID = (1U << 16);
    inline constexpr uint32_t OTG_HS_DIEPCTL3_NAKSTS_Pos = 17;
    inline constexpr uint32_t OTG_HS_DIEPCTL3_NAKSTS_Msk = 0x00020000;
    inline constexpr uint32_t OTG_HS_DIEPCTL3_NAKSTS = (1U << 17);
    inline constexpr uint32_t OTG_HS_DIEPCTL3_EPTYP_Pos = 18;
    inline constexpr uint32_t OTG_HS_DIEPCTL3_EPTYP_Msk = 0x000C0000;
    inline constexpr uint32_t OTG_HS_DIEPCTL3_Stall_Pos = 21;
    inline constexpr uint32_t OTG_HS_DIEPCTL3_Stall_Msk = 0x00200000;
    inline constexpr uint32_t OTG_HS_DIEPCTL3_Stall = (1U << 21);
    inline constexpr uint32_t OTG_HS_DIEPCTL3_TXFNUM_Pos = 22;
    inline constexpr uint32_t OTG_HS_DIEPCTL3_TXFNUM_Msk = 0x03C00000;
    inline constexpr uint32_t OTG_HS_DIEPCTL3_CNAK_Pos = 26;
    inline constexpr uint32_t OTG_HS_DIEPCTL3_CNAK_Msk = 0x04000000;
    inline constexpr uint32_t OTG_HS_DIEPCTL3_CNAK = (1U << 26);
    inline constexpr uint32_t OTG_HS_DIEPCTL3_SNAK_Pos = 27;
    inline constexpr uint32_t OTG_HS_DIEPCTL3_SNAK_Msk = 0x08000000;
    inline constexpr uint32_t OTG_HS_DIEPCTL3_SNAK = (1U << 27);
    inline constexpr uint32_t OTG_HS_DIEPCTL3_SD0PID_SEVNFRM_Pos = 28;
    inline constexpr uint32_t OTG_HS_DIEPCTL3_SD0PID_SEVNFRM_Msk = 0x10000000;
    inline constexpr uint32_t OTG_HS_DIEPCTL3_SD0PID_SEVNFRM = (1U << 28);
    inline constexpr uint32_t OTG_HS_DIEPCTL3_SODDFRM_Pos = 29;
    inline constexpr uint32_t OTG_HS_DIEPCTL3_SODDFRM_Msk = 0x20000000;
    inline constexpr uint32_t OTG_HS_DIEPCTL3_SODDFRM = (1U << 29);
    inline constexpr uint32_t OTG_HS_DIEPCTL3_EPDIS_Pos = 30;
    inline constexpr uint32_t OTG_HS_DIEPCTL3_EPDIS_Msk = 0x40000000;
    inline constexpr uint32_t OTG_HS_DIEPCTL3_EPDIS = (1U << 30);
    inline constexpr uint32_t OTG_HS_DIEPCTL3_EPENA_Pos = 31;
    inline constexpr uint32_t OTG_HS_DIEPCTL3_EPENA_Msk = 0x80000000;
    inline constexpr uint32_t OTG_HS_DIEPCTL3_EPENA = (1U << 31);

    // OTG_HS_DIEPINT3 fields
    inline constexpr uint32_t OTG_HS_DIEPINT3_XFRC_Pos = 0;
    inline constexpr uint32_t OTG_HS_DIEPINT3_XFRC_Msk = 0x00000001;
    inline constexpr uint32_t OTG_HS_DIEPINT3_XFRC = (1U << 0);
    inline constexpr uint32_t OTG_HS_DIEPINT3_EPDISD_Pos = 1;
    inline constexpr uint32_t OTG_HS_DIEPINT3_EPDISD_Msk = 0x00000002;
    inline constexpr uint32_t OTG_HS_DIEPINT3_EPDISD = (1U << 1);
    inline constexpr uint32_t OTG_HS_DIEPINT3_TOC_Pos = 3;
    inline constexpr uint32_t OTG_HS_DIEPINT3_TOC_Msk = 0x00000008;
    inline constexpr uint32_t OTG_HS_DIEPINT3_TOC = (1U << 3);
    inline constexpr uint32_t OTG_HS_DIEPINT3_ITTXFE_Pos = 4;
    inline constexpr uint32_t OTG_HS_DIEPINT3_ITTXFE_Msk = 0x00000010;
    inline constexpr uint32_t OTG_HS_DIEPINT3_ITTXFE = (1U << 4);
    inline constexpr uint32_t OTG_HS_DIEPINT3_INEPNE_Pos = 6;
    inline constexpr uint32_t OTG_HS_DIEPINT3_INEPNE_Msk = 0x00000040;
    inline constexpr uint32_t OTG_HS_DIEPINT3_INEPNE = (1U << 6);
    inline constexpr uint32_t OTG_HS_DIEPINT3_TXFE_Pos = 7;
    inline constexpr uint32_t OTG_HS_DIEPINT3_TXFE_Msk = 0x00000080;
    inline constexpr uint32_t OTG_HS_DIEPINT3_TXFE = (1U << 7);
    inline constexpr uint32_t OTG_HS_DIEPINT3_TXFIFOUDRN_Pos = 8;
    inline constexpr uint32_t OTG_HS_DIEPINT3_TXFIFOUDRN_Msk = 0x00000100;
    inline constexpr uint32_t OTG_HS_DIEPINT3_TXFIFOUDRN = (1U << 8);
    inline constexpr uint32_t OTG_HS_DIEPINT3_BNA_Pos = 9;
    inline constexpr uint32_t OTG_HS_DIEPINT3_BNA_Msk = 0x00000200;
    inline constexpr uint32_t OTG_HS_DIEPINT3_BNA = (1U << 9);
    inline constexpr uint32_t OTG_HS_DIEPINT3_PKTDRPSTS_Pos = 11;
    inline constexpr uint32_t OTG_HS_DIEPINT3_PKTDRPSTS_Msk = 0x00000800;
    inline constexpr uint32_t OTG_HS_DIEPINT3_PKTDRPSTS = (1U << 11);
    inline constexpr uint32_t OTG_HS_DIEPINT3_BERR_Pos = 12;
    inline constexpr uint32_t OTG_HS_DIEPINT3_BERR_Msk = 0x00001000;
    inline constexpr uint32_t OTG_HS_DIEPINT3_BERR = (1U << 12);
    inline constexpr uint32_t OTG_HS_DIEPINT3_NAK_Pos = 13;
    inline constexpr uint32_t OTG_HS_DIEPINT3_NAK_Msk = 0x00002000;
    inline constexpr uint32_t OTG_HS_DIEPINT3_NAK = (1U << 13);

    // OTG_HS_DIEPTSIZ3 fields
    inline constexpr uint32_t OTG_HS_DIEPTSIZ3_XFRSIZ_Pos = 0;
    inline constexpr uint32_t OTG_HS_DIEPTSIZ3_XFRSIZ_Msk = 0x0007FFFF;
    inline constexpr uint32_t OTG_HS_DIEPTSIZ3_PKTCNT_Pos = 19;
    inline constexpr uint32_t OTG_HS_DIEPTSIZ3_PKTCNT_Msk = 0x1FF80000;
    inline constexpr uint32_t OTG_HS_DIEPTSIZ3_MCNT_Pos = 29;
    inline constexpr uint32_t OTG_HS_DIEPTSIZ3_MCNT_Msk = 0x60000000;

    // OTG_HS_DIEPDMA4 fields
    inline constexpr uint32_t OTG_HS_DIEPDMA4_DMAADDR_Pos = 0;
    inline constexpr uint32_t OTG_HS_DIEPDMA4_DMAADDR_Msk = 0xFFFFFFFF;

    // OTG_HS_DTXFSTS3 fields
    inline constexpr uint32_t OTG_HS_DTXFSTS3_INEPTFSAV_Pos = 0;
    inline constexpr uint32_t OTG_HS_DTXFSTS3_INEPTFSAV_Msk = 0x0000FFFF;

    // OTG_HS_DIEPCTL4 fields
    inline constexpr uint32_t OTG_HS_DIEPCTL4_MPSIZ_Pos = 0;
    inline constexpr uint32_t OTG_HS_DIEPCTL4_MPSIZ_Msk = 0x000007FF;
    inline constexpr uint32_t OTG_HS_DIEPCTL4_USBAEP_Pos = 15;
    inline constexpr uint32_t OTG_HS_DIEPCTL4_USBAEP_Msk = 0x00008000;
    inline constexpr uint32_t OTG_HS_DIEPCTL4_USBAEP = (1U << 15);
    inline constexpr uint32_t OTG_HS_DIEPCTL4_EONUM_DPID_Pos = 16;
    inline constexpr uint32_t OTG_HS_DIEPCTL4_EONUM_DPID_Msk = 0x00010000;
    inline constexpr uint32_t OTG_HS_DIEPCTL4_EONUM_DPID = (1U << 16);
    inline constexpr uint32_t OTG_HS_DIEPCTL4_NAKSTS_Pos = 17;
    inline constexpr uint32_t OTG_HS_DIEPCTL4_NAKSTS_Msk = 0x00020000;
    inline constexpr uint32_t OTG_HS_DIEPCTL4_NAKSTS = (1U << 17);
    inline constexpr uint32_t OTG_HS_DIEPCTL4_EPTYP_Pos = 18;
    inline constexpr uint32_t OTG_HS_DIEPCTL4_EPTYP_Msk = 0x000C0000;
    inline constexpr uint32_t OTG_HS_DIEPCTL4_Stall_Pos = 21;
    inline constexpr uint32_t OTG_HS_DIEPCTL4_Stall_Msk = 0x00200000;
    inline constexpr uint32_t OTG_HS_DIEPCTL4_Stall = (1U << 21);
    inline constexpr uint32_t OTG_HS_DIEPCTL4_TXFNUM_Pos = 22;
    inline constexpr uint32_t OTG_HS_DIEPCTL4_TXFNUM_Msk = 0x03C00000;
    inline constexpr uint32_t OTG_HS_DIEPCTL4_CNAK_Pos = 26;
    inline constexpr uint32_t OTG_HS_DIEPCTL4_CNAK_Msk = 0x04000000;
    inline constexpr uint32_t OTG_HS_DIEPCTL4_CNAK = (1U << 26);
    inline constexpr uint32_t OTG_HS_DIEPCTL4_SNAK_Pos = 27;
    inline constexpr uint32_t OTG_HS_DIEPCTL4_SNAK_Msk = 0x08000000;
    inline constexpr uint32_t OTG_HS_DIEPCTL4_SNAK = (1U << 27);
    inline constexpr uint32_t OTG_HS_DIEPCTL4_SD0PID_SEVNFRM_Pos = 28;
    inline constexpr uint32_t OTG_HS_DIEPCTL4_SD0PID_SEVNFRM_Msk = 0x10000000;
    inline constexpr uint32_t OTG_HS_DIEPCTL4_SD0PID_SEVNFRM = (1U << 28);
    inline constexpr uint32_t OTG_HS_DIEPCTL4_SODDFRM_Pos = 29;
    inline constexpr uint32_t OTG_HS_DIEPCTL4_SODDFRM_Msk = 0x20000000;
    inline constexpr uint32_t OTG_HS_DIEPCTL4_SODDFRM = (1U << 29);
    inline constexpr uint32_t OTG_HS_DIEPCTL4_EPDIS_Pos = 30;
    inline constexpr uint32_t OTG_HS_DIEPCTL4_EPDIS_Msk = 0x40000000;
    inline constexpr uint32_t OTG_HS_DIEPCTL4_EPDIS = (1U << 30);
    inline constexpr uint32_t OTG_HS_DIEPCTL4_EPENA_Pos = 31;
    inline constexpr uint32_t OTG_HS_DIEPCTL4_EPENA_Msk = 0x80000000;
    inline constexpr uint32_t OTG_HS_DIEPCTL4_EPENA = (1U << 31);

    // OTG_HS_DIEPINT4 fields
    inline constexpr uint32_t OTG_HS_DIEPINT4_XFRC_Pos = 0;
    inline constexpr uint32_t OTG_HS_DIEPINT4_XFRC_Msk = 0x00000001;
    inline constexpr uint32_t OTG_HS_DIEPINT4_XFRC = (1U << 0);
    inline constexpr uint32_t OTG_HS_DIEPINT4_EPDISD_Pos = 1;
    inline constexpr uint32_t OTG_HS_DIEPINT4_EPDISD_Msk = 0x00000002;
    inline constexpr uint32_t OTG_HS_DIEPINT4_EPDISD = (1U << 1);
    inline constexpr uint32_t OTG_HS_DIEPINT4_TOC_Pos = 3;
    inline constexpr uint32_t OTG_HS_DIEPINT4_TOC_Msk = 0x00000008;
    inline constexpr uint32_t OTG_HS_DIEPINT4_TOC = (1U << 3);
    inline constexpr uint32_t OTG_HS_DIEPINT4_ITTXFE_Pos = 4;
    inline constexpr uint32_t OTG_HS_DIEPINT4_ITTXFE_Msk = 0x00000010;
    inline constexpr uint32_t OTG_HS_DIEPINT4_ITTXFE = (1U << 4);
    inline constexpr uint32_t OTG_HS_DIEPINT4_INEPNE_Pos = 6;
    inline constexpr uint32_t OTG_HS_DIEPINT4_INEPNE_Msk = 0x00000040;
    inline constexpr uint32_t OTG_HS_DIEPINT4_INEPNE = (1U << 6);
    inline constexpr uint32_t OTG_HS_DIEPINT4_TXFE_Pos = 7;
    inline constexpr uint32_t OTG_HS_DIEPINT4_TXFE_Msk = 0x00000080;
    inline constexpr uint32_t OTG_HS_DIEPINT4_TXFE = (1U << 7);
    inline constexpr uint32_t OTG_HS_DIEPINT4_TXFIFOUDRN_Pos = 8;
    inline constexpr uint32_t OTG_HS_DIEPINT4_TXFIFOUDRN_Msk = 0x00000100;
    inline constexpr uint32_t OTG_HS_DIEPINT4_TXFIFOUDRN = (1U << 8);
    inline constexpr uint32_t OTG_HS_DIEPINT4_BNA_Pos = 9;
    inline constexpr uint32_t OTG_HS_DIEPINT4_BNA_Msk = 0x00000200;
    inline constexpr uint32_t OTG_HS_DIEPINT4_BNA = (1U << 9);
    inline constexpr uint32_t OTG_HS_DIEPINT4_PKTDRPSTS_Pos = 11;
    inline constexpr uint32_t OTG_HS_DIEPINT4_PKTDRPSTS_Msk = 0x00000800;
    inline constexpr uint32_t OTG_HS_DIEPINT4_PKTDRPSTS = (1U << 11);
    inline constexpr uint32_t OTG_HS_DIEPINT4_BERR_Pos = 12;
    inline constexpr uint32_t OTG_HS_DIEPINT4_BERR_Msk = 0x00001000;
    inline constexpr uint32_t OTG_HS_DIEPINT4_BERR = (1U << 12);
    inline constexpr uint32_t OTG_HS_DIEPINT4_NAK_Pos = 13;
    inline constexpr uint32_t OTG_HS_DIEPINT4_NAK_Msk = 0x00002000;
    inline constexpr uint32_t OTG_HS_DIEPINT4_NAK = (1U << 13);

    // OTG_HS_DIEPTSIZ4 fields
    inline constexpr uint32_t OTG_HS_DIEPTSIZ4_XFRSIZ_Pos = 0;
    inline constexpr uint32_t OTG_HS_DIEPTSIZ4_XFRSIZ_Msk = 0x0007FFFF;
    inline constexpr uint32_t OTG_HS_DIEPTSIZ4_PKTCNT_Pos = 19;
    inline constexpr uint32_t OTG_HS_DIEPTSIZ4_PKTCNT_Msk = 0x1FF80000;
    inline constexpr uint32_t OTG_HS_DIEPTSIZ4_MCNT_Pos = 29;
    inline constexpr uint32_t OTG_HS_DIEPTSIZ4_MCNT_Msk = 0x60000000;

    // OTG_HS_DIEPDMA5 fields
    inline constexpr uint32_t OTG_HS_DIEPDMA5_DMAADDR_Pos = 0;
    inline constexpr uint32_t OTG_HS_DIEPDMA5_DMAADDR_Msk = 0xFFFFFFFF;

    // OTG_HS_DTXFSTS4 fields
    inline constexpr uint32_t OTG_HS_DTXFSTS4_INEPTFSAV_Pos = 0;
    inline constexpr uint32_t OTG_HS_DTXFSTS4_INEPTFSAV_Msk = 0x0000FFFF;

    // OTG_HS_DIEPCTL5 fields
    inline constexpr uint32_t OTG_HS_DIEPCTL5_MPSIZ_Pos = 0;
    inline constexpr uint32_t OTG_HS_DIEPCTL5_MPSIZ_Msk = 0x000007FF;
    inline constexpr uint32_t OTG_HS_DIEPCTL5_USBAEP_Pos = 15;
    inline constexpr uint32_t OTG_HS_DIEPCTL5_USBAEP_Msk = 0x00008000;
    inline constexpr uint32_t OTG_HS_DIEPCTL5_USBAEP = (1U << 15);
    inline constexpr uint32_t OTG_HS_DIEPCTL5_EONUM_DPID_Pos = 16;
    inline constexpr uint32_t OTG_HS_DIEPCTL5_EONUM_DPID_Msk = 0x00010000;
    inline constexpr uint32_t OTG_HS_DIEPCTL5_EONUM_DPID = (1U << 16);
    inline constexpr uint32_t OTG_HS_DIEPCTL5_NAKSTS_Pos = 17;
    inline constexpr uint32_t OTG_HS_DIEPCTL5_NAKSTS_Msk = 0x00020000;
    inline constexpr uint32_t OTG_HS_DIEPCTL5_NAKSTS = (1U << 17);
    inline constexpr uint32_t OTG_HS_DIEPCTL5_EPTYP_Pos = 18;
    inline constexpr uint32_t OTG_HS_DIEPCTL5_EPTYP_Msk = 0x000C0000;
    inline constexpr uint32_t OTG_HS_DIEPCTL5_Stall_Pos = 21;
    inline constexpr uint32_t OTG_HS_DIEPCTL5_Stall_Msk = 0x00200000;
    inline constexpr uint32_t OTG_HS_DIEPCTL5_Stall = (1U << 21);
    inline constexpr uint32_t OTG_HS_DIEPCTL5_TXFNUM_Pos = 22;
    inline constexpr uint32_t OTG_HS_DIEPCTL5_TXFNUM_Msk = 0x03C00000;
    inline constexpr uint32_t OTG_HS_DIEPCTL5_CNAK_Pos = 26;
    inline constexpr uint32_t OTG_HS_DIEPCTL5_CNAK_Msk = 0x04000000;
    inline constexpr uint32_t OTG_HS_DIEPCTL5_CNAK = (1U << 26);
    inline constexpr uint32_t OTG_HS_DIEPCTL5_SNAK_Pos = 27;
    inline constexpr uint32_t OTG_HS_DIEPCTL5_SNAK_Msk = 0x08000000;
    inline constexpr uint32_t OTG_HS_DIEPCTL5_SNAK = (1U << 27);
    inline constexpr uint32_t OTG_HS_DIEPCTL5_SD0PID_SEVNFRM_Pos = 28;
    inline constexpr uint32_t OTG_HS_DIEPCTL5_SD0PID_SEVNFRM_Msk = 0x10000000;
    inline constexpr uint32_t OTG_HS_DIEPCTL5_SD0PID_SEVNFRM = (1U << 28);
    inline constexpr uint32_t OTG_HS_DIEPCTL5_SODDFRM_Pos = 29;
    inline constexpr uint32_t OTG_HS_DIEPCTL5_SODDFRM_Msk = 0x20000000;
    inline constexpr uint32_t OTG_HS_DIEPCTL5_SODDFRM = (1U << 29);
    inline constexpr uint32_t OTG_HS_DIEPCTL5_EPDIS_Pos = 30;
    inline constexpr uint32_t OTG_HS_DIEPCTL5_EPDIS_Msk = 0x40000000;
    inline constexpr uint32_t OTG_HS_DIEPCTL5_EPDIS = (1U << 30);
    inline constexpr uint32_t OTG_HS_DIEPCTL5_EPENA_Pos = 31;
    inline constexpr uint32_t OTG_HS_DIEPCTL5_EPENA_Msk = 0x80000000;
    inline constexpr uint32_t OTG_HS_DIEPCTL5_EPENA = (1U << 31);

    // OTG_HS_DIEPTSIZ6 fields
    inline constexpr uint32_t OTG_HS_DIEPTSIZ6_XFRSIZ_Pos = 0;
    inline constexpr uint32_t OTG_HS_DIEPTSIZ6_XFRSIZ_Msk = 0x0007FFFF;
    inline constexpr uint32_t OTG_HS_DIEPTSIZ6_PKTCNT_Pos = 19;
    inline constexpr uint32_t OTG_HS_DIEPTSIZ6_PKTCNT_Msk = 0x1FF80000;
    inline constexpr uint32_t OTG_HS_DIEPTSIZ6_MCNT_Pos = 29;
    inline constexpr uint32_t OTG_HS_DIEPTSIZ6_MCNT_Msk = 0x60000000;

    // OTG_HS_DTXFSTS6 fields
    inline constexpr uint32_t OTG_HS_DTXFSTS6_INEPTFSAV_Pos = 0;
    inline constexpr uint32_t OTG_HS_DTXFSTS6_INEPTFSAV_Msk = 0x0000FFFF;

    // OTG_HS_DIEPINT5 fields
    inline constexpr uint32_t OTG_HS_DIEPINT5_XFRC_Pos = 0;
    inline constexpr uint32_t OTG_HS_DIEPINT5_XFRC_Msk = 0x00000001;
    inline constexpr uint32_t OTG_HS_DIEPINT5_XFRC = (1U << 0);
    inline constexpr uint32_t OTG_HS_DIEPINT5_EPDISD_Pos = 1;
    inline constexpr uint32_t OTG_HS_DIEPINT5_EPDISD_Msk = 0x00000002;
    inline constexpr uint32_t OTG_HS_DIEPINT5_EPDISD = (1U << 1);
    inline constexpr uint32_t OTG_HS_DIEPINT5_TOC_Pos = 3;
    inline constexpr uint32_t OTG_HS_DIEPINT5_TOC_Msk = 0x00000008;
    inline constexpr uint32_t OTG_HS_DIEPINT5_TOC = (1U << 3);
    inline constexpr uint32_t OTG_HS_DIEPINT5_ITTXFE_Pos = 4;
    inline constexpr uint32_t OTG_HS_DIEPINT5_ITTXFE_Msk = 0x00000010;
    inline constexpr uint32_t OTG_HS_DIEPINT5_ITTXFE = (1U << 4);
    inline constexpr uint32_t OTG_HS_DIEPINT5_INEPNE_Pos = 6;
    inline constexpr uint32_t OTG_HS_DIEPINT5_INEPNE_Msk = 0x00000040;
    inline constexpr uint32_t OTG_HS_DIEPINT5_INEPNE = (1U << 6);
    inline constexpr uint32_t OTG_HS_DIEPINT5_TXFE_Pos = 7;
    inline constexpr uint32_t OTG_HS_DIEPINT5_TXFE_Msk = 0x00000080;
    inline constexpr uint32_t OTG_HS_DIEPINT5_TXFE = (1U << 7);
    inline constexpr uint32_t OTG_HS_DIEPINT5_TXFIFOUDRN_Pos = 8;
    inline constexpr uint32_t OTG_HS_DIEPINT5_TXFIFOUDRN_Msk = 0x00000100;
    inline constexpr uint32_t OTG_HS_DIEPINT5_TXFIFOUDRN = (1U << 8);
    inline constexpr uint32_t OTG_HS_DIEPINT5_BNA_Pos = 9;
    inline constexpr uint32_t OTG_HS_DIEPINT5_BNA_Msk = 0x00000200;
    inline constexpr uint32_t OTG_HS_DIEPINT5_BNA = (1U << 9);
    inline constexpr uint32_t OTG_HS_DIEPINT5_PKTDRPSTS_Pos = 11;
    inline constexpr uint32_t OTG_HS_DIEPINT5_PKTDRPSTS_Msk = 0x00000800;
    inline constexpr uint32_t OTG_HS_DIEPINT5_PKTDRPSTS = (1U << 11);
    inline constexpr uint32_t OTG_HS_DIEPINT5_BERR_Pos = 12;
    inline constexpr uint32_t OTG_HS_DIEPINT5_BERR_Msk = 0x00001000;
    inline constexpr uint32_t OTG_HS_DIEPINT5_BERR = (1U << 12);
    inline constexpr uint32_t OTG_HS_DIEPINT5_NAK_Pos = 13;
    inline constexpr uint32_t OTG_HS_DIEPINT5_NAK_Msk = 0x00002000;
    inline constexpr uint32_t OTG_HS_DIEPINT5_NAK = (1U << 13);

    // OTG_HS_DIEPTSIZ7 fields
    inline constexpr uint32_t OTG_HS_DIEPTSIZ7_XFRSIZ_Pos = 0;
    inline constexpr uint32_t OTG_HS_DIEPTSIZ7_XFRSIZ_Msk = 0x0007FFFF;
    inline constexpr uint32_t OTG_HS_DIEPTSIZ7_PKTCNT_Pos = 19;
    inline constexpr uint32_t OTG_HS_DIEPTSIZ7_PKTCNT_Msk = 0x1FF80000;
    inline constexpr uint32_t OTG_HS_DIEPTSIZ7_MCNT_Pos = 29;
    inline constexpr uint32_t OTG_HS_DIEPTSIZ7_MCNT_Msk = 0x60000000;

    // OTG_HS_DTXFSTS7 fields
    inline constexpr uint32_t OTG_HS_DTXFSTS7_INEPTFSAV_Pos = 0;
    inline constexpr uint32_t OTG_HS_DTXFSTS7_INEPTFSAV_Msk = 0x0000FFFF;

    // OTG_HS_DIEPTSIZ5 fields
    inline constexpr uint32_t OTG_HS_DIEPTSIZ5_XFRSIZ_Pos = 0;
    inline constexpr uint32_t OTG_HS_DIEPTSIZ5_XFRSIZ_Msk = 0x0007FFFF;
    inline constexpr uint32_t OTG_HS_DIEPTSIZ5_PKTCNT_Pos = 19;
    inline constexpr uint32_t OTG_HS_DIEPTSIZ5_PKTCNT_Msk = 0x1FF80000;
    inline constexpr uint32_t OTG_HS_DIEPTSIZ5_MCNT_Pos = 29;
    inline constexpr uint32_t OTG_HS_DIEPTSIZ5_MCNT_Msk = 0x60000000;

    // OTG_HS_DTXFSTS5 fields
    inline constexpr uint32_t OTG_HS_DTXFSTS5_INEPTFSAV_Pos = 0;
    inline constexpr uint32_t OTG_HS_DTXFSTS5_INEPTFSAV_Msk = 0x0000FFFF;

    // OTG_HS_DIEPCTL6 fields
    inline constexpr uint32_t OTG_HS_DIEPCTL6_MPSIZ_Pos = 0;
    inline constexpr uint32_t OTG_HS_DIEPCTL6_MPSIZ_Msk = 0x000007FF;
    inline constexpr uint32_t OTG_HS_DIEPCTL6_USBAEP_Pos = 15;
    inline constexpr uint32_t OTG_HS_DIEPCTL6_USBAEP_Msk = 0x00008000;
    inline constexpr uint32_t OTG_HS_DIEPCTL6_USBAEP = (1U << 15);
    inline constexpr uint32_t OTG_HS_DIEPCTL6_EONUM_DPID_Pos = 16;
    inline constexpr uint32_t OTG_HS_DIEPCTL6_EONUM_DPID_Msk = 0x00010000;
    inline constexpr uint32_t OTG_HS_DIEPCTL6_EONUM_DPID = (1U << 16);
    inline constexpr uint32_t OTG_HS_DIEPCTL6_NAKSTS_Pos = 17;
    inline constexpr uint32_t OTG_HS_DIEPCTL6_NAKSTS_Msk = 0x00020000;
    inline constexpr uint32_t OTG_HS_DIEPCTL6_NAKSTS = (1U << 17);
    inline constexpr uint32_t OTG_HS_DIEPCTL6_EPTYP_Pos = 18;
    inline constexpr uint32_t OTG_HS_DIEPCTL6_EPTYP_Msk = 0x000C0000;
    inline constexpr uint32_t OTG_HS_DIEPCTL6_Stall_Pos = 21;
    inline constexpr uint32_t OTG_HS_DIEPCTL6_Stall_Msk = 0x00200000;
    inline constexpr uint32_t OTG_HS_DIEPCTL6_Stall = (1U << 21);
    inline constexpr uint32_t OTG_HS_DIEPCTL6_TXFNUM_Pos = 22;
    inline constexpr uint32_t OTG_HS_DIEPCTL6_TXFNUM_Msk = 0x03C00000;
    inline constexpr uint32_t OTG_HS_DIEPCTL6_CNAK_Pos = 26;
    inline constexpr uint32_t OTG_HS_DIEPCTL6_CNAK_Msk = 0x04000000;
    inline constexpr uint32_t OTG_HS_DIEPCTL6_CNAK = (1U << 26);
    inline constexpr uint32_t OTG_HS_DIEPCTL6_SNAK_Pos = 27;
    inline constexpr uint32_t OTG_HS_DIEPCTL6_SNAK_Msk = 0x08000000;
    inline constexpr uint32_t OTG_HS_DIEPCTL6_SNAK = (1U << 27);
    inline constexpr uint32_t OTG_HS_DIEPCTL6_SD0PID_SEVNFRM_Pos = 28;
    inline constexpr uint32_t OTG_HS_DIEPCTL6_SD0PID_SEVNFRM_Msk = 0x10000000;
    inline constexpr uint32_t OTG_HS_DIEPCTL6_SD0PID_SEVNFRM = (1U << 28);
    inline constexpr uint32_t OTG_HS_DIEPCTL6_SODDFRM_Pos = 29;
    inline constexpr uint32_t OTG_HS_DIEPCTL6_SODDFRM_Msk = 0x20000000;
    inline constexpr uint32_t OTG_HS_DIEPCTL6_SODDFRM = (1U << 29);
    inline constexpr uint32_t OTG_HS_DIEPCTL6_EPDIS_Pos = 30;
    inline constexpr uint32_t OTG_HS_DIEPCTL6_EPDIS_Msk = 0x40000000;
    inline constexpr uint32_t OTG_HS_DIEPCTL6_EPDIS = (1U << 30);
    inline constexpr uint32_t OTG_HS_DIEPCTL6_EPENA_Pos = 31;
    inline constexpr uint32_t OTG_HS_DIEPCTL6_EPENA_Msk = 0x80000000;
    inline constexpr uint32_t OTG_HS_DIEPCTL6_EPENA = (1U << 31);

    // OTG_HS_DIEPINT6 fields
    inline constexpr uint32_t OTG_HS_DIEPINT6_XFRC_Pos = 0;
    inline constexpr uint32_t OTG_HS_DIEPINT6_XFRC_Msk = 0x00000001;
    inline constexpr uint32_t OTG_HS_DIEPINT6_XFRC = (1U << 0);
    inline constexpr uint32_t OTG_HS_DIEPINT6_EPDISD_Pos = 1;
    inline constexpr uint32_t OTG_HS_DIEPINT6_EPDISD_Msk = 0x00000002;
    inline constexpr uint32_t OTG_HS_DIEPINT6_EPDISD = (1U << 1);
    inline constexpr uint32_t OTG_HS_DIEPINT6_TOC_Pos = 3;
    inline constexpr uint32_t OTG_HS_DIEPINT6_TOC_Msk = 0x00000008;
    inline constexpr uint32_t OTG_HS_DIEPINT6_TOC = (1U << 3);
    inline constexpr uint32_t OTG_HS_DIEPINT6_ITTXFE_Pos = 4;
    inline constexpr uint32_t OTG_HS_DIEPINT6_ITTXFE_Msk = 0x00000010;
    inline constexpr uint32_t OTG_HS_DIEPINT6_ITTXFE = (1U << 4);
    inline constexpr uint32_t OTG_HS_DIEPINT6_INEPNE_Pos = 6;
    inline constexpr uint32_t OTG_HS_DIEPINT6_INEPNE_Msk = 0x00000040;
    inline constexpr uint32_t OTG_HS_DIEPINT6_INEPNE = (1U << 6);
    inline constexpr uint32_t OTG_HS_DIEPINT6_TXFE_Pos = 7;
    inline constexpr uint32_t OTG_HS_DIEPINT6_TXFE_Msk = 0x00000080;
    inline constexpr uint32_t OTG_HS_DIEPINT6_TXFE = (1U << 7);
    inline constexpr uint32_t OTG_HS_DIEPINT6_TXFIFOUDRN_Pos = 8;
    inline constexpr uint32_t OTG_HS_DIEPINT6_TXFIFOUDRN_Msk = 0x00000100;
    inline constexpr uint32_t OTG_HS_DIEPINT6_TXFIFOUDRN = (1U << 8);
    inline constexpr uint32_t OTG_HS_DIEPINT6_BNA_Pos = 9;
    inline constexpr uint32_t OTG_HS_DIEPINT6_BNA_Msk = 0x00000200;
    inline constexpr uint32_t OTG_HS_DIEPINT6_BNA = (1U << 9);
    inline constexpr uint32_t OTG_HS_DIEPINT6_PKTDRPSTS_Pos = 11;
    inline constexpr uint32_t OTG_HS_DIEPINT6_PKTDRPSTS_Msk = 0x00000800;
    inline constexpr uint32_t OTG_HS_DIEPINT6_PKTDRPSTS = (1U << 11);
    inline constexpr uint32_t OTG_HS_DIEPINT6_BERR_Pos = 12;
    inline constexpr uint32_t OTG_HS_DIEPINT6_BERR_Msk = 0x00001000;
    inline constexpr uint32_t OTG_HS_DIEPINT6_BERR = (1U << 12);
    inline constexpr uint32_t OTG_HS_DIEPINT6_NAK_Pos = 13;
    inline constexpr uint32_t OTG_HS_DIEPINT6_NAK_Msk = 0x00002000;
    inline constexpr uint32_t OTG_HS_DIEPINT6_NAK = (1U << 13);

    // OTG_HS_DIEPCTL7 fields
    inline constexpr uint32_t OTG_HS_DIEPCTL7_MPSIZ_Pos = 0;
    inline constexpr uint32_t OTG_HS_DIEPCTL7_MPSIZ_Msk = 0x000007FF;
    inline constexpr uint32_t OTG_HS_DIEPCTL7_USBAEP_Pos = 15;
    inline constexpr uint32_t OTG_HS_DIEPCTL7_USBAEP_Msk = 0x00008000;
    inline constexpr uint32_t OTG_HS_DIEPCTL7_USBAEP = (1U << 15);
    inline constexpr uint32_t OTG_HS_DIEPCTL7_EONUM_DPID_Pos = 16;
    inline constexpr uint32_t OTG_HS_DIEPCTL7_EONUM_DPID_Msk = 0x00010000;
    inline constexpr uint32_t OTG_HS_DIEPCTL7_EONUM_DPID = (1U << 16);
    inline constexpr uint32_t OTG_HS_DIEPCTL7_NAKSTS_Pos = 17;
    inline constexpr uint32_t OTG_HS_DIEPCTL7_NAKSTS_Msk = 0x00020000;
    inline constexpr uint32_t OTG_HS_DIEPCTL7_NAKSTS = (1U << 17);
    inline constexpr uint32_t OTG_HS_DIEPCTL7_EPTYP_Pos = 18;
    inline constexpr uint32_t OTG_HS_DIEPCTL7_EPTYP_Msk = 0x000C0000;
    inline constexpr uint32_t OTG_HS_DIEPCTL7_Stall_Pos = 21;
    inline constexpr uint32_t OTG_HS_DIEPCTL7_Stall_Msk = 0x00200000;
    inline constexpr uint32_t OTG_HS_DIEPCTL7_Stall = (1U << 21);
    inline constexpr uint32_t OTG_HS_DIEPCTL7_TXFNUM_Pos = 22;
    inline constexpr uint32_t OTG_HS_DIEPCTL7_TXFNUM_Msk = 0x03C00000;
    inline constexpr uint32_t OTG_HS_DIEPCTL7_CNAK_Pos = 26;
    inline constexpr uint32_t OTG_HS_DIEPCTL7_CNAK_Msk = 0x04000000;
    inline constexpr uint32_t OTG_HS_DIEPCTL7_CNAK = (1U << 26);
    inline constexpr uint32_t OTG_HS_DIEPCTL7_SNAK_Pos = 27;
    inline constexpr uint32_t OTG_HS_DIEPCTL7_SNAK_Msk = 0x08000000;
    inline constexpr uint32_t OTG_HS_DIEPCTL7_SNAK = (1U << 27);
    inline constexpr uint32_t OTG_HS_DIEPCTL7_SD0PID_SEVNFRM_Pos = 28;
    inline constexpr uint32_t OTG_HS_DIEPCTL7_SD0PID_SEVNFRM_Msk = 0x10000000;
    inline constexpr uint32_t OTG_HS_DIEPCTL7_SD0PID_SEVNFRM = (1U << 28);
    inline constexpr uint32_t OTG_HS_DIEPCTL7_SODDFRM_Pos = 29;
    inline constexpr uint32_t OTG_HS_DIEPCTL7_SODDFRM_Msk = 0x20000000;
    inline constexpr uint32_t OTG_HS_DIEPCTL7_SODDFRM = (1U << 29);
    inline constexpr uint32_t OTG_HS_DIEPCTL7_EPDIS_Pos = 30;
    inline constexpr uint32_t OTG_HS_DIEPCTL7_EPDIS_Msk = 0x40000000;
    inline constexpr uint32_t OTG_HS_DIEPCTL7_EPDIS = (1U << 30);
    inline constexpr uint32_t OTG_HS_DIEPCTL7_EPENA_Pos = 31;
    inline constexpr uint32_t OTG_HS_DIEPCTL7_EPENA_Msk = 0x80000000;
    inline constexpr uint32_t OTG_HS_DIEPCTL7_EPENA = (1U << 31);

    // OTG_HS_DIEPINT7 fields
    inline constexpr uint32_t OTG_HS_DIEPINT7_XFRC_Pos = 0;
    inline constexpr uint32_t OTG_HS_DIEPINT7_XFRC_Msk = 0x00000001;
    inline constexpr uint32_t OTG_HS_DIEPINT7_XFRC = (1U << 0);
    inline constexpr uint32_t OTG_HS_DIEPINT7_EPDISD_Pos = 1;
    inline constexpr uint32_t OTG_HS_DIEPINT7_EPDISD_Msk = 0x00000002;
    inline constexpr uint32_t OTG_HS_DIEPINT7_EPDISD = (1U << 1);
    inline constexpr uint32_t OTG_HS_DIEPINT7_TOC_Pos = 3;
    inline constexpr uint32_t OTG_HS_DIEPINT7_TOC_Msk = 0x00000008;
    inline constexpr uint32_t OTG_HS_DIEPINT7_TOC = (1U << 3);
    inline constexpr uint32_t OTG_HS_DIEPINT7_ITTXFE_Pos = 4;
    inline constexpr uint32_t OTG_HS_DIEPINT7_ITTXFE_Msk = 0x00000010;
    inline constexpr uint32_t OTG_HS_DIEPINT7_ITTXFE = (1U << 4);
    inline constexpr uint32_t OTG_HS_DIEPINT7_INEPNE_Pos = 6;
    inline constexpr uint32_t OTG_HS_DIEPINT7_INEPNE_Msk = 0x00000040;
    inline constexpr uint32_t OTG_HS_DIEPINT7_INEPNE = (1U << 6);
    inline constexpr uint32_t OTG_HS_DIEPINT7_TXFE_Pos = 7;
    inline constexpr uint32_t OTG_HS_DIEPINT7_TXFE_Msk = 0x00000080;
    inline constexpr uint32_t OTG_HS_DIEPINT7_TXFE = (1U << 7);
    inline constexpr uint32_t OTG_HS_DIEPINT7_TXFIFOUDRN_Pos = 8;
    inline constexpr uint32_t OTG_HS_DIEPINT7_TXFIFOUDRN_Msk = 0x00000100;
    inline constexpr uint32_t OTG_HS_DIEPINT7_TXFIFOUDRN = (1U << 8);
    inline constexpr uint32_t OTG_HS_DIEPINT7_BNA_Pos = 9;
    inline constexpr uint32_t OTG_HS_DIEPINT7_BNA_Msk = 0x00000200;
    inline constexpr uint32_t OTG_HS_DIEPINT7_BNA = (1U << 9);
    inline constexpr uint32_t OTG_HS_DIEPINT7_PKTDRPSTS_Pos = 11;
    inline constexpr uint32_t OTG_HS_DIEPINT7_PKTDRPSTS_Msk = 0x00000800;
    inline constexpr uint32_t OTG_HS_DIEPINT7_PKTDRPSTS = (1U << 11);
    inline constexpr uint32_t OTG_HS_DIEPINT7_BERR_Pos = 12;
    inline constexpr uint32_t OTG_HS_DIEPINT7_BERR_Msk = 0x00001000;
    inline constexpr uint32_t OTG_HS_DIEPINT7_BERR = (1U << 12);
    inline constexpr uint32_t OTG_HS_DIEPINT7_NAK_Pos = 13;
    inline constexpr uint32_t OTG_HS_DIEPINT7_NAK_Msk = 0x00002000;
    inline constexpr uint32_t OTG_HS_DIEPINT7_NAK = (1U << 13);

    // OTG_HS_DOEPCTL0 fields
    inline constexpr uint32_t OTG_HS_DOEPCTL0_MPSIZ_Pos = 0;
    inline constexpr uint32_t OTG_HS_DOEPCTL0_MPSIZ_Msk = 0x00000003;
    inline constexpr uint32_t OTG_HS_DOEPCTL0_USBAEP_Pos = 15;
    inline constexpr uint32_t OTG_HS_DOEPCTL0_USBAEP_Msk = 0x00008000;
    inline constexpr uint32_t OTG_HS_DOEPCTL0_USBAEP = (1U << 15);
    inline constexpr uint32_t OTG_HS_DOEPCTL0_NAKSTS_Pos = 17;
    inline constexpr uint32_t OTG_HS_DOEPCTL0_NAKSTS_Msk = 0x00020000;
    inline constexpr uint32_t OTG_HS_DOEPCTL0_NAKSTS = (1U << 17);
    inline constexpr uint32_t OTG_HS_DOEPCTL0_EPTYP_Pos = 18;
    inline constexpr uint32_t OTG_HS_DOEPCTL0_EPTYP_Msk = 0x000C0000;
    inline constexpr uint32_t OTG_HS_DOEPCTL0_SNPM_Pos = 20;
    inline constexpr uint32_t OTG_HS_DOEPCTL0_SNPM_Msk = 0x00100000;
    inline constexpr uint32_t OTG_HS_DOEPCTL0_SNPM = (1U << 20);
    inline constexpr uint32_t OTG_HS_DOEPCTL0_Stall_Pos = 21;
    inline constexpr uint32_t OTG_HS_DOEPCTL0_Stall_Msk = 0x00200000;
    inline constexpr uint32_t OTG_HS_DOEPCTL0_Stall = (1U << 21);
    inline constexpr uint32_t OTG_HS_DOEPCTL0_CNAK_Pos = 26;
    inline constexpr uint32_t OTG_HS_DOEPCTL0_CNAK_Msk = 0x04000000;
    inline constexpr uint32_t OTG_HS_DOEPCTL0_CNAK = (1U << 26);
    inline constexpr uint32_t OTG_HS_DOEPCTL0_SNAK_Pos = 27;
    inline constexpr uint32_t OTG_HS_DOEPCTL0_SNAK_Msk = 0x08000000;
    inline constexpr uint32_t OTG_HS_DOEPCTL0_SNAK = (1U << 27);
    inline constexpr uint32_t OTG_HS_DOEPCTL0_EPDIS_Pos = 30;
    inline constexpr uint32_t OTG_HS_DOEPCTL0_EPDIS_Msk = 0x40000000;
    inline constexpr uint32_t OTG_HS_DOEPCTL0_EPDIS = (1U << 30);
    inline constexpr uint32_t OTG_HS_DOEPCTL0_EPENA_Pos = 31;
    inline constexpr uint32_t OTG_HS_DOEPCTL0_EPENA_Msk = 0x80000000;
    inline constexpr uint32_t OTG_HS_DOEPCTL0_EPENA = (1U << 31);

    // OTG_HS_DOEPINT0 fields
    inline constexpr uint32_t OTG_HS_DOEPINT0_XFRC_Pos = 0;
    inline constexpr uint32_t OTG_HS_DOEPINT0_XFRC_Msk = 0x00000001;
    inline constexpr uint32_t OTG_HS_DOEPINT0_XFRC = (1U << 0);
    inline constexpr uint32_t OTG_HS_DOEPINT0_EPDISD_Pos = 1;
    inline constexpr uint32_t OTG_HS_DOEPINT0_EPDISD_Msk = 0x00000002;
    inline constexpr uint32_t OTG_HS_DOEPINT0_EPDISD = (1U << 1);
    inline constexpr uint32_t OTG_HS_DOEPINT0_STUP_Pos = 3;
    inline constexpr uint32_t OTG_HS_DOEPINT0_STUP_Msk = 0x00000008;
    inline constexpr uint32_t OTG_HS_DOEPINT0_STUP = (1U << 3);
    inline constexpr uint32_t OTG_HS_DOEPINT0_OTEPDIS_Pos = 4;
    inline constexpr uint32_t OTG_HS_DOEPINT0_OTEPDIS_Msk = 0x00000010;
    inline constexpr uint32_t OTG_HS_DOEPINT0_OTEPDIS = (1U << 4);
    inline constexpr uint32_t OTG_HS_DOEPINT0_B2BSTUP_Pos = 6;
    inline constexpr uint32_t OTG_HS_DOEPINT0_B2BSTUP_Msk = 0x00000040;
    inline constexpr uint32_t OTG_HS_DOEPINT0_B2BSTUP = (1U << 6);
    inline constexpr uint32_t OTG_HS_DOEPINT0_NYET_Pos = 14;
    inline constexpr uint32_t OTG_HS_DOEPINT0_NYET_Msk = 0x00004000;
    inline constexpr uint32_t OTG_HS_DOEPINT0_NYET = (1U << 14);

    // OTG_HS_DOEPTSIZ0 fields
    inline constexpr uint32_t OTG_HS_DOEPTSIZ0_XFRSIZ_Pos = 0;
    inline constexpr uint32_t OTG_HS_DOEPTSIZ0_XFRSIZ_Msk = 0x0000007F;
    inline constexpr uint32_t OTG_HS_DOEPTSIZ0_PKTCNT_Pos = 19;
    inline constexpr uint32_t OTG_HS_DOEPTSIZ0_PKTCNT_Msk = 0x00080000;
    inline constexpr uint32_t OTG_HS_DOEPTSIZ0_PKTCNT = (1U << 19);
    inline constexpr uint32_t OTG_HS_DOEPTSIZ0_STUPCNT_Pos = 29;
    inline constexpr uint32_t OTG_HS_DOEPTSIZ0_STUPCNT_Msk = 0x60000000;

    // OTG_HS_DOEPCTL1 fields
    inline constexpr uint32_t OTG_HS_DOEPCTL1_MPSIZ_Pos = 0;
    inline constexpr uint32_t OTG_HS_DOEPCTL1_MPSIZ_Msk = 0x000007FF;
    inline constexpr uint32_t OTG_HS_DOEPCTL1_USBAEP_Pos = 15;
    inline constexpr uint32_t OTG_HS_DOEPCTL1_USBAEP_Msk = 0x00008000;
    inline constexpr uint32_t OTG_HS_DOEPCTL1_USBAEP = (1U << 15);
    inline constexpr uint32_t OTG_HS_DOEPCTL1_EONUM_DPID_Pos = 16;
    inline constexpr uint32_t OTG_HS_DOEPCTL1_EONUM_DPID_Msk = 0x00010000;
    inline constexpr uint32_t OTG_HS_DOEPCTL1_EONUM_DPID = (1U << 16);
    inline constexpr uint32_t OTG_HS_DOEPCTL1_NAKSTS_Pos = 17;
    inline constexpr uint32_t OTG_HS_DOEPCTL1_NAKSTS_Msk = 0x00020000;
    inline constexpr uint32_t OTG_HS_DOEPCTL1_NAKSTS = (1U << 17);
    inline constexpr uint32_t OTG_HS_DOEPCTL1_EPTYP_Pos = 18;
    inline constexpr uint32_t OTG_HS_DOEPCTL1_EPTYP_Msk = 0x000C0000;
    inline constexpr uint32_t OTG_HS_DOEPCTL1_SNPM_Pos = 20;
    inline constexpr uint32_t OTG_HS_DOEPCTL1_SNPM_Msk = 0x00100000;
    inline constexpr uint32_t OTG_HS_DOEPCTL1_SNPM = (1U << 20);
    inline constexpr uint32_t OTG_HS_DOEPCTL1_Stall_Pos = 21;
    inline constexpr uint32_t OTG_HS_DOEPCTL1_Stall_Msk = 0x00200000;
    inline constexpr uint32_t OTG_HS_DOEPCTL1_Stall = (1U << 21);
    inline constexpr uint32_t OTG_HS_DOEPCTL1_CNAK_Pos = 26;
    inline constexpr uint32_t OTG_HS_DOEPCTL1_CNAK_Msk = 0x04000000;
    inline constexpr uint32_t OTG_HS_DOEPCTL1_CNAK = (1U << 26);
    inline constexpr uint32_t OTG_HS_DOEPCTL1_SNAK_Pos = 27;
    inline constexpr uint32_t OTG_HS_DOEPCTL1_SNAK_Msk = 0x08000000;
    inline constexpr uint32_t OTG_HS_DOEPCTL1_SNAK = (1U << 27);
    inline constexpr uint32_t OTG_HS_DOEPCTL1_SD0PID_SEVNFRM_Pos = 28;
    inline constexpr uint32_t OTG_HS_DOEPCTL1_SD0PID_SEVNFRM_Msk = 0x10000000;
    inline constexpr uint32_t OTG_HS_DOEPCTL1_SD0PID_SEVNFRM = (1U << 28);
    inline constexpr uint32_t OTG_HS_DOEPCTL1_SODDFRM_Pos = 29;
    inline constexpr uint32_t OTG_HS_DOEPCTL1_SODDFRM_Msk = 0x20000000;
    inline constexpr uint32_t OTG_HS_DOEPCTL1_SODDFRM = (1U << 29);
    inline constexpr uint32_t OTG_HS_DOEPCTL1_EPDIS_Pos = 30;
    inline constexpr uint32_t OTG_HS_DOEPCTL1_EPDIS_Msk = 0x40000000;
    inline constexpr uint32_t OTG_HS_DOEPCTL1_EPDIS = (1U << 30);
    inline constexpr uint32_t OTG_HS_DOEPCTL1_EPENA_Pos = 31;
    inline constexpr uint32_t OTG_HS_DOEPCTL1_EPENA_Msk = 0x80000000;
    inline constexpr uint32_t OTG_HS_DOEPCTL1_EPENA = (1U << 31);

    // OTG_HS_DOEPINT1 fields
    inline constexpr uint32_t OTG_HS_DOEPINT1_XFRC_Pos = 0;
    inline constexpr uint32_t OTG_HS_DOEPINT1_XFRC_Msk = 0x00000001;
    inline constexpr uint32_t OTG_HS_DOEPINT1_XFRC = (1U << 0);
    inline constexpr uint32_t OTG_HS_DOEPINT1_EPDISD_Pos = 1;
    inline constexpr uint32_t OTG_HS_DOEPINT1_EPDISD_Msk = 0x00000002;
    inline constexpr uint32_t OTG_HS_DOEPINT1_EPDISD = (1U << 1);
    inline constexpr uint32_t OTG_HS_DOEPINT1_STUP_Pos = 3;
    inline constexpr uint32_t OTG_HS_DOEPINT1_STUP_Msk = 0x00000008;
    inline constexpr uint32_t OTG_HS_DOEPINT1_STUP = (1U << 3);
    inline constexpr uint32_t OTG_HS_DOEPINT1_OTEPDIS_Pos = 4;
    inline constexpr uint32_t OTG_HS_DOEPINT1_OTEPDIS_Msk = 0x00000010;
    inline constexpr uint32_t OTG_HS_DOEPINT1_OTEPDIS = (1U << 4);
    inline constexpr uint32_t OTG_HS_DOEPINT1_B2BSTUP_Pos = 6;
    inline constexpr uint32_t OTG_HS_DOEPINT1_B2BSTUP_Msk = 0x00000040;
    inline constexpr uint32_t OTG_HS_DOEPINT1_B2BSTUP = (1U << 6);
    inline constexpr uint32_t OTG_HS_DOEPINT1_NYET_Pos = 14;
    inline constexpr uint32_t OTG_HS_DOEPINT1_NYET_Msk = 0x00004000;
    inline constexpr uint32_t OTG_HS_DOEPINT1_NYET = (1U << 14);

    // OTG_HS_DOEPTSIZ1 fields
    inline constexpr uint32_t OTG_HS_DOEPTSIZ1_XFRSIZ_Pos = 0;
    inline constexpr uint32_t OTG_HS_DOEPTSIZ1_XFRSIZ_Msk = 0x0007FFFF;
    inline constexpr uint32_t OTG_HS_DOEPTSIZ1_PKTCNT_Pos = 19;
    inline constexpr uint32_t OTG_HS_DOEPTSIZ1_PKTCNT_Msk = 0x1FF80000;
    inline constexpr uint32_t OTG_HS_DOEPTSIZ1_RXDPID_STUPCNT_Pos = 29;
    inline constexpr uint32_t OTG_HS_DOEPTSIZ1_RXDPID_STUPCNT_Msk = 0x60000000;

    // OTG_HS_DOEPCTL2 fields
    inline constexpr uint32_t OTG_HS_DOEPCTL2_MPSIZ_Pos = 0;
    inline constexpr uint32_t OTG_HS_DOEPCTL2_MPSIZ_Msk = 0x000007FF;
    inline constexpr uint32_t OTG_HS_DOEPCTL2_USBAEP_Pos = 15;
    inline constexpr uint32_t OTG_HS_DOEPCTL2_USBAEP_Msk = 0x00008000;
    inline constexpr uint32_t OTG_HS_DOEPCTL2_USBAEP = (1U << 15);
    inline constexpr uint32_t OTG_HS_DOEPCTL2_EONUM_DPID_Pos = 16;
    inline constexpr uint32_t OTG_HS_DOEPCTL2_EONUM_DPID_Msk = 0x00010000;
    inline constexpr uint32_t OTG_HS_DOEPCTL2_EONUM_DPID = (1U << 16);
    inline constexpr uint32_t OTG_HS_DOEPCTL2_NAKSTS_Pos = 17;
    inline constexpr uint32_t OTG_HS_DOEPCTL2_NAKSTS_Msk = 0x00020000;
    inline constexpr uint32_t OTG_HS_DOEPCTL2_NAKSTS = (1U << 17);
    inline constexpr uint32_t OTG_HS_DOEPCTL2_EPTYP_Pos = 18;
    inline constexpr uint32_t OTG_HS_DOEPCTL2_EPTYP_Msk = 0x000C0000;
    inline constexpr uint32_t OTG_HS_DOEPCTL2_SNPM_Pos = 20;
    inline constexpr uint32_t OTG_HS_DOEPCTL2_SNPM_Msk = 0x00100000;
    inline constexpr uint32_t OTG_HS_DOEPCTL2_SNPM = (1U << 20);
    inline constexpr uint32_t OTG_HS_DOEPCTL2_Stall_Pos = 21;
    inline constexpr uint32_t OTG_HS_DOEPCTL2_Stall_Msk = 0x00200000;
    inline constexpr uint32_t OTG_HS_DOEPCTL2_Stall = (1U << 21);
    inline constexpr uint32_t OTG_HS_DOEPCTL2_CNAK_Pos = 26;
    inline constexpr uint32_t OTG_HS_DOEPCTL2_CNAK_Msk = 0x04000000;
    inline constexpr uint32_t OTG_HS_DOEPCTL2_CNAK = (1U << 26);
    inline constexpr uint32_t OTG_HS_DOEPCTL2_SNAK_Pos = 27;
    inline constexpr uint32_t OTG_HS_DOEPCTL2_SNAK_Msk = 0x08000000;
    inline constexpr uint32_t OTG_HS_DOEPCTL2_SNAK = (1U << 27);
    inline constexpr uint32_t OTG_HS_DOEPCTL2_SD0PID_SEVNFRM_Pos = 28;
    inline constexpr uint32_t OTG_HS_DOEPCTL2_SD0PID_SEVNFRM_Msk = 0x10000000;
    inline constexpr uint32_t OTG_HS_DOEPCTL2_SD0PID_SEVNFRM = (1U << 28);
    inline constexpr uint32_t OTG_HS_DOEPCTL2_SODDFRM_Pos = 29;
    inline constexpr uint32_t OTG_HS_DOEPCTL2_SODDFRM_Msk = 0x20000000;
    inline constexpr uint32_t OTG_HS_DOEPCTL2_SODDFRM = (1U << 29);
    inline constexpr uint32_t OTG_HS_DOEPCTL2_EPDIS_Pos = 30;
    inline constexpr uint32_t OTG_HS_DOEPCTL2_EPDIS_Msk = 0x40000000;
    inline constexpr uint32_t OTG_HS_DOEPCTL2_EPDIS = (1U << 30);
    inline constexpr uint32_t OTG_HS_DOEPCTL2_EPENA_Pos = 31;
    inline constexpr uint32_t OTG_HS_DOEPCTL2_EPENA_Msk = 0x80000000;
    inline constexpr uint32_t OTG_HS_DOEPCTL2_EPENA = (1U << 31);

    // OTG_HS_DOEPINT2 fields
    inline constexpr uint32_t OTG_HS_DOEPINT2_XFRC_Pos = 0;
    inline constexpr uint32_t OTG_HS_DOEPINT2_XFRC_Msk = 0x00000001;
    inline constexpr uint32_t OTG_HS_DOEPINT2_XFRC = (1U << 0);
    inline constexpr uint32_t OTG_HS_DOEPINT2_EPDISD_Pos = 1;
    inline constexpr uint32_t OTG_HS_DOEPINT2_EPDISD_Msk = 0x00000002;
    inline constexpr uint32_t OTG_HS_DOEPINT2_EPDISD = (1U << 1);
    inline constexpr uint32_t OTG_HS_DOEPINT2_STUP_Pos = 3;
    inline constexpr uint32_t OTG_HS_DOEPINT2_STUP_Msk = 0x00000008;
    inline constexpr uint32_t OTG_HS_DOEPINT2_STUP = (1U << 3);
    inline constexpr uint32_t OTG_HS_DOEPINT2_OTEPDIS_Pos = 4;
    inline constexpr uint32_t OTG_HS_DOEPINT2_OTEPDIS_Msk = 0x00000010;
    inline constexpr uint32_t OTG_HS_DOEPINT2_OTEPDIS = (1U << 4);
    inline constexpr uint32_t OTG_HS_DOEPINT2_B2BSTUP_Pos = 6;
    inline constexpr uint32_t OTG_HS_DOEPINT2_B2BSTUP_Msk = 0x00000040;
    inline constexpr uint32_t OTG_HS_DOEPINT2_B2BSTUP = (1U << 6);
    inline constexpr uint32_t OTG_HS_DOEPINT2_NYET_Pos = 14;
    inline constexpr uint32_t OTG_HS_DOEPINT2_NYET_Msk = 0x00004000;
    inline constexpr uint32_t OTG_HS_DOEPINT2_NYET = (1U << 14);

    // OTG_HS_DOEPTSIZ2 fields
    inline constexpr uint32_t OTG_HS_DOEPTSIZ2_XFRSIZ_Pos = 0;
    inline constexpr uint32_t OTG_HS_DOEPTSIZ2_XFRSIZ_Msk = 0x0007FFFF;
    inline constexpr uint32_t OTG_HS_DOEPTSIZ2_PKTCNT_Pos = 19;
    inline constexpr uint32_t OTG_HS_DOEPTSIZ2_PKTCNT_Msk = 0x1FF80000;
    inline constexpr uint32_t OTG_HS_DOEPTSIZ2_RXDPID_STUPCNT_Pos = 29;
    inline constexpr uint32_t OTG_HS_DOEPTSIZ2_RXDPID_STUPCNT_Msk = 0x60000000;

    // OTG_HS_DOEPCTL3 fields
    inline constexpr uint32_t OTG_HS_DOEPCTL3_MPSIZ_Pos = 0;
    inline constexpr uint32_t OTG_HS_DOEPCTL3_MPSIZ_Msk = 0x000007FF;
    inline constexpr uint32_t OTG_HS_DOEPCTL3_USBAEP_Pos = 15;
    inline constexpr uint32_t OTG_HS_DOEPCTL3_USBAEP_Msk = 0x00008000;
    inline constexpr uint32_t OTG_HS_DOEPCTL3_USBAEP = (1U << 15);
    inline constexpr uint32_t OTG_HS_DOEPCTL3_EONUM_DPID_Pos = 16;
    inline constexpr uint32_t OTG_HS_DOEPCTL3_EONUM_DPID_Msk = 0x00010000;
    inline constexpr uint32_t OTG_HS_DOEPCTL3_EONUM_DPID = (1U << 16);
    inline constexpr uint32_t OTG_HS_DOEPCTL3_NAKSTS_Pos = 17;
    inline constexpr uint32_t OTG_HS_DOEPCTL3_NAKSTS_Msk = 0x00020000;
    inline constexpr uint32_t OTG_HS_DOEPCTL3_NAKSTS = (1U << 17);
    inline constexpr uint32_t OTG_HS_DOEPCTL3_EPTYP_Pos = 18;
    inline constexpr uint32_t OTG_HS_DOEPCTL3_EPTYP_Msk = 0x000C0000;
    inline constexpr uint32_t OTG_HS_DOEPCTL3_SNPM_Pos = 20;
    inline constexpr uint32_t OTG_HS_DOEPCTL3_SNPM_Msk = 0x00100000;
    inline constexpr uint32_t OTG_HS_DOEPCTL3_SNPM = (1U << 20);
    inline constexpr uint32_t OTG_HS_DOEPCTL3_Stall_Pos = 21;
    inline constexpr uint32_t OTG_HS_DOEPCTL3_Stall_Msk = 0x00200000;
    inline constexpr uint32_t OTG_HS_DOEPCTL3_Stall = (1U << 21);
    inline constexpr uint32_t OTG_HS_DOEPCTL3_CNAK_Pos = 26;
    inline constexpr uint32_t OTG_HS_DOEPCTL3_CNAK_Msk = 0x04000000;
    inline constexpr uint32_t OTG_HS_DOEPCTL3_CNAK = (1U << 26);
    inline constexpr uint32_t OTG_HS_DOEPCTL3_SNAK_Pos = 27;
    inline constexpr uint32_t OTG_HS_DOEPCTL3_SNAK_Msk = 0x08000000;
    inline constexpr uint32_t OTG_HS_DOEPCTL3_SNAK = (1U << 27);
    inline constexpr uint32_t OTG_HS_DOEPCTL3_SD0PID_SEVNFRM_Pos = 28;
    inline constexpr uint32_t OTG_HS_DOEPCTL3_SD0PID_SEVNFRM_Msk = 0x10000000;
    inline constexpr uint32_t OTG_HS_DOEPCTL3_SD0PID_SEVNFRM = (1U << 28);
    inline constexpr uint32_t OTG_HS_DOEPCTL3_SODDFRM_Pos = 29;
    inline constexpr uint32_t OTG_HS_DOEPCTL3_SODDFRM_Msk = 0x20000000;
    inline constexpr uint32_t OTG_HS_DOEPCTL3_SODDFRM = (1U << 29);
    inline constexpr uint32_t OTG_HS_DOEPCTL3_EPDIS_Pos = 30;
    inline constexpr uint32_t OTG_HS_DOEPCTL3_EPDIS_Msk = 0x40000000;
    inline constexpr uint32_t OTG_HS_DOEPCTL3_EPDIS = (1U << 30);
    inline constexpr uint32_t OTG_HS_DOEPCTL3_EPENA_Pos = 31;
    inline constexpr uint32_t OTG_HS_DOEPCTL3_EPENA_Msk = 0x80000000;
    inline constexpr uint32_t OTG_HS_DOEPCTL3_EPENA = (1U << 31);

    // OTG_HS_DOEPINT3 fields
    inline constexpr uint32_t OTG_HS_DOEPINT3_XFRC_Pos = 0;
    inline constexpr uint32_t OTG_HS_DOEPINT3_XFRC_Msk = 0x00000001;
    inline constexpr uint32_t OTG_HS_DOEPINT3_XFRC = (1U << 0);
    inline constexpr uint32_t OTG_HS_DOEPINT3_EPDISD_Pos = 1;
    inline constexpr uint32_t OTG_HS_DOEPINT3_EPDISD_Msk = 0x00000002;
    inline constexpr uint32_t OTG_HS_DOEPINT3_EPDISD = (1U << 1);
    inline constexpr uint32_t OTG_HS_DOEPINT3_STUP_Pos = 3;
    inline constexpr uint32_t OTG_HS_DOEPINT3_STUP_Msk = 0x00000008;
    inline constexpr uint32_t OTG_HS_DOEPINT3_STUP = (1U << 3);
    inline constexpr uint32_t OTG_HS_DOEPINT3_OTEPDIS_Pos = 4;
    inline constexpr uint32_t OTG_HS_DOEPINT3_OTEPDIS_Msk = 0x00000010;
    inline constexpr uint32_t OTG_HS_DOEPINT3_OTEPDIS = (1U << 4);
    inline constexpr uint32_t OTG_HS_DOEPINT3_B2BSTUP_Pos = 6;
    inline constexpr uint32_t OTG_HS_DOEPINT3_B2BSTUP_Msk = 0x00000040;
    inline constexpr uint32_t OTG_HS_DOEPINT3_B2BSTUP = (1U << 6);
    inline constexpr uint32_t OTG_HS_DOEPINT3_NYET_Pos = 14;
    inline constexpr uint32_t OTG_HS_DOEPINT3_NYET_Msk = 0x00004000;
    inline constexpr uint32_t OTG_HS_DOEPINT3_NYET = (1U << 14);

    // OTG_HS_DOEPTSIZ3 fields
    inline constexpr uint32_t OTG_HS_DOEPTSIZ3_XFRSIZ_Pos = 0;
    inline constexpr uint32_t OTG_HS_DOEPTSIZ3_XFRSIZ_Msk = 0x0007FFFF;
    inline constexpr uint32_t OTG_HS_DOEPTSIZ3_PKTCNT_Pos = 19;
    inline constexpr uint32_t OTG_HS_DOEPTSIZ3_PKTCNT_Msk = 0x1FF80000;
    inline constexpr uint32_t OTG_HS_DOEPTSIZ3_RXDPID_STUPCNT_Pos = 29;
    inline constexpr uint32_t OTG_HS_DOEPTSIZ3_RXDPID_STUPCNT_Msk = 0x60000000;

    // OTG_HS_DOEPCTL4 fields
    inline constexpr uint32_t OTG_HS_DOEPCTL4_MPSIZ_Pos = 0;
    inline constexpr uint32_t OTG_HS_DOEPCTL4_MPSIZ_Msk = 0x000007FF;
    inline constexpr uint32_t OTG_HS_DOEPCTL4_USBAEP_Pos = 15;
    inline constexpr uint32_t OTG_HS_DOEPCTL4_USBAEP_Msk = 0x00008000;
    inline constexpr uint32_t OTG_HS_DOEPCTL4_USBAEP = (1U << 15);
    inline constexpr uint32_t OTG_HS_DOEPCTL4_EONUM_DPID_Pos = 16;
    inline constexpr uint32_t OTG_HS_DOEPCTL4_EONUM_DPID_Msk = 0x00010000;
    inline constexpr uint32_t OTG_HS_DOEPCTL4_EONUM_DPID = (1U << 16);
    inline constexpr uint32_t OTG_HS_DOEPCTL4_NAKSTS_Pos = 17;
    inline constexpr uint32_t OTG_HS_DOEPCTL4_NAKSTS_Msk = 0x00020000;
    inline constexpr uint32_t OTG_HS_DOEPCTL4_NAKSTS = (1U << 17);
    inline constexpr uint32_t OTG_HS_DOEPCTL4_EPTYP_Pos = 18;
    inline constexpr uint32_t OTG_HS_DOEPCTL4_EPTYP_Msk = 0x000C0000;
    inline constexpr uint32_t OTG_HS_DOEPCTL4_SNPM_Pos = 20;
    inline constexpr uint32_t OTG_HS_DOEPCTL4_SNPM_Msk = 0x00100000;
    inline constexpr uint32_t OTG_HS_DOEPCTL4_SNPM = (1U << 20);
    inline constexpr uint32_t OTG_HS_DOEPCTL4_Stall_Pos = 21;
    inline constexpr uint32_t OTG_HS_DOEPCTL4_Stall_Msk = 0x00200000;
    inline constexpr uint32_t OTG_HS_DOEPCTL4_Stall = (1U << 21);
    inline constexpr uint32_t OTG_HS_DOEPCTL4_CNAK_Pos = 26;
    inline constexpr uint32_t OTG_HS_DOEPCTL4_CNAK_Msk = 0x04000000;
    inline constexpr uint32_t OTG_HS_DOEPCTL4_CNAK = (1U << 26);
    inline constexpr uint32_t OTG_HS_DOEPCTL4_SNAK_Pos = 27;
    inline constexpr uint32_t OTG_HS_DOEPCTL4_SNAK_Msk = 0x08000000;
    inline constexpr uint32_t OTG_HS_DOEPCTL4_SNAK = (1U << 27);
    inline constexpr uint32_t OTG_HS_DOEPCTL4_SD0PID_SEVNFRM_Pos = 28;
    inline constexpr uint32_t OTG_HS_DOEPCTL4_SD0PID_SEVNFRM_Msk = 0x10000000;
    inline constexpr uint32_t OTG_HS_DOEPCTL4_SD0PID_SEVNFRM = (1U << 28);
    inline constexpr uint32_t OTG_HS_DOEPCTL4_SODDFRM_Pos = 29;
    inline constexpr uint32_t OTG_HS_DOEPCTL4_SODDFRM_Msk = 0x20000000;
    inline constexpr uint32_t OTG_HS_DOEPCTL4_SODDFRM = (1U << 29);
    inline constexpr uint32_t OTG_HS_DOEPCTL4_EPDIS_Pos = 30;
    inline constexpr uint32_t OTG_HS_DOEPCTL4_EPDIS_Msk = 0x40000000;
    inline constexpr uint32_t OTG_HS_DOEPCTL4_EPDIS = (1U << 30);
    inline constexpr uint32_t OTG_HS_DOEPCTL4_EPENA_Pos = 31;
    inline constexpr uint32_t OTG_HS_DOEPCTL4_EPENA_Msk = 0x80000000;
    inline constexpr uint32_t OTG_HS_DOEPCTL4_EPENA = (1U << 31);

    // OTG_HS_DOEPINT4 fields
    inline constexpr uint32_t OTG_HS_DOEPINT4_XFRC_Pos = 0;
    inline constexpr uint32_t OTG_HS_DOEPINT4_XFRC_Msk = 0x00000001;
    inline constexpr uint32_t OTG_HS_DOEPINT4_XFRC = (1U << 0);
    inline constexpr uint32_t OTG_HS_DOEPINT4_EPDISD_Pos = 1;
    inline constexpr uint32_t OTG_HS_DOEPINT4_EPDISD_Msk = 0x00000002;
    inline constexpr uint32_t OTG_HS_DOEPINT4_EPDISD = (1U << 1);
    inline constexpr uint32_t OTG_HS_DOEPINT4_STUP_Pos = 3;
    inline constexpr uint32_t OTG_HS_DOEPINT4_STUP_Msk = 0x00000008;
    inline constexpr uint32_t OTG_HS_DOEPINT4_STUP = (1U << 3);
    inline constexpr uint32_t OTG_HS_DOEPINT4_OTEPDIS_Pos = 4;
    inline constexpr uint32_t OTG_HS_DOEPINT4_OTEPDIS_Msk = 0x00000010;
    inline constexpr uint32_t OTG_HS_DOEPINT4_OTEPDIS = (1U << 4);
    inline constexpr uint32_t OTG_HS_DOEPINT4_B2BSTUP_Pos = 6;
    inline constexpr uint32_t OTG_HS_DOEPINT4_B2BSTUP_Msk = 0x00000040;
    inline constexpr uint32_t OTG_HS_DOEPINT4_B2BSTUP = (1U << 6);
    inline constexpr uint32_t OTG_HS_DOEPINT4_NYET_Pos = 14;
    inline constexpr uint32_t OTG_HS_DOEPINT4_NYET_Msk = 0x00004000;
    inline constexpr uint32_t OTG_HS_DOEPINT4_NYET = (1U << 14);

    // OTG_HS_DOEPTSIZ4 fields
    inline constexpr uint32_t OTG_HS_DOEPTSIZ4_XFRSIZ_Pos = 0;
    inline constexpr uint32_t OTG_HS_DOEPTSIZ4_XFRSIZ_Msk = 0x0007FFFF;
    inline constexpr uint32_t OTG_HS_DOEPTSIZ4_PKTCNT_Pos = 19;
    inline constexpr uint32_t OTG_HS_DOEPTSIZ4_PKTCNT_Msk = 0x1FF80000;
    inline constexpr uint32_t OTG_HS_DOEPTSIZ4_RXDPID_STUPCNT_Pos = 29;
    inline constexpr uint32_t OTG_HS_DOEPTSIZ4_RXDPID_STUPCNT_Msk = 0x60000000;

    // OTG_HS_DOEPCTL5 fields
    inline constexpr uint32_t OTG_HS_DOEPCTL5_MPSIZ_Pos = 0;
    inline constexpr uint32_t OTG_HS_DOEPCTL5_MPSIZ_Msk = 0x000007FF;
    inline constexpr uint32_t OTG_HS_DOEPCTL5_USBAEP_Pos = 15;
    inline constexpr uint32_t OTG_HS_DOEPCTL5_USBAEP_Msk = 0x00008000;
    inline constexpr uint32_t OTG_HS_DOEPCTL5_USBAEP = (1U << 15);
    inline constexpr uint32_t OTG_HS_DOEPCTL5_EONUM_DPID_Pos = 16;
    inline constexpr uint32_t OTG_HS_DOEPCTL5_EONUM_DPID_Msk = 0x00010000;
    inline constexpr uint32_t OTG_HS_DOEPCTL5_EONUM_DPID = (1U << 16);
    inline constexpr uint32_t OTG_HS_DOEPCTL5_NAKSTS_Pos = 17;
    inline constexpr uint32_t OTG_HS_DOEPCTL5_NAKSTS_Msk = 0x00020000;
    inline constexpr uint32_t OTG_HS_DOEPCTL5_NAKSTS = (1U << 17);
    inline constexpr uint32_t OTG_HS_DOEPCTL5_EPTYP_Pos = 18;
    inline constexpr uint32_t OTG_HS_DOEPCTL5_EPTYP_Msk = 0x000C0000;
    inline constexpr uint32_t OTG_HS_DOEPCTL5_SNPM_Pos = 20;
    inline constexpr uint32_t OTG_HS_DOEPCTL5_SNPM_Msk = 0x00100000;
    inline constexpr uint32_t OTG_HS_DOEPCTL5_SNPM = (1U << 20);
    inline constexpr uint32_t OTG_HS_DOEPCTL5_Stall_Pos = 21;
    inline constexpr uint32_t OTG_HS_DOEPCTL5_Stall_Msk = 0x00200000;
    inline constexpr uint32_t OTG_HS_DOEPCTL5_Stall = (1U << 21);
    inline constexpr uint32_t OTG_HS_DOEPCTL5_CNAK_Pos = 26;
    inline constexpr uint32_t OTG_HS_DOEPCTL5_CNAK_Msk = 0x04000000;
    inline constexpr uint32_t OTG_HS_DOEPCTL5_CNAK = (1U << 26);
    inline constexpr uint32_t OTG_HS_DOEPCTL5_SNAK_Pos = 27;
    inline constexpr uint32_t OTG_HS_DOEPCTL5_SNAK_Msk = 0x08000000;
    inline constexpr uint32_t OTG_HS_DOEPCTL5_SNAK = (1U << 27);
    inline constexpr uint32_t OTG_HS_DOEPCTL5_SD0PID_SEVNFRM_Pos = 28;
    inline constexpr uint32_t OTG_HS_DOEPCTL5_SD0PID_SEVNFRM_Msk = 0x10000000;
    inline constexpr uint32_t OTG_HS_DOEPCTL5_SD0PID_SEVNFRM = (1U << 28);
    inline constexpr uint32_t OTG_HS_DOEPCTL5_SODDFRM_Pos = 29;
    inline constexpr uint32_t OTG_HS_DOEPCTL5_SODDFRM_Msk = 0x20000000;
    inline constexpr uint32_t OTG_HS_DOEPCTL5_SODDFRM = (1U << 29);
    inline constexpr uint32_t OTG_HS_DOEPCTL5_EPDIS_Pos = 30;
    inline constexpr uint32_t OTG_HS_DOEPCTL5_EPDIS_Msk = 0x40000000;
    inline constexpr uint32_t OTG_HS_DOEPCTL5_EPDIS = (1U << 30);
    inline constexpr uint32_t OTG_HS_DOEPCTL5_EPENA_Pos = 31;
    inline constexpr uint32_t OTG_HS_DOEPCTL5_EPENA_Msk = 0x80000000;
    inline constexpr uint32_t OTG_HS_DOEPCTL5_EPENA = (1U << 31);

    // OTG_HS_DOEPINT5 fields
    inline constexpr uint32_t OTG_HS_DOEPINT5_XFRC_Pos = 0;
    inline constexpr uint32_t OTG_HS_DOEPINT5_XFRC_Msk = 0x00000001;
    inline constexpr uint32_t OTG_HS_DOEPINT5_XFRC = (1U << 0);
    inline constexpr uint32_t OTG_HS_DOEPINT5_EPDISD_Pos = 1;
    inline constexpr uint32_t OTG_HS_DOEPINT5_EPDISD_Msk = 0x00000002;
    inline constexpr uint32_t OTG_HS_DOEPINT5_EPDISD = (1U << 1);
    inline constexpr uint32_t OTG_HS_DOEPINT5_STUP_Pos = 3;
    inline constexpr uint32_t OTG_HS_DOEPINT5_STUP_Msk = 0x00000008;
    inline constexpr uint32_t OTG_HS_DOEPINT5_STUP = (1U << 3);
    inline constexpr uint32_t OTG_HS_DOEPINT5_OTEPDIS_Pos = 4;
    inline constexpr uint32_t OTG_HS_DOEPINT5_OTEPDIS_Msk = 0x00000010;
    inline constexpr uint32_t OTG_HS_DOEPINT5_OTEPDIS = (1U << 4);
    inline constexpr uint32_t OTG_HS_DOEPINT5_B2BSTUP_Pos = 6;
    inline constexpr uint32_t OTG_HS_DOEPINT5_B2BSTUP_Msk = 0x00000040;
    inline constexpr uint32_t OTG_HS_DOEPINT5_B2BSTUP = (1U << 6);
    inline constexpr uint32_t OTG_HS_DOEPINT5_NYET_Pos = 14;
    inline constexpr uint32_t OTG_HS_DOEPINT5_NYET_Msk = 0x00004000;
    inline constexpr uint32_t OTG_HS_DOEPINT5_NYET = (1U << 14);

    // OTG_HS_DOEPTSIZ5 fields
    inline constexpr uint32_t OTG_HS_DOEPTSIZ5_XFRSIZ_Pos = 0;
    inline constexpr uint32_t OTG_HS_DOEPTSIZ5_XFRSIZ_Msk = 0x0007FFFF;
    inline constexpr uint32_t OTG_HS_DOEPTSIZ5_PKTCNT_Pos = 19;
    inline constexpr uint32_t OTG_HS_DOEPTSIZ5_PKTCNT_Msk = 0x1FF80000;
    inline constexpr uint32_t OTG_HS_DOEPTSIZ5_RXDPID_STUPCNT_Pos = 29;
    inline constexpr uint32_t OTG_HS_DOEPTSIZ5_RXDPID_STUPCNT_Msk = 0x60000000;

    // OTG_HS_DOEPCTL6 fields
    inline constexpr uint32_t OTG_HS_DOEPCTL6_MPSIZ_Pos = 0;
    inline constexpr uint32_t OTG_HS_DOEPCTL6_MPSIZ_Msk = 0x000007FF;
    inline constexpr uint32_t OTG_HS_DOEPCTL6_USBAEP_Pos = 15;
    inline constexpr uint32_t OTG_HS_DOEPCTL6_USBAEP_Msk = 0x00008000;
    inline constexpr uint32_t OTG_HS_DOEPCTL6_USBAEP = (1U << 15);
    inline constexpr uint32_t OTG_HS_DOEPCTL6_EONUM_DPID_Pos = 16;
    inline constexpr uint32_t OTG_HS_DOEPCTL6_EONUM_DPID_Msk = 0x00010000;
    inline constexpr uint32_t OTG_HS_DOEPCTL6_EONUM_DPID = (1U << 16);
    inline constexpr uint32_t OTG_HS_DOEPCTL6_NAKSTS_Pos = 17;
    inline constexpr uint32_t OTG_HS_DOEPCTL6_NAKSTS_Msk = 0x00020000;
    inline constexpr uint32_t OTG_HS_DOEPCTL6_NAKSTS = (1U << 17);
    inline constexpr uint32_t OTG_HS_DOEPCTL6_EPTYP_Pos = 18;
    inline constexpr uint32_t OTG_HS_DOEPCTL6_EPTYP_Msk = 0x000C0000;
    inline constexpr uint32_t OTG_HS_DOEPCTL6_SNPM_Pos = 20;
    inline constexpr uint32_t OTG_HS_DOEPCTL6_SNPM_Msk = 0x00100000;
    inline constexpr uint32_t OTG_HS_DOEPCTL6_SNPM = (1U << 20);
    inline constexpr uint32_t OTG_HS_DOEPCTL6_Stall_Pos = 21;
    inline constexpr uint32_t OTG_HS_DOEPCTL6_Stall_Msk = 0x00200000;
    inline constexpr uint32_t OTG_HS_DOEPCTL6_Stall = (1U << 21);
    inline constexpr uint32_t OTG_HS_DOEPCTL6_CNAK_Pos = 26;
    inline constexpr uint32_t OTG_HS_DOEPCTL6_CNAK_Msk = 0x04000000;
    inline constexpr uint32_t OTG_HS_DOEPCTL6_CNAK = (1U << 26);
    inline constexpr uint32_t OTG_HS_DOEPCTL6_SNAK_Pos = 27;
    inline constexpr uint32_t OTG_HS_DOEPCTL6_SNAK_Msk = 0x08000000;
    inline constexpr uint32_t OTG_HS_DOEPCTL6_SNAK = (1U << 27);
    inline constexpr uint32_t OTG_HS_DOEPCTL6_SD0PID_SEVNFRM_Pos = 28;
    inline constexpr uint32_t OTG_HS_DOEPCTL6_SD0PID_SEVNFRM_Msk = 0x10000000;
    inline constexpr uint32_t OTG_HS_DOEPCTL6_SD0PID_SEVNFRM = (1U << 28);
    inline constexpr uint32_t OTG_HS_DOEPCTL6_SODDFRM_Pos = 29;
    inline constexpr uint32_t OTG_HS_DOEPCTL6_SODDFRM_Msk = 0x20000000;
    inline constexpr uint32_t OTG_HS_DOEPCTL6_SODDFRM = (1U << 29);
    inline constexpr uint32_t OTG_HS_DOEPCTL6_EPDIS_Pos = 30;
    inline constexpr uint32_t OTG_HS_DOEPCTL6_EPDIS_Msk = 0x40000000;
    inline constexpr uint32_t OTG_HS_DOEPCTL6_EPDIS = (1U << 30);
    inline constexpr uint32_t OTG_HS_DOEPCTL6_EPENA_Pos = 31;
    inline constexpr uint32_t OTG_HS_DOEPCTL6_EPENA_Msk = 0x80000000;
    inline constexpr uint32_t OTG_HS_DOEPCTL6_EPENA = (1U << 31);

    // OTG_HS_DOEPINT6 fields
    inline constexpr uint32_t OTG_HS_DOEPINT6_XFRC_Pos = 0;
    inline constexpr uint32_t OTG_HS_DOEPINT6_XFRC_Msk = 0x00000001;
    inline constexpr uint32_t OTG_HS_DOEPINT6_XFRC = (1U << 0);
    inline constexpr uint32_t OTG_HS_DOEPINT6_EPDISD_Pos = 1;
    inline constexpr uint32_t OTG_HS_DOEPINT6_EPDISD_Msk = 0x00000002;
    inline constexpr uint32_t OTG_HS_DOEPINT6_EPDISD = (1U << 1);
    inline constexpr uint32_t OTG_HS_DOEPINT6_STUP_Pos = 3;
    inline constexpr uint32_t OTG_HS_DOEPINT6_STUP_Msk = 0x00000008;
    inline constexpr uint32_t OTG_HS_DOEPINT6_STUP = (1U << 3);
    inline constexpr uint32_t OTG_HS_DOEPINT6_OTEPDIS_Pos = 4;
    inline constexpr uint32_t OTG_HS_DOEPINT6_OTEPDIS_Msk = 0x00000010;
    inline constexpr uint32_t OTG_HS_DOEPINT6_OTEPDIS = (1U << 4);
    inline constexpr uint32_t OTG_HS_DOEPINT6_B2BSTUP_Pos = 6;
    inline constexpr uint32_t OTG_HS_DOEPINT6_B2BSTUP_Msk = 0x00000040;
    inline constexpr uint32_t OTG_HS_DOEPINT6_B2BSTUP = (1U << 6);
    inline constexpr uint32_t OTG_HS_DOEPINT6_NYET_Pos = 14;
    inline constexpr uint32_t OTG_HS_DOEPINT6_NYET_Msk = 0x00004000;
    inline constexpr uint32_t OTG_HS_DOEPINT6_NYET = (1U << 14);

    // OTG_HS_DOEPTSIZ6 fields
    inline constexpr uint32_t OTG_HS_DOEPTSIZ6_XFRSIZ_Pos = 0;
    inline constexpr uint32_t OTG_HS_DOEPTSIZ6_XFRSIZ_Msk = 0x0007FFFF;
    inline constexpr uint32_t OTG_HS_DOEPTSIZ6_PKTCNT_Pos = 19;
    inline constexpr uint32_t OTG_HS_DOEPTSIZ6_PKTCNT_Msk = 0x1FF80000;
    inline constexpr uint32_t OTG_HS_DOEPTSIZ6_RXDPID_STUPCNT_Pos = 29;
    inline constexpr uint32_t OTG_HS_DOEPTSIZ6_RXDPID_STUPCNT_Msk = 0x60000000;

    // OTG_HS_DOEPCTL7 fields
    inline constexpr uint32_t OTG_HS_DOEPCTL7_MPSIZ_Pos = 0;
    inline constexpr uint32_t OTG_HS_DOEPCTL7_MPSIZ_Msk = 0x000007FF;
    inline constexpr uint32_t OTG_HS_DOEPCTL7_USBAEP_Pos = 15;
    inline constexpr uint32_t OTG_HS_DOEPCTL7_USBAEP_Msk = 0x00008000;
    inline constexpr uint32_t OTG_HS_DOEPCTL7_USBAEP = (1U << 15);
    inline constexpr uint32_t OTG_HS_DOEPCTL7_EONUM_DPID_Pos = 16;
    inline constexpr uint32_t OTG_HS_DOEPCTL7_EONUM_DPID_Msk = 0x00010000;
    inline constexpr uint32_t OTG_HS_DOEPCTL7_EONUM_DPID = (1U << 16);
    inline constexpr uint32_t OTG_HS_DOEPCTL7_NAKSTS_Pos = 17;
    inline constexpr uint32_t OTG_HS_DOEPCTL7_NAKSTS_Msk = 0x00020000;
    inline constexpr uint32_t OTG_HS_DOEPCTL7_NAKSTS = (1U << 17);
    inline constexpr uint32_t OTG_HS_DOEPCTL7_EPTYP_Pos = 18;
    inline constexpr uint32_t OTG_HS_DOEPCTL7_EPTYP_Msk = 0x000C0000;
    inline constexpr uint32_t OTG_HS_DOEPCTL7_SNPM_Pos = 20;
    inline constexpr uint32_t OTG_HS_DOEPCTL7_SNPM_Msk = 0x00100000;
    inline constexpr uint32_t OTG_HS_DOEPCTL7_SNPM = (1U << 20);
    inline constexpr uint32_t OTG_HS_DOEPCTL7_Stall_Pos = 21;
    inline constexpr uint32_t OTG_HS_DOEPCTL7_Stall_Msk = 0x00200000;
    inline constexpr uint32_t OTG_HS_DOEPCTL7_Stall = (1U << 21);
    inline constexpr uint32_t OTG_HS_DOEPCTL7_CNAK_Pos = 26;
    inline constexpr uint32_t OTG_HS_DOEPCTL7_CNAK_Msk = 0x04000000;
    inline constexpr uint32_t OTG_HS_DOEPCTL7_CNAK = (1U << 26);
    inline constexpr uint32_t OTG_HS_DOEPCTL7_SNAK_Pos = 27;
    inline constexpr uint32_t OTG_HS_DOEPCTL7_SNAK_Msk = 0x08000000;
    inline constexpr uint32_t OTG_HS_DOEPCTL7_SNAK = (1U << 27);
    inline constexpr uint32_t OTG_HS_DOEPCTL7_SD0PID_SEVNFRM_Pos = 28;
    inline constexpr uint32_t OTG_HS_DOEPCTL7_SD0PID_SEVNFRM_Msk = 0x10000000;
    inline constexpr uint32_t OTG_HS_DOEPCTL7_SD0PID_SEVNFRM = (1U << 28);
    inline constexpr uint32_t OTG_HS_DOEPCTL7_SODDFRM_Pos = 29;
    inline constexpr uint32_t OTG_HS_DOEPCTL7_SODDFRM_Msk = 0x20000000;
    inline constexpr uint32_t OTG_HS_DOEPCTL7_SODDFRM = (1U << 29);
    inline constexpr uint32_t OTG_HS_DOEPCTL7_EPDIS_Pos = 30;
    inline constexpr uint32_t OTG_HS_DOEPCTL7_EPDIS_Msk = 0x40000000;
    inline constexpr uint32_t OTG_HS_DOEPCTL7_EPDIS = (1U << 30);
    inline constexpr uint32_t OTG_HS_DOEPCTL7_EPENA_Pos = 31;
    inline constexpr uint32_t OTG_HS_DOEPCTL7_EPENA_Msk = 0x80000000;
    inline constexpr uint32_t OTG_HS_DOEPCTL7_EPENA = (1U << 31);

    // OTG_HS_DOEPINT7 fields
    inline constexpr uint32_t OTG_HS_DOEPINT7_XFRC_Pos = 0;
    inline constexpr uint32_t OTG_HS_DOEPINT7_XFRC_Msk = 0x00000001;
    inline constexpr uint32_t OTG_HS_DOEPINT7_XFRC = (1U << 0);
    inline constexpr uint32_t OTG_HS_DOEPINT7_EPDISD_Pos = 1;
    inline constexpr uint32_t OTG_HS_DOEPINT7_EPDISD_Msk = 0x00000002;
    inline constexpr uint32_t OTG_HS_DOEPINT7_EPDISD = (1U << 1);
    inline constexpr uint32_t OTG_HS_DOEPINT7_STUP_Pos = 3;
    inline constexpr uint32_t OTG_HS_DOEPINT7_STUP_Msk = 0x00000008;
    inline constexpr uint32_t OTG_HS_DOEPINT7_STUP = (1U << 3);
    inline constexpr uint32_t OTG_HS_DOEPINT7_OTEPDIS_Pos = 4;
    inline constexpr uint32_t OTG_HS_DOEPINT7_OTEPDIS_Msk = 0x00000010;
    inline constexpr uint32_t OTG_HS_DOEPINT7_OTEPDIS = (1U << 4);
    inline constexpr uint32_t OTG_HS_DOEPINT7_B2BSTUP_Pos = 6;
    inline constexpr uint32_t OTG_HS_DOEPINT7_B2BSTUP_Msk = 0x00000040;
    inline constexpr uint32_t OTG_HS_DOEPINT7_B2BSTUP = (1U << 6);
    inline constexpr uint32_t OTG_HS_DOEPINT7_NYET_Pos = 14;
    inline constexpr uint32_t OTG_HS_DOEPINT7_NYET_Msk = 0x00004000;
    inline constexpr uint32_t OTG_HS_DOEPINT7_NYET = (1U << 14);

    // OTG_HS_DOEPTSIZ7 fields
    inline constexpr uint32_t OTG_HS_DOEPTSIZ7_XFRSIZ_Pos = 0;
    inline constexpr uint32_t OTG_HS_DOEPTSIZ7_XFRSIZ_Msk = 0x0007FFFF;
    inline constexpr uint32_t OTG_HS_DOEPTSIZ7_PKTCNT_Pos = 19;
    inline constexpr uint32_t OTG_HS_DOEPTSIZ7_PKTCNT_Msk = 0x1FF80000;
    inline constexpr uint32_t OTG_HS_DOEPTSIZ7_RXDPID_STUPCNT_Pos = 29;
    inline constexpr uint32_t OTG_HS_DOEPTSIZ7_RXDPID_STUPCNT_Msk = 0x60000000;

} // namespace OTG1_HS_DEVICE

namespace OTG2_HS_DEVICE {
    // OTG_HS_DCFG fields
    inline constexpr uint32_t OTG_HS_DCFG_DSPD_Pos = 0;
    inline constexpr uint32_t OTG_HS_DCFG_DSPD_Msk = 0x00000003;
    inline constexpr uint32_t OTG_HS_DCFG_NZLSOHSK_Pos = 2;
    inline constexpr uint32_t OTG_HS_DCFG_NZLSOHSK_Msk = 0x00000004;
    inline constexpr uint32_t OTG_HS_DCFG_NZLSOHSK = (1U << 2);
    inline constexpr uint32_t OTG_HS_DCFG_DAD_Pos = 4;
    inline constexpr uint32_t OTG_HS_DCFG_DAD_Msk = 0x000007F0;
    inline constexpr uint32_t OTG_HS_DCFG_PFIVL_Pos = 11;
    inline constexpr uint32_t OTG_HS_DCFG_PFIVL_Msk = 0x00001800;
    inline constexpr uint32_t OTG_HS_DCFG_PERSCHIVL_Pos = 24;
    inline constexpr uint32_t OTG_HS_DCFG_PERSCHIVL_Msk = 0x03000000;

    // OTG_HS_DCTL fields
    inline constexpr uint32_t OTG_HS_DCTL_RWUSIG_Pos = 0;
    inline constexpr uint32_t OTG_HS_DCTL_RWUSIG_Msk = 0x00000001;
    inline constexpr uint32_t OTG_HS_DCTL_RWUSIG = (1U << 0);
    inline constexpr uint32_t OTG_HS_DCTL_SDIS_Pos = 1;
    inline constexpr uint32_t OTG_HS_DCTL_SDIS_Msk = 0x00000002;
    inline constexpr uint32_t OTG_HS_DCTL_SDIS = (1U << 1);
    inline constexpr uint32_t OTG_HS_DCTL_GINSTS_Pos = 2;
    inline constexpr uint32_t OTG_HS_DCTL_GINSTS_Msk = 0x00000004;
    inline constexpr uint32_t OTG_HS_DCTL_GINSTS = (1U << 2);
    inline constexpr uint32_t OTG_HS_DCTL_GONSTS_Pos = 3;
    inline constexpr uint32_t OTG_HS_DCTL_GONSTS_Msk = 0x00000008;
    inline constexpr uint32_t OTG_HS_DCTL_GONSTS = (1U << 3);
    inline constexpr uint32_t OTG_HS_DCTL_TCTL_Pos = 4;
    inline constexpr uint32_t OTG_HS_DCTL_TCTL_Msk = 0x00000070;
    inline constexpr uint32_t OTG_HS_DCTL_SGINAK_Pos = 7;
    inline constexpr uint32_t OTG_HS_DCTL_SGINAK_Msk = 0x00000080;
    inline constexpr uint32_t OTG_HS_DCTL_SGINAK = (1U << 7);
    inline constexpr uint32_t OTG_HS_DCTL_CGINAK_Pos = 8;
    inline constexpr uint32_t OTG_HS_DCTL_CGINAK_Msk = 0x00000100;
    inline constexpr uint32_t OTG_HS_DCTL_CGINAK = (1U << 8);
    inline constexpr uint32_t OTG_HS_DCTL_SGONAK_Pos = 9;
    inline constexpr uint32_t OTG_HS_DCTL_SGONAK_Msk = 0x00000200;
    inline constexpr uint32_t OTG_HS_DCTL_SGONAK = (1U << 9);
    inline constexpr uint32_t OTG_HS_DCTL_CGONAK_Pos = 10;
    inline constexpr uint32_t OTG_HS_DCTL_CGONAK_Msk = 0x00000400;
    inline constexpr uint32_t OTG_HS_DCTL_CGONAK = (1U << 10);
    inline constexpr uint32_t OTG_HS_DCTL_POPRGDNE_Pos = 11;
    inline constexpr uint32_t OTG_HS_DCTL_POPRGDNE_Msk = 0x00000800;
    inline constexpr uint32_t OTG_HS_DCTL_POPRGDNE = (1U << 11);

    // OTG_HS_DSTS fields
    inline constexpr uint32_t OTG_HS_DSTS_SUSPSTS_Pos = 0;
    inline constexpr uint32_t OTG_HS_DSTS_SUSPSTS_Msk = 0x00000001;
    inline constexpr uint32_t OTG_HS_DSTS_SUSPSTS = (1U << 0);
    inline constexpr uint32_t OTG_HS_DSTS_ENUMSPD_Pos = 1;
    inline constexpr uint32_t OTG_HS_DSTS_ENUMSPD_Msk = 0x00000006;
    inline constexpr uint32_t OTG_HS_DSTS_EERR_Pos = 3;
    inline constexpr uint32_t OTG_HS_DSTS_EERR_Msk = 0x00000008;
    inline constexpr uint32_t OTG_HS_DSTS_EERR = (1U << 3);
    inline constexpr uint32_t OTG_HS_DSTS_FNSOF_Pos = 8;
    inline constexpr uint32_t OTG_HS_DSTS_FNSOF_Msk = 0x003FFF00;

    // OTG_HS_DIEPMSK fields
    inline constexpr uint32_t OTG_HS_DIEPMSK_XFRCM_Pos = 0;
    inline constexpr uint32_t OTG_HS_DIEPMSK_XFRCM_Msk = 0x00000001;
    inline constexpr uint32_t OTG_HS_DIEPMSK_XFRCM = (1U << 0);
    inline constexpr uint32_t OTG_HS_DIEPMSK_EPDM_Pos = 1;
    inline constexpr uint32_t OTG_HS_DIEPMSK_EPDM_Msk = 0x00000002;
    inline constexpr uint32_t OTG_HS_DIEPMSK_EPDM = (1U << 1);
    inline constexpr uint32_t OTG_HS_DIEPMSK_TOM_Pos = 3;
    inline constexpr uint32_t OTG_HS_DIEPMSK_TOM_Msk = 0x00000008;
    inline constexpr uint32_t OTG_HS_DIEPMSK_TOM = (1U << 3);
    inline constexpr uint32_t OTG_HS_DIEPMSK_ITTXFEMSK_Pos = 4;
    inline constexpr uint32_t OTG_HS_DIEPMSK_ITTXFEMSK_Msk = 0x00000010;
    inline constexpr uint32_t OTG_HS_DIEPMSK_ITTXFEMSK = (1U << 4);
    inline constexpr uint32_t OTG_HS_DIEPMSK_INEPNMM_Pos = 5;
    inline constexpr uint32_t OTG_HS_DIEPMSK_INEPNMM_Msk = 0x00000020;
    inline constexpr uint32_t OTG_HS_DIEPMSK_INEPNMM = (1U << 5);
    inline constexpr uint32_t OTG_HS_DIEPMSK_INEPNEM_Pos = 6;
    inline constexpr uint32_t OTG_HS_DIEPMSK_INEPNEM_Msk = 0x00000040;
    inline constexpr uint32_t OTG_HS_DIEPMSK_INEPNEM = (1U << 6);
    inline constexpr uint32_t OTG_HS_DIEPMSK_TXFURM_Pos = 8;
    inline constexpr uint32_t OTG_HS_DIEPMSK_TXFURM_Msk = 0x00000100;
    inline constexpr uint32_t OTG_HS_DIEPMSK_TXFURM = (1U << 8);
    inline constexpr uint32_t OTG_HS_DIEPMSK_BIM_Pos = 9;
    inline constexpr uint32_t OTG_HS_DIEPMSK_BIM_Msk = 0x00000200;
    inline constexpr uint32_t OTG_HS_DIEPMSK_BIM = (1U << 9);

    // OTG_HS_DOEPMSK fields
    inline constexpr uint32_t OTG_HS_DOEPMSK_XFRCM_Pos = 0;
    inline constexpr uint32_t OTG_HS_DOEPMSK_XFRCM_Msk = 0x00000001;
    inline constexpr uint32_t OTG_HS_DOEPMSK_XFRCM = (1U << 0);
    inline constexpr uint32_t OTG_HS_DOEPMSK_EPDM_Pos = 1;
    inline constexpr uint32_t OTG_HS_DOEPMSK_EPDM_Msk = 0x00000002;
    inline constexpr uint32_t OTG_HS_DOEPMSK_EPDM = (1U << 1);
    inline constexpr uint32_t OTG_HS_DOEPMSK_STUPM_Pos = 3;
    inline constexpr uint32_t OTG_HS_DOEPMSK_STUPM_Msk = 0x00000008;
    inline constexpr uint32_t OTG_HS_DOEPMSK_STUPM = (1U << 3);
    inline constexpr uint32_t OTG_HS_DOEPMSK_OTEPDM_Pos = 4;
    inline constexpr uint32_t OTG_HS_DOEPMSK_OTEPDM_Msk = 0x00000010;
    inline constexpr uint32_t OTG_HS_DOEPMSK_OTEPDM = (1U << 4);
    inline constexpr uint32_t OTG_HS_DOEPMSK_B2BSTUP_Pos = 6;
    inline constexpr uint32_t OTG_HS_DOEPMSK_B2BSTUP_Msk = 0x00000040;
    inline constexpr uint32_t OTG_HS_DOEPMSK_B2BSTUP = (1U << 6);
    inline constexpr uint32_t OTG_HS_DOEPMSK_OPEM_Pos = 8;
    inline constexpr uint32_t OTG_HS_DOEPMSK_OPEM_Msk = 0x00000100;
    inline constexpr uint32_t OTG_HS_DOEPMSK_OPEM = (1U << 8);
    inline constexpr uint32_t OTG_HS_DOEPMSK_BOIM_Pos = 9;
    inline constexpr uint32_t OTG_HS_DOEPMSK_BOIM_Msk = 0x00000200;
    inline constexpr uint32_t OTG_HS_DOEPMSK_BOIM = (1U << 9);

    // OTG_HS_DAINT fields
    inline constexpr uint32_t OTG_HS_DAINT_IEPINT_Pos = 0;
    inline constexpr uint32_t OTG_HS_DAINT_IEPINT_Msk = 0x0000FFFF;
    inline constexpr uint32_t OTG_HS_DAINT_OEPINT_Pos = 16;
    inline constexpr uint32_t OTG_HS_DAINT_OEPINT_Msk = 0xFFFF0000;

    // OTG_HS_DAINTMSK fields
    inline constexpr uint32_t OTG_HS_DAINTMSK_IEPM_Pos = 0;
    inline constexpr uint32_t OTG_HS_DAINTMSK_IEPM_Msk = 0x0000FFFF;
    inline constexpr uint32_t OTG_HS_DAINTMSK_OEPM_Pos = 16;
    inline constexpr uint32_t OTG_HS_DAINTMSK_OEPM_Msk = 0xFFFF0000;

    // OTG_HS_DVBUSDIS fields
    inline constexpr uint32_t OTG_HS_DVBUSDIS_VBUSDT_Pos = 0;
    inline constexpr uint32_t OTG_HS_DVBUSDIS_VBUSDT_Msk = 0x0000FFFF;

    // OTG_HS_DVBUSPULSE fields
    inline constexpr uint32_t OTG_HS_DVBUSPULSE_DVBUSP_Pos = 0;
    inline constexpr uint32_t OTG_HS_DVBUSPULSE_DVBUSP_Msk = 0x00000FFF;

    // OTG_HS_DTHRCTL fields
    inline constexpr uint32_t OTG_HS_DTHRCTL_NONISOTHREN_Pos = 0;
    inline constexpr uint32_t OTG_HS_DTHRCTL_NONISOTHREN_Msk = 0x00000001;
    inline constexpr uint32_t OTG_HS_DTHRCTL_NONISOTHREN = (1U << 0);
    inline constexpr uint32_t OTG_HS_DTHRCTL_ISOTHREN_Pos = 1;
    inline constexpr uint32_t OTG_HS_DTHRCTL_ISOTHREN_Msk = 0x00000002;
    inline constexpr uint32_t OTG_HS_DTHRCTL_ISOTHREN = (1U << 1);
    inline constexpr uint32_t OTG_HS_DTHRCTL_TXTHRLEN_Pos = 2;
    inline constexpr uint32_t OTG_HS_DTHRCTL_TXTHRLEN_Msk = 0x000007FC;
    inline constexpr uint32_t OTG_HS_DTHRCTL_RXTHREN_Pos = 16;
    inline constexpr uint32_t OTG_HS_DTHRCTL_RXTHREN_Msk = 0x00010000;
    inline constexpr uint32_t OTG_HS_DTHRCTL_RXTHREN = (1U << 16);
    inline constexpr uint32_t OTG_HS_DTHRCTL_RXTHRLEN_Pos = 17;
    inline constexpr uint32_t OTG_HS_DTHRCTL_RXTHRLEN_Msk = 0x03FE0000;
    inline constexpr uint32_t OTG_HS_DTHRCTL_ARPEN_Pos = 27;
    inline constexpr uint32_t OTG_HS_DTHRCTL_ARPEN_Msk = 0x08000000;
    inline constexpr uint32_t OTG_HS_DTHRCTL_ARPEN = (1U << 27);

    // OTG_HS_DIEPEMPMSK fields
    inline constexpr uint32_t OTG_HS_DIEPEMPMSK_INEPTXFEM_Pos = 0;
    inline constexpr uint32_t OTG_HS_DIEPEMPMSK_INEPTXFEM_Msk = 0x0000FFFF;

    // OTG_HS_DEACHINT fields
    inline constexpr uint32_t OTG_HS_DEACHINT_IEP1INT_Pos = 1;
    inline constexpr uint32_t OTG_HS_DEACHINT_IEP1INT_Msk = 0x00000002;
    inline constexpr uint32_t OTG_HS_DEACHINT_IEP1INT = (1U << 1);
    inline constexpr uint32_t OTG_HS_DEACHINT_OEP1INT_Pos = 17;
    inline constexpr uint32_t OTG_HS_DEACHINT_OEP1INT_Msk = 0x00020000;
    inline constexpr uint32_t OTG_HS_DEACHINT_OEP1INT = (1U << 17);

    // OTG_HS_DEACHINTMSK fields
    inline constexpr uint32_t OTG_HS_DEACHINTMSK_IEP1INTM_Pos = 1;
    inline constexpr uint32_t OTG_HS_DEACHINTMSK_IEP1INTM_Msk = 0x00000002;
    inline constexpr uint32_t OTG_HS_DEACHINTMSK_IEP1INTM = (1U << 1);
    inline constexpr uint32_t OTG_HS_DEACHINTMSK_OEP1INTM_Pos = 17;
    inline constexpr uint32_t OTG_HS_DEACHINTMSK_OEP1INTM_Msk = 0x00020000;
    inline constexpr uint32_t OTG_HS_DEACHINTMSK_OEP1INTM = (1U << 17);

    // OTG_HS_DIEPCTL0 fields
    inline constexpr uint32_t OTG_HS_DIEPCTL0_MPSIZ_Pos = 0;
    inline constexpr uint32_t OTG_HS_DIEPCTL0_MPSIZ_Msk = 0x000007FF;
    inline constexpr uint32_t OTG_HS_DIEPCTL0_USBAEP_Pos = 15;
    inline constexpr uint32_t OTG_HS_DIEPCTL0_USBAEP_Msk = 0x00008000;
    inline constexpr uint32_t OTG_HS_DIEPCTL0_USBAEP = (1U << 15);
    inline constexpr uint32_t OTG_HS_DIEPCTL0_EONUM_DPID_Pos = 16;
    inline constexpr uint32_t OTG_HS_DIEPCTL0_EONUM_DPID_Msk = 0x00010000;
    inline constexpr uint32_t OTG_HS_DIEPCTL0_EONUM_DPID = (1U << 16);
    inline constexpr uint32_t OTG_HS_DIEPCTL0_NAKSTS_Pos = 17;
    inline constexpr uint32_t OTG_HS_DIEPCTL0_NAKSTS_Msk = 0x00020000;
    inline constexpr uint32_t OTG_HS_DIEPCTL0_NAKSTS = (1U << 17);
    inline constexpr uint32_t OTG_HS_DIEPCTL0_EPTYP_Pos = 18;
    inline constexpr uint32_t OTG_HS_DIEPCTL0_EPTYP_Msk = 0x000C0000;
    inline constexpr uint32_t OTG_HS_DIEPCTL0_Stall_Pos = 21;
    inline constexpr uint32_t OTG_HS_DIEPCTL0_Stall_Msk = 0x00200000;
    inline constexpr uint32_t OTG_HS_DIEPCTL0_Stall = (1U << 21);
    inline constexpr uint32_t OTG_HS_DIEPCTL0_TXFNUM_Pos = 22;
    inline constexpr uint32_t OTG_HS_DIEPCTL0_TXFNUM_Msk = 0x03C00000;
    inline constexpr uint32_t OTG_HS_DIEPCTL0_CNAK_Pos = 26;
    inline constexpr uint32_t OTG_HS_DIEPCTL0_CNAK_Msk = 0x04000000;
    inline constexpr uint32_t OTG_HS_DIEPCTL0_CNAK = (1U << 26);
    inline constexpr uint32_t OTG_HS_DIEPCTL0_SNAK_Pos = 27;
    inline constexpr uint32_t OTG_HS_DIEPCTL0_SNAK_Msk = 0x08000000;
    inline constexpr uint32_t OTG_HS_DIEPCTL0_SNAK = (1U << 27);
    inline constexpr uint32_t OTG_HS_DIEPCTL0_SD0PID_SEVNFRM_Pos = 28;
    inline constexpr uint32_t OTG_HS_DIEPCTL0_SD0PID_SEVNFRM_Msk = 0x10000000;
    inline constexpr uint32_t OTG_HS_DIEPCTL0_SD0PID_SEVNFRM = (1U << 28);
    inline constexpr uint32_t OTG_HS_DIEPCTL0_SODDFRM_Pos = 29;
    inline constexpr uint32_t OTG_HS_DIEPCTL0_SODDFRM_Msk = 0x20000000;
    inline constexpr uint32_t OTG_HS_DIEPCTL0_SODDFRM = (1U << 29);
    inline constexpr uint32_t OTG_HS_DIEPCTL0_EPDIS_Pos = 30;
    inline constexpr uint32_t OTG_HS_DIEPCTL0_EPDIS_Msk = 0x40000000;
    inline constexpr uint32_t OTG_HS_DIEPCTL0_EPDIS = (1U << 30);
    inline constexpr uint32_t OTG_HS_DIEPCTL0_EPENA_Pos = 31;
    inline constexpr uint32_t OTG_HS_DIEPCTL0_EPENA_Msk = 0x80000000;
    inline constexpr uint32_t OTG_HS_DIEPCTL0_EPENA = (1U << 31);

    // OTG_HS_DIEPINT0 fields
    inline constexpr uint32_t OTG_HS_DIEPINT0_XFRC_Pos = 0;
    inline constexpr uint32_t OTG_HS_DIEPINT0_XFRC_Msk = 0x00000001;
    inline constexpr uint32_t OTG_HS_DIEPINT0_XFRC = (1U << 0);
    inline constexpr uint32_t OTG_HS_DIEPINT0_EPDISD_Pos = 1;
    inline constexpr uint32_t OTG_HS_DIEPINT0_EPDISD_Msk = 0x00000002;
    inline constexpr uint32_t OTG_HS_DIEPINT0_EPDISD = (1U << 1);
    inline constexpr uint32_t OTG_HS_DIEPINT0_TOC_Pos = 3;
    inline constexpr uint32_t OTG_HS_DIEPINT0_TOC_Msk = 0x00000008;
    inline constexpr uint32_t OTG_HS_DIEPINT0_TOC = (1U << 3);
    inline constexpr uint32_t OTG_HS_DIEPINT0_ITTXFE_Pos = 4;
    inline constexpr uint32_t OTG_HS_DIEPINT0_ITTXFE_Msk = 0x00000010;
    inline constexpr uint32_t OTG_HS_DIEPINT0_ITTXFE = (1U << 4);
    inline constexpr uint32_t OTG_HS_DIEPINT0_INEPNE_Pos = 6;
    inline constexpr uint32_t OTG_HS_DIEPINT0_INEPNE_Msk = 0x00000040;
    inline constexpr uint32_t OTG_HS_DIEPINT0_INEPNE = (1U << 6);
    inline constexpr uint32_t OTG_HS_DIEPINT0_TXFE_Pos = 7;
    inline constexpr uint32_t OTG_HS_DIEPINT0_TXFE_Msk = 0x00000080;
    inline constexpr uint32_t OTG_HS_DIEPINT0_TXFE = (1U << 7);
    inline constexpr uint32_t OTG_HS_DIEPINT0_TXFIFOUDRN_Pos = 8;
    inline constexpr uint32_t OTG_HS_DIEPINT0_TXFIFOUDRN_Msk = 0x00000100;
    inline constexpr uint32_t OTG_HS_DIEPINT0_TXFIFOUDRN = (1U << 8);
    inline constexpr uint32_t OTG_HS_DIEPINT0_BNA_Pos = 9;
    inline constexpr uint32_t OTG_HS_DIEPINT0_BNA_Msk = 0x00000200;
    inline constexpr uint32_t OTG_HS_DIEPINT0_BNA = (1U << 9);
    inline constexpr uint32_t OTG_HS_DIEPINT0_PKTDRPSTS_Pos = 11;
    inline constexpr uint32_t OTG_HS_DIEPINT0_PKTDRPSTS_Msk = 0x00000800;
    inline constexpr uint32_t OTG_HS_DIEPINT0_PKTDRPSTS = (1U << 11);
    inline constexpr uint32_t OTG_HS_DIEPINT0_BERR_Pos = 12;
    inline constexpr uint32_t OTG_HS_DIEPINT0_BERR_Msk = 0x00001000;
    inline constexpr uint32_t OTG_HS_DIEPINT0_BERR = (1U << 12);
    inline constexpr uint32_t OTG_HS_DIEPINT0_NAK_Pos = 13;
    inline constexpr uint32_t OTG_HS_DIEPINT0_NAK_Msk = 0x00002000;
    inline constexpr uint32_t OTG_HS_DIEPINT0_NAK = (1U << 13);

    // OTG_HS_DIEPTSIZ0 fields
    inline constexpr uint32_t OTG_HS_DIEPTSIZ0_XFRSIZ_Pos = 0;
    inline constexpr uint32_t OTG_HS_DIEPTSIZ0_XFRSIZ_Msk = 0x0000007F;
    inline constexpr uint32_t OTG_HS_DIEPTSIZ0_PKTCNT_Pos = 19;
    inline constexpr uint32_t OTG_HS_DIEPTSIZ0_PKTCNT_Msk = 0x00180000;

    // OTG_HS_DIEPDMA1 fields
    inline constexpr uint32_t OTG_HS_DIEPDMA1_DMAADDR_Pos = 0;
    inline constexpr uint32_t OTG_HS_DIEPDMA1_DMAADDR_Msk = 0xFFFFFFFF;

    // OTG_HS_DTXFSTS0 fields
    inline constexpr uint32_t OTG_HS_DTXFSTS0_INEPTFSAV_Pos = 0;
    inline constexpr uint32_t OTG_HS_DTXFSTS0_INEPTFSAV_Msk = 0x0000FFFF;

    // OTG_HS_DIEPCTL1 fields
    inline constexpr uint32_t OTG_HS_DIEPCTL1_MPSIZ_Pos = 0;
    inline constexpr uint32_t OTG_HS_DIEPCTL1_MPSIZ_Msk = 0x000007FF;
    inline constexpr uint32_t OTG_HS_DIEPCTL1_USBAEP_Pos = 15;
    inline constexpr uint32_t OTG_HS_DIEPCTL1_USBAEP_Msk = 0x00008000;
    inline constexpr uint32_t OTG_HS_DIEPCTL1_USBAEP = (1U << 15);
    inline constexpr uint32_t OTG_HS_DIEPCTL1_EONUM_DPID_Pos = 16;
    inline constexpr uint32_t OTG_HS_DIEPCTL1_EONUM_DPID_Msk = 0x00010000;
    inline constexpr uint32_t OTG_HS_DIEPCTL1_EONUM_DPID = (1U << 16);
    inline constexpr uint32_t OTG_HS_DIEPCTL1_NAKSTS_Pos = 17;
    inline constexpr uint32_t OTG_HS_DIEPCTL1_NAKSTS_Msk = 0x00020000;
    inline constexpr uint32_t OTG_HS_DIEPCTL1_NAKSTS = (1U << 17);
    inline constexpr uint32_t OTG_HS_DIEPCTL1_EPTYP_Pos = 18;
    inline constexpr uint32_t OTG_HS_DIEPCTL1_EPTYP_Msk = 0x000C0000;
    inline constexpr uint32_t OTG_HS_DIEPCTL1_Stall_Pos = 21;
    inline constexpr uint32_t OTG_HS_DIEPCTL1_Stall_Msk = 0x00200000;
    inline constexpr uint32_t OTG_HS_DIEPCTL1_Stall = (1U << 21);
    inline constexpr uint32_t OTG_HS_DIEPCTL1_TXFNUM_Pos = 22;
    inline constexpr uint32_t OTG_HS_DIEPCTL1_TXFNUM_Msk = 0x03C00000;
    inline constexpr uint32_t OTG_HS_DIEPCTL1_CNAK_Pos = 26;
    inline constexpr uint32_t OTG_HS_DIEPCTL1_CNAK_Msk = 0x04000000;
    inline constexpr uint32_t OTG_HS_DIEPCTL1_CNAK = (1U << 26);
    inline constexpr uint32_t OTG_HS_DIEPCTL1_SNAK_Pos = 27;
    inline constexpr uint32_t OTG_HS_DIEPCTL1_SNAK_Msk = 0x08000000;
    inline constexpr uint32_t OTG_HS_DIEPCTL1_SNAK = (1U << 27);
    inline constexpr uint32_t OTG_HS_DIEPCTL1_SD0PID_SEVNFRM_Pos = 28;
    inline constexpr uint32_t OTG_HS_DIEPCTL1_SD0PID_SEVNFRM_Msk = 0x10000000;
    inline constexpr uint32_t OTG_HS_DIEPCTL1_SD0PID_SEVNFRM = (1U << 28);
    inline constexpr uint32_t OTG_HS_DIEPCTL1_SODDFRM_Pos = 29;
    inline constexpr uint32_t OTG_HS_DIEPCTL1_SODDFRM_Msk = 0x20000000;
    inline constexpr uint32_t OTG_HS_DIEPCTL1_SODDFRM = (1U << 29);
    inline constexpr uint32_t OTG_HS_DIEPCTL1_EPDIS_Pos = 30;
    inline constexpr uint32_t OTG_HS_DIEPCTL1_EPDIS_Msk = 0x40000000;
    inline constexpr uint32_t OTG_HS_DIEPCTL1_EPDIS = (1U << 30);
    inline constexpr uint32_t OTG_HS_DIEPCTL1_EPENA_Pos = 31;
    inline constexpr uint32_t OTG_HS_DIEPCTL1_EPENA_Msk = 0x80000000;
    inline constexpr uint32_t OTG_HS_DIEPCTL1_EPENA = (1U << 31);

    // OTG_HS_DIEPINT1 fields
    inline constexpr uint32_t OTG_HS_DIEPINT1_XFRC_Pos = 0;
    inline constexpr uint32_t OTG_HS_DIEPINT1_XFRC_Msk = 0x00000001;
    inline constexpr uint32_t OTG_HS_DIEPINT1_XFRC = (1U << 0);
    inline constexpr uint32_t OTG_HS_DIEPINT1_EPDISD_Pos = 1;
    inline constexpr uint32_t OTG_HS_DIEPINT1_EPDISD_Msk = 0x00000002;
    inline constexpr uint32_t OTG_HS_DIEPINT1_EPDISD = (1U << 1);
    inline constexpr uint32_t OTG_HS_DIEPINT1_TOC_Pos = 3;
    inline constexpr uint32_t OTG_HS_DIEPINT1_TOC_Msk = 0x00000008;
    inline constexpr uint32_t OTG_HS_DIEPINT1_TOC = (1U << 3);
    inline constexpr uint32_t OTG_HS_DIEPINT1_ITTXFE_Pos = 4;
    inline constexpr uint32_t OTG_HS_DIEPINT1_ITTXFE_Msk = 0x00000010;
    inline constexpr uint32_t OTG_HS_DIEPINT1_ITTXFE = (1U << 4);
    inline constexpr uint32_t OTG_HS_DIEPINT1_INEPNE_Pos = 6;
    inline constexpr uint32_t OTG_HS_DIEPINT1_INEPNE_Msk = 0x00000040;
    inline constexpr uint32_t OTG_HS_DIEPINT1_INEPNE = (1U << 6);
    inline constexpr uint32_t OTG_HS_DIEPINT1_TXFE_Pos = 7;
    inline constexpr uint32_t OTG_HS_DIEPINT1_TXFE_Msk = 0x00000080;
    inline constexpr uint32_t OTG_HS_DIEPINT1_TXFE = (1U << 7);
    inline constexpr uint32_t OTG_HS_DIEPINT1_TXFIFOUDRN_Pos = 8;
    inline constexpr uint32_t OTG_HS_DIEPINT1_TXFIFOUDRN_Msk = 0x00000100;
    inline constexpr uint32_t OTG_HS_DIEPINT1_TXFIFOUDRN = (1U << 8);
    inline constexpr uint32_t OTG_HS_DIEPINT1_BNA_Pos = 9;
    inline constexpr uint32_t OTG_HS_DIEPINT1_BNA_Msk = 0x00000200;
    inline constexpr uint32_t OTG_HS_DIEPINT1_BNA = (1U << 9);
    inline constexpr uint32_t OTG_HS_DIEPINT1_PKTDRPSTS_Pos = 11;
    inline constexpr uint32_t OTG_HS_DIEPINT1_PKTDRPSTS_Msk = 0x00000800;
    inline constexpr uint32_t OTG_HS_DIEPINT1_PKTDRPSTS = (1U << 11);
    inline constexpr uint32_t OTG_HS_DIEPINT1_BERR_Pos = 12;
    inline constexpr uint32_t OTG_HS_DIEPINT1_BERR_Msk = 0x00001000;
    inline constexpr uint32_t OTG_HS_DIEPINT1_BERR = (1U << 12);
    inline constexpr uint32_t OTG_HS_DIEPINT1_NAK_Pos = 13;
    inline constexpr uint32_t OTG_HS_DIEPINT1_NAK_Msk = 0x00002000;
    inline constexpr uint32_t OTG_HS_DIEPINT1_NAK = (1U << 13);

    // OTG_HS_DIEPTSIZ1 fields
    inline constexpr uint32_t OTG_HS_DIEPTSIZ1_XFRSIZ_Pos = 0;
    inline constexpr uint32_t OTG_HS_DIEPTSIZ1_XFRSIZ_Msk = 0x0007FFFF;
    inline constexpr uint32_t OTG_HS_DIEPTSIZ1_PKTCNT_Pos = 19;
    inline constexpr uint32_t OTG_HS_DIEPTSIZ1_PKTCNT_Msk = 0x1FF80000;
    inline constexpr uint32_t OTG_HS_DIEPTSIZ1_MCNT_Pos = 29;
    inline constexpr uint32_t OTG_HS_DIEPTSIZ1_MCNT_Msk = 0x60000000;

    // OTG_HS_DIEPDMA2 fields
    inline constexpr uint32_t OTG_HS_DIEPDMA2_DMAADDR_Pos = 0;
    inline constexpr uint32_t OTG_HS_DIEPDMA2_DMAADDR_Msk = 0xFFFFFFFF;

    // OTG_HS_DTXFSTS1 fields
    inline constexpr uint32_t OTG_HS_DTXFSTS1_INEPTFSAV_Pos = 0;
    inline constexpr uint32_t OTG_HS_DTXFSTS1_INEPTFSAV_Msk = 0x0000FFFF;

    // OTG_HS_DIEPCTL2 fields
    inline constexpr uint32_t OTG_HS_DIEPCTL2_MPSIZ_Pos = 0;
    inline constexpr uint32_t OTG_HS_DIEPCTL2_MPSIZ_Msk = 0x000007FF;
    inline constexpr uint32_t OTG_HS_DIEPCTL2_USBAEP_Pos = 15;
    inline constexpr uint32_t OTG_HS_DIEPCTL2_USBAEP_Msk = 0x00008000;
    inline constexpr uint32_t OTG_HS_DIEPCTL2_USBAEP = (1U << 15);
    inline constexpr uint32_t OTG_HS_DIEPCTL2_EONUM_DPID_Pos = 16;
    inline constexpr uint32_t OTG_HS_DIEPCTL2_EONUM_DPID_Msk = 0x00010000;
    inline constexpr uint32_t OTG_HS_DIEPCTL2_EONUM_DPID = (1U << 16);
    inline constexpr uint32_t OTG_HS_DIEPCTL2_NAKSTS_Pos = 17;
    inline constexpr uint32_t OTG_HS_DIEPCTL2_NAKSTS_Msk = 0x00020000;
    inline constexpr uint32_t OTG_HS_DIEPCTL2_NAKSTS = (1U << 17);
    inline constexpr uint32_t OTG_HS_DIEPCTL2_EPTYP_Pos = 18;
    inline constexpr uint32_t OTG_HS_DIEPCTL2_EPTYP_Msk = 0x000C0000;
    inline constexpr uint32_t OTG_HS_DIEPCTL2_Stall_Pos = 21;
    inline constexpr uint32_t OTG_HS_DIEPCTL2_Stall_Msk = 0x00200000;
    inline constexpr uint32_t OTG_HS_DIEPCTL2_Stall = (1U << 21);
    inline constexpr uint32_t OTG_HS_DIEPCTL2_TXFNUM_Pos = 22;
    inline constexpr uint32_t OTG_HS_DIEPCTL2_TXFNUM_Msk = 0x03C00000;
    inline constexpr uint32_t OTG_HS_DIEPCTL2_CNAK_Pos = 26;
    inline constexpr uint32_t OTG_HS_DIEPCTL2_CNAK_Msk = 0x04000000;
    inline constexpr uint32_t OTG_HS_DIEPCTL2_CNAK = (1U << 26);
    inline constexpr uint32_t OTG_HS_DIEPCTL2_SNAK_Pos = 27;
    inline constexpr uint32_t OTG_HS_DIEPCTL2_SNAK_Msk = 0x08000000;
    inline constexpr uint32_t OTG_HS_DIEPCTL2_SNAK = (1U << 27);
    inline constexpr uint32_t OTG_HS_DIEPCTL2_SD0PID_SEVNFRM_Pos = 28;
    inline constexpr uint32_t OTG_HS_DIEPCTL2_SD0PID_SEVNFRM_Msk = 0x10000000;
    inline constexpr uint32_t OTG_HS_DIEPCTL2_SD0PID_SEVNFRM = (1U << 28);
    inline constexpr uint32_t OTG_HS_DIEPCTL2_SODDFRM_Pos = 29;
    inline constexpr uint32_t OTG_HS_DIEPCTL2_SODDFRM_Msk = 0x20000000;
    inline constexpr uint32_t OTG_HS_DIEPCTL2_SODDFRM = (1U << 29);
    inline constexpr uint32_t OTG_HS_DIEPCTL2_EPDIS_Pos = 30;
    inline constexpr uint32_t OTG_HS_DIEPCTL2_EPDIS_Msk = 0x40000000;
    inline constexpr uint32_t OTG_HS_DIEPCTL2_EPDIS = (1U << 30);
    inline constexpr uint32_t OTG_HS_DIEPCTL2_EPENA_Pos = 31;
    inline constexpr uint32_t OTG_HS_DIEPCTL2_EPENA_Msk = 0x80000000;
    inline constexpr uint32_t OTG_HS_DIEPCTL2_EPENA = (1U << 31);

    // OTG_HS_DIEPINT2 fields
    inline constexpr uint32_t OTG_HS_DIEPINT2_XFRC_Pos = 0;
    inline constexpr uint32_t OTG_HS_DIEPINT2_XFRC_Msk = 0x00000001;
    inline constexpr uint32_t OTG_HS_DIEPINT2_XFRC = (1U << 0);
    inline constexpr uint32_t OTG_HS_DIEPINT2_EPDISD_Pos = 1;
    inline constexpr uint32_t OTG_HS_DIEPINT2_EPDISD_Msk = 0x00000002;
    inline constexpr uint32_t OTG_HS_DIEPINT2_EPDISD = (1U << 1);
    inline constexpr uint32_t OTG_HS_DIEPINT2_TOC_Pos = 3;
    inline constexpr uint32_t OTG_HS_DIEPINT2_TOC_Msk = 0x00000008;
    inline constexpr uint32_t OTG_HS_DIEPINT2_TOC = (1U << 3);
    inline constexpr uint32_t OTG_HS_DIEPINT2_ITTXFE_Pos = 4;
    inline constexpr uint32_t OTG_HS_DIEPINT2_ITTXFE_Msk = 0x00000010;
    inline constexpr uint32_t OTG_HS_DIEPINT2_ITTXFE = (1U << 4);
    inline constexpr uint32_t OTG_HS_DIEPINT2_INEPNE_Pos = 6;
    inline constexpr uint32_t OTG_HS_DIEPINT2_INEPNE_Msk = 0x00000040;
    inline constexpr uint32_t OTG_HS_DIEPINT2_INEPNE = (1U << 6);
    inline constexpr uint32_t OTG_HS_DIEPINT2_TXFE_Pos = 7;
    inline constexpr uint32_t OTG_HS_DIEPINT2_TXFE_Msk = 0x00000080;
    inline constexpr uint32_t OTG_HS_DIEPINT2_TXFE = (1U << 7);
    inline constexpr uint32_t OTG_HS_DIEPINT2_TXFIFOUDRN_Pos = 8;
    inline constexpr uint32_t OTG_HS_DIEPINT2_TXFIFOUDRN_Msk = 0x00000100;
    inline constexpr uint32_t OTG_HS_DIEPINT2_TXFIFOUDRN = (1U << 8);
    inline constexpr uint32_t OTG_HS_DIEPINT2_BNA_Pos = 9;
    inline constexpr uint32_t OTG_HS_DIEPINT2_BNA_Msk = 0x00000200;
    inline constexpr uint32_t OTG_HS_DIEPINT2_BNA = (1U << 9);
    inline constexpr uint32_t OTG_HS_DIEPINT2_PKTDRPSTS_Pos = 11;
    inline constexpr uint32_t OTG_HS_DIEPINT2_PKTDRPSTS_Msk = 0x00000800;
    inline constexpr uint32_t OTG_HS_DIEPINT2_PKTDRPSTS = (1U << 11);
    inline constexpr uint32_t OTG_HS_DIEPINT2_BERR_Pos = 12;
    inline constexpr uint32_t OTG_HS_DIEPINT2_BERR_Msk = 0x00001000;
    inline constexpr uint32_t OTG_HS_DIEPINT2_BERR = (1U << 12);
    inline constexpr uint32_t OTG_HS_DIEPINT2_NAK_Pos = 13;
    inline constexpr uint32_t OTG_HS_DIEPINT2_NAK_Msk = 0x00002000;
    inline constexpr uint32_t OTG_HS_DIEPINT2_NAK = (1U << 13);

    // OTG_HS_DIEPTSIZ2 fields
    inline constexpr uint32_t OTG_HS_DIEPTSIZ2_XFRSIZ_Pos = 0;
    inline constexpr uint32_t OTG_HS_DIEPTSIZ2_XFRSIZ_Msk = 0x0007FFFF;
    inline constexpr uint32_t OTG_HS_DIEPTSIZ2_PKTCNT_Pos = 19;
    inline constexpr uint32_t OTG_HS_DIEPTSIZ2_PKTCNT_Msk = 0x1FF80000;
    inline constexpr uint32_t OTG_HS_DIEPTSIZ2_MCNT_Pos = 29;
    inline constexpr uint32_t OTG_HS_DIEPTSIZ2_MCNT_Msk = 0x60000000;

    // OTG_HS_DIEPDMA3 fields
    inline constexpr uint32_t OTG_HS_DIEPDMA3_DMAADDR_Pos = 0;
    inline constexpr uint32_t OTG_HS_DIEPDMA3_DMAADDR_Msk = 0xFFFFFFFF;

    // OTG_HS_DTXFSTS2 fields
    inline constexpr uint32_t OTG_HS_DTXFSTS2_INEPTFSAV_Pos = 0;
    inline constexpr uint32_t OTG_HS_DTXFSTS2_INEPTFSAV_Msk = 0x0000FFFF;

    // OTG_HS_DIEPCTL3 fields
    inline constexpr uint32_t OTG_HS_DIEPCTL3_MPSIZ_Pos = 0;
    inline constexpr uint32_t OTG_HS_DIEPCTL3_MPSIZ_Msk = 0x000007FF;
    inline constexpr uint32_t OTG_HS_DIEPCTL3_USBAEP_Pos = 15;
    inline constexpr uint32_t OTG_HS_DIEPCTL3_USBAEP_Msk = 0x00008000;
    inline constexpr uint32_t OTG_HS_DIEPCTL3_USBAEP = (1U << 15);
    inline constexpr uint32_t OTG_HS_DIEPCTL3_EONUM_DPID_Pos = 16;
    inline constexpr uint32_t OTG_HS_DIEPCTL3_EONUM_DPID_Msk = 0x00010000;
    inline constexpr uint32_t OTG_HS_DIEPCTL3_EONUM_DPID = (1U << 16);
    inline constexpr uint32_t OTG_HS_DIEPCTL3_NAKSTS_Pos = 17;
    inline constexpr uint32_t OTG_HS_DIEPCTL3_NAKSTS_Msk = 0x00020000;
    inline constexpr uint32_t OTG_HS_DIEPCTL3_NAKSTS = (1U << 17);
    inline constexpr uint32_t OTG_HS_DIEPCTL3_EPTYP_Pos = 18;
    inline constexpr uint32_t OTG_HS_DIEPCTL3_EPTYP_Msk = 0x000C0000;
    inline constexpr uint32_t OTG_HS_DIEPCTL3_Stall_Pos = 21;
    inline constexpr uint32_t OTG_HS_DIEPCTL3_Stall_Msk = 0x00200000;
    inline constexpr uint32_t OTG_HS_DIEPCTL3_Stall = (1U << 21);
    inline constexpr uint32_t OTG_HS_DIEPCTL3_TXFNUM_Pos = 22;
    inline constexpr uint32_t OTG_HS_DIEPCTL3_TXFNUM_Msk = 0x03C00000;
    inline constexpr uint32_t OTG_HS_DIEPCTL3_CNAK_Pos = 26;
    inline constexpr uint32_t OTG_HS_DIEPCTL3_CNAK_Msk = 0x04000000;
    inline constexpr uint32_t OTG_HS_DIEPCTL3_CNAK = (1U << 26);
    inline constexpr uint32_t OTG_HS_DIEPCTL3_SNAK_Pos = 27;
    inline constexpr uint32_t OTG_HS_DIEPCTL3_SNAK_Msk = 0x08000000;
    inline constexpr uint32_t OTG_HS_DIEPCTL3_SNAK = (1U << 27);
    inline constexpr uint32_t OTG_HS_DIEPCTL3_SD0PID_SEVNFRM_Pos = 28;
    inline constexpr uint32_t OTG_HS_DIEPCTL3_SD0PID_SEVNFRM_Msk = 0x10000000;
    inline constexpr uint32_t OTG_HS_DIEPCTL3_SD0PID_SEVNFRM = (1U << 28);
    inline constexpr uint32_t OTG_HS_DIEPCTL3_SODDFRM_Pos = 29;
    inline constexpr uint32_t OTG_HS_DIEPCTL3_SODDFRM_Msk = 0x20000000;
    inline constexpr uint32_t OTG_HS_DIEPCTL3_SODDFRM = (1U << 29);
    inline constexpr uint32_t OTG_HS_DIEPCTL3_EPDIS_Pos = 30;
    inline constexpr uint32_t OTG_HS_DIEPCTL3_EPDIS_Msk = 0x40000000;
    inline constexpr uint32_t OTG_HS_DIEPCTL3_EPDIS = (1U << 30);
    inline constexpr uint32_t OTG_HS_DIEPCTL3_EPENA_Pos = 31;
    inline constexpr uint32_t OTG_HS_DIEPCTL3_EPENA_Msk = 0x80000000;
    inline constexpr uint32_t OTG_HS_DIEPCTL3_EPENA = (1U << 31);

    // OTG_HS_DIEPINT3 fields
    inline constexpr uint32_t OTG_HS_DIEPINT3_XFRC_Pos = 0;
    inline constexpr uint32_t OTG_HS_DIEPINT3_XFRC_Msk = 0x00000001;
    inline constexpr uint32_t OTG_HS_DIEPINT3_XFRC = (1U << 0);
    inline constexpr uint32_t OTG_HS_DIEPINT3_EPDISD_Pos = 1;
    inline constexpr uint32_t OTG_HS_DIEPINT3_EPDISD_Msk = 0x00000002;
    inline constexpr uint32_t OTG_HS_DIEPINT3_EPDISD = (1U << 1);
    inline constexpr uint32_t OTG_HS_DIEPINT3_TOC_Pos = 3;
    inline constexpr uint32_t OTG_HS_DIEPINT3_TOC_Msk = 0x00000008;
    inline constexpr uint32_t OTG_HS_DIEPINT3_TOC = (1U << 3);
    inline constexpr uint32_t OTG_HS_DIEPINT3_ITTXFE_Pos = 4;
    inline constexpr uint32_t OTG_HS_DIEPINT3_ITTXFE_Msk = 0x00000010;
    inline constexpr uint32_t OTG_HS_DIEPINT3_ITTXFE = (1U << 4);
    inline constexpr uint32_t OTG_HS_DIEPINT3_INEPNE_Pos = 6;
    inline constexpr uint32_t OTG_HS_DIEPINT3_INEPNE_Msk = 0x00000040;
    inline constexpr uint32_t OTG_HS_DIEPINT3_INEPNE = (1U << 6);
    inline constexpr uint32_t OTG_HS_DIEPINT3_TXFE_Pos = 7;
    inline constexpr uint32_t OTG_HS_DIEPINT3_TXFE_Msk = 0x00000080;
    inline constexpr uint32_t OTG_HS_DIEPINT3_TXFE = (1U << 7);
    inline constexpr uint32_t OTG_HS_DIEPINT3_TXFIFOUDRN_Pos = 8;
    inline constexpr uint32_t OTG_HS_DIEPINT3_TXFIFOUDRN_Msk = 0x00000100;
    inline constexpr uint32_t OTG_HS_DIEPINT3_TXFIFOUDRN = (1U << 8);
    inline constexpr uint32_t OTG_HS_DIEPINT3_BNA_Pos = 9;
    inline constexpr uint32_t OTG_HS_DIEPINT3_BNA_Msk = 0x00000200;
    inline constexpr uint32_t OTG_HS_DIEPINT3_BNA = (1U << 9);
    inline constexpr uint32_t OTG_HS_DIEPINT3_PKTDRPSTS_Pos = 11;
    inline constexpr uint32_t OTG_HS_DIEPINT3_PKTDRPSTS_Msk = 0x00000800;
    inline constexpr uint32_t OTG_HS_DIEPINT3_PKTDRPSTS = (1U << 11);
    inline constexpr uint32_t OTG_HS_DIEPINT3_BERR_Pos = 12;
    inline constexpr uint32_t OTG_HS_DIEPINT3_BERR_Msk = 0x00001000;
    inline constexpr uint32_t OTG_HS_DIEPINT3_BERR = (1U << 12);
    inline constexpr uint32_t OTG_HS_DIEPINT3_NAK_Pos = 13;
    inline constexpr uint32_t OTG_HS_DIEPINT3_NAK_Msk = 0x00002000;
    inline constexpr uint32_t OTG_HS_DIEPINT3_NAK = (1U << 13);

    // OTG_HS_DIEPTSIZ3 fields
    inline constexpr uint32_t OTG_HS_DIEPTSIZ3_XFRSIZ_Pos = 0;
    inline constexpr uint32_t OTG_HS_DIEPTSIZ3_XFRSIZ_Msk = 0x0007FFFF;
    inline constexpr uint32_t OTG_HS_DIEPTSIZ3_PKTCNT_Pos = 19;
    inline constexpr uint32_t OTG_HS_DIEPTSIZ3_PKTCNT_Msk = 0x1FF80000;
    inline constexpr uint32_t OTG_HS_DIEPTSIZ3_MCNT_Pos = 29;
    inline constexpr uint32_t OTG_HS_DIEPTSIZ3_MCNT_Msk = 0x60000000;

    // OTG_HS_DIEPDMA4 fields
    inline constexpr uint32_t OTG_HS_DIEPDMA4_DMAADDR_Pos = 0;
    inline constexpr uint32_t OTG_HS_DIEPDMA4_DMAADDR_Msk = 0xFFFFFFFF;

    // OTG_HS_DTXFSTS3 fields
    inline constexpr uint32_t OTG_HS_DTXFSTS3_INEPTFSAV_Pos = 0;
    inline constexpr uint32_t OTG_HS_DTXFSTS3_INEPTFSAV_Msk = 0x0000FFFF;

    // OTG_HS_DIEPCTL4 fields
    inline constexpr uint32_t OTG_HS_DIEPCTL4_MPSIZ_Pos = 0;
    inline constexpr uint32_t OTG_HS_DIEPCTL4_MPSIZ_Msk = 0x000007FF;
    inline constexpr uint32_t OTG_HS_DIEPCTL4_USBAEP_Pos = 15;
    inline constexpr uint32_t OTG_HS_DIEPCTL4_USBAEP_Msk = 0x00008000;
    inline constexpr uint32_t OTG_HS_DIEPCTL4_USBAEP = (1U << 15);
    inline constexpr uint32_t OTG_HS_DIEPCTL4_EONUM_DPID_Pos = 16;
    inline constexpr uint32_t OTG_HS_DIEPCTL4_EONUM_DPID_Msk = 0x00010000;
    inline constexpr uint32_t OTG_HS_DIEPCTL4_EONUM_DPID = (1U << 16);
    inline constexpr uint32_t OTG_HS_DIEPCTL4_NAKSTS_Pos = 17;
    inline constexpr uint32_t OTG_HS_DIEPCTL4_NAKSTS_Msk = 0x00020000;
    inline constexpr uint32_t OTG_HS_DIEPCTL4_NAKSTS = (1U << 17);
    inline constexpr uint32_t OTG_HS_DIEPCTL4_EPTYP_Pos = 18;
    inline constexpr uint32_t OTG_HS_DIEPCTL4_EPTYP_Msk = 0x000C0000;
    inline constexpr uint32_t OTG_HS_DIEPCTL4_Stall_Pos = 21;
    inline constexpr uint32_t OTG_HS_DIEPCTL4_Stall_Msk = 0x00200000;
    inline constexpr uint32_t OTG_HS_DIEPCTL4_Stall = (1U << 21);
    inline constexpr uint32_t OTG_HS_DIEPCTL4_TXFNUM_Pos = 22;
    inline constexpr uint32_t OTG_HS_DIEPCTL4_TXFNUM_Msk = 0x03C00000;
    inline constexpr uint32_t OTG_HS_DIEPCTL4_CNAK_Pos = 26;
    inline constexpr uint32_t OTG_HS_DIEPCTL4_CNAK_Msk = 0x04000000;
    inline constexpr uint32_t OTG_HS_DIEPCTL4_CNAK = (1U << 26);
    inline constexpr uint32_t OTG_HS_DIEPCTL4_SNAK_Pos = 27;
    inline constexpr uint32_t OTG_HS_DIEPCTL4_SNAK_Msk = 0x08000000;
    inline constexpr uint32_t OTG_HS_DIEPCTL4_SNAK = (1U << 27);
    inline constexpr uint32_t OTG_HS_DIEPCTL4_SD0PID_SEVNFRM_Pos = 28;
    inline constexpr uint32_t OTG_HS_DIEPCTL4_SD0PID_SEVNFRM_Msk = 0x10000000;
    inline constexpr uint32_t OTG_HS_DIEPCTL4_SD0PID_SEVNFRM = (1U << 28);
    inline constexpr uint32_t OTG_HS_DIEPCTL4_SODDFRM_Pos = 29;
    inline constexpr uint32_t OTG_HS_DIEPCTL4_SODDFRM_Msk = 0x20000000;
    inline constexpr uint32_t OTG_HS_DIEPCTL4_SODDFRM = (1U << 29);
    inline constexpr uint32_t OTG_HS_DIEPCTL4_EPDIS_Pos = 30;
    inline constexpr uint32_t OTG_HS_DIEPCTL4_EPDIS_Msk = 0x40000000;
    inline constexpr uint32_t OTG_HS_DIEPCTL4_EPDIS = (1U << 30);
    inline constexpr uint32_t OTG_HS_DIEPCTL4_EPENA_Pos = 31;
    inline constexpr uint32_t OTG_HS_DIEPCTL4_EPENA_Msk = 0x80000000;
    inline constexpr uint32_t OTG_HS_DIEPCTL4_EPENA = (1U << 31);

    // OTG_HS_DIEPINT4 fields
    inline constexpr uint32_t OTG_HS_DIEPINT4_XFRC_Pos = 0;
    inline constexpr uint32_t OTG_HS_DIEPINT4_XFRC_Msk = 0x00000001;
    inline constexpr uint32_t OTG_HS_DIEPINT4_XFRC = (1U << 0);
    inline constexpr uint32_t OTG_HS_DIEPINT4_EPDISD_Pos = 1;
    inline constexpr uint32_t OTG_HS_DIEPINT4_EPDISD_Msk = 0x00000002;
    inline constexpr uint32_t OTG_HS_DIEPINT4_EPDISD = (1U << 1);
    inline constexpr uint32_t OTG_HS_DIEPINT4_TOC_Pos = 3;
    inline constexpr uint32_t OTG_HS_DIEPINT4_TOC_Msk = 0x00000008;
    inline constexpr uint32_t OTG_HS_DIEPINT4_TOC = (1U << 3);
    inline constexpr uint32_t OTG_HS_DIEPINT4_ITTXFE_Pos = 4;
    inline constexpr uint32_t OTG_HS_DIEPINT4_ITTXFE_Msk = 0x00000010;
    inline constexpr uint32_t OTG_HS_DIEPINT4_ITTXFE = (1U << 4);
    inline constexpr uint32_t OTG_HS_DIEPINT4_INEPNE_Pos = 6;
    inline constexpr uint32_t OTG_HS_DIEPINT4_INEPNE_Msk = 0x00000040;
    inline constexpr uint32_t OTG_HS_DIEPINT4_INEPNE = (1U << 6);
    inline constexpr uint32_t OTG_HS_DIEPINT4_TXFE_Pos = 7;
    inline constexpr uint32_t OTG_HS_DIEPINT4_TXFE_Msk = 0x00000080;
    inline constexpr uint32_t OTG_HS_DIEPINT4_TXFE = (1U << 7);
    inline constexpr uint32_t OTG_HS_DIEPINT4_TXFIFOUDRN_Pos = 8;
    inline constexpr uint32_t OTG_HS_DIEPINT4_TXFIFOUDRN_Msk = 0x00000100;
    inline constexpr uint32_t OTG_HS_DIEPINT4_TXFIFOUDRN = (1U << 8);
    inline constexpr uint32_t OTG_HS_DIEPINT4_BNA_Pos = 9;
    inline constexpr uint32_t OTG_HS_DIEPINT4_BNA_Msk = 0x00000200;
    inline constexpr uint32_t OTG_HS_DIEPINT4_BNA = (1U << 9);
    inline constexpr uint32_t OTG_HS_DIEPINT4_PKTDRPSTS_Pos = 11;
    inline constexpr uint32_t OTG_HS_DIEPINT4_PKTDRPSTS_Msk = 0x00000800;
    inline constexpr uint32_t OTG_HS_DIEPINT4_PKTDRPSTS = (1U << 11);
    inline constexpr uint32_t OTG_HS_DIEPINT4_BERR_Pos = 12;
    inline constexpr uint32_t OTG_HS_DIEPINT4_BERR_Msk = 0x00001000;
    inline constexpr uint32_t OTG_HS_DIEPINT4_BERR = (1U << 12);
    inline constexpr uint32_t OTG_HS_DIEPINT4_NAK_Pos = 13;
    inline constexpr uint32_t OTG_HS_DIEPINT4_NAK_Msk = 0x00002000;
    inline constexpr uint32_t OTG_HS_DIEPINT4_NAK = (1U << 13);

    // OTG_HS_DIEPTSIZ4 fields
    inline constexpr uint32_t OTG_HS_DIEPTSIZ4_XFRSIZ_Pos = 0;
    inline constexpr uint32_t OTG_HS_DIEPTSIZ4_XFRSIZ_Msk = 0x0007FFFF;
    inline constexpr uint32_t OTG_HS_DIEPTSIZ4_PKTCNT_Pos = 19;
    inline constexpr uint32_t OTG_HS_DIEPTSIZ4_PKTCNT_Msk = 0x1FF80000;
    inline constexpr uint32_t OTG_HS_DIEPTSIZ4_MCNT_Pos = 29;
    inline constexpr uint32_t OTG_HS_DIEPTSIZ4_MCNT_Msk = 0x60000000;

    // OTG_HS_DIEPDMA5 fields
    inline constexpr uint32_t OTG_HS_DIEPDMA5_DMAADDR_Pos = 0;
    inline constexpr uint32_t OTG_HS_DIEPDMA5_DMAADDR_Msk = 0xFFFFFFFF;

    // OTG_HS_DTXFSTS4 fields
    inline constexpr uint32_t OTG_HS_DTXFSTS4_INEPTFSAV_Pos = 0;
    inline constexpr uint32_t OTG_HS_DTXFSTS4_INEPTFSAV_Msk = 0x0000FFFF;

    // OTG_HS_DIEPCTL5 fields
    inline constexpr uint32_t OTG_HS_DIEPCTL5_MPSIZ_Pos = 0;
    inline constexpr uint32_t OTG_HS_DIEPCTL5_MPSIZ_Msk = 0x000007FF;
    inline constexpr uint32_t OTG_HS_DIEPCTL5_USBAEP_Pos = 15;
    inline constexpr uint32_t OTG_HS_DIEPCTL5_USBAEP_Msk = 0x00008000;
    inline constexpr uint32_t OTG_HS_DIEPCTL5_USBAEP = (1U << 15);
    inline constexpr uint32_t OTG_HS_DIEPCTL5_EONUM_DPID_Pos = 16;
    inline constexpr uint32_t OTG_HS_DIEPCTL5_EONUM_DPID_Msk = 0x00010000;
    inline constexpr uint32_t OTG_HS_DIEPCTL5_EONUM_DPID = (1U << 16);
    inline constexpr uint32_t OTG_HS_DIEPCTL5_NAKSTS_Pos = 17;
    inline constexpr uint32_t OTG_HS_DIEPCTL5_NAKSTS_Msk = 0x00020000;
    inline constexpr uint32_t OTG_HS_DIEPCTL5_NAKSTS = (1U << 17);
    inline constexpr uint32_t OTG_HS_DIEPCTL5_EPTYP_Pos = 18;
    inline constexpr uint32_t OTG_HS_DIEPCTL5_EPTYP_Msk = 0x000C0000;
    inline constexpr uint32_t OTG_HS_DIEPCTL5_Stall_Pos = 21;
    inline constexpr uint32_t OTG_HS_DIEPCTL5_Stall_Msk = 0x00200000;
    inline constexpr uint32_t OTG_HS_DIEPCTL5_Stall = (1U << 21);
    inline constexpr uint32_t OTG_HS_DIEPCTL5_TXFNUM_Pos = 22;
    inline constexpr uint32_t OTG_HS_DIEPCTL5_TXFNUM_Msk = 0x03C00000;
    inline constexpr uint32_t OTG_HS_DIEPCTL5_CNAK_Pos = 26;
    inline constexpr uint32_t OTG_HS_DIEPCTL5_CNAK_Msk = 0x04000000;
    inline constexpr uint32_t OTG_HS_DIEPCTL5_CNAK = (1U << 26);
    inline constexpr uint32_t OTG_HS_DIEPCTL5_SNAK_Pos = 27;
    inline constexpr uint32_t OTG_HS_DIEPCTL5_SNAK_Msk = 0x08000000;
    inline constexpr uint32_t OTG_HS_DIEPCTL5_SNAK = (1U << 27);
    inline constexpr uint32_t OTG_HS_DIEPCTL5_SD0PID_SEVNFRM_Pos = 28;
    inline constexpr uint32_t OTG_HS_DIEPCTL5_SD0PID_SEVNFRM_Msk = 0x10000000;
    inline constexpr uint32_t OTG_HS_DIEPCTL5_SD0PID_SEVNFRM = (1U << 28);
    inline constexpr uint32_t OTG_HS_DIEPCTL5_SODDFRM_Pos = 29;
    inline constexpr uint32_t OTG_HS_DIEPCTL5_SODDFRM_Msk = 0x20000000;
    inline constexpr uint32_t OTG_HS_DIEPCTL5_SODDFRM = (1U << 29);
    inline constexpr uint32_t OTG_HS_DIEPCTL5_EPDIS_Pos = 30;
    inline constexpr uint32_t OTG_HS_DIEPCTL5_EPDIS_Msk = 0x40000000;
    inline constexpr uint32_t OTG_HS_DIEPCTL5_EPDIS = (1U << 30);
    inline constexpr uint32_t OTG_HS_DIEPCTL5_EPENA_Pos = 31;
    inline constexpr uint32_t OTG_HS_DIEPCTL5_EPENA_Msk = 0x80000000;
    inline constexpr uint32_t OTG_HS_DIEPCTL5_EPENA = (1U << 31);

    // OTG_HS_DIEPTSIZ6 fields
    inline constexpr uint32_t OTG_HS_DIEPTSIZ6_XFRSIZ_Pos = 0;
    inline constexpr uint32_t OTG_HS_DIEPTSIZ6_XFRSIZ_Msk = 0x0007FFFF;
    inline constexpr uint32_t OTG_HS_DIEPTSIZ6_PKTCNT_Pos = 19;
    inline constexpr uint32_t OTG_HS_DIEPTSIZ6_PKTCNT_Msk = 0x1FF80000;
    inline constexpr uint32_t OTG_HS_DIEPTSIZ6_MCNT_Pos = 29;
    inline constexpr uint32_t OTG_HS_DIEPTSIZ6_MCNT_Msk = 0x60000000;

    // OTG_HS_DTXFSTS6 fields
    inline constexpr uint32_t OTG_HS_DTXFSTS6_INEPTFSAV_Pos = 0;
    inline constexpr uint32_t OTG_HS_DTXFSTS6_INEPTFSAV_Msk = 0x0000FFFF;

    // OTG_HS_DIEPINT5 fields
    inline constexpr uint32_t OTG_HS_DIEPINT5_XFRC_Pos = 0;
    inline constexpr uint32_t OTG_HS_DIEPINT5_XFRC_Msk = 0x00000001;
    inline constexpr uint32_t OTG_HS_DIEPINT5_XFRC = (1U << 0);
    inline constexpr uint32_t OTG_HS_DIEPINT5_EPDISD_Pos = 1;
    inline constexpr uint32_t OTG_HS_DIEPINT5_EPDISD_Msk = 0x00000002;
    inline constexpr uint32_t OTG_HS_DIEPINT5_EPDISD = (1U << 1);
    inline constexpr uint32_t OTG_HS_DIEPINT5_TOC_Pos = 3;
    inline constexpr uint32_t OTG_HS_DIEPINT5_TOC_Msk = 0x00000008;
    inline constexpr uint32_t OTG_HS_DIEPINT5_TOC = (1U << 3);
    inline constexpr uint32_t OTG_HS_DIEPINT5_ITTXFE_Pos = 4;
    inline constexpr uint32_t OTG_HS_DIEPINT5_ITTXFE_Msk = 0x00000010;
    inline constexpr uint32_t OTG_HS_DIEPINT5_ITTXFE = (1U << 4);
    inline constexpr uint32_t OTG_HS_DIEPINT5_INEPNE_Pos = 6;
    inline constexpr uint32_t OTG_HS_DIEPINT5_INEPNE_Msk = 0x00000040;
    inline constexpr uint32_t OTG_HS_DIEPINT5_INEPNE = (1U << 6);
    inline constexpr uint32_t OTG_HS_DIEPINT5_TXFE_Pos = 7;
    inline constexpr uint32_t OTG_HS_DIEPINT5_TXFE_Msk = 0x00000080;
    inline constexpr uint32_t OTG_HS_DIEPINT5_TXFE = (1U << 7);
    inline constexpr uint32_t OTG_HS_DIEPINT5_TXFIFOUDRN_Pos = 8;
    inline constexpr uint32_t OTG_HS_DIEPINT5_TXFIFOUDRN_Msk = 0x00000100;
    inline constexpr uint32_t OTG_HS_DIEPINT5_TXFIFOUDRN = (1U << 8);
    inline constexpr uint32_t OTG_HS_DIEPINT5_BNA_Pos = 9;
    inline constexpr uint32_t OTG_HS_DIEPINT5_BNA_Msk = 0x00000200;
    inline constexpr uint32_t OTG_HS_DIEPINT5_BNA = (1U << 9);
    inline constexpr uint32_t OTG_HS_DIEPINT5_PKTDRPSTS_Pos = 11;
    inline constexpr uint32_t OTG_HS_DIEPINT5_PKTDRPSTS_Msk = 0x00000800;
    inline constexpr uint32_t OTG_HS_DIEPINT5_PKTDRPSTS = (1U << 11);
    inline constexpr uint32_t OTG_HS_DIEPINT5_BERR_Pos = 12;
    inline constexpr uint32_t OTG_HS_DIEPINT5_BERR_Msk = 0x00001000;
    inline constexpr uint32_t OTG_HS_DIEPINT5_BERR = (1U << 12);
    inline constexpr uint32_t OTG_HS_DIEPINT5_NAK_Pos = 13;
    inline constexpr uint32_t OTG_HS_DIEPINT5_NAK_Msk = 0x00002000;
    inline constexpr uint32_t OTG_HS_DIEPINT5_NAK = (1U << 13);

    // OTG_HS_DIEPTSIZ7 fields
    inline constexpr uint32_t OTG_HS_DIEPTSIZ7_XFRSIZ_Pos = 0;
    inline constexpr uint32_t OTG_HS_DIEPTSIZ7_XFRSIZ_Msk = 0x0007FFFF;
    inline constexpr uint32_t OTG_HS_DIEPTSIZ7_PKTCNT_Pos = 19;
    inline constexpr uint32_t OTG_HS_DIEPTSIZ7_PKTCNT_Msk = 0x1FF80000;
    inline constexpr uint32_t OTG_HS_DIEPTSIZ7_MCNT_Pos = 29;
    inline constexpr uint32_t OTG_HS_DIEPTSIZ7_MCNT_Msk = 0x60000000;

    // OTG_HS_DTXFSTS7 fields
    inline constexpr uint32_t OTG_HS_DTXFSTS7_INEPTFSAV_Pos = 0;
    inline constexpr uint32_t OTG_HS_DTXFSTS7_INEPTFSAV_Msk = 0x0000FFFF;

    // OTG_HS_DIEPTSIZ5 fields
    inline constexpr uint32_t OTG_HS_DIEPTSIZ5_XFRSIZ_Pos = 0;
    inline constexpr uint32_t OTG_HS_DIEPTSIZ5_XFRSIZ_Msk = 0x0007FFFF;
    inline constexpr uint32_t OTG_HS_DIEPTSIZ5_PKTCNT_Pos = 19;
    inline constexpr uint32_t OTG_HS_DIEPTSIZ5_PKTCNT_Msk = 0x1FF80000;
    inline constexpr uint32_t OTG_HS_DIEPTSIZ5_MCNT_Pos = 29;
    inline constexpr uint32_t OTG_HS_DIEPTSIZ5_MCNT_Msk = 0x60000000;

    // OTG_HS_DTXFSTS5 fields
    inline constexpr uint32_t OTG_HS_DTXFSTS5_INEPTFSAV_Pos = 0;
    inline constexpr uint32_t OTG_HS_DTXFSTS5_INEPTFSAV_Msk = 0x0000FFFF;

    // OTG_HS_DIEPCTL6 fields
    inline constexpr uint32_t OTG_HS_DIEPCTL6_MPSIZ_Pos = 0;
    inline constexpr uint32_t OTG_HS_DIEPCTL6_MPSIZ_Msk = 0x000007FF;
    inline constexpr uint32_t OTG_HS_DIEPCTL6_USBAEP_Pos = 15;
    inline constexpr uint32_t OTG_HS_DIEPCTL6_USBAEP_Msk = 0x00008000;
    inline constexpr uint32_t OTG_HS_DIEPCTL6_USBAEP = (1U << 15);
    inline constexpr uint32_t OTG_HS_DIEPCTL6_EONUM_DPID_Pos = 16;
    inline constexpr uint32_t OTG_HS_DIEPCTL6_EONUM_DPID_Msk = 0x00010000;
    inline constexpr uint32_t OTG_HS_DIEPCTL6_EONUM_DPID = (1U << 16);
    inline constexpr uint32_t OTG_HS_DIEPCTL6_NAKSTS_Pos = 17;
    inline constexpr uint32_t OTG_HS_DIEPCTL6_NAKSTS_Msk = 0x00020000;
    inline constexpr uint32_t OTG_HS_DIEPCTL6_NAKSTS = (1U << 17);
    inline constexpr uint32_t OTG_HS_DIEPCTL6_EPTYP_Pos = 18;
    inline constexpr uint32_t OTG_HS_DIEPCTL6_EPTYP_Msk = 0x000C0000;
    inline constexpr uint32_t OTG_HS_DIEPCTL6_Stall_Pos = 21;
    inline constexpr uint32_t OTG_HS_DIEPCTL6_Stall_Msk = 0x00200000;
    inline constexpr uint32_t OTG_HS_DIEPCTL6_Stall = (1U << 21);
    inline constexpr uint32_t OTG_HS_DIEPCTL6_TXFNUM_Pos = 22;
    inline constexpr uint32_t OTG_HS_DIEPCTL6_TXFNUM_Msk = 0x03C00000;
    inline constexpr uint32_t OTG_HS_DIEPCTL6_CNAK_Pos = 26;
    inline constexpr uint32_t OTG_HS_DIEPCTL6_CNAK_Msk = 0x04000000;
    inline constexpr uint32_t OTG_HS_DIEPCTL6_CNAK = (1U << 26);
    inline constexpr uint32_t OTG_HS_DIEPCTL6_SNAK_Pos = 27;
    inline constexpr uint32_t OTG_HS_DIEPCTL6_SNAK_Msk = 0x08000000;
    inline constexpr uint32_t OTG_HS_DIEPCTL6_SNAK = (1U << 27);
    inline constexpr uint32_t OTG_HS_DIEPCTL6_SD0PID_SEVNFRM_Pos = 28;
    inline constexpr uint32_t OTG_HS_DIEPCTL6_SD0PID_SEVNFRM_Msk = 0x10000000;
    inline constexpr uint32_t OTG_HS_DIEPCTL6_SD0PID_SEVNFRM = (1U << 28);
    inline constexpr uint32_t OTG_HS_DIEPCTL6_SODDFRM_Pos = 29;
    inline constexpr uint32_t OTG_HS_DIEPCTL6_SODDFRM_Msk = 0x20000000;
    inline constexpr uint32_t OTG_HS_DIEPCTL6_SODDFRM = (1U << 29);
    inline constexpr uint32_t OTG_HS_DIEPCTL6_EPDIS_Pos = 30;
    inline constexpr uint32_t OTG_HS_DIEPCTL6_EPDIS_Msk = 0x40000000;
    inline constexpr uint32_t OTG_HS_DIEPCTL6_EPDIS = (1U << 30);
    inline constexpr uint32_t OTG_HS_DIEPCTL6_EPENA_Pos = 31;
    inline constexpr uint32_t OTG_HS_DIEPCTL6_EPENA_Msk = 0x80000000;
    inline constexpr uint32_t OTG_HS_DIEPCTL6_EPENA = (1U << 31);

    // OTG_HS_DIEPINT6 fields
    inline constexpr uint32_t OTG_HS_DIEPINT6_XFRC_Pos = 0;
    inline constexpr uint32_t OTG_HS_DIEPINT6_XFRC_Msk = 0x00000001;
    inline constexpr uint32_t OTG_HS_DIEPINT6_XFRC = (1U << 0);
    inline constexpr uint32_t OTG_HS_DIEPINT6_EPDISD_Pos = 1;
    inline constexpr uint32_t OTG_HS_DIEPINT6_EPDISD_Msk = 0x00000002;
    inline constexpr uint32_t OTG_HS_DIEPINT6_EPDISD = (1U << 1);
    inline constexpr uint32_t OTG_HS_DIEPINT6_TOC_Pos = 3;
    inline constexpr uint32_t OTG_HS_DIEPINT6_TOC_Msk = 0x00000008;
    inline constexpr uint32_t OTG_HS_DIEPINT6_TOC = (1U << 3);
    inline constexpr uint32_t OTG_HS_DIEPINT6_ITTXFE_Pos = 4;
    inline constexpr uint32_t OTG_HS_DIEPINT6_ITTXFE_Msk = 0x00000010;
    inline constexpr uint32_t OTG_HS_DIEPINT6_ITTXFE = (1U << 4);
    inline constexpr uint32_t OTG_HS_DIEPINT6_INEPNE_Pos = 6;
    inline constexpr uint32_t OTG_HS_DIEPINT6_INEPNE_Msk = 0x00000040;
    inline constexpr uint32_t OTG_HS_DIEPINT6_INEPNE = (1U << 6);
    inline constexpr uint32_t OTG_HS_DIEPINT6_TXFE_Pos = 7;
    inline constexpr uint32_t OTG_HS_DIEPINT6_TXFE_Msk = 0x00000080;
    inline constexpr uint32_t OTG_HS_DIEPINT6_TXFE = (1U << 7);
    inline constexpr uint32_t OTG_HS_DIEPINT6_TXFIFOUDRN_Pos = 8;
    inline constexpr uint32_t OTG_HS_DIEPINT6_TXFIFOUDRN_Msk = 0x00000100;
    inline constexpr uint32_t OTG_HS_DIEPINT6_TXFIFOUDRN = (1U << 8);
    inline constexpr uint32_t OTG_HS_DIEPINT6_BNA_Pos = 9;
    inline constexpr uint32_t OTG_HS_DIEPINT6_BNA_Msk = 0x00000200;
    inline constexpr uint32_t OTG_HS_DIEPINT6_BNA = (1U << 9);
    inline constexpr uint32_t OTG_HS_DIEPINT6_PKTDRPSTS_Pos = 11;
    inline constexpr uint32_t OTG_HS_DIEPINT6_PKTDRPSTS_Msk = 0x00000800;
    inline constexpr uint32_t OTG_HS_DIEPINT6_PKTDRPSTS = (1U << 11);
    inline constexpr uint32_t OTG_HS_DIEPINT6_BERR_Pos = 12;
    inline constexpr uint32_t OTG_HS_DIEPINT6_BERR_Msk = 0x00001000;
    inline constexpr uint32_t OTG_HS_DIEPINT6_BERR = (1U << 12);
    inline constexpr uint32_t OTG_HS_DIEPINT6_NAK_Pos = 13;
    inline constexpr uint32_t OTG_HS_DIEPINT6_NAK_Msk = 0x00002000;
    inline constexpr uint32_t OTG_HS_DIEPINT6_NAK = (1U << 13);

    // OTG_HS_DIEPCTL7 fields
    inline constexpr uint32_t OTG_HS_DIEPCTL7_MPSIZ_Pos = 0;
    inline constexpr uint32_t OTG_HS_DIEPCTL7_MPSIZ_Msk = 0x000007FF;
    inline constexpr uint32_t OTG_HS_DIEPCTL7_USBAEP_Pos = 15;
    inline constexpr uint32_t OTG_HS_DIEPCTL7_USBAEP_Msk = 0x00008000;
    inline constexpr uint32_t OTG_HS_DIEPCTL7_USBAEP = (1U << 15);
    inline constexpr uint32_t OTG_HS_DIEPCTL7_EONUM_DPID_Pos = 16;
    inline constexpr uint32_t OTG_HS_DIEPCTL7_EONUM_DPID_Msk = 0x00010000;
    inline constexpr uint32_t OTG_HS_DIEPCTL7_EONUM_DPID = (1U << 16);
    inline constexpr uint32_t OTG_HS_DIEPCTL7_NAKSTS_Pos = 17;
    inline constexpr uint32_t OTG_HS_DIEPCTL7_NAKSTS_Msk = 0x00020000;
    inline constexpr uint32_t OTG_HS_DIEPCTL7_NAKSTS = (1U << 17);
    inline constexpr uint32_t OTG_HS_DIEPCTL7_EPTYP_Pos = 18;
    inline constexpr uint32_t OTG_HS_DIEPCTL7_EPTYP_Msk = 0x000C0000;
    inline constexpr uint32_t OTG_HS_DIEPCTL7_Stall_Pos = 21;
    inline constexpr uint32_t OTG_HS_DIEPCTL7_Stall_Msk = 0x00200000;
    inline constexpr uint32_t OTG_HS_DIEPCTL7_Stall = (1U << 21);
    inline constexpr uint32_t OTG_HS_DIEPCTL7_TXFNUM_Pos = 22;
    inline constexpr uint32_t OTG_HS_DIEPCTL7_TXFNUM_Msk = 0x03C00000;
    inline constexpr uint32_t OTG_HS_DIEPCTL7_CNAK_Pos = 26;
    inline constexpr uint32_t OTG_HS_DIEPCTL7_CNAK_Msk = 0x04000000;
    inline constexpr uint32_t OTG_HS_DIEPCTL7_CNAK = (1U << 26);
    inline constexpr uint32_t OTG_HS_DIEPCTL7_SNAK_Pos = 27;
    inline constexpr uint32_t OTG_HS_DIEPCTL7_SNAK_Msk = 0x08000000;
    inline constexpr uint32_t OTG_HS_DIEPCTL7_SNAK = (1U << 27);
    inline constexpr uint32_t OTG_HS_DIEPCTL7_SD0PID_SEVNFRM_Pos = 28;
    inline constexpr uint32_t OTG_HS_DIEPCTL7_SD0PID_SEVNFRM_Msk = 0x10000000;
    inline constexpr uint32_t OTG_HS_DIEPCTL7_SD0PID_SEVNFRM = (1U << 28);
    inline constexpr uint32_t OTG_HS_DIEPCTL7_SODDFRM_Pos = 29;
    inline constexpr uint32_t OTG_HS_DIEPCTL7_SODDFRM_Msk = 0x20000000;
    inline constexpr uint32_t OTG_HS_DIEPCTL7_SODDFRM = (1U << 29);
    inline constexpr uint32_t OTG_HS_DIEPCTL7_EPDIS_Pos = 30;
    inline constexpr uint32_t OTG_HS_DIEPCTL7_EPDIS_Msk = 0x40000000;
    inline constexpr uint32_t OTG_HS_DIEPCTL7_EPDIS = (1U << 30);
    inline constexpr uint32_t OTG_HS_DIEPCTL7_EPENA_Pos = 31;
    inline constexpr uint32_t OTG_HS_DIEPCTL7_EPENA_Msk = 0x80000000;
    inline constexpr uint32_t OTG_HS_DIEPCTL7_EPENA = (1U << 31);

    // OTG_HS_DIEPINT7 fields
    inline constexpr uint32_t OTG_HS_DIEPINT7_XFRC_Pos = 0;
    inline constexpr uint32_t OTG_HS_DIEPINT7_XFRC_Msk = 0x00000001;
    inline constexpr uint32_t OTG_HS_DIEPINT7_XFRC = (1U << 0);
    inline constexpr uint32_t OTG_HS_DIEPINT7_EPDISD_Pos = 1;
    inline constexpr uint32_t OTG_HS_DIEPINT7_EPDISD_Msk = 0x00000002;
    inline constexpr uint32_t OTG_HS_DIEPINT7_EPDISD = (1U << 1);
    inline constexpr uint32_t OTG_HS_DIEPINT7_TOC_Pos = 3;
    inline constexpr uint32_t OTG_HS_DIEPINT7_TOC_Msk = 0x00000008;
    inline constexpr uint32_t OTG_HS_DIEPINT7_TOC = (1U << 3);
    inline constexpr uint32_t OTG_HS_DIEPINT7_ITTXFE_Pos = 4;
    inline constexpr uint32_t OTG_HS_DIEPINT7_ITTXFE_Msk = 0x00000010;
    inline constexpr uint32_t OTG_HS_DIEPINT7_ITTXFE = (1U << 4);
    inline constexpr uint32_t OTG_HS_DIEPINT7_INEPNE_Pos = 6;
    inline constexpr uint32_t OTG_HS_DIEPINT7_INEPNE_Msk = 0x00000040;
    inline constexpr uint32_t OTG_HS_DIEPINT7_INEPNE = (1U << 6);
    inline constexpr uint32_t OTG_HS_DIEPINT7_TXFE_Pos = 7;
    inline constexpr uint32_t OTG_HS_DIEPINT7_TXFE_Msk = 0x00000080;
    inline constexpr uint32_t OTG_HS_DIEPINT7_TXFE = (1U << 7);
    inline constexpr uint32_t OTG_HS_DIEPINT7_TXFIFOUDRN_Pos = 8;
    inline constexpr uint32_t OTG_HS_DIEPINT7_TXFIFOUDRN_Msk = 0x00000100;
    inline constexpr uint32_t OTG_HS_DIEPINT7_TXFIFOUDRN = (1U << 8);
    inline constexpr uint32_t OTG_HS_DIEPINT7_BNA_Pos = 9;
    inline constexpr uint32_t OTG_HS_DIEPINT7_BNA_Msk = 0x00000200;
    inline constexpr uint32_t OTG_HS_DIEPINT7_BNA = (1U << 9);
    inline constexpr uint32_t OTG_HS_DIEPINT7_PKTDRPSTS_Pos = 11;
    inline constexpr uint32_t OTG_HS_DIEPINT7_PKTDRPSTS_Msk = 0x00000800;
    inline constexpr uint32_t OTG_HS_DIEPINT7_PKTDRPSTS = (1U << 11);
    inline constexpr uint32_t OTG_HS_DIEPINT7_BERR_Pos = 12;
    inline constexpr uint32_t OTG_HS_DIEPINT7_BERR_Msk = 0x00001000;
    inline constexpr uint32_t OTG_HS_DIEPINT7_BERR = (1U << 12);
    inline constexpr uint32_t OTG_HS_DIEPINT7_NAK_Pos = 13;
    inline constexpr uint32_t OTG_HS_DIEPINT7_NAK_Msk = 0x00002000;
    inline constexpr uint32_t OTG_HS_DIEPINT7_NAK = (1U << 13);

    // OTG_HS_DOEPCTL0 fields
    inline constexpr uint32_t OTG_HS_DOEPCTL0_MPSIZ_Pos = 0;
    inline constexpr uint32_t OTG_HS_DOEPCTL0_MPSIZ_Msk = 0x00000003;
    inline constexpr uint32_t OTG_HS_DOEPCTL0_USBAEP_Pos = 15;
    inline constexpr uint32_t OTG_HS_DOEPCTL0_USBAEP_Msk = 0x00008000;
    inline constexpr uint32_t OTG_HS_DOEPCTL0_USBAEP = (1U << 15);
    inline constexpr uint32_t OTG_HS_DOEPCTL0_NAKSTS_Pos = 17;
    inline constexpr uint32_t OTG_HS_DOEPCTL0_NAKSTS_Msk = 0x00020000;
    inline constexpr uint32_t OTG_HS_DOEPCTL0_NAKSTS = (1U << 17);
    inline constexpr uint32_t OTG_HS_DOEPCTL0_EPTYP_Pos = 18;
    inline constexpr uint32_t OTG_HS_DOEPCTL0_EPTYP_Msk = 0x000C0000;
    inline constexpr uint32_t OTG_HS_DOEPCTL0_SNPM_Pos = 20;
    inline constexpr uint32_t OTG_HS_DOEPCTL0_SNPM_Msk = 0x00100000;
    inline constexpr uint32_t OTG_HS_DOEPCTL0_SNPM = (1U << 20);
    inline constexpr uint32_t OTG_HS_DOEPCTL0_Stall_Pos = 21;
    inline constexpr uint32_t OTG_HS_DOEPCTL0_Stall_Msk = 0x00200000;
    inline constexpr uint32_t OTG_HS_DOEPCTL0_Stall = (1U << 21);
    inline constexpr uint32_t OTG_HS_DOEPCTL0_CNAK_Pos = 26;
    inline constexpr uint32_t OTG_HS_DOEPCTL0_CNAK_Msk = 0x04000000;
    inline constexpr uint32_t OTG_HS_DOEPCTL0_CNAK = (1U << 26);
    inline constexpr uint32_t OTG_HS_DOEPCTL0_SNAK_Pos = 27;
    inline constexpr uint32_t OTG_HS_DOEPCTL0_SNAK_Msk = 0x08000000;
    inline constexpr uint32_t OTG_HS_DOEPCTL0_SNAK = (1U << 27);
    inline constexpr uint32_t OTG_HS_DOEPCTL0_EPDIS_Pos = 30;
    inline constexpr uint32_t OTG_HS_DOEPCTL0_EPDIS_Msk = 0x40000000;
    inline constexpr uint32_t OTG_HS_DOEPCTL0_EPDIS = (1U << 30);
    inline constexpr uint32_t OTG_HS_DOEPCTL0_EPENA_Pos = 31;
    inline constexpr uint32_t OTG_HS_DOEPCTL0_EPENA_Msk = 0x80000000;
    inline constexpr uint32_t OTG_HS_DOEPCTL0_EPENA = (1U << 31);

    // OTG_HS_DOEPINT0 fields
    inline constexpr uint32_t OTG_HS_DOEPINT0_XFRC_Pos = 0;
    inline constexpr uint32_t OTG_HS_DOEPINT0_XFRC_Msk = 0x00000001;
    inline constexpr uint32_t OTG_HS_DOEPINT0_XFRC = (1U << 0);
    inline constexpr uint32_t OTG_HS_DOEPINT0_EPDISD_Pos = 1;
    inline constexpr uint32_t OTG_HS_DOEPINT0_EPDISD_Msk = 0x00000002;
    inline constexpr uint32_t OTG_HS_DOEPINT0_EPDISD = (1U << 1);
    inline constexpr uint32_t OTG_HS_DOEPINT0_STUP_Pos = 3;
    inline constexpr uint32_t OTG_HS_DOEPINT0_STUP_Msk = 0x00000008;
    inline constexpr uint32_t OTG_HS_DOEPINT0_STUP = (1U << 3);
    inline constexpr uint32_t OTG_HS_DOEPINT0_OTEPDIS_Pos = 4;
    inline constexpr uint32_t OTG_HS_DOEPINT0_OTEPDIS_Msk = 0x00000010;
    inline constexpr uint32_t OTG_HS_DOEPINT0_OTEPDIS = (1U << 4);
    inline constexpr uint32_t OTG_HS_DOEPINT0_B2BSTUP_Pos = 6;
    inline constexpr uint32_t OTG_HS_DOEPINT0_B2BSTUP_Msk = 0x00000040;
    inline constexpr uint32_t OTG_HS_DOEPINT0_B2BSTUP = (1U << 6);
    inline constexpr uint32_t OTG_HS_DOEPINT0_NYET_Pos = 14;
    inline constexpr uint32_t OTG_HS_DOEPINT0_NYET_Msk = 0x00004000;
    inline constexpr uint32_t OTG_HS_DOEPINT0_NYET = (1U << 14);

    // OTG_HS_DOEPTSIZ0 fields
    inline constexpr uint32_t OTG_HS_DOEPTSIZ0_XFRSIZ_Pos = 0;
    inline constexpr uint32_t OTG_HS_DOEPTSIZ0_XFRSIZ_Msk = 0x0000007F;
    inline constexpr uint32_t OTG_HS_DOEPTSIZ0_PKTCNT_Pos = 19;
    inline constexpr uint32_t OTG_HS_DOEPTSIZ0_PKTCNT_Msk = 0x00080000;
    inline constexpr uint32_t OTG_HS_DOEPTSIZ0_PKTCNT = (1U << 19);
    inline constexpr uint32_t OTG_HS_DOEPTSIZ0_STUPCNT_Pos = 29;
    inline constexpr uint32_t OTG_HS_DOEPTSIZ0_STUPCNT_Msk = 0x60000000;

    // OTG_HS_DOEPCTL1 fields
    inline constexpr uint32_t OTG_HS_DOEPCTL1_MPSIZ_Pos = 0;
    inline constexpr uint32_t OTG_HS_DOEPCTL1_MPSIZ_Msk = 0x000007FF;
    inline constexpr uint32_t OTG_HS_DOEPCTL1_USBAEP_Pos = 15;
    inline constexpr uint32_t OTG_HS_DOEPCTL1_USBAEP_Msk = 0x00008000;
    inline constexpr uint32_t OTG_HS_DOEPCTL1_USBAEP = (1U << 15);
    inline constexpr uint32_t OTG_HS_DOEPCTL1_EONUM_DPID_Pos = 16;
    inline constexpr uint32_t OTG_HS_DOEPCTL1_EONUM_DPID_Msk = 0x00010000;
    inline constexpr uint32_t OTG_HS_DOEPCTL1_EONUM_DPID = (1U << 16);
    inline constexpr uint32_t OTG_HS_DOEPCTL1_NAKSTS_Pos = 17;
    inline constexpr uint32_t OTG_HS_DOEPCTL1_NAKSTS_Msk = 0x00020000;
    inline constexpr uint32_t OTG_HS_DOEPCTL1_NAKSTS = (1U << 17);
    inline constexpr uint32_t OTG_HS_DOEPCTL1_EPTYP_Pos = 18;
    inline constexpr uint32_t OTG_HS_DOEPCTL1_EPTYP_Msk = 0x000C0000;
    inline constexpr uint32_t OTG_HS_DOEPCTL1_SNPM_Pos = 20;
    inline constexpr uint32_t OTG_HS_DOEPCTL1_SNPM_Msk = 0x00100000;
    inline constexpr uint32_t OTG_HS_DOEPCTL1_SNPM = (1U << 20);
    inline constexpr uint32_t OTG_HS_DOEPCTL1_Stall_Pos = 21;
    inline constexpr uint32_t OTG_HS_DOEPCTL1_Stall_Msk = 0x00200000;
    inline constexpr uint32_t OTG_HS_DOEPCTL1_Stall = (1U << 21);
    inline constexpr uint32_t OTG_HS_DOEPCTL1_CNAK_Pos = 26;
    inline constexpr uint32_t OTG_HS_DOEPCTL1_CNAK_Msk = 0x04000000;
    inline constexpr uint32_t OTG_HS_DOEPCTL1_CNAK = (1U << 26);
    inline constexpr uint32_t OTG_HS_DOEPCTL1_SNAK_Pos = 27;
    inline constexpr uint32_t OTG_HS_DOEPCTL1_SNAK_Msk = 0x08000000;
    inline constexpr uint32_t OTG_HS_DOEPCTL1_SNAK = (1U << 27);
    inline constexpr uint32_t OTG_HS_DOEPCTL1_SD0PID_SEVNFRM_Pos = 28;
    inline constexpr uint32_t OTG_HS_DOEPCTL1_SD0PID_SEVNFRM_Msk = 0x10000000;
    inline constexpr uint32_t OTG_HS_DOEPCTL1_SD0PID_SEVNFRM = (1U << 28);
    inline constexpr uint32_t OTG_HS_DOEPCTL1_SODDFRM_Pos = 29;
    inline constexpr uint32_t OTG_HS_DOEPCTL1_SODDFRM_Msk = 0x20000000;
    inline constexpr uint32_t OTG_HS_DOEPCTL1_SODDFRM = (1U << 29);
    inline constexpr uint32_t OTG_HS_DOEPCTL1_EPDIS_Pos = 30;
    inline constexpr uint32_t OTG_HS_DOEPCTL1_EPDIS_Msk = 0x40000000;
    inline constexpr uint32_t OTG_HS_DOEPCTL1_EPDIS = (1U << 30);
    inline constexpr uint32_t OTG_HS_DOEPCTL1_EPENA_Pos = 31;
    inline constexpr uint32_t OTG_HS_DOEPCTL1_EPENA_Msk = 0x80000000;
    inline constexpr uint32_t OTG_HS_DOEPCTL1_EPENA = (1U << 31);

    // OTG_HS_DOEPINT1 fields
    inline constexpr uint32_t OTG_HS_DOEPINT1_XFRC_Pos = 0;
    inline constexpr uint32_t OTG_HS_DOEPINT1_XFRC_Msk = 0x00000001;
    inline constexpr uint32_t OTG_HS_DOEPINT1_XFRC = (1U << 0);
    inline constexpr uint32_t OTG_HS_DOEPINT1_EPDISD_Pos = 1;
    inline constexpr uint32_t OTG_HS_DOEPINT1_EPDISD_Msk = 0x00000002;
    inline constexpr uint32_t OTG_HS_DOEPINT1_EPDISD = (1U << 1);
    inline constexpr uint32_t OTG_HS_DOEPINT1_STUP_Pos = 3;
    inline constexpr uint32_t OTG_HS_DOEPINT1_STUP_Msk = 0x00000008;
    inline constexpr uint32_t OTG_HS_DOEPINT1_STUP = (1U << 3);
    inline constexpr uint32_t OTG_HS_DOEPINT1_OTEPDIS_Pos = 4;
    inline constexpr uint32_t OTG_HS_DOEPINT1_OTEPDIS_Msk = 0x00000010;
    inline constexpr uint32_t OTG_HS_DOEPINT1_OTEPDIS = (1U << 4);
    inline constexpr uint32_t OTG_HS_DOEPINT1_B2BSTUP_Pos = 6;
    inline constexpr uint32_t OTG_HS_DOEPINT1_B2BSTUP_Msk = 0x00000040;
    inline constexpr uint32_t OTG_HS_DOEPINT1_B2BSTUP = (1U << 6);
    inline constexpr uint32_t OTG_HS_DOEPINT1_NYET_Pos = 14;
    inline constexpr uint32_t OTG_HS_DOEPINT1_NYET_Msk = 0x00004000;
    inline constexpr uint32_t OTG_HS_DOEPINT1_NYET = (1U << 14);

    // OTG_HS_DOEPTSIZ1 fields
    inline constexpr uint32_t OTG_HS_DOEPTSIZ1_XFRSIZ_Pos = 0;
    inline constexpr uint32_t OTG_HS_DOEPTSIZ1_XFRSIZ_Msk = 0x0007FFFF;
    inline constexpr uint32_t OTG_HS_DOEPTSIZ1_PKTCNT_Pos = 19;
    inline constexpr uint32_t OTG_HS_DOEPTSIZ1_PKTCNT_Msk = 0x1FF80000;
    inline constexpr uint32_t OTG_HS_DOEPTSIZ1_RXDPID_STUPCNT_Pos = 29;
    inline constexpr uint32_t OTG_HS_DOEPTSIZ1_RXDPID_STUPCNT_Msk = 0x60000000;

    // OTG_HS_DOEPCTL2 fields
    inline constexpr uint32_t OTG_HS_DOEPCTL2_MPSIZ_Pos = 0;
    inline constexpr uint32_t OTG_HS_DOEPCTL2_MPSIZ_Msk = 0x000007FF;
    inline constexpr uint32_t OTG_HS_DOEPCTL2_USBAEP_Pos = 15;
    inline constexpr uint32_t OTG_HS_DOEPCTL2_USBAEP_Msk = 0x00008000;
    inline constexpr uint32_t OTG_HS_DOEPCTL2_USBAEP = (1U << 15);
    inline constexpr uint32_t OTG_HS_DOEPCTL2_EONUM_DPID_Pos = 16;
    inline constexpr uint32_t OTG_HS_DOEPCTL2_EONUM_DPID_Msk = 0x00010000;
    inline constexpr uint32_t OTG_HS_DOEPCTL2_EONUM_DPID = (1U << 16);
    inline constexpr uint32_t OTG_HS_DOEPCTL2_NAKSTS_Pos = 17;
    inline constexpr uint32_t OTG_HS_DOEPCTL2_NAKSTS_Msk = 0x00020000;
    inline constexpr uint32_t OTG_HS_DOEPCTL2_NAKSTS = (1U << 17);
    inline constexpr uint32_t OTG_HS_DOEPCTL2_EPTYP_Pos = 18;
    inline constexpr uint32_t OTG_HS_DOEPCTL2_EPTYP_Msk = 0x000C0000;
    inline constexpr uint32_t OTG_HS_DOEPCTL2_SNPM_Pos = 20;
    inline constexpr uint32_t OTG_HS_DOEPCTL2_SNPM_Msk = 0x00100000;
    inline constexpr uint32_t OTG_HS_DOEPCTL2_SNPM = (1U << 20);
    inline constexpr uint32_t OTG_HS_DOEPCTL2_Stall_Pos = 21;
    inline constexpr uint32_t OTG_HS_DOEPCTL2_Stall_Msk = 0x00200000;
    inline constexpr uint32_t OTG_HS_DOEPCTL2_Stall = (1U << 21);
    inline constexpr uint32_t OTG_HS_DOEPCTL2_CNAK_Pos = 26;
    inline constexpr uint32_t OTG_HS_DOEPCTL2_CNAK_Msk = 0x04000000;
    inline constexpr uint32_t OTG_HS_DOEPCTL2_CNAK = (1U << 26);
    inline constexpr uint32_t OTG_HS_DOEPCTL2_SNAK_Pos = 27;
    inline constexpr uint32_t OTG_HS_DOEPCTL2_SNAK_Msk = 0x08000000;
    inline constexpr uint32_t OTG_HS_DOEPCTL2_SNAK = (1U << 27);
    inline constexpr uint32_t OTG_HS_DOEPCTL2_SD0PID_SEVNFRM_Pos = 28;
    inline constexpr uint32_t OTG_HS_DOEPCTL2_SD0PID_SEVNFRM_Msk = 0x10000000;
    inline constexpr uint32_t OTG_HS_DOEPCTL2_SD0PID_SEVNFRM = (1U << 28);
    inline constexpr uint32_t OTG_HS_DOEPCTL2_SODDFRM_Pos = 29;
    inline constexpr uint32_t OTG_HS_DOEPCTL2_SODDFRM_Msk = 0x20000000;
    inline constexpr uint32_t OTG_HS_DOEPCTL2_SODDFRM = (1U << 29);
    inline constexpr uint32_t OTG_HS_DOEPCTL2_EPDIS_Pos = 30;
    inline constexpr uint32_t OTG_HS_DOEPCTL2_EPDIS_Msk = 0x40000000;
    inline constexpr uint32_t OTG_HS_DOEPCTL2_EPDIS = (1U << 30);
    inline constexpr uint32_t OTG_HS_DOEPCTL2_EPENA_Pos = 31;
    inline constexpr uint32_t OTG_HS_DOEPCTL2_EPENA_Msk = 0x80000000;
    inline constexpr uint32_t OTG_HS_DOEPCTL2_EPENA = (1U << 31);

    // OTG_HS_DOEPINT2 fields
    inline constexpr uint32_t OTG_HS_DOEPINT2_XFRC_Pos = 0;
    inline constexpr uint32_t OTG_HS_DOEPINT2_XFRC_Msk = 0x00000001;
    inline constexpr uint32_t OTG_HS_DOEPINT2_XFRC = (1U << 0);
    inline constexpr uint32_t OTG_HS_DOEPINT2_EPDISD_Pos = 1;
    inline constexpr uint32_t OTG_HS_DOEPINT2_EPDISD_Msk = 0x00000002;
    inline constexpr uint32_t OTG_HS_DOEPINT2_EPDISD = (1U << 1);
    inline constexpr uint32_t OTG_HS_DOEPINT2_STUP_Pos = 3;
    inline constexpr uint32_t OTG_HS_DOEPINT2_STUP_Msk = 0x00000008;
    inline constexpr uint32_t OTG_HS_DOEPINT2_STUP = (1U << 3);
    inline constexpr uint32_t OTG_HS_DOEPINT2_OTEPDIS_Pos = 4;
    inline constexpr uint32_t OTG_HS_DOEPINT2_OTEPDIS_Msk = 0x00000010;
    inline constexpr uint32_t OTG_HS_DOEPINT2_OTEPDIS = (1U << 4);
    inline constexpr uint32_t OTG_HS_DOEPINT2_B2BSTUP_Pos = 6;
    inline constexpr uint32_t OTG_HS_DOEPINT2_B2BSTUP_Msk = 0x00000040;
    inline constexpr uint32_t OTG_HS_DOEPINT2_B2BSTUP = (1U << 6);
    inline constexpr uint32_t OTG_HS_DOEPINT2_NYET_Pos = 14;
    inline constexpr uint32_t OTG_HS_DOEPINT2_NYET_Msk = 0x00004000;
    inline constexpr uint32_t OTG_HS_DOEPINT2_NYET = (1U << 14);

    // OTG_HS_DOEPTSIZ2 fields
    inline constexpr uint32_t OTG_HS_DOEPTSIZ2_XFRSIZ_Pos = 0;
    inline constexpr uint32_t OTG_HS_DOEPTSIZ2_XFRSIZ_Msk = 0x0007FFFF;
    inline constexpr uint32_t OTG_HS_DOEPTSIZ2_PKTCNT_Pos = 19;
    inline constexpr uint32_t OTG_HS_DOEPTSIZ2_PKTCNT_Msk = 0x1FF80000;
    inline constexpr uint32_t OTG_HS_DOEPTSIZ2_RXDPID_STUPCNT_Pos = 29;
    inline constexpr uint32_t OTG_HS_DOEPTSIZ2_RXDPID_STUPCNT_Msk = 0x60000000;

    // OTG_HS_DOEPCTL3 fields
    inline constexpr uint32_t OTG_HS_DOEPCTL3_MPSIZ_Pos = 0;
    inline constexpr uint32_t OTG_HS_DOEPCTL3_MPSIZ_Msk = 0x000007FF;
    inline constexpr uint32_t OTG_HS_DOEPCTL3_USBAEP_Pos = 15;
    inline constexpr uint32_t OTG_HS_DOEPCTL3_USBAEP_Msk = 0x00008000;
    inline constexpr uint32_t OTG_HS_DOEPCTL3_USBAEP = (1U << 15);
    inline constexpr uint32_t OTG_HS_DOEPCTL3_EONUM_DPID_Pos = 16;
    inline constexpr uint32_t OTG_HS_DOEPCTL3_EONUM_DPID_Msk = 0x00010000;
    inline constexpr uint32_t OTG_HS_DOEPCTL3_EONUM_DPID = (1U << 16);
    inline constexpr uint32_t OTG_HS_DOEPCTL3_NAKSTS_Pos = 17;
    inline constexpr uint32_t OTG_HS_DOEPCTL3_NAKSTS_Msk = 0x00020000;
    inline constexpr uint32_t OTG_HS_DOEPCTL3_NAKSTS = (1U << 17);
    inline constexpr uint32_t OTG_HS_DOEPCTL3_EPTYP_Pos = 18;
    inline constexpr uint32_t OTG_HS_DOEPCTL3_EPTYP_Msk = 0x000C0000;
    inline constexpr uint32_t OTG_HS_DOEPCTL3_SNPM_Pos = 20;
    inline constexpr uint32_t OTG_HS_DOEPCTL3_SNPM_Msk = 0x00100000;
    inline constexpr uint32_t OTG_HS_DOEPCTL3_SNPM = (1U << 20);
    inline constexpr uint32_t OTG_HS_DOEPCTL3_Stall_Pos = 21;
    inline constexpr uint32_t OTG_HS_DOEPCTL3_Stall_Msk = 0x00200000;
    inline constexpr uint32_t OTG_HS_DOEPCTL3_Stall = (1U << 21);
    inline constexpr uint32_t OTG_HS_DOEPCTL3_CNAK_Pos = 26;
    inline constexpr uint32_t OTG_HS_DOEPCTL3_CNAK_Msk = 0x04000000;
    inline constexpr uint32_t OTG_HS_DOEPCTL3_CNAK = (1U << 26);
    inline constexpr uint32_t OTG_HS_DOEPCTL3_SNAK_Pos = 27;
    inline constexpr uint32_t OTG_HS_DOEPCTL3_SNAK_Msk = 0x08000000;
    inline constexpr uint32_t OTG_HS_DOEPCTL3_SNAK = (1U << 27);
    inline constexpr uint32_t OTG_HS_DOEPCTL3_SD0PID_SEVNFRM_Pos = 28;
    inline constexpr uint32_t OTG_HS_DOEPCTL3_SD0PID_SEVNFRM_Msk = 0x10000000;
    inline constexpr uint32_t OTG_HS_DOEPCTL3_SD0PID_SEVNFRM = (1U << 28);
    inline constexpr uint32_t OTG_HS_DOEPCTL3_SODDFRM_Pos = 29;
    inline constexpr uint32_t OTG_HS_DOEPCTL3_SODDFRM_Msk = 0x20000000;
    inline constexpr uint32_t OTG_HS_DOEPCTL3_SODDFRM = (1U << 29);
    inline constexpr uint32_t OTG_HS_DOEPCTL3_EPDIS_Pos = 30;
    inline constexpr uint32_t OTG_HS_DOEPCTL3_EPDIS_Msk = 0x40000000;
    inline constexpr uint32_t OTG_HS_DOEPCTL3_EPDIS = (1U << 30);
    inline constexpr uint32_t OTG_HS_DOEPCTL3_EPENA_Pos = 31;
    inline constexpr uint32_t OTG_HS_DOEPCTL3_EPENA_Msk = 0x80000000;
    inline constexpr uint32_t OTG_HS_DOEPCTL3_EPENA = (1U << 31);

    // OTG_HS_DOEPINT3 fields
    inline constexpr uint32_t OTG_HS_DOEPINT3_XFRC_Pos = 0;
    inline constexpr uint32_t OTG_HS_DOEPINT3_XFRC_Msk = 0x00000001;
    inline constexpr uint32_t OTG_HS_DOEPINT3_XFRC = (1U << 0);
    inline constexpr uint32_t OTG_HS_DOEPINT3_EPDISD_Pos = 1;
    inline constexpr uint32_t OTG_HS_DOEPINT3_EPDISD_Msk = 0x00000002;
    inline constexpr uint32_t OTG_HS_DOEPINT3_EPDISD = (1U << 1);
    inline constexpr uint32_t OTG_HS_DOEPINT3_STUP_Pos = 3;
    inline constexpr uint32_t OTG_HS_DOEPINT3_STUP_Msk = 0x00000008;
    inline constexpr uint32_t OTG_HS_DOEPINT3_STUP = (1U << 3);
    inline constexpr uint32_t OTG_HS_DOEPINT3_OTEPDIS_Pos = 4;
    inline constexpr uint32_t OTG_HS_DOEPINT3_OTEPDIS_Msk = 0x00000010;
    inline constexpr uint32_t OTG_HS_DOEPINT3_OTEPDIS = (1U << 4);
    inline constexpr uint32_t OTG_HS_DOEPINT3_B2BSTUP_Pos = 6;
    inline constexpr uint32_t OTG_HS_DOEPINT3_B2BSTUP_Msk = 0x00000040;
    inline constexpr uint32_t OTG_HS_DOEPINT3_B2BSTUP = (1U << 6);
    inline constexpr uint32_t OTG_HS_DOEPINT3_NYET_Pos = 14;
    inline constexpr uint32_t OTG_HS_DOEPINT3_NYET_Msk = 0x00004000;
    inline constexpr uint32_t OTG_HS_DOEPINT3_NYET = (1U << 14);

    // OTG_HS_DOEPTSIZ3 fields
    inline constexpr uint32_t OTG_HS_DOEPTSIZ3_XFRSIZ_Pos = 0;
    inline constexpr uint32_t OTG_HS_DOEPTSIZ3_XFRSIZ_Msk = 0x0007FFFF;
    inline constexpr uint32_t OTG_HS_DOEPTSIZ3_PKTCNT_Pos = 19;
    inline constexpr uint32_t OTG_HS_DOEPTSIZ3_PKTCNT_Msk = 0x1FF80000;
    inline constexpr uint32_t OTG_HS_DOEPTSIZ3_RXDPID_STUPCNT_Pos = 29;
    inline constexpr uint32_t OTG_HS_DOEPTSIZ3_RXDPID_STUPCNT_Msk = 0x60000000;

    // OTG_HS_DOEPCTL4 fields
    inline constexpr uint32_t OTG_HS_DOEPCTL4_MPSIZ_Pos = 0;
    inline constexpr uint32_t OTG_HS_DOEPCTL4_MPSIZ_Msk = 0x000007FF;
    inline constexpr uint32_t OTG_HS_DOEPCTL4_USBAEP_Pos = 15;
    inline constexpr uint32_t OTG_HS_DOEPCTL4_USBAEP_Msk = 0x00008000;
    inline constexpr uint32_t OTG_HS_DOEPCTL4_USBAEP = (1U << 15);
    inline constexpr uint32_t OTG_HS_DOEPCTL4_EONUM_DPID_Pos = 16;
    inline constexpr uint32_t OTG_HS_DOEPCTL4_EONUM_DPID_Msk = 0x00010000;
    inline constexpr uint32_t OTG_HS_DOEPCTL4_EONUM_DPID = (1U << 16);
    inline constexpr uint32_t OTG_HS_DOEPCTL4_NAKSTS_Pos = 17;
    inline constexpr uint32_t OTG_HS_DOEPCTL4_NAKSTS_Msk = 0x00020000;
    inline constexpr uint32_t OTG_HS_DOEPCTL4_NAKSTS = (1U << 17);
    inline constexpr uint32_t OTG_HS_DOEPCTL4_EPTYP_Pos = 18;
    inline constexpr uint32_t OTG_HS_DOEPCTL4_EPTYP_Msk = 0x000C0000;
    inline constexpr uint32_t OTG_HS_DOEPCTL4_SNPM_Pos = 20;
    inline constexpr uint32_t OTG_HS_DOEPCTL4_SNPM_Msk = 0x00100000;
    inline constexpr uint32_t OTG_HS_DOEPCTL4_SNPM = (1U << 20);
    inline constexpr uint32_t OTG_HS_DOEPCTL4_Stall_Pos = 21;
    inline constexpr uint32_t OTG_HS_DOEPCTL4_Stall_Msk = 0x00200000;
    inline constexpr uint32_t OTG_HS_DOEPCTL4_Stall = (1U << 21);
    inline constexpr uint32_t OTG_HS_DOEPCTL4_CNAK_Pos = 26;
    inline constexpr uint32_t OTG_HS_DOEPCTL4_CNAK_Msk = 0x04000000;
    inline constexpr uint32_t OTG_HS_DOEPCTL4_CNAK = (1U << 26);
    inline constexpr uint32_t OTG_HS_DOEPCTL4_SNAK_Pos = 27;
    inline constexpr uint32_t OTG_HS_DOEPCTL4_SNAK_Msk = 0x08000000;
    inline constexpr uint32_t OTG_HS_DOEPCTL4_SNAK = (1U << 27);
    inline constexpr uint32_t OTG_HS_DOEPCTL4_SD0PID_SEVNFRM_Pos = 28;
    inline constexpr uint32_t OTG_HS_DOEPCTL4_SD0PID_SEVNFRM_Msk = 0x10000000;
    inline constexpr uint32_t OTG_HS_DOEPCTL4_SD0PID_SEVNFRM = (1U << 28);
    inline constexpr uint32_t OTG_HS_DOEPCTL4_SODDFRM_Pos = 29;
    inline constexpr uint32_t OTG_HS_DOEPCTL4_SODDFRM_Msk = 0x20000000;
    inline constexpr uint32_t OTG_HS_DOEPCTL4_SODDFRM = (1U << 29);
    inline constexpr uint32_t OTG_HS_DOEPCTL4_EPDIS_Pos = 30;
    inline constexpr uint32_t OTG_HS_DOEPCTL4_EPDIS_Msk = 0x40000000;
    inline constexpr uint32_t OTG_HS_DOEPCTL4_EPDIS = (1U << 30);
    inline constexpr uint32_t OTG_HS_DOEPCTL4_EPENA_Pos = 31;
    inline constexpr uint32_t OTG_HS_DOEPCTL4_EPENA_Msk = 0x80000000;
    inline constexpr uint32_t OTG_HS_DOEPCTL4_EPENA = (1U << 31);

    // OTG_HS_DOEPINT4 fields
    inline constexpr uint32_t OTG_HS_DOEPINT4_XFRC_Pos = 0;
    inline constexpr uint32_t OTG_HS_DOEPINT4_XFRC_Msk = 0x00000001;
    inline constexpr uint32_t OTG_HS_DOEPINT4_XFRC = (1U << 0);
    inline constexpr uint32_t OTG_HS_DOEPINT4_EPDISD_Pos = 1;
    inline constexpr uint32_t OTG_HS_DOEPINT4_EPDISD_Msk = 0x00000002;
    inline constexpr uint32_t OTG_HS_DOEPINT4_EPDISD = (1U << 1);
    inline constexpr uint32_t OTG_HS_DOEPINT4_STUP_Pos = 3;
    inline constexpr uint32_t OTG_HS_DOEPINT4_STUP_Msk = 0x00000008;
    inline constexpr uint32_t OTG_HS_DOEPINT4_STUP = (1U << 3);
    inline constexpr uint32_t OTG_HS_DOEPINT4_OTEPDIS_Pos = 4;
    inline constexpr uint32_t OTG_HS_DOEPINT4_OTEPDIS_Msk = 0x00000010;
    inline constexpr uint32_t OTG_HS_DOEPINT4_OTEPDIS = (1U << 4);
    inline constexpr uint32_t OTG_HS_DOEPINT4_B2BSTUP_Pos = 6;
    inline constexpr uint32_t OTG_HS_DOEPINT4_B2BSTUP_Msk = 0x00000040;
    inline constexpr uint32_t OTG_HS_DOEPINT4_B2BSTUP = (1U << 6);
    inline constexpr uint32_t OTG_HS_DOEPINT4_NYET_Pos = 14;
    inline constexpr uint32_t OTG_HS_DOEPINT4_NYET_Msk = 0x00004000;
    inline constexpr uint32_t OTG_HS_DOEPINT4_NYET = (1U << 14);

    // OTG_HS_DOEPTSIZ4 fields
    inline constexpr uint32_t OTG_HS_DOEPTSIZ4_XFRSIZ_Pos = 0;
    inline constexpr uint32_t OTG_HS_DOEPTSIZ4_XFRSIZ_Msk = 0x0007FFFF;
    inline constexpr uint32_t OTG_HS_DOEPTSIZ4_PKTCNT_Pos = 19;
    inline constexpr uint32_t OTG_HS_DOEPTSIZ4_PKTCNT_Msk = 0x1FF80000;
    inline constexpr uint32_t OTG_HS_DOEPTSIZ4_RXDPID_STUPCNT_Pos = 29;
    inline constexpr uint32_t OTG_HS_DOEPTSIZ4_RXDPID_STUPCNT_Msk = 0x60000000;

    // OTG_HS_DOEPCTL5 fields
    inline constexpr uint32_t OTG_HS_DOEPCTL5_MPSIZ_Pos = 0;
    inline constexpr uint32_t OTG_HS_DOEPCTL5_MPSIZ_Msk = 0x000007FF;
    inline constexpr uint32_t OTG_HS_DOEPCTL5_USBAEP_Pos = 15;
    inline constexpr uint32_t OTG_HS_DOEPCTL5_USBAEP_Msk = 0x00008000;
    inline constexpr uint32_t OTG_HS_DOEPCTL5_USBAEP = (1U << 15);
    inline constexpr uint32_t OTG_HS_DOEPCTL5_EONUM_DPID_Pos = 16;
    inline constexpr uint32_t OTG_HS_DOEPCTL5_EONUM_DPID_Msk = 0x00010000;
    inline constexpr uint32_t OTG_HS_DOEPCTL5_EONUM_DPID = (1U << 16);
    inline constexpr uint32_t OTG_HS_DOEPCTL5_NAKSTS_Pos = 17;
    inline constexpr uint32_t OTG_HS_DOEPCTL5_NAKSTS_Msk = 0x00020000;
    inline constexpr uint32_t OTG_HS_DOEPCTL5_NAKSTS = (1U << 17);
    inline constexpr uint32_t OTG_HS_DOEPCTL5_EPTYP_Pos = 18;
    inline constexpr uint32_t OTG_HS_DOEPCTL5_EPTYP_Msk = 0x000C0000;
    inline constexpr uint32_t OTG_HS_DOEPCTL5_SNPM_Pos = 20;
    inline constexpr uint32_t OTG_HS_DOEPCTL5_SNPM_Msk = 0x00100000;
    inline constexpr uint32_t OTG_HS_DOEPCTL5_SNPM = (1U << 20);
    inline constexpr uint32_t OTG_HS_DOEPCTL5_Stall_Pos = 21;
    inline constexpr uint32_t OTG_HS_DOEPCTL5_Stall_Msk = 0x00200000;
    inline constexpr uint32_t OTG_HS_DOEPCTL5_Stall = (1U << 21);
    inline constexpr uint32_t OTG_HS_DOEPCTL5_CNAK_Pos = 26;
    inline constexpr uint32_t OTG_HS_DOEPCTL5_CNAK_Msk = 0x04000000;
    inline constexpr uint32_t OTG_HS_DOEPCTL5_CNAK = (1U << 26);
    inline constexpr uint32_t OTG_HS_DOEPCTL5_SNAK_Pos = 27;
    inline constexpr uint32_t OTG_HS_DOEPCTL5_SNAK_Msk = 0x08000000;
    inline constexpr uint32_t OTG_HS_DOEPCTL5_SNAK = (1U << 27);
    inline constexpr uint32_t OTG_HS_DOEPCTL5_SD0PID_SEVNFRM_Pos = 28;
    inline constexpr uint32_t OTG_HS_DOEPCTL5_SD0PID_SEVNFRM_Msk = 0x10000000;
    inline constexpr uint32_t OTG_HS_DOEPCTL5_SD0PID_SEVNFRM = (1U << 28);
    inline constexpr uint32_t OTG_HS_DOEPCTL5_SODDFRM_Pos = 29;
    inline constexpr uint32_t OTG_HS_DOEPCTL5_SODDFRM_Msk = 0x20000000;
    inline constexpr uint32_t OTG_HS_DOEPCTL5_SODDFRM = (1U << 29);
    inline constexpr uint32_t OTG_HS_DOEPCTL5_EPDIS_Pos = 30;
    inline constexpr uint32_t OTG_HS_DOEPCTL5_EPDIS_Msk = 0x40000000;
    inline constexpr uint32_t OTG_HS_DOEPCTL5_EPDIS = (1U << 30);
    inline constexpr uint32_t OTG_HS_DOEPCTL5_EPENA_Pos = 31;
    inline constexpr uint32_t OTG_HS_DOEPCTL5_EPENA_Msk = 0x80000000;
    inline constexpr uint32_t OTG_HS_DOEPCTL5_EPENA = (1U << 31);

    // OTG_HS_DOEPINT5 fields
    inline constexpr uint32_t OTG_HS_DOEPINT5_XFRC_Pos = 0;
    inline constexpr uint32_t OTG_HS_DOEPINT5_XFRC_Msk = 0x00000001;
    inline constexpr uint32_t OTG_HS_DOEPINT5_XFRC = (1U << 0);
    inline constexpr uint32_t OTG_HS_DOEPINT5_EPDISD_Pos = 1;
    inline constexpr uint32_t OTG_HS_DOEPINT5_EPDISD_Msk = 0x00000002;
    inline constexpr uint32_t OTG_HS_DOEPINT5_EPDISD = (1U << 1);
    inline constexpr uint32_t OTG_HS_DOEPINT5_STUP_Pos = 3;
    inline constexpr uint32_t OTG_HS_DOEPINT5_STUP_Msk = 0x00000008;
    inline constexpr uint32_t OTG_HS_DOEPINT5_STUP = (1U << 3);
    inline constexpr uint32_t OTG_HS_DOEPINT5_OTEPDIS_Pos = 4;
    inline constexpr uint32_t OTG_HS_DOEPINT5_OTEPDIS_Msk = 0x00000010;
    inline constexpr uint32_t OTG_HS_DOEPINT5_OTEPDIS = (1U << 4);
    inline constexpr uint32_t OTG_HS_DOEPINT5_B2BSTUP_Pos = 6;
    inline constexpr uint32_t OTG_HS_DOEPINT5_B2BSTUP_Msk = 0x00000040;
    inline constexpr uint32_t OTG_HS_DOEPINT5_B2BSTUP = (1U << 6);
    inline constexpr uint32_t OTG_HS_DOEPINT5_NYET_Pos = 14;
    inline constexpr uint32_t OTG_HS_DOEPINT5_NYET_Msk = 0x00004000;
    inline constexpr uint32_t OTG_HS_DOEPINT5_NYET = (1U << 14);

    // OTG_HS_DOEPTSIZ5 fields
    inline constexpr uint32_t OTG_HS_DOEPTSIZ5_XFRSIZ_Pos = 0;
    inline constexpr uint32_t OTG_HS_DOEPTSIZ5_XFRSIZ_Msk = 0x0007FFFF;
    inline constexpr uint32_t OTG_HS_DOEPTSIZ5_PKTCNT_Pos = 19;
    inline constexpr uint32_t OTG_HS_DOEPTSIZ5_PKTCNT_Msk = 0x1FF80000;
    inline constexpr uint32_t OTG_HS_DOEPTSIZ5_RXDPID_STUPCNT_Pos = 29;
    inline constexpr uint32_t OTG_HS_DOEPTSIZ5_RXDPID_STUPCNT_Msk = 0x60000000;

    // OTG_HS_DOEPCTL6 fields
    inline constexpr uint32_t OTG_HS_DOEPCTL6_MPSIZ_Pos = 0;
    inline constexpr uint32_t OTG_HS_DOEPCTL6_MPSIZ_Msk = 0x000007FF;
    inline constexpr uint32_t OTG_HS_DOEPCTL6_USBAEP_Pos = 15;
    inline constexpr uint32_t OTG_HS_DOEPCTL6_USBAEP_Msk = 0x00008000;
    inline constexpr uint32_t OTG_HS_DOEPCTL6_USBAEP = (1U << 15);
    inline constexpr uint32_t OTG_HS_DOEPCTL6_EONUM_DPID_Pos = 16;
    inline constexpr uint32_t OTG_HS_DOEPCTL6_EONUM_DPID_Msk = 0x00010000;
    inline constexpr uint32_t OTG_HS_DOEPCTL6_EONUM_DPID = (1U << 16);
    inline constexpr uint32_t OTG_HS_DOEPCTL6_NAKSTS_Pos = 17;
    inline constexpr uint32_t OTG_HS_DOEPCTL6_NAKSTS_Msk = 0x00020000;
    inline constexpr uint32_t OTG_HS_DOEPCTL6_NAKSTS = (1U << 17);
    inline constexpr uint32_t OTG_HS_DOEPCTL6_EPTYP_Pos = 18;
    inline constexpr uint32_t OTG_HS_DOEPCTL6_EPTYP_Msk = 0x000C0000;
    inline constexpr uint32_t OTG_HS_DOEPCTL6_SNPM_Pos = 20;
    inline constexpr uint32_t OTG_HS_DOEPCTL6_SNPM_Msk = 0x00100000;
    inline constexpr uint32_t OTG_HS_DOEPCTL6_SNPM = (1U << 20);
    inline constexpr uint32_t OTG_HS_DOEPCTL6_Stall_Pos = 21;
    inline constexpr uint32_t OTG_HS_DOEPCTL6_Stall_Msk = 0x00200000;
    inline constexpr uint32_t OTG_HS_DOEPCTL6_Stall = (1U << 21);
    inline constexpr uint32_t OTG_HS_DOEPCTL6_CNAK_Pos = 26;
    inline constexpr uint32_t OTG_HS_DOEPCTL6_CNAK_Msk = 0x04000000;
    inline constexpr uint32_t OTG_HS_DOEPCTL6_CNAK = (1U << 26);
    inline constexpr uint32_t OTG_HS_DOEPCTL6_SNAK_Pos = 27;
    inline constexpr uint32_t OTG_HS_DOEPCTL6_SNAK_Msk = 0x08000000;
    inline constexpr uint32_t OTG_HS_DOEPCTL6_SNAK = (1U << 27);
    inline constexpr uint32_t OTG_HS_DOEPCTL6_SD0PID_SEVNFRM_Pos = 28;
    inline constexpr uint32_t OTG_HS_DOEPCTL6_SD0PID_SEVNFRM_Msk = 0x10000000;
    inline constexpr uint32_t OTG_HS_DOEPCTL6_SD0PID_SEVNFRM = (1U << 28);
    inline constexpr uint32_t OTG_HS_DOEPCTL6_SODDFRM_Pos = 29;
    inline constexpr uint32_t OTG_HS_DOEPCTL6_SODDFRM_Msk = 0x20000000;
    inline constexpr uint32_t OTG_HS_DOEPCTL6_SODDFRM = (1U << 29);
    inline constexpr uint32_t OTG_HS_DOEPCTL6_EPDIS_Pos = 30;
    inline constexpr uint32_t OTG_HS_DOEPCTL6_EPDIS_Msk = 0x40000000;
    inline constexpr uint32_t OTG_HS_DOEPCTL6_EPDIS = (1U << 30);
    inline constexpr uint32_t OTG_HS_DOEPCTL6_EPENA_Pos = 31;
    inline constexpr uint32_t OTG_HS_DOEPCTL6_EPENA_Msk = 0x80000000;
    inline constexpr uint32_t OTG_HS_DOEPCTL6_EPENA = (1U << 31);

    // OTG_HS_DOEPINT6 fields
    inline constexpr uint32_t OTG_HS_DOEPINT6_XFRC_Pos = 0;
    inline constexpr uint32_t OTG_HS_DOEPINT6_XFRC_Msk = 0x00000001;
    inline constexpr uint32_t OTG_HS_DOEPINT6_XFRC = (1U << 0);
    inline constexpr uint32_t OTG_HS_DOEPINT6_EPDISD_Pos = 1;
    inline constexpr uint32_t OTG_HS_DOEPINT6_EPDISD_Msk = 0x00000002;
    inline constexpr uint32_t OTG_HS_DOEPINT6_EPDISD = (1U << 1);
    inline constexpr uint32_t OTG_HS_DOEPINT6_STUP_Pos = 3;
    inline constexpr uint32_t OTG_HS_DOEPINT6_STUP_Msk = 0x00000008;
    inline constexpr uint32_t OTG_HS_DOEPINT6_STUP = (1U << 3);
    inline constexpr uint32_t OTG_HS_DOEPINT6_OTEPDIS_Pos = 4;
    inline constexpr uint32_t OTG_HS_DOEPINT6_OTEPDIS_Msk = 0x00000010;
    inline constexpr uint32_t OTG_HS_DOEPINT6_OTEPDIS = (1U << 4);
    inline constexpr uint32_t OTG_HS_DOEPINT6_B2BSTUP_Pos = 6;
    inline constexpr uint32_t OTG_HS_DOEPINT6_B2BSTUP_Msk = 0x00000040;
    inline constexpr uint32_t OTG_HS_DOEPINT6_B2BSTUP = (1U << 6);
    inline constexpr uint32_t OTG_HS_DOEPINT6_NYET_Pos = 14;
    inline constexpr uint32_t OTG_HS_DOEPINT6_NYET_Msk = 0x00004000;
    inline constexpr uint32_t OTG_HS_DOEPINT6_NYET = (1U << 14);

    // OTG_HS_DOEPTSIZ6 fields
    inline constexpr uint32_t OTG_HS_DOEPTSIZ6_XFRSIZ_Pos = 0;
    inline constexpr uint32_t OTG_HS_DOEPTSIZ6_XFRSIZ_Msk = 0x0007FFFF;
    inline constexpr uint32_t OTG_HS_DOEPTSIZ6_PKTCNT_Pos = 19;
    inline constexpr uint32_t OTG_HS_DOEPTSIZ6_PKTCNT_Msk = 0x1FF80000;
    inline constexpr uint32_t OTG_HS_DOEPTSIZ6_RXDPID_STUPCNT_Pos = 29;
    inline constexpr uint32_t OTG_HS_DOEPTSIZ6_RXDPID_STUPCNT_Msk = 0x60000000;

    // OTG_HS_DOEPCTL7 fields
    inline constexpr uint32_t OTG_HS_DOEPCTL7_MPSIZ_Pos = 0;
    inline constexpr uint32_t OTG_HS_DOEPCTL7_MPSIZ_Msk = 0x000007FF;
    inline constexpr uint32_t OTG_HS_DOEPCTL7_USBAEP_Pos = 15;
    inline constexpr uint32_t OTG_HS_DOEPCTL7_USBAEP_Msk = 0x00008000;
    inline constexpr uint32_t OTG_HS_DOEPCTL7_USBAEP = (1U << 15);
    inline constexpr uint32_t OTG_HS_DOEPCTL7_EONUM_DPID_Pos = 16;
    inline constexpr uint32_t OTG_HS_DOEPCTL7_EONUM_DPID_Msk = 0x00010000;
    inline constexpr uint32_t OTG_HS_DOEPCTL7_EONUM_DPID = (1U << 16);
    inline constexpr uint32_t OTG_HS_DOEPCTL7_NAKSTS_Pos = 17;
    inline constexpr uint32_t OTG_HS_DOEPCTL7_NAKSTS_Msk = 0x00020000;
    inline constexpr uint32_t OTG_HS_DOEPCTL7_NAKSTS = (1U << 17);
    inline constexpr uint32_t OTG_HS_DOEPCTL7_EPTYP_Pos = 18;
    inline constexpr uint32_t OTG_HS_DOEPCTL7_EPTYP_Msk = 0x000C0000;
    inline constexpr uint32_t OTG_HS_DOEPCTL7_SNPM_Pos = 20;
    inline constexpr uint32_t OTG_HS_DOEPCTL7_SNPM_Msk = 0x00100000;
    inline constexpr uint32_t OTG_HS_DOEPCTL7_SNPM = (1U << 20);
    inline constexpr uint32_t OTG_HS_DOEPCTL7_Stall_Pos = 21;
    inline constexpr uint32_t OTG_HS_DOEPCTL7_Stall_Msk = 0x00200000;
    inline constexpr uint32_t OTG_HS_DOEPCTL7_Stall = (1U << 21);
    inline constexpr uint32_t OTG_HS_DOEPCTL7_CNAK_Pos = 26;
    inline constexpr uint32_t OTG_HS_DOEPCTL7_CNAK_Msk = 0x04000000;
    inline constexpr uint32_t OTG_HS_DOEPCTL7_CNAK = (1U << 26);
    inline constexpr uint32_t OTG_HS_DOEPCTL7_SNAK_Pos = 27;
    inline constexpr uint32_t OTG_HS_DOEPCTL7_SNAK_Msk = 0x08000000;
    inline constexpr uint32_t OTG_HS_DOEPCTL7_SNAK = (1U << 27);
    inline constexpr uint32_t OTG_HS_DOEPCTL7_SD0PID_SEVNFRM_Pos = 28;
    inline constexpr uint32_t OTG_HS_DOEPCTL7_SD0PID_SEVNFRM_Msk = 0x10000000;
    inline constexpr uint32_t OTG_HS_DOEPCTL7_SD0PID_SEVNFRM = (1U << 28);
    inline constexpr uint32_t OTG_HS_DOEPCTL7_SODDFRM_Pos = 29;
    inline constexpr uint32_t OTG_HS_DOEPCTL7_SODDFRM_Msk = 0x20000000;
    inline constexpr uint32_t OTG_HS_DOEPCTL7_SODDFRM = (1U << 29);
    inline constexpr uint32_t OTG_HS_DOEPCTL7_EPDIS_Pos = 30;
    inline constexpr uint32_t OTG_HS_DOEPCTL7_EPDIS_Msk = 0x40000000;
    inline constexpr uint32_t OTG_HS_DOEPCTL7_EPDIS = (1U << 30);
    inline constexpr uint32_t OTG_HS_DOEPCTL7_EPENA_Pos = 31;
    inline constexpr uint32_t OTG_HS_DOEPCTL7_EPENA_Msk = 0x80000000;
    inline constexpr uint32_t OTG_HS_DOEPCTL7_EPENA = (1U << 31);

    // OTG_HS_DOEPINT7 fields
    inline constexpr uint32_t OTG_HS_DOEPINT7_XFRC_Pos = 0;
    inline constexpr uint32_t OTG_HS_DOEPINT7_XFRC_Msk = 0x00000001;
    inline constexpr uint32_t OTG_HS_DOEPINT7_XFRC = (1U << 0);
    inline constexpr uint32_t OTG_HS_DOEPINT7_EPDISD_Pos = 1;
    inline constexpr uint32_t OTG_HS_DOEPINT7_EPDISD_Msk = 0x00000002;
    inline constexpr uint32_t OTG_HS_DOEPINT7_EPDISD = (1U << 1);
    inline constexpr uint32_t OTG_HS_DOEPINT7_STUP_Pos = 3;
    inline constexpr uint32_t OTG_HS_DOEPINT7_STUP_Msk = 0x00000008;
    inline constexpr uint32_t OTG_HS_DOEPINT7_STUP = (1U << 3);
    inline constexpr uint32_t OTG_HS_DOEPINT7_OTEPDIS_Pos = 4;
    inline constexpr uint32_t OTG_HS_DOEPINT7_OTEPDIS_Msk = 0x00000010;
    inline constexpr uint32_t OTG_HS_DOEPINT7_OTEPDIS = (1U << 4);
    inline constexpr uint32_t OTG_HS_DOEPINT7_B2BSTUP_Pos = 6;
    inline constexpr uint32_t OTG_HS_DOEPINT7_B2BSTUP_Msk = 0x00000040;
    inline constexpr uint32_t OTG_HS_DOEPINT7_B2BSTUP = (1U << 6);
    inline constexpr uint32_t OTG_HS_DOEPINT7_NYET_Pos = 14;
    inline constexpr uint32_t OTG_HS_DOEPINT7_NYET_Msk = 0x00004000;
    inline constexpr uint32_t OTG_HS_DOEPINT7_NYET = (1U << 14);

    // OTG_HS_DOEPTSIZ7 fields
    inline constexpr uint32_t OTG_HS_DOEPTSIZ7_XFRSIZ_Pos = 0;
    inline constexpr uint32_t OTG_HS_DOEPTSIZ7_XFRSIZ_Msk = 0x0007FFFF;
    inline constexpr uint32_t OTG_HS_DOEPTSIZ7_PKTCNT_Pos = 19;
    inline constexpr uint32_t OTG_HS_DOEPTSIZ7_PKTCNT_Msk = 0x1FF80000;
    inline constexpr uint32_t OTG_HS_DOEPTSIZ7_RXDPID_STUPCNT_Pos = 29;
    inline constexpr uint32_t OTG_HS_DOEPTSIZ7_RXDPID_STUPCNT_Msk = 0x60000000;

} // namespace OTG2_HS_DEVICE

namespace OTG1_HS_PWRCLK {
    // OTG_HS_PCGCR fields
    inline constexpr uint32_t OTG_HS_PCGCR_STPPCLK_Pos = 0;
    inline constexpr uint32_t OTG_HS_PCGCR_STPPCLK_Msk = 0x00000001;
    inline constexpr uint32_t OTG_HS_PCGCR_STPPCLK = (1U << 0);
    inline constexpr uint32_t OTG_HS_PCGCR_GATEHCLK_Pos = 1;
    inline constexpr uint32_t OTG_HS_PCGCR_GATEHCLK_Msk = 0x00000002;
    inline constexpr uint32_t OTG_HS_PCGCR_GATEHCLK = (1U << 1);
    inline constexpr uint32_t OTG_HS_PCGCR_PHYSUSP_Pos = 4;
    inline constexpr uint32_t OTG_HS_PCGCR_PHYSUSP_Msk = 0x00000010;
    inline constexpr uint32_t OTG_HS_PCGCR_PHYSUSP = (1U << 4);

} // namespace OTG1_HS_PWRCLK

namespace OTG2_HS_PWRCLK {
    // OTG_HS_PCGCR fields
    inline constexpr uint32_t OTG_HS_PCGCR_STPPCLK_Pos = 0;
    inline constexpr uint32_t OTG_HS_PCGCR_STPPCLK_Msk = 0x00000001;
    inline constexpr uint32_t OTG_HS_PCGCR_STPPCLK = (1U << 0);
    inline constexpr uint32_t OTG_HS_PCGCR_GATEHCLK_Pos = 1;
    inline constexpr uint32_t OTG_HS_PCGCR_GATEHCLK_Msk = 0x00000002;
    inline constexpr uint32_t OTG_HS_PCGCR_GATEHCLK = (1U << 1);
    inline constexpr uint32_t OTG_HS_PCGCR_PHYSUSP_Pos = 4;
    inline constexpr uint32_t OTG_HS_PCGCR_PHYSUSP_Msk = 0x00000010;
    inline constexpr uint32_t OTG_HS_PCGCR_PHYSUSP = (1U << 4);

} // namespace OTG2_HS_PWRCLK

// Peripheral instances (lowercase to avoid namespace collision)
namespace periph {
    inline auto* const otg1_hs_global = reinterpret_cast<OTG1_HS_GLOBAL_t*>(0x40040000);
    inline auto* const otg2_hs_global = reinterpret_cast<OTG1_HS_GLOBAL_t*>(0x40080000);
    inline auto* const otg1_hs_device = reinterpret_cast<OTG1_HS_DEVICE_t*>(0x40040800);
    inline auto* const otg2_hs_device = reinterpret_cast<OTG1_HS_DEVICE_t*>(0x40080800);
    inline auto* const otg1_hs_pwrclk = reinterpret_cast<OTG1_HS_PWRCLK_t*>(0x40040E00);
    inline auto* const otg2_hs_pwrclk = reinterpret_cast<OTG1_HS_PWRCLK_t*>(0x40080E00);
} // namespace periph

} // namespace sbl::hw::reg

#endif // SBL_HW_REG_STM32H750_USB_OTG_HPP
