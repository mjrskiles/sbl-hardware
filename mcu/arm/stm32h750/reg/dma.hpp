/**
 * @file dma.hpp
 * @brief Register definitions for STM32H750 - dma
 *
 * Generated from: stm32h750.svd.patched
 * Generator: cecrops
 * Generated: 2025-12-16T17:57:44.093331
 *
 * DO NOT EDIT - Regenerate with: cecrops generate <mcu-dir>
 */

#ifndef SBL_HW_REG_STM32H750_DMA_HPP
#define SBL_HW_REG_STM32H750_DMA_HPP

#include <cstdint>

namespace sbl::hw::reg {

/** BDMA */
struct BDMA_t {
    volatile uint32_t BDMA_ISR;  ///< BDMA interrupt status register
    volatile uint32_t BDMA_IFCR;  ///< BDMA interrupt flag clear register
    volatile uint32_t BDMA_CCR0;  ///< BDMA channel 0 configuration register
    volatile uint32_t BDMA_CNDTR0;  ///< 
    volatile uint32_t BDMA_CPAR0;  ///< 
    volatile uint32_t BDMA_CM0AR0;  ///< 
    volatile uint32_t BDMA_CM1AR0;  ///< 
    volatile uint32_t BDMA_CCR1;  ///< BDMA channel 1 configuration register
    volatile uint32_t BDMA_CNDTR1;  ///< 
    volatile uint32_t BDMA_CPAR1;  ///< 
    volatile uint32_t BDMA_CM0AR1;  ///< 
    volatile uint32_t BDMA_CM1AR1;  ///< 
    volatile uint32_t BDMA_CCR2;  ///< BDMA channel 2 configuration register
    volatile uint32_t BDMA_CNDTR2;  ///< 
    volatile uint32_t BDMA_CPAR2;  ///< 
    volatile uint32_t BDMA_CM0AR2;  ///< 
    volatile uint32_t BDMA_CM1AR2;  ///< 
    volatile uint32_t BDMA_CCR3;  ///< BDMA channel 3 configuration register
    volatile uint32_t BDMA_CNDTR3;  ///< 
    volatile uint32_t BDMA_CPAR3;  ///< 
    volatile uint32_t BDMA_CM0AR3;  ///< 
    volatile uint32_t BDMA_CM1AR3;  ///< 
    volatile uint32_t BDMA_CCR4;  ///< BDMA channel 4 configuration register
    volatile uint32_t BDMA_CNDTR4;  ///< 
    volatile uint32_t BDMA_CPAR4;  ///< 
    volatile uint32_t BDMA_CM0AR4;  ///< 
    volatile uint32_t BDMA_CM1AR4;  ///< 
    volatile uint32_t BDMA_CCR5;  ///< BDMA channel 5 configuration register
    volatile uint32_t BDMA_CNDTR5;  ///< 
    volatile uint32_t BDMA_CPAR5;  ///< 
    volatile uint32_t BDMA_CM0AR5;  ///< 
    volatile uint32_t BDMA_CM1AR5;  ///< 
    volatile uint32_t BDMA_CCR6;  ///< BDMA channel 6 configuration register
    volatile uint32_t BDMA_CNDTR6;  ///< 
    volatile uint32_t BDMA_CPAR6;  ///< 
    volatile uint32_t BDMA_CM0AR6;  ///< 
    volatile uint32_t BDMA_CM1AR6;  ///< 
    volatile uint32_t BDMA_CCR7;  ///< BDMA channel 7 configuration register
    volatile uint32_t BDMA_CNDTR7;  ///< 
    volatile uint32_t BDMA_CPAR7;  ///< 
    volatile uint32_t BDMA_CM0AR7;  ///< 
    volatile uint32_t BDMA_CM1AR7;  ///< 
};

/** DMA2D */
struct DMA2D_t {
    volatile uint32_t DMA2D_CR;  ///< DMA2D control register
    volatile uint32_t DMA2D_ISR;  ///< DMA2D Interrupt Status           Register
    volatile uint32_t DMA2D_IFCR;  ///< DMA2D interrupt flag clear           register
    volatile uint32_t DMA2D_FGMAR;  ///< DMA2D foreground memory address           register
    volatile uint32_t DMA2D_FGOR;  ///< DMA2D foreground offset           register
    volatile uint32_t DMA2D_BGMAR;  ///< DMA2D background memory address           register
    volatile uint32_t DMA2D_BGOR;  ///< DMA2D background offset           register
    volatile uint32_t DMA2D_FGPFCCR;  ///< DMA2D foreground PFC control           register
    volatile uint32_t DMA2D_FGCOLR;  ///< DMA2D foreground color           register
    volatile uint32_t DMA2D_BGPFCCR;  ///< DMA2D background PFC control           register
    volatile uint32_t DMA2D_BGCOLR;  ///< DMA2D background color           register
    volatile uint32_t DMA2D_FGCMAR;  ///< DMA2D foreground CLUT memory address           register
    volatile uint32_t DMA2D_BGCMAR;  ///< DMA2D background CLUT memory address           register
    volatile uint32_t DMA2D_OPFCCR;  ///< DMA2D output PFC control           register
    volatile uint32_t DMA2D_OCOLR;  ///< DMA2D output color register
    volatile uint32_t DMA2D_OMAR;  ///< DMA2D output memory address           register
    volatile uint32_t DMA2D_OOR;  ///< DMA2D output offset register
    volatile uint32_t DMA2D_NLR;  ///< DMA2D number of line register
    volatile uint32_t DMA2D_LWR;  ///< DMA2D line watermark register
    volatile uint32_t DMA2D_AMTCR;  ///< DMA2D AXI master timer configuration           register
};

/** DMAMUX */
struct DMAMUX1_t {
    volatile uint32_t DMAMUX_C0CR;  ///< 
    volatile uint32_t DMAMUX_C1CR;  ///< 
    volatile uint32_t DMAMUX_C2CR;  ///< 
    volatile uint32_t DMAMUX_C3CR;  ///< 
    volatile uint32_t DMAMUX_C4CR;  ///< 
    volatile uint32_t DMAMUX_C5CR;  ///< 
    volatile uint32_t DMAMUX_C6CR;  ///< 
    volatile uint32_t DMAMUX_C7CR;  ///< 
    volatile uint32_t DMAMUX_C8CR;  ///< 
    volatile uint32_t DMAMUX_C9CR;  ///< 
    volatile uint32_t DMAMUX_C10CR;  ///< 
    volatile uint32_t DMAMUX_C11CR;  ///< 
    volatile uint32_t DMAMUX_C12CR;  ///< 
    volatile uint32_t DMAMUX_C13CR;  ///< 
    volatile uint32_t DMAMUX_C14CR;  ///< 
    volatile uint32_t DMAMUX_C15CR;  ///< 
    uint8_t _reserved0[64];
    volatile uint32_t DMAMUX_CSR;  ///< 
    volatile uint32_t DMAMUX_CFR;  ///< 
    uint8_t _reserved1[120];
    volatile uint32_t DMAMUX_RG0CR;  ///< 
    volatile uint32_t DMAMUX_RG1CR;  ///< 
    volatile uint32_t DMAMUX_RG2CR;  ///< 
    volatile uint32_t DMAMUX_RG3CR;  ///< 
    volatile uint32_t DMAMUX_RG4CR;  ///< 
    volatile uint32_t DMAMUX_RG5CR;  ///< 
    volatile uint32_t DMAMUX_RG6CR;  ///< 
    volatile uint32_t DMAMUX_RG7CR;  ///< 
    uint8_t _reserved2[32];
    volatile uint32_t DMAMUX_RGSR;  ///< 
    volatile uint32_t DMAMUX_RGCFR;  ///< 
};

/** DMAMUX */
struct DMAMUX2_t {
    volatile uint32_t C0CR;  ///< DMAMux - DMA request line multiplexer           channel x...
    volatile uint32_t C1CR;  ///< DMAMux - DMA request line multiplexer           channel x...
    volatile uint32_t C2CR;  ///< DMAMux - DMA request line multiplexer           channel x...
    volatile uint32_t C3CR;  ///< DMAMux - DMA request line multiplexer           channel x...
    volatile uint32_t C4CR;  ///< DMAMux - DMA request line multiplexer           channel x...
    volatile uint32_t C5CR;  ///< DMAMux - DMA request line multiplexer           channel x...
    volatile uint32_t C6CR;  ///< DMAMux - DMA request line multiplexer           channel x...
    volatile uint32_t C7CR;  ///< DMAMux - DMA request line multiplexer           channel x...
    uint8_t _reserved0[96];
    volatile uint32_t CSR;  ///< 
    volatile uint32_t CFR;  ///< 
    uint8_t _reserved1[120];
    volatile uint32_t RG0CR;  ///< DMAMux - DMA request generator channel x           contro...
    volatile uint32_t RG1CR;  ///< DMAMux - DMA request generator channel x           contro...
    volatile uint32_t RG2CR;  ///< DMAMux - DMA request generator channel x           contro...
    volatile uint32_t RG3CR;  ///< DMAMux - DMA request generator channel x           contro...
    volatile uint32_t RG4CR;  ///< DMAMux - DMA request generator channel x           contro...
    volatile uint32_t RG5CR;  ///< DMAMux - DMA request generator channel x           contro...
    volatile uint32_t RG6CR;  ///< DMAMux - DMA request generator channel x           contro...
    volatile uint32_t RG7CR;  ///< DMAMux - DMA request generator channel x           contro...
    uint8_t _reserved2[32];
    volatile uint32_t RGSR;  ///< 
    volatile uint32_t RGCFR;  ///< 
};

/** DMA controller */
struct DMA1_t {
    volatile uint32_t LISR;  ///< low interrupt status register
    volatile uint32_t HISR;  ///< high interrupt status register
    volatile uint32_t LIFCR;  ///< low interrupt flag clear           register
    volatile uint32_t HIFCR;  ///< high interrupt flag clear           register
    volatile uint32_t S0CR;  ///< stream x configuration           register
    volatile uint32_t S0NDTR;  ///< stream x number of data           register
    volatile uint32_t S0PAR;  ///< stream x peripheral address           register
    volatile uint32_t S0M0AR;  ///< stream x memory 0 address           register
    volatile uint32_t S0M1AR;  ///< stream x memory 1 address           register
    volatile uint32_t S0FCR;  ///< stream x FIFO control register
    volatile uint32_t S1CR;  ///< stream x configuration           register
    volatile uint32_t S1NDTR;  ///< stream x number of data           register
    volatile uint32_t S1PAR;  ///< stream x peripheral address           register
    volatile uint32_t S1M0AR;  ///< stream x memory 0 address           register
    volatile uint32_t S1M1AR;  ///< stream x memory 1 address           register
    volatile uint32_t S1FCR;  ///< stream x FIFO control register
    volatile uint32_t S2CR;  ///< stream x configuration           register
    volatile uint32_t S2NDTR;  ///< stream x number of data           register
    volatile uint32_t S2PAR;  ///< stream x peripheral address           register
    volatile uint32_t S2M0AR;  ///< stream x memory 0 address           register
    volatile uint32_t S2M1AR;  ///< stream x memory 1 address           register
    volatile uint32_t S2FCR;  ///< stream x FIFO control register
    volatile uint32_t S3CR;  ///< stream x configuration           register
    volatile uint32_t S3NDTR;  ///< stream x number of data           register
    volatile uint32_t S3PAR;  ///< stream x peripheral address           register
    volatile uint32_t S3M0AR;  ///< stream x memory 0 address           register
    volatile uint32_t S3M1AR;  ///< stream x memory 1 address           register
    volatile uint32_t S3FCR;  ///< stream x FIFO control register
    volatile uint32_t S4CR;  ///< stream x configuration           register
    volatile uint32_t S4NDTR;  ///< stream x number of data           register
    volatile uint32_t S4PAR;  ///< stream x peripheral address           register
    volatile uint32_t S4M0AR;  ///< stream x memory 0 address           register
    volatile uint32_t S4M1AR;  ///< stream x memory 1 address           register
    volatile uint32_t S4FCR;  ///< stream x FIFO control register
    volatile uint32_t S5CR;  ///< stream x configuration           register
    volatile uint32_t S5NDTR;  ///< stream x number of data           register
    volatile uint32_t S5PAR;  ///< stream x peripheral address           register
    volatile uint32_t S5M0AR;  ///< stream x memory 0 address           register
    volatile uint32_t S5M1AR;  ///< stream x memory 1 address           register
    volatile uint32_t S5FCR;  ///< stream x FIFO control register
    volatile uint32_t S6CR;  ///< stream x configuration           register
    volatile uint32_t S6NDTR;  ///< stream x number of data           register
    volatile uint32_t S6PAR;  ///< stream x peripheral address           register
    volatile uint32_t S6M0AR;  ///< stream x memory 0 address           register
    volatile uint32_t S6M1AR;  ///< stream x memory 1 address           register
    volatile uint32_t S6FCR;  ///< stream x FIFO control register
    volatile uint32_t S7CR;  ///< stream x configuration           register
    volatile uint32_t S7NDTR;  ///< stream x number of data           register
    volatile uint32_t S7PAR;  ///< stream x peripheral address           register
    volatile uint32_t S7M0AR;  ///< stream x memory 0 address           register
    volatile uint32_t S7M1AR;  ///< stream x memory 1 address           register
    volatile uint32_t S7FCR;  ///< stream x FIFO control register
};

/** DMA controller */
struct DMA2_t {
    volatile uint32_t LISR;  ///< low interrupt status register
    volatile uint32_t HISR;  ///< high interrupt status register
    volatile uint32_t LIFCR;  ///< low interrupt flag clear           register
    volatile uint32_t HIFCR;  ///< high interrupt flag clear           register
    volatile uint32_t S0CR;  ///< stream x configuration           register
    volatile uint32_t S0NDTR;  ///< stream x number of data           register
    volatile uint32_t S0PAR;  ///< stream x peripheral address           register
    volatile uint32_t S0M0AR;  ///< stream x memory 0 address           register
    volatile uint32_t S0M1AR;  ///< stream x memory 1 address           register
    volatile uint32_t S0FCR;  ///< stream x FIFO control register
    volatile uint32_t S1CR;  ///< stream x configuration           register
    volatile uint32_t S1NDTR;  ///< stream x number of data           register
    volatile uint32_t S1PAR;  ///< stream x peripheral address           register
    volatile uint32_t S1M0AR;  ///< stream x memory 0 address           register
    volatile uint32_t S1M1AR;  ///< stream x memory 1 address           register
    volatile uint32_t S1FCR;  ///< stream x FIFO control register
    volatile uint32_t S2CR;  ///< stream x configuration           register
    volatile uint32_t S2NDTR;  ///< stream x number of data           register
    volatile uint32_t S2PAR;  ///< stream x peripheral address           register
    volatile uint32_t S2M0AR;  ///< stream x memory 0 address           register
    volatile uint32_t S2M1AR;  ///< stream x memory 1 address           register
    volatile uint32_t S2FCR;  ///< stream x FIFO control register
    volatile uint32_t S3CR;  ///< stream x configuration           register
    volatile uint32_t S3NDTR;  ///< stream x number of data           register
    volatile uint32_t S3PAR;  ///< stream x peripheral address           register
    volatile uint32_t S3M0AR;  ///< stream x memory 0 address           register
    volatile uint32_t S3M1AR;  ///< stream x memory 1 address           register
    volatile uint32_t S3FCR;  ///< stream x FIFO control register
    volatile uint32_t S4CR;  ///< stream x configuration           register
    volatile uint32_t S4NDTR;  ///< stream x number of data           register
    volatile uint32_t S4PAR;  ///< stream x peripheral address           register
    volatile uint32_t S4M0AR;  ///< stream x memory 0 address           register
    volatile uint32_t S4M1AR;  ///< stream x memory 1 address           register
    volatile uint32_t S4FCR;  ///< stream x FIFO control register
    volatile uint32_t S5CR;  ///< stream x configuration           register
    volatile uint32_t S5NDTR;  ///< stream x number of data           register
    volatile uint32_t S5PAR;  ///< stream x peripheral address           register
    volatile uint32_t S5M0AR;  ///< stream x memory 0 address           register
    volatile uint32_t S5M1AR;  ///< stream x memory 1 address           register
    volatile uint32_t S5FCR;  ///< stream x FIFO control register
    volatile uint32_t S6CR;  ///< stream x configuration           register
    volatile uint32_t S6NDTR;  ///< stream x number of data           register
    volatile uint32_t S6PAR;  ///< stream x peripheral address           register
    volatile uint32_t S6M0AR;  ///< stream x memory 0 address           register
    volatile uint32_t S6M1AR;  ///< stream x memory 1 address           register
    volatile uint32_t S6FCR;  ///< stream x FIFO control register
    volatile uint32_t S7CR;  ///< stream x configuration           register
    volatile uint32_t S7NDTR;  ///< stream x number of data           register
    volatile uint32_t S7PAR;  ///< stream x peripheral address           register
    volatile uint32_t S7M0AR;  ///< stream x memory 0 address           register
    volatile uint32_t S7M1AR;  ///< stream x memory 1 address           register
    volatile uint32_t S7FCR;  ///< stream x FIFO control register
};

namespace BDMA {
    // BDMA_ISR fields
    inline constexpr uint32_t BDMA_ISR_GIF0_Pos = 0;
    inline constexpr uint32_t BDMA_ISR_GIF0_Msk = 0x00000001;
    inline constexpr uint32_t BDMA_ISR_GIF0 = (1U << 0);
    inline constexpr uint32_t BDMA_ISR_TCIF0_Pos = 1;
    inline constexpr uint32_t BDMA_ISR_TCIF0_Msk = 0x00000002;
    inline constexpr uint32_t BDMA_ISR_TCIF0 = (1U << 1);
    inline constexpr uint32_t BDMA_ISR_HTIF0_Pos = 2;
    inline constexpr uint32_t BDMA_ISR_HTIF0_Msk = 0x00000004;
    inline constexpr uint32_t BDMA_ISR_HTIF0 = (1U << 2);
    inline constexpr uint32_t BDMA_ISR_TEIF0_Pos = 3;
    inline constexpr uint32_t BDMA_ISR_TEIF0_Msk = 0x00000008;
    inline constexpr uint32_t BDMA_ISR_TEIF0 = (1U << 3);
    inline constexpr uint32_t BDMA_ISR_GIF1_Pos = 4;
    inline constexpr uint32_t BDMA_ISR_GIF1_Msk = 0x00000010;
    inline constexpr uint32_t BDMA_ISR_GIF1 = (1U << 4);
    inline constexpr uint32_t BDMA_ISR_TCIF1_Pos = 5;
    inline constexpr uint32_t BDMA_ISR_TCIF1_Msk = 0x00000020;
    inline constexpr uint32_t BDMA_ISR_TCIF1 = (1U << 5);
    inline constexpr uint32_t BDMA_ISR_HTIF1_Pos = 6;
    inline constexpr uint32_t BDMA_ISR_HTIF1_Msk = 0x00000040;
    inline constexpr uint32_t BDMA_ISR_HTIF1 = (1U << 6);
    inline constexpr uint32_t BDMA_ISR_TEIF1_Pos = 7;
    inline constexpr uint32_t BDMA_ISR_TEIF1_Msk = 0x00000080;
    inline constexpr uint32_t BDMA_ISR_TEIF1 = (1U << 7);
    inline constexpr uint32_t BDMA_ISR_GIF2_Pos = 8;
    inline constexpr uint32_t BDMA_ISR_GIF2_Msk = 0x00000100;
    inline constexpr uint32_t BDMA_ISR_GIF2 = (1U << 8);
    inline constexpr uint32_t BDMA_ISR_TCIF2_Pos = 9;
    inline constexpr uint32_t BDMA_ISR_TCIF2_Msk = 0x00000200;
    inline constexpr uint32_t BDMA_ISR_TCIF2 = (1U << 9);
    inline constexpr uint32_t BDMA_ISR_HTIF2_Pos = 10;
    inline constexpr uint32_t BDMA_ISR_HTIF2_Msk = 0x00000400;
    inline constexpr uint32_t BDMA_ISR_HTIF2 = (1U << 10);
    inline constexpr uint32_t BDMA_ISR_TEIF2_Pos = 11;
    inline constexpr uint32_t BDMA_ISR_TEIF2_Msk = 0x00000800;
    inline constexpr uint32_t BDMA_ISR_TEIF2 = (1U << 11);
    inline constexpr uint32_t BDMA_ISR_GIF3_Pos = 12;
    inline constexpr uint32_t BDMA_ISR_GIF3_Msk = 0x00001000;
    inline constexpr uint32_t BDMA_ISR_GIF3 = (1U << 12);
    inline constexpr uint32_t BDMA_ISR_TCIF3_Pos = 13;
    inline constexpr uint32_t BDMA_ISR_TCIF3_Msk = 0x00002000;
    inline constexpr uint32_t BDMA_ISR_TCIF3 = (1U << 13);
    inline constexpr uint32_t BDMA_ISR_HTIF3_Pos = 14;
    inline constexpr uint32_t BDMA_ISR_HTIF3_Msk = 0x00004000;
    inline constexpr uint32_t BDMA_ISR_HTIF3 = (1U << 14);
    inline constexpr uint32_t BDMA_ISR_TEIF3_Pos = 15;
    inline constexpr uint32_t BDMA_ISR_TEIF3_Msk = 0x00008000;
    inline constexpr uint32_t BDMA_ISR_TEIF3 = (1U << 15);
    inline constexpr uint32_t BDMA_ISR_GIF4_Pos = 16;
    inline constexpr uint32_t BDMA_ISR_GIF4_Msk = 0x00010000;
    inline constexpr uint32_t BDMA_ISR_GIF4 = (1U << 16);
    inline constexpr uint32_t BDMA_ISR_TCIF4_Pos = 17;
    inline constexpr uint32_t BDMA_ISR_TCIF4_Msk = 0x00020000;
    inline constexpr uint32_t BDMA_ISR_TCIF4 = (1U << 17);
    inline constexpr uint32_t BDMA_ISR_HTIF4_Pos = 18;
    inline constexpr uint32_t BDMA_ISR_HTIF4_Msk = 0x00040000;
    inline constexpr uint32_t BDMA_ISR_HTIF4 = (1U << 18);
    inline constexpr uint32_t BDMA_ISR_TEIF4_Pos = 19;
    inline constexpr uint32_t BDMA_ISR_TEIF4_Msk = 0x00080000;
    inline constexpr uint32_t BDMA_ISR_TEIF4 = (1U << 19);
    inline constexpr uint32_t BDMA_ISR_GIF5_Pos = 20;
    inline constexpr uint32_t BDMA_ISR_GIF5_Msk = 0x00100000;
    inline constexpr uint32_t BDMA_ISR_GIF5 = (1U << 20);
    inline constexpr uint32_t BDMA_ISR_TCIF5_Pos = 21;
    inline constexpr uint32_t BDMA_ISR_TCIF5_Msk = 0x00200000;
    inline constexpr uint32_t BDMA_ISR_TCIF5 = (1U << 21);
    inline constexpr uint32_t BDMA_ISR_HTIF5_Pos = 22;
    inline constexpr uint32_t BDMA_ISR_HTIF5_Msk = 0x00400000;
    inline constexpr uint32_t BDMA_ISR_HTIF5 = (1U << 22);
    inline constexpr uint32_t BDMA_ISR_TEIF5_Pos = 23;
    inline constexpr uint32_t BDMA_ISR_TEIF5_Msk = 0x00800000;
    inline constexpr uint32_t BDMA_ISR_TEIF5 = (1U << 23);
    inline constexpr uint32_t BDMA_ISR_GIF6_Pos = 24;
    inline constexpr uint32_t BDMA_ISR_GIF6_Msk = 0x01000000;
    inline constexpr uint32_t BDMA_ISR_GIF6 = (1U << 24);
    inline constexpr uint32_t BDMA_ISR_TCIF6_Pos = 25;
    inline constexpr uint32_t BDMA_ISR_TCIF6_Msk = 0x02000000;
    inline constexpr uint32_t BDMA_ISR_TCIF6 = (1U << 25);
    inline constexpr uint32_t BDMA_ISR_HTIF6_Pos = 26;
    inline constexpr uint32_t BDMA_ISR_HTIF6_Msk = 0x04000000;
    inline constexpr uint32_t BDMA_ISR_HTIF6 = (1U << 26);
    inline constexpr uint32_t BDMA_ISR_TEIF6_Pos = 27;
    inline constexpr uint32_t BDMA_ISR_TEIF6_Msk = 0x08000000;
    inline constexpr uint32_t BDMA_ISR_TEIF6 = (1U << 27);
    inline constexpr uint32_t BDMA_ISR_GIF7_Pos = 28;
    inline constexpr uint32_t BDMA_ISR_GIF7_Msk = 0x10000000;
    inline constexpr uint32_t BDMA_ISR_GIF7 = (1U << 28);
    inline constexpr uint32_t BDMA_ISR_TCIF7_Pos = 29;
    inline constexpr uint32_t BDMA_ISR_TCIF7_Msk = 0x20000000;
    inline constexpr uint32_t BDMA_ISR_TCIF7 = (1U << 29);
    inline constexpr uint32_t BDMA_ISR_HTIF7_Pos = 30;
    inline constexpr uint32_t BDMA_ISR_HTIF7_Msk = 0x40000000;
    inline constexpr uint32_t BDMA_ISR_HTIF7 = (1U << 30);
    inline constexpr uint32_t BDMA_ISR_TEIF7_Pos = 31;
    inline constexpr uint32_t BDMA_ISR_TEIF7_Msk = 0x80000000;
    inline constexpr uint32_t BDMA_ISR_TEIF7 = (1U << 31);

    // BDMA_IFCR fields
    inline constexpr uint32_t BDMA_IFCR_CGIF0_Pos = 0;
    inline constexpr uint32_t BDMA_IFCR_CGIF0_Msk = 0x00000001;
    inline constexpr uint32_t BDMA_IFCR_CGIF0 = (1U << 0);
    inline constexpr uint32_t BDMA_IFCR_CTCIF0_Pos = 1;
    inline constexpr uint32_t BDMA_IFCR_CTCIF0_Msk = 0x00000002;
    inline constexpr uint32_t BDMA_IFCR_CTCIF0 = (1U << 1);
    inline constexpr uint32_t BDMA_IFCR_CHTIF0_Pos = 2;
    inline constexpr uint32_t BDMA_IFCR_CHTIF0_Msk = 0x00000004;
    inline constexpr uint32_t BDMA_IFCR_CHTIF0 = (1U << 2);
    inline constexpr uint32_t BDMA_IFCR_CTEIF0_Pos = 3;
    inline constexpr uint32_t BDMA_IFCR_CTEIF0_Msk = 0x00000008;
    inline constexpr uint32_t BDMA_IFCR_CTEIF0 = (1U << 3);
    inline constexpr uint32_t BDMA_IFCR_CGIF1_Pos = 4;
    inline constexpr uint32_t BDMA_IFCR_CGIF1_Msk = 0x00000010;
    inline constexpr uint32_t BDMA_IFCR_CGIF1 = (1U << 4);
    inline constexpr uint32_t BDMA_IFCR_CTCIF1_Pos = 5;
    inline constexpr uint32_t BDMA_IFCR_CTCIF1_Msk = 0x00000020;
    inline constexpr uint32_t BDMA_IFCR_CTCIF1 = (1U << 5);
    inline constexpr uint32_t BDMA_IFCR_CHTIF1_Pos = 6;
    inline constexpr uint32_t BDMA_IFCR_CHTIF1_Msk = 0x00000040;
    inline constexpr uint32_t BDMA_IFCR_CHTIF1 = (1U << 6);
    inline constexpr uint32_t BDMA_IFCR_CTEIF1_Pos = 7;
    inline constexpr uint32_t BDMA_IFCR_CTEIF1_Msk = 0x00000080;
    inline constexpr uint32_t BDMA_IFCR_CTEIF1 = (1U << 7);
    inline constexpr uint32_t BDMA_IFCR_CGIF2_Pos = 8;
    inline constexpr uint32_t BDMA_IFCR_CGIF2_Msk = 0x00000100;
    inline constexpr uint32_t BDMA_IFCR_CGIF2 = (1U << 8);
    inline constexpr uint32_t BDMA_IFCR_CTCIF2_Pos = 9;
    inline constexpr uint32_t BDMA_IFCR_CTCIF2_Msk = 0x00000200;
    inline constexpr uint32_t BDMA_IFCR_CTCIF2 = (1U << 9);
    inline constexpr uint32_t BDMA_IFCR_CHTIF2_Pos = 10;
    inline constexpr uint32_t BDMA_IFCR_CHTIF2_Msk = 0x00000400;
    inline constexpr uint32_t BDMA_IFCR_CHTIF2 = (1U << 10);
    inline constexpr uint32_t BDMA_IFCR_CTEIF2_Pos = 11;
    inline constexpr uint32_t BDMA_IFCR_CTEIF2_Msk = 0x00000800;
    inline constexpr uint32_t BDMA_IFCR_CTEIF2 = (1U << 11);
    inline constexpr uint32_t BDMA_IFCR_CGIF3_Pos = 12;
    inline constexpr uint32_t BDMA_IFCR_CGIF3_Msk = 0x00001000;
    inline constexpr uint32_t BDMA_IFCR_CGIF3 = (1U << 12);
    inline constexpr uint32_t BDMA_IFCR_CTCIF3_Pos = 13;
    inline constexpr uint32_t BDMA_IFCR_CTCIF3_Msk = 0x00002000;
    inline constexpr uint32_t BDMA_IFCR_CTCIF3 = (1U << 13);
    inline constexpr uint32_t BDMA_IFCR_CHTIF3_Pos = 14;
    inline constexpr uint32_t BDMA_IFCR_CHTIF3_Msk = 0x00004000;
    inline constexpr uint32_t BDMA_IFCR_CHTIF3 = (1U << 14);
    inline constexpr uint32_t BDMA_IFCR_CTEIF3_Pos = 15;
    inline constexpr uint32_t BDMA_IFCR_CTEIF3_Msk = 0x00008000;
    inline constexpr uint32_t BDMA_IFCR_CTEIF3 = (1U << 15);
    inline constexpr uint32_t BDMA_IFCR_CGIF4_Pos = 16;
    inline constexpr uint32_t BDMA_IFCR_CGIF4_Msk = 0x00010000;
    inline constexpr uint32_t BDMA_IFCR_CGIF4 = (1U << 16);
    inline constexpr uint32_t BDMA_IFCR_CTCIF4_Pos = 17;
    inline constexpr uint32_t BDMA_IFCR_CTCIF4_Msk = 0x00020000;
    inline constexpr uint32_t BDMA_IFCR_CTCIF4 = (1U << 17);
    inline constexpr uint32_t BDMA_IFCR_CHTIF4_Pos = 18;
    inline constexpr uint32_t BDMA_IFCR_CHTIF4_Msk = 0x00040000;
    inline constexpr uint32_t BDMA_IFCR_CHTIF4 = (1U << 18);
    inline constexpr uint32_t BDMA_IFCR_CTEIF4_Pos = 19;
    inline constexpr uint32_t BDMA_IFCR_CTEIF4_Msk = 0x00080000;
    inline constexpr uint32_t BDMA_IFCR_CTEIF4 = (1U << 19);
    inline constexpr uint32_t BDMA_IFCR_CGIF5_Pos = 20;
    inline constexpr uint32_t BDMA_IFCR_CGIF5_Msk = 0x00100000;
    inline constexpr uint32_t BDMA_IFCR_CGIF5 = (1U << 20);
    inline constexpr uint32_t BDMA_IFCR_CTCIF5_Pos = 21;
    inline constexpr uint32_t BDMA_IFCR_CTCIF5_Msk = 0x00200000;
    inline constexpr uint32_t BDMA_IFCR_CTCIF5 = (1U << 21);
    inline constexpr uint32_t BDMA_IFCR_CHTIF5_Pos = 22;
    inline constexpr uint32_t BDMA_IFCR_CHTIF5_Msk = 0x00400000;
    inline constexpr uint32_t BDMA_IFCR_CHTIF5 = (1U << 22);
    inline constexpr uint32_t BDMA_IFCR_CTEIF5_Pos = 23;
    inline constexpr uint32_t BDMA_IFCR_CTEIF5_Msk = 0x00800000;
    inline constexpr uint32_t BDMA_IFCR_CTEIF5 = (1U << 23);
    inline constexpr uint32_t BDMA_IFCR_CGIF6_Pos = 24;
    inline constexpr uint32_t BDMA_IFCR_CGIF6_Msk = 0x01000000;
    inline constexpr uint32_t BDMA_IFCR_CGIF6 = (1U << 24);
    inline constexpr uint32_t BDMA_IFCR_CTCIF6_Pos = 25;
    inline constexpr uint32_t BDMA_IFCR_CTCIF6_Msk = 0x02000000;
    inline constexpr uint32_t BDMA_IFCR_CTCIF6 = (1U << 25);
    inline constexpr uint32_t BDMA_IFCR_CHTIF6_Pos = 26;
    inline constexpr uint32_t BDMA_IFCR_CHTIF6_Msk = 0x04000000;
    inline constexpr uint32_t BDMA_IFCR_CHTIF6 = (1U << 26);
    inline constexpr uint32_t BDMA_IFCR_CTEIF6_Pos = 27;
    inline constexpr uint32_t BDMA_IFCR_CTEIF6_Msk = 0x08000000;
    inline constexpr uint32_t BDMA_IFCR_CTEIF6 = (1U << 27);
    inline constexpr uint32_t BDMA_IFCR_CGIF7_Pos = 28;
    inline constexpr uint32_t BDMA_IFCR_CGIF7_Msk = 0x10000000;
    inline constexpr uint32_t BDMA_IFCR_CGIF7 = (1U << 28);
    inline constexpr uint32_t BDMA_IFCR_CTCIF7_Pos = 29;
    inline constexpr uint32_t BDMA_IFCR_CTCIF7_Msk = 0x20000000;
    inline constexpr uint32_t BDMA_IFCR_CTCIF7 = (1U << 29);
    inline constexpr uint32_t BDMA_IFCR_CHTIF7_Pos = 30;
    inline constexpr uint32_t BDMA_IFCR_CHTIF7_Msk = 0x40000000;
    inline constexpr uint32_t BDMA_IFCR_CHTIF7 = (1U << 30);
    inline constexpr uint32_t BDMA_IFCR_CTEIF7_Pos = 31;
    inline constexpr uint32_t BDMA_IFCR_CTEIF7_Msk = 0x80000000;
    inline constexpr uint32_t BDMA_IFCR_CTEIF7 = (1U << 31);

    // BDMA_CCR0 fields
    inline constexpr uint32_t BDMA_CCR0_EN_Pos = 0;
    inline constexpr uint32_t BDMA_CCR0_EN_Msk = 0x00000001;
    inline constexpr uint32_t BDMA_CCR0_EN = (1U << 0);
    inline constexpr uint32_t BDMA_CCR0_TCIE_Pos = 1;
    inline constexpr uint32_t BDMA_CCR0_TCIE_Msk = 0x00000002;
    inline constexpr uint32_t BDMA_CCR0_TCIE = (1U << 1);
    inline constexpr uint32_t BDMA_CCR0_HTIE_Pos = 2;
    inline constexpr uint32_t BDMA_CCR0_HTIE_Msk = 0x00000004;
    inline constexpr uint32_t BDMA_CCR0_HTIE = (1U << 2);
    inline constexpr uint32_t BDMA_CCR0_TEIE_Pos = 3;
    inline constexpr uint32_t BDMA_CCR0_TEIE_Msk = 0x00000008;
    inline constexpr uint32_t BDMA_CCR0_TEIE = (1U << 3);
    inline constexpr uint32_t BDMA_CCR0_DIR_Pos = 4;
    inline constexpr uint32_t BDMA_CCR0_DIR_Msk = 0x00000010;
    inline constexpr uint32_t BDMA_CCR0_DIR = (1U << 4);
    inline constexpr uint32_t BDMA_CCR0_CIRC_Pos = 5;
    inline constexpr uint32_t BDMA_CCR0_CIRC_Msk = 0x00000020;
    inline constexpr uint32_t BDMA_CCR0_CIRC = (1U << 5);
    inline constexpr uint32_t BDMA_CCR0_PINC_Pos = 6;
    inline constexpr uint32_t BDMA_CCR0_PINC_Msk = 0x00000040;
    inline constexpr uint32_t BDMA_CCR0_PINC = (1U << 6);
    inline constexpr uint32_t BDMA_CCR0_MINC_Pos = 7;
    inline constexpr uint32_t BDMA_CCR0_MINC_Msk = 0x00000080;
    inline constexpr uint32_t BDMA_CCR0_MINC = (1U << 7);
    inline constexpr uint32_t BDMA_CCR0_PSIZE_Pos = 8;
    inline constexpr uint32_t BDMA_CCR0_PSIZE_Msk = 0x00000300;
    inline constexpr uint32_t BDMA_CCR0_MSIZE_Pos = 10;
    inline constexpr uint32_t BDMA_CCR0_MSIZE_Msk = 0x00000C00;
    inline constexpr uint32_t BDMA_CCR0_PL_Pos = 12;
    inline constexpr uint32_t BDMA_CCR0_PL_Msk = 0x00003000;
    inline constexpr uint32_t BDMA_CCR0_MEM2MEM_Pos = 14;
    inline constexpr uint32_t BDMA_CCR0_MEM2MEM_Msk = 0x00004000;
    inline constexpr uint32_t BDMA_CCR0_MEM2MEM = (1U << 14);
    inline constexpr uint32_t BDMA_CCR0_DBM_Pos = 15;
    inline constexpr uint32_t BDMA_CCR0_DBM_Msk = 0x00008000;
    inline constexpr uint32_t BDMA_CCR0_DBM = (1U << 15);
    inline constexpr uint32_t BDMA_CCR0_CT_Pos = 16;
    inline constexpr uint32_t BDMA_CCR0_CT_Msk = 0x00010000;
    inline constexpr uint32_t BDMA_CCR0_CT = (1U << 16);

    // BDMA_CNDTR0 fields
    inline constexpr uint32_t BDMA_CNDTR0_NDT_Pos = 0;
    inline constexpr uint32_t BDMA_CNDTR0_NDT_Msk = 0x0000FFFF;

    // BDMA_CPAR0 fields
    inline constexpr uint32_t BDMA_CPAR0_PA_Pos = 0;
    inline constexpr uint32_t BDMA_CPAR0_PA_Msk = 0xFFFFFFFF;

    // BDMA_CM0AR0 fields
    inline constexpr uint32_t BDMA_CM0AR0_MA_Pos = 0;
    inline constexpr uint32_t BDMA_CM0AR0_MA_Msk = 0xFFFFFFFF;

    // BDMA_CM1AR0 fields
    inline constexpr uint32_t BDMA_CM1AR0_MA_Pos = 0;
    inline constexpr uint32_t BDMA_CM1AR0_MA_Msk = 0xFFFFFFFF;

    // BDMA_CCR1 fields
    inline constexpr uint32_t BDMA_CCR1_EN_Pos = 0;
    inline constexpr uint32_t BDMA_CCR1_EN_Msk = 0x00000001;
    inline constexpr uint32_t BDMA_CCR1_EN = (1U << 0);
    inline constexpr uint32_t BDMA_CCR1_TCIE_Pos = 1;
    inline constexpr uint32_t BDMA_CCR1_TCIE_Msk = 0x00000002;
    inline constexpr uint32_t BDMA_CCR1_TCIE = (1U << 1);
    inline constexpr uint32_t BDMA_CCR1_HTIE_Pos = 2;
    inline constexpr uint32_t BDMA_CCR1_HTIE_Msk = 0x00000004;
    inline constexpr uint32_t BDMA_CCR1_HTIE = (1U << 2);
    inline constexpr uint32_t BDMA_CCR1_TEIE_Pos = 3;
    inline constexpr uint32_t BDMA_CCR1_TEIE_Msk = 0x00000008;
    inline constexpr uint32_t BDMA_CCR1_TEIE = (1U << 3);
    inline constexpr uint32_t BDMA_CCR1_DIR_Pos = 4;
    inline constexpr uint32_t BDMA_CCR1_DIR_Msk = 0x00000010;
    inline constexpr uint32_t BDMA_CCR1_DIR = (1U << 4);
    inline constexpr uint32_t BDMA_CCR1_CIRC_Pos = 5;
    inline constexpr uint32_t BDMA_CCR1_CIRC_Msk = 0x00000020;
    inline constexpr uint32_t BDMA_CCR1_CIRC = (1U << 5);
    inline constexpr uint32_t BDMA_CCR1_PINC_Pos = 6;
    inline constexpr uint32_t BDMA_CCR1_PINC_Msk = 0x00000040;
    inline constexpr uint32_t BDMA_CCR1_PINC = (1U << 6);
    inline constexpr uint32_t BDMA_CCR1_MINC_Pos = 7;
    inline constexpr uint32_t BDMA_CCR1_MINC_Msk = 0x00000080;
    inline constexpr uint32_t BDMA_CCR1_MINC = (1U << 7);
    inline constexpr uint32_t BDMA_CCR1_PSIZE_Pos = 8;
    inline constexpr uint32_t BDMA_CCR1_PSIZE_Msk = 0x00000300;
    inline constexpr uint32_t BDMA_CCR1_MSIZE_Pos = 10;
    inline constexpr uint32_t BDMA_CCR1_MSIZE_Msk = 0x00000C00;
    inline constexpr uint32_t BDMA_CCR1_PL_Pos = 12;
    inline constexpr uint32_t BDMA_CCR1_PL_Msk = 0x00003000;
    inline constexpr uint32_t BDMA_CCR1_MEM2MEM_Pos = 14;
    inline constexpr uint32_t BDMA_CCR1_MEM2MEM_Msk = 0x00004000;
    inline constexpr uint32_t BDMA_CCR1_MEM2MEM = (1U << 14);
    inline constexpr uint32_t BDMA_CCR1_DBM_Pos = 15;
    inline constexpr uint32_t BDMA_CCR1_DBM_Msk = 0x00008000;
    inline constexpr uint32_t BDMA_CCR1_DBM = (1U << 15);
    inline constexpr uint32_t BDMA_CCR1_CT_Pos = 16;
    inline constexpr uint32_t BDMA_CCR1_CT_Msk = 0x00010000;
    inline constexpr uint32_t BDMA_CCR1_CT = (1U << 16);

    // BDMA_CNDTR1 fields
    inline constexpr uint32_t BDMA_CNDTR1_NDT_Pos = 0;
    inline constexpr uint32_t BDMA_CNDTR1_NDT_Msk = 0x0000FFFF;

    // BDMA_CPAR1 fields
    inline constexpr uint32_t BDMA_CPAR1_PA_Pos = 0;
    inline constexpr uint32_t BDMA_CPAR1_PA_Msk = 0xFFFFFFFF;

    // BDMA_CM0AR1 fields
    inline constexpr uint32_t BDMA_CM0AR1_MA_Pos = 0;
    inline constexpr uint32_t BDMA_CM0AR1_MA_Msk = 0xFFFFFFFF;

    // BDMA_CM1AR1 fields
    inline constexpr uint32_t BDMA_CM1AR1_MA_Pos = 0;
    inline constexpr uint32_t BDMA_CM1AR1_MA_Msk = 0xFFFFFFFF;

    // BDMA_CCR2 fields
    inline constexpr uint32_t BDMA_CCR2_EN_Pos = 0;
    inline constexpr uint32_t BDMA_CCR2_EN_Msk = 0x00000001;
    inline constexpr uint32_t BDMA_CCR2_EN = (1U << 0);
    inline constexpr uint32_t BDMA_CCR2_TCIE_Pos = 1;
    inline constexpr uint32_t BDMA_CCR2_TCIE_Msk = 0x00000002;
    inline constexpr uint32_t BDMA_CCR2_TCIE = (1U << 1);
    inline constexpr uint32_t BDMA_CCR2_HTIE_Pos = 2;
    inline constexpr uint32_t BDMA_CCR2_HTIE_Msk = 0x00000004;
    inline constexpr uint32_t BDMA_CCR2_HTIE = (1U << 2);
    inline constexpr uint32_t BDMA_CCR2_TEIE_Pos = 3;
    inline constexpr uint32_t BDMA_CCR2_TEIE_Msk = 0x00000008;
    inline constexpr uint32_t BDMA_CCR2_TEIE = (1U << 3);
    inline constexpr uint32_t BDMA_CCR2_DIR_Pos = 4;
    inline constexpr uint32_t BDMA_CCR2_DIR_Msk = 0x00000010;
    inline constexpr uint32_t BDMA_CCR2_DIR = (1U << 4);
    inline constexpr uint32_t BDMA_CCR2_CIRC_Pos = 5;
    inline constexpr uint32_t BDMA_CCR2_CIRC_Msk = 0x00000020;
    inline constexpr uint32_t BDMA_CCR2_CIRC = (1U << 5);
    inline constexpr uint32_t BDMA_CCR2_PINC_Pos = 6;
    inline constexpr uint32_t BDMA_CCR2_PINC_Msk = 0x00000040;
    inline constexpr uint32_t BDMA_CCR2_PINC = (1U << 6);
    inline constexpr uint32_t BDMA_CCR2_MINC_Pos = 7;
    inline constexpr uint32_t BDMA_CCR2_MINC_Msk = 0x00000080;
    inline constexpr uint32_t BDMA_CCR2_MINC = (1U << 7);
    inline constexpr uint32_t BDMA_CCR2_PSIZE_Pos = 8;
    inline constexpr uint32_t BDMA_CCR2_PSIZE_Msk = 0x00000300;
    inline constexpr uint32_t BDMA_CCR2_MSIZE_Pos = 10;
    inline constexpr uint32_t BDMA_CCR2_MSIZE_Msk = 0x00000C00;
    inline constexpr uint32_t BDMA_CCR2_PL_Pos = 12;
    inline constexpr uint32_t BDMA_CCR2_PL_Msk = 0x00003000;
    inline constexpr uint32_t BDMA_CCR2_MEM2MEM_Pos = 14;
    inline constexpr uint32_t BDMA_CCR2_MEM2MEM_Msk = 0x00004000;
    inline constexpr uint32_t BDMA_CCR2_MEM2MEM = (1U << 14);
    inline constexpr uint32_t BDMA_CCR2_DBM_Pos = 15;
    inline constexpr uint32_t BDMA_CCR2_DBM_Msk = 0x00008000;
    inline constexpr uint32_t BDMA_CCR2_DBM = (1U << 15);
    inline constexpr uint32_t BDMA_CCR2_CT_Pos = 16;
    inline constexpr uint32_t BDMA_CCR2_CT_Msk = 0x00010000;
    inline constexpr uint32_t BDMA_CCR2_CT = (1U << 16);

    // BDMA_CNDTR2 fields
    inline constexpr uint32_t BDMA_CNDTR2_NDT_Pos = 0;
    inline constexpr uint32_t BDMA_CNDTR2_NDT_Msk = 0x0000FFFF;

    // BDMA_CPAR2 fields
    inline constexpr uint32_t BDMA_CPAR2_PA_Pos = 0;
    inline constexpr uint32_t BDMA_CPAR2_PA_Msk = 0xFFFFFFFF;

    // BDMA_CM0AR2 fields
    inline constexpr uint32_t BDMA_CM0AR2_MA_Pos = 0;
    inline constexpr uint32_t BDMA_CM0AR2_MA_Msk = 0xFFFFFFFF;

    // BDMA_CM1AR2 fields
    inline constexpr uint32_t BDMA_CM1AR2_MA_Pos = 0;
    inline constexpr uint32_t BDMA_CM1AR2_MA_Msk = 0xFFFFFFFF;

    // BDMA_CCR3 fields
    inline constexpr uint32_t BDMA_CCR3_EN_Pos = 0;
    inline constexpr uint32_t BDMA_CCR3_EN_Msk = 0x00000001;
    inline constexpr uint32_t BDMA_CCR3_EN = (1U << 0);
    inline constexpr uint32_t BDMA_CCR3_TCIE_Pos = 1;
    inline constexpr uint32_t BDMA_CCR3_TCIE_Msk = 0x00000002;
    inline constexpr uint32_t BDMA_CCR3_TCIE = (1U << 1);
    inline constexpr uint32_t BDMA_CCR3_HTIE_Pos = 2;
    inline constexpr uint32_t BDMA_CCR3_HTIE_Msk = 0x00000004;
    inline constexpr uint32_t BDMA_CCR3_HTIE = (1U << 2);
    inline constexpr uint32_t BDMA_CCR3_TEIE_Pos = 3;
    inline constexpr uint32_t BDMA_CCR3_TEIE_Msk = 0x00000008;
    inline constexpr uint32_t BDMA_CCR3_TEIE = (1U << 3);
    inline constexpr uint32_t BDMA_CCR3_DIR_Pos = 4;
    inline constexpr uint32_t BDMA_CCR3_DIR_Msk = 0x00000010;
    inline constexpr uint32_t BDMA_CCR3_DIR = (1U << 4);
    inline constexpr uint32_t BDMA_CCR3_CIRC_Pos = 5;
    inline constexpr uint32_t BDMA_CCR3_CIRC_Msk = 0x00000020;
    inline constexpr uint32_t BDMA_CCR3_CIRC = (1U << 5);
    inline constexpr uint32_t BDMA_CCR3_PINC_Pos = 6;
    inline constexpr uint32_t BDMA_CCR3_PINC_Msk = 0x00000040;
    inline constexpr uint32_t BDMA_CCR3_PINC = (1U << 6);
    inline constexpr uint32_t BDMA_CCR3_MINC_Pos = 7;
    inline constexpr uint32_t BDMA_CCR3_MINC_Msk = 0x00000080;
    inline constexpr uint32_t BDMA_CCR3_MINC = (1U << 7);
    inline constexpr uint32_t BDMA_CCR3_PSIZE_Pos = 8;
    inline constexpr uint32_t BDMA_CCR3_PSIZE_Msk = 0x00000300;
    inline constexpr uint32_t BDMA_CCR3_MSIZE_Pos = 10;
    inline constexpr uint32_t BDMA_CCR3_MSIZE_Msk = 0x00000C00;
    inline constexpr uint32_t BDMA_CCR3_PL_Pos = 12;
    inline constexpr uint32_t BDMA_CCR3_PL_Msk = 0x00003000;
    inline constexpr uint32_t BDMA_CCR3_MEM2MEM_Pos = 14;
    inline constexpr uint32_t BDMA_CCR3_MEM2MEM_Msk = 0x00004000;
    inline constexpr uint32_t BDMA_CCR3_MEM2MEM = (1U << 14);
    inline constexpr uint32_t BDMA_CCR3_DBM_Pos = 15;
    inline constexpr uint32_t BDMA_CCR3_DBM_Msk = 0x00008000;
    inline constexpr uint32_t BDMA_CCR3_DBM = (1U << 15);
    inline constexpr uint32_t BDMA_CCR3_CT_Pos = 16;
    inline constexpr uint32_t BDMA_CCR3_CT_Msk = 0x00010000;
    inline constexpr uint32_t BDMA_CCR3_CT = (1U << 16);

    // BDMA_CNDTR3 fields
    inline constexpr uint32_t BDMA_CNDTR3_NDT_Pos = 0;
    inline constexpr uint32_t BDMA_CNDTR3_NDT_Msk = 0x0000FFFF;

    // BDMA_CPAR3 fields
    inline constexpr uint32_t BDMA_CPAR3_PA_Pos = 0;
    inline constexpr uint32_t BDMA_CPAR3_PA_Msk = 0xFFFFFFFF;

    // BDMA_CM0AR3 fields
    inline constexpr uint32_t BDMA_CM0AR3_MA_Pos = 0;
    inline constexpr uint32_t BDMA_CM0AR3_MA_Msk = 0xFFFFFFFF;

    // BDMA_CM1AR3 fields
    inline constexpr uint32_t BDMA_CM1AR3_MA_Pos = 0;
    inline constexpr uint32_t BDMA_CM1AR3_MA_Msk = 0xFFFFFFFF;

    // BDMA_CCR4 fields
    inline constexpr uint32_t BDMA_CCR4_EN_Pos = 0;
    inline constexpr uint32_t BDMA_CCR4_EN_Msk = 0x00000001;
    inline constexpr uint32_t BDMA_CCR4_EN = (1U << 0);
    inline constexpr uint32_t BDMA_CCR4_TCIE_Pos = 1;
    inline constexpr uint32_t BDMA_CCR4_TCIE_Msk = 0x00000002;
    inline constexpr uint32_t BDMA_CCR4_TCIE = (1U << 1);
    inline constexpr uint32_t BDMA_CCR4_HTIE_Pos = 2;
    inline constexpr uint32_t BDMA_CCR4_HTIE_Msk = 0x00000004;
    inline constexpr uint32_t BDMA_CCR4_HTIE = (1U << 2);
    inline constexpr uint32_t BDMA_CCR4_TEIE_Pos = 3;
    inline constexpr uint32_t BDMA_CCR4_TEIE_Msk = 0x00000008;
    inline constexpr uint32_t BDMA_CCR4_TEIE = (1U << 3);
    inline constexpr uint32_t BDMA_CCR4_DIR_Pos = 4;
    inline constexpr uint32_t BDMA_CCR4_DIR_Msk = 0x00000010;
    inline constexpr uint32_t BDMA_CCR4_DIR = (1U << 4);
    inline constexpr uint32_t BDMA_CCR4_CIRC_Pos = 5;
    inline constexpr uint32_t BDMA_CCR4_CIRC_Msk = 0x00000020;
    inline constexpr uint32_t BDMA_CCR4_CIRC = (1U << 5);
    inline constexpr uint32_t BDMA_CCR4_PINC_Pos = 6;
    inline constexpr uint32_t BDMA_CCR4_PINC_Msk = 0x00000040;
    inline constexpr uint32_t BDMA_CCR4_PINC = (1U << 6);
    inline constexpr uint32_t BDMA_CCR4_MINC_Pos = 7;
    inline constexpr uint32_t BDMA_CCR4_MINC_Msk = 0x00000080;
    inline constexpr uint32_t BDMA_CCR4_MINC = (1U << 7);
    inline constexpr uint32_t BDMA_CCR4_PSIZE_Pos = 8;
    inline constexpr uint32_t BDMA_CCR4_PSIZE_Msk = 0x00000300;
    inline constexpr uint32_t BDMA_CCR4_MSIZE_Pos = 10;
    inline constexpr uint32_t BDMA_CCR4_MSIZE_Msk = 0x00000C00;
    inline constexpr uint32_t BDMA_CCR4_PL_Pos = 12;
    inline constexpr uint32_t BDMA_CCR4_PL_Msk = 0x00003000;
    inline constexpr uint32_t BDMA_CCR4_MEM2MEM_Pos = 14;
    inline constexpr uint32_t BDMA_CCR4_MEM2MEM_Msk = 0x00004000;
    inline constexpr uint32_t BDMA_CCR4_MEM2MEM = (1U << 14);
    inline constexpr uint32_t BDMA_CCR4_DBM_Pos = 15;
    inline constexpr uint32_t BDMA_CCR4_DBM_Msk = 0x00008000;
    inline constexpr uint32_t BDMA_CCR4_DBM = (1U << 15);
    inline constexpr uint32_t BDMA_CCR4_CT_Pos = 16;
    inline constexpr uint32_t BDMA_CCR4_CT_Msk = 0x00010000;
    inline constexpr uint32_t BDMA_CCR4_CT = (1U << 16);

    // BDMA_CNDTR4 fields
    inline constexpr uint32_t BDMA_CNDTR4_NDT_Pos = 0;
    inline constexpr uint32_t BDMA_CNDTR4_NDT_Msk = 0x0000FFFF;

    // BDMA_CPAR4 fields
    inline constexpr uint32_t BDMA_CPAR4_PA_Pos = 0;
    inline constexpr uint32_t BDMA_CPAR4_PA_Msk = 0xFFFFFFFF;

    // BDMA_CM0AR4 fields
    inline constexpr uint32_t BDMA_CM0AR4_MA_Pos = 0;
    inline constexpr uint32_t BDMA_CM0AR4_MA_Msk = 0xFFFFFFFF;

    // BDMA_CM1AR4 fields
    inline constexpr uint32_t BDMA_CM1AR4_MA_Pos = 0;
    inline constexpr uint32_t BDMA_CM1AR4_MA_Msk = 0xFFFFFFFF;

    // BDMA_CCR5 fields
    inline constexpr uint32_t BDMA_CCR5_EN_Pos = 0;
    inline constexpr uint32_t BDMA_CCR5_EN_Msk = 0x00000001;
    inline constexpr uint32_t BDMA_CCR5_EN = (1U << 0);
    inline constexpr uint32_t BDMA_CCR5_TCIE_Pos = 1;
    inline constexpr uint32_t BDMA_CCR5_TCIE_Msk = 0x00000002;
    inline constexpr uint32_t BDMA_CCR5_TCIE = (1U << 1);
    inline constexpr uint32_t BDMA_CCR5_HTIE_Pos = 2;
    inline constexpr uint32_t BDMA_CCR5_HTIE_Msk = 0x00000004;
    inline constexpr uint32_t BDMA_CCR5_HTIE = (1U << 2);
    inline constexpr uint32_t BDMA_CCR5_TEIE_Pos = 3;
    inline constexpr uint32_t BDMA_CCR5_TEIE_Msk = 0x00000008;
    inline constexpr uint32_t BDMA_CCR5_TEIE = (1U << 3);
    inline constexpr uint32_t BDMA_CCR5_DIR_Pos = 4;
    inline constexpr uint32_t BDMA_CCR5_DIR_Msk = 0x00000010;
    inline constexpr uint32_t BDMA_CCR5_DIR = (1U << 4);
    inline constexpr uint32_t BDMA_CCR5_CIRC_Pos = 5;
    inline constexpr uint32_t BDMA_CCR5_CIRC_Msk = 0x00000020;
    inline constexpr uint32_t BDMA_CCR5_CIRC = (1U << 5);
    inline constexpr uint32_t BDMA_CCR5_PINC_Pos = 6;
    inline constexpr uint32_t BDMA_CCR5_PINC_Msk = 0x00000040;
    inline constexpr uint32_t BDMA_CCR5_PINC = (1U << 6);
    inline constexpr uint32_t BDMA_CCR5_MINC_Pos = 7;
    inline constexpr uint32_t BDMA_CCR5_MINC_Msk = 0x00000080;
    inline constexpr uint32_t BDMA_CCR5_MINC = (1U << 7);
    inline constexpr uint32_t BDMA_CCR5_PSIZE_Pos = 8;
    inline constexpr uint32_t BDMA_CCR5_PSIZE_Msk = 0x00000300;
    inline constexpr uint32_t BDMA_CCR5_MSIZE_Pos = 10;
    inline constexpr uint32_t BDMA_CCR5_MSIZE_Msk = 0x00000C00;
    inline constexpr uint32_t BDMA_CCR5_PL_Pos = 12;
    inline constexpr uint32_t BDMA_CCR5_PL_Msk = 0x00003000;
    inline constexpr uint32_t BDMA_CCR5_MEM2MEM_Pos = 14;
    inline constexpr uint32_t BDMA_CCR5_MEM2MEM_Msk = 0x00004000;
    inline constexpr uint32_t BDMA_CCR5_MEM2MEM = (1U << 14);
    inline constexpr uint32_t BDMA_CCR5_DBM_Pos = 15;
    inline constexpr uint32_t BDMA_CCR5_DBM_Msk = 0x00008000;
    inline constexpr uint32_t BDMA_CCR5_DBM = (1U << 15);
    inline constexpr uint32_t BDMA_CCR5_CT_Pos = 16;
    inline constexpr uint32_t BDMA_CCR5_CT_Msk = 0x00010000;
    inline constexpr uint32_t BDMA_CCR5_CT = (1U << 16);

    // BDMA_CNDTR5 fields
    inline constexpr uint32_t BDMA_CNDTR5_NDT_Pos = 0;
    inline constexpr uint32_t BDMA_CNDTR5_NDT_Msk = 0x0000FFFF;

    // BDMA_CPAR5 fields
    inline constexpr uint32_t BDMA_CPAR5_PA_Pos = 0;
    inline constexpr uint32_t BDMA_CPAR5_PA_Msk = 0xFFFFFFFF;

    // BDMA_CM0AR5 fields
    inline constexpr uint32_t BDMA_CM0AR5_MA_Pos = 0;
    inline constexpr uint32_t BDMA_CM0AR5_MA_Msk = 0xFFFFFFFF;

    // BDMA_CM1AR5 fields
    inline constexpr uint32_t BDMA_CM1AR5_MA_Pos = 0;
    inline constexpr uint32_t BDMA_CM1AR5_MA_Msk = 0xFFFFFFFF;

    // BDMA_CCR6 fields
    inline constexpr uint32_t BDMA_CCR6_EN_Pos = 0;
    inline constexpr uint32_t BDMA_CCR6_EN_Msk = 0x00000001;
    inline constexpr uint32_t BDMA_CCR6_EN = (1U << 0);
    inline constexpr uint32_t BDMA_CCR6_TCIE_Pos = 1;
    inline constexpr uint32_t BDMA_CCR6_TCIE_Msk = 0x00000002;
    inline constexpr uint32_t BDMA_CCR6_TCIE = (1U << 1);
    inline constexpr uint32_t BDMA_CCR6_HTIE_Pos = 2;
    inline constexpr uint32_t BDMA_CCR6_HTIE_Msk = 0x00000004;
    inline constexpr uint32_t BDMA_CCR6_HTIE = (1U << 2);
    inline constexpr uint32_t BDMA_CCR6_TEIE_Pos = 3;
    inline constexpr uint32_t BDMA_CCR6_TEIE_Msk = 0x00000008;
    inline constexpr uint32_t BDMA_CCR6_TEIE = (1U << 3);
    inline constexpr uint32_t BDMA_CCR6_DIR_Pos = 4;
    inline constexpr uint32_t BDMA_CCR6_DIR_Msk = 0x00000010;
    inline constexpr uint32_t BDMA_CCR6_DIR = (1U << 4);
    inline constexpr uint32_t BDMA_CCR6_CIRC_Pos = 5;
    inline constexpr uint32_t BDMA_CCR6_CIRC_Msk = 0x00000020;
    inline constexpr uint32_t BDMA_CCR6_CIRC = (1U << 5);
    inline constexpr uint32_t BDMA_CCR6_PINC_Pos = 6;
    inline constexpr uint32_t BDMA_CCR6_PINC_Msk = 0x00000040;
    inline constexpr uint32_t BDMA_CCR6_PINC = (1U << 6);
    inline constexpr uint32_t BDMA_CCR6_MINC_Pos = 7;
    inline constexpr uint32_t BDMA_CCR6_MINC_Msk = 0x00000080;
    inline constexpr uint32_t BDMA_CCR6_MINC = (1U << 7);
    inline constexpr uint32_t BDMA_CCR6_PSIZE_Pos = 8;
    inline constexpr uint32_t BDMA_CCR6_PSIZE_Msk = 0x00000300;
    inline constexpr uint32_t BDMA_CCR6_MSIZE_Pos = 10;
    inline constexpr uint32_t BDMA_CCR6_MSIZE_Msk = 0x00000C00;
    inline constexpr uint32_t BDMA_CCR6_PL_Pos = 12;
    inline constexpr uint32_t BDMA_CCR6_PL_Msk = 0x00003000;
    inline constexpr uint32_t BDMA_CCR6_MEM2MEM_Pos = 14;
    inline constexpr uint32_t BDMA_CCR6_MEM2MEM_Msk = 0x00004000;
    inline constexpr uint32_t BDMA_CCR6_MEM2MEM = (1U << 14);
    inline constexpr uint32_t BDMA_CCR6_DBM_Pos = 15;
    inline constexpr uint32_t BDMA_CCR6_DBM_Msk = 0x00008000;
    inline constexpr uint32_t BDMA_CCR6_DBM = (1U << 15);
    inline constexpr uint32_t BDMA_CCR6_CT_Pos = 16;
    inline constexpr uint32_t BDMA_CCR6_CT_Msk = 0x00010000;
    inline constexpr uint32_t BDMA_CCR6_CT = (1U << 16);

    // BDMA_CNDTR6 fields
    inline constexpr uint32_t BDMA_CNDTR6_NDT_Pos = 0;
    inline constexpr uint32_t BDMA_CNDTR6_NDT_Msk = 0x0000FFFF;

    // BDMA_CPAR6 fields
    inline constexpr uint32_t BDMA_CPAR6_PA_Pos = 0;
    inline constexpr uint32_t BDMA_CPAR6_PA_Msk = 0xFFFFFFFF;

    // BDMA_CM0AR6 fields
    inline constexpr uint32_t BDMA_CM0AR6_MA_Pos = 0;
    inline constexpr uint32_t BDMA_CM0AR6_MA_Msk = 0xFFFFFFFF;

    // BDMA_CM1AR6 fields
    inline constexpr uint32_t BDMA_CM1AR6_MA_Pos = 0;
    inline constexpr uint32_t BDMA_CM1AR6_MA_Msk = 0xFFFFFFFF;

    // BDMA_CCR7 fields
    inline constexpr uint32_t BDMA_CCR7_EN_Pos = 0;
    inline constexpr uint32_t BDMA_CCR7_EN_Msk = 0x00000001;
    inline constexpr uint32_t BDMA_CCR7_EN = (1U << 0);
    inline constexpr uint32_t BDMA_CCR7_TCIE_Pos = 1;
    inline constexpr uint32_t BDMA_CCR7_TCIE_Msk = 0x00000002;
    inline constexpr uint32_t BDMA_CCR7_TCIE = (1U << 1);
    inline constexpr uint32_t BDMA_CCR7_HTIE_Pos = 2;
    inline constexpr uint32_t BDMA_CCR7_HTIE_Msk = 0x00000004;
    inline constexpr uint32_t BDMA_CCR7_HTIE = (1U << 2);
    inline constexpr uint32_t BDMA_CCR7_TEIE_Pos = 3;
    inline constexpr uint32_t BDMA_CCR7_TEIE_Msk = 0x00000008;
    inline constexpr uint32_t BDMA_CCR7_TEIE = (1U << 3);
    inline constexpr uint32_t BDMA_CCR7_DIR_Pos = 4;
    inline constexpr uint32_t BDMA_CCR7_DIR_Msk = 0x00000010;
    inline constexpr uint32_t BDMA_CCR7_DIR = (1U << 4);
    inline constexpr uint32_t BDMA_CCR7_CIRC_Pos = 5;
    inline constexpr uint32_t BDMA_CCR7_CIRC_Msk = 0x00000020;
    inline constexpr uint32_t BDMA_CCR7_CIRC = (1U << 5);
    inline constexpr uint32_t BDMA_CCR7_PINC_Pos = 6;
    inline constexpr uint32_t BDMA_CCR7_PINC_Msk = 0x00000040;
    inline constexpr uint32_t BDMA_CCR7_PINC = (1U << 6);
    inline constexpr uint32_t BDMA_CCR7_MINC_Pos = 7;
    inline constexpr uint32_t BDMA_CCR7_MINC_Msk = 0x00000080;
    inline constexpr uint32_t BDMA_CCR7_MINC = (1U << 7);
    inline constexpr uint32_t BDMA_CCR7_PSIZE_Pos = 8;
    inline constexpr uint32_t BDMA_CCR7_PSIZE_Msk = 0x00000300;
    inline constexpr uint32_t BDMA_CCR7_MSIZE_Pos = 10;
    inline constexpr uint32_t BDMA_CCR7_MSIZE_Msk = 0x00000C00;
    inline constexpr uint32_t BDMA_CCR7_PL_Pos = 12;
    inline constexpr uint32_t BDMA_CCR7_PL_Msk = 0x00003000;
    inline constexpr uint32_t BDMA_CCR7_MEM2MEM_Pos = 14;
    inline constexpr uint32_t BDMA_CCR7_MEM2MEM_Msk = 0x00004000;
    inline constexpr uint32_t BDMA_CCR7_MEM2MEM = (1U << 14);
    inline constexpr uint32_t BDMA_CCR7_DBM_Pos = 15;
    inline constexpr uint32_t BDMA_CCR7_DBM_Msk = 0x00008000;
    inline constexpr uint32_t BDMA_CCR7_DBM = (1U << 15);
    inline constexpr uint32_t BDMA_CCR7_CT_Pos = 16;
    inline constexpr uint32_t BDMA_CCR7_CT_Msk = 0x00010000;
    inline constexpr uint32_t BDMA_CCR7_CT = (1U << 16);

    // BDMA_CNDTR7 fields
    inline constexpr uint32_t BDMA_CNDTR7_NDT_Pos = 0;
    inline constexpr uint32_t BDMA_CNDTR7_NDT_Msk = 0x0000FFFF;

    // BDMA_CPAR7 fields
    inline constexpr uint32_t BDMA_CPAR7_PA_Pos = 0;
    inline constexpr uint32_t BDMA_CPAR7_PA_Msk = 0xFFFFFFFF;

    // BDMA_CM0AR7 fields
    inline constexpr uint32_t BDMA_CM0AR7_MA_Pos = 0;
    inline constexpr uint32_t BDMA_CM0AR7_MA_Msk = 0xFFFFFFFF;

    // BDMA_CM1AR7 fields
    inline constexpr uint32_t BDMA_CM1AR7_MA_Pos = 0;
    inline constexpr uint32_t BDMA_CM1AR7_MA_Msk = 0xFFFFFFFF;

} // namespace BDMA

namespace DMA2D {
    // DMA2D_CR fields
    inline constexpr uint32_t DMA2D_CR_START_Pos = 0;
    inline constexpr uint32_t DMA2D_CR_START_Msk = 0x00000001;
    inline constexpr uint32_t DMA2D_CR_START = (1U << 0);
    inline constexpr uint32_t DMA2D_CR_SUSP_Pos = 1;
    inline constexpr uint32_t DMA2D_CR_SUSP_Msk = 0x00000002;
    inline constexpr uint32_t DMA2D_CR_SUSP = (1U << 1);
    inline constexpr uint32_t DMA2D_CR_ABORT_Pos = 2;
    inline constexpr uint32_t DMA2D_CR_ABORT_Msk = 0x00000004;
    inline constexpr uint32_t DMA2D_CR_ABORT = (1U << 2);
    inline constexpr uint32_t DMA2D_CR_TEIE_Pos = 8;
    inline constexpr uint32_t DMA2D_CR_TEIE_Msk = 0x00000100;
    inline constexpr uint32_t DMA2D_CR_TEIE = (1U << 8);
    inline constexpr uint32_t DMA2D_CR_TCIE_Pos = 9;
    inline constexpr uint32_t DMA2D_CR_TCIE_Msk = 0x00000200;
    inline constexpr uint32_t DMA2D_CR_TCIE = (1U << 9);
    inline constexpr uint32_t DMA2D_CR_TWIE_Pos = 10;
    inline constexpr uint32_t DMA2D_CR_TWIE_Msk = 0x00000400;
    inline constexpr uint32_t DMA2D_CR_TWIE = (1U << 10);
    inline constexpr uint32_t DMA2D_CR_CAEIE_Pos = 11;
    inline constexpr uint32_t DMA2D_CR_CAEIE_Msk = 0x00000800;
    inline constexpr uint32_t DMA2D_CR_CAEIE = (1U << 11);
    inline constexpr uint32_t DMA2D_CR_CTCIE_Pos = 12;
    inline constexpr uint32_t DMA2D_CR_CTCIE_Msk = 0x00001000;
    inline constexpr uint32_t DMA2D_CR_CTCIE = (1U << 12);
    inline constexpr uint32_t DMA2D_CR_CEIE_Pos = 13;
    inline constexpr uint32_t DMA2D_CR_CEIE_Msk = 0x00002000;
    inline constexpr uint32_t DMA2D_CR_CEIE = (1U << 13);
    inline constexpr uint32_t DMA2D_CR_MODE_Pos = 16;
    inline constexpr uint32_t DMA2D_CR_MODE_Msk = 0x00030000;

    // DMA2D_ISR fields
    inline constexpr uint32_t DMA2D_ISR_TEIF_Pos = 0;
    inline constexpr uint32_t DMA2D_ISR_TEIF_Msk = 0x00000001;
    inline constexpr uint32_t DMA2D_ISR_TEIF = (1U << 0);
    inline constexpr uint32_t DMA2D_ISR_TCIF_Pos = 1;
    inline constexpr uint32_t DMA2D_ISR_TCIF_Msk = 0x00000002;
    inline constexpr uint32_t DMA2D_ISR_TCIF = (1U << 1);
    inline constexpr uint32_t DMA2D_ISR_TWIF_Pos = 2;
    inline constexpr uint32_t DMA2D_ISR_TWIF_Msk = 0x00000004;
    inline constexpr uint32_t DMA2D_ISR_TWIF = (1U << 2);
    inline constexpr uint32_t DMA2D_ISR_CAEIF_Pos = 3;
    inline constexpr uint32_t DMA2D_ISR_CAEIF_Msk = 0x00000008;
    inline constexpr uint32_t DMA2D_ISR_CAEIF = (1U << 3);
    inline constexpr uint32_t DMA2D_ISR_CTCIF_Pos = 4;
    inline constexpr uint32_t DMA2D_ISR_CTCIF_Msk = 0x00000010;
    inline constexpr uint32_t DMA2D_ISR_CTCIF = (1U << 4);
    inline constexpr uint32_t DMA2D_ISR_CEIF_Pos = 5;
    inline constexpr uint32_t DMA2D_ISR_CEIF_Msk = 0x00000020;
    inline constexpr uint32_t DMA2D_ISR_CEIF = (1U << 5);

    // DMA2D_IFCR fields
    inline constexpr uint32_t DMA2D_IFCR_CTEIF_Pos = 0;
    inline constexpr uint32_t DMA2D_IFCR_CTEIF_Msk = 0x00000001;
    inline constexpr uint32_t DMA2D_IFCR_CTEIF = (1U << 0);
    inline constexpr uint32_t DMA2D_IFCR_CTCIF_Pos = 1;
    inline constexpr uint32_t DMA2D_IFCR_CTCIF_Msk = 0x00000002;
    inline constexpr uint32_t DMA2D_IFCR_CTCIF = (1U << 1);
    inline constexpr uint32_t DMA2D_IFCR_CTWIF_Pos = 2;
    inline constexpr uint32_t DMA2D_IFCR_CTWIF_Msk = 0x00000004;
    inline constexpr uint32_t DMA2D_IFCR_CTWIF = (1U << 2);
    inline constexpr uint32_t DMA2D_IFCR_CAECIF_Pos = 3;
    inline constexpr uint32_t DMA2D_IFCR_CAECIF_Msk = 0x00000008;
    inline constexpr uint32_t DMA2D_IFCR_CAECIF = (1U << 3);
    inline constexpr uint32_t DMA2D_IFCR_CCTCIF_Pos = 4;
    inline constexpr uint32_t DMA2D_IFCR_CCTCIF_Msk = 0x00000010;
    inline constexpr uint32_t DMA2D_IFCR_CCTCIF = (1U << 4);
    inline constexpr uint32_t DMA2D_IFCR_CCEIF_Pos = 5;
    inline constexpr uint32_t DMA2D_IFCR_CCEIF_Msk = 0x00000020;
    inline constexpr uint32_t DMA2D_IFCR_CCEIF = (1U << 5);

    // DMA2D_FGMAR fields
    inline constexpr uint32_t DMA2D_FGMAR_MA_Pos = 0;
    inline constexpr uint32_t DMA2D_FGMAR_MA_Msk = 0xFFFFFFFF;

    // DMA2D_FGOR fields
    inline constexpr uint32_t DMA2D_FGOR_LO_Pos = 0;
    inline constexpr uint32_t DMA2D_FGOR_LO_Msk = 0x00003FFF;

    // DMA2D_BGMAR fields
    inline constexpr uint32_t DMA2D_BGMAR_MA_Pos = 0;
    inline constexpr uint32_t DMA2D_BGMAR_MA_Msk = 0xFFFFFFFF;

    // DMA2D_BGOR fields
    inline constexpr uint32_t DMA2D_BGOR_LO_Pos = 0;
    inline constexpr uint32_t DMA2D_BGOR_LO_Msk = 0x00003FFF;

    // DMA2D_FGPFCCR fields
    inline constexpr uint32_t DMA2D_FGPFCCR_CM_Pos = 0;
    inline constexpr uint32_t DMA2D_FGPFCCR_CM_Msk = 0x0000000F;
    inline constexpr uint32_t DMA2D_FGPFCCR_CCM_Pos = 4;
    inline constexpr uint32_t DMA2D_FGPFCCR_CCM_Msk = 0x00000010;
    inline constexpr uint32_t DMA2D_FGPFCCR_CCM = (1U << 4);
    inline constexpr uint32_t DMA2D_FGPFCCR_START_Pos = 5;
    inline constexpr uint32_t DMA2D_FGPFCCR_START_Msk = 0x00000020;
    inline constexpr uint32_t DMA2D_FGPFCCR_START = (1U << 5);
    inline constexpr uint32_t DMA2D_FGPFCCR_CS_Pos = 8;
    inline constexpr uint32_t DMA2D_FGPFCCR_CS_Msk = 0x0000FF00;
    inline constexpr uint32_t DMA2D_FGPFCCR_AM_Pos = 16;
    inline constexpr uint32_t DMA2D_FGPFCCR_AM_Msk = 0x00030000;
    inline constexpr uint32_t DMA2D_FGPFCCR_CSS_Pos = 18;
    inline constexpr uint32_t DMA2D_FGPFCCR_CSS_Msk = 0x000C0000;
    inline constexpr uint32_t DMA2D_FGPFCCR_AI_Pos = 20;
    inline constexpr uint32_t DMA2D_FGPFCCR_AI_Msk = 0x00100000;
    inline constexpr uint32_t DMA2D_FGPFCCR_AI = (1U << 20);
    inline constexpr uint32_t DMA2D_FGPFCCR_RBS_Pos = 21;
    inline constexpr uint32_t DMA2D_FGPFCCR_RBS_Msk = 0x00200000;
    inline constexpr uint32_t DMA2D_FGPFCCR_RBS = (1U << 21);
    inline constexpr uint32_t DMA2D_FGPFCCR_ALPHA_Pos = 24;
    inline constexpr uint32_t DMA2D_FGPFCCR_ALPHA_Msk = 0xFF000000;

    // DMA2D_FGCOLR fields
    inline constexpr uint32_t DMA2D_FGCOLR_BLUE_Pos = 0;
    inline constexpr uint32_t DMA2D_FGCOLR_BLUE_Msk = 0x000000FF;
    inline constexpr uint32_t DMA2D_FGCOLR_GREEN_Pos = 8;
    inline constexpr uint32_t DMA2D_FGCOLR_GREEN_Msk = 0x0000FF00;
    inline constexpr uint32_t DMA2D_FGCOLR_RED_Pos = 16;
    inline constexpr uint32_t DMA2D_FGCOLR_RED_Msk = 0x00FF0000;

    // DMA2D_BGPFCCR fields
    inline constexpr uint32_t DMA2D_BGPFCCR_CM_Pos = 0;
    inline constexpr uint32_t DMA2D_BGPFCCR_CM_Msk = 0x0000000F;
    inline constexpr uint32_t DMA2D_BGPFCCR_CCM_Pos = 4;
    inline constexpr uint32_t DMA2D_BGPFCCR_CCM_Msk = 0x00000010;
    inline constexpr uint32_t DMA2D_BGPFCCR_CCM = (1U << 4);
    inline constexpr uint32_t DMA2D_BGPFCCR_START_Pos = 5;
    inline constexpr uint32_t DMA2D_BGPFCCR_START_Msk = 0x00000020;
    inline constexpr uint32_t DMA2D_BGPFCCR_START = (1U << 5);
    inline constexpr uint32_t DMA2D_BGPFCCR_CS_Pos = 8;
    inline constexpr uint32_t DMA2D_BGPFCCR_CS_Msk = 0x0000FF00;
    inline constexpr uint32_t DMA2D_BGPFCCR_AM_Pos = 16;
    inline constexpr uint32_t DMA2D_BGPFCCR_AM_Msk = 0x00030000;
    inline constexpr uint32_t DMA2D_BGPFCCR_AI_Pos = 20;
    inline constexpr uint32_t DMA2D_BGPFCCR_AI_Msk = 0x00100000;
    inline constexpr uint32_t DMA2D_BGPFCCR_AI = (1U << 20);
    inline constexpr uint32_t DMA2D_BGPFCCR_RBS_Pos = 21;
    inline constexpr uint32_t DMA2D_BGPFCCR_RBS_Msk = 0x00200000;
    inline constexpr uint32_t DMA2D_BGPFCCR_RBS = (1U << 21);
    inline constexpr uint32_t DMA2D_BGPFCCR_ALPHA_Pos = 24;
    inline constexpr uint32_t DMA2D_BGPFCCR_ALPHA_Msk = 0xFF000000;

    // DMA2D_BGCOLR fields
    inline constexpr uint32_t DMA2D_BGCOLR_BLUE_Pos = 0;
    inline constexpr uint32_t DMA2D_BGCOLR_BLUE_Msk = 0x000000FF;
    inline constexpr uint32_t DMA2D_BGCOLR_GREEN_Pos = 8;
    inline constexpr uint32_t DMA2D_BGCOLR_GREEN_Msk = 0x0000FF00;
    inline constexpr uint32_t DMA2D_BGCOLR_RED_Pos = 16;
    inline constexpr uint32_t DMA2D_BGCOLR_RED_Msk = 0x00FF0000;

    // DMA2D_FGCMAR fields
    inline constexpr uint32_t DMA2D_FGCMAR_MA_Pos = 0;
    inline constexpr uint32_t DMA2D_FGCMAR_MA_Msk = 0xFFFFFFFF;

    // DMA2D_BGCMAR fields
    inline constexpr uint32_t DMA2D_BGCMAR_MA_Pos = 0;
    inline constexpr uint32_t DMA2D_BGCMAR_MA_Msk = 0xFFFFFFFF;

    // DMA2D_OPFCCR fields
    inline constexpr uint32_t DMA2D_OPFCCR_CM_Pos = 0;
    inline constexpr uint32_t DMA2D_OPFCCR_CM_Msk = 0x00000007;
    inline constexpr uint32_t DMA2D_OPFCCR_AI_Pos = 20;
    inline constexpr uint32_t DMA2D_OPFCCR_AI_Msk = 0x00100000;
    inline constexpr uint32_t DMA2D_OPFCCR_AI = (1U << 20);
    inline constexpr uint32_t DMA2D_OPFCCR_RBS_Pos = 21;
    inline constexpr uint32_t DMA2D_OPFCCR_RBS_Msk = 0x00200000;
    inline constexpr uint32_t DMA2D_OPFCCR_RBS = (1U << 21);

    // DMA2D_OCOLR fields
    inline constexpr uint32_t DMA2D_OCOLR_BLUE_Pos = 0;
    inline constexpr uint32_t DMA2D_OCOLR_BLUE_Msk = 0x000000FF;
    inline constexpr uint32_t DMA2D_OCOLR_GREEN_Pos = 8;
    inline constexpr uint32_t DMA2D_OCOLR_GREEN_Msk = 0x0000FF00;
    inline constexpr uint32_t DMA2D_OCOLR_RED_Pos = 16;
    inline constexpr uint32_t DMA2D_OCOLR_RED_Msk = 0x00FF0000;
    inline constexpr uint32_t DMA2D_OCOLR_ALPHA_Pos = 24;
    inline constexpr uint32_t DMA2D_OCOLR_ALPHA_Msk = 0xFF000000;

    // DMA2D_OMAR fields
    inline constexpr uint32_t DMA2D_OMAR_MA_Pos = 0;
    inline constexpr uint32_t DMA2D_OMAR_MA_Msk = 0xFFFFFFFF;

    // DMA2D_OOR fields
    inline constexpr uint32_t DMA2D_OOR_LO_Pos = 0;
    inline constexpr uint32_t DMA2D_OOR_LO_Msk = 0x00003FFF;

    // DMA2D_NLR fields
    inline constexpr uint32_t DMA2D_NLR_NL_Pos = 0;
    inline constexpr uint32_t DMA2D_NLR_NL_Msk = 0x0000FFFF;
    inline constexpr uint32_t DMA2D_NLR_PL_Pos = 16;
    inline constexpr uint32_t DMA2D_NLR_PL_Msk = 0x3FFF0000;

    // DMA2D_LWR fields
    inline constexpr uint32_t DMA2D_LWR_LW_Pos = 0;
    inline constexpr uint32_t DMA2D_LWR_LW_Msk = 0x0000FFFF;

    // DMA2D_AMTCR fields
    inline constexpr uint32_t DMA2D_AMTCR_EN_Pos = 0;
    inline constexpr uint32_t DMA2D_AMTCR_EN_Msk = 0x00000001;
    inline constexpr uint32_t DMA2D_AMTCR_EN = (1U << 0);
    inline constexpr uint32_t DMA2D_AMTCR_DT_Pos = 8;
    inline constexpr uint32_t DMA2D_AMTCR_DT_Msk = 0x0000FF00;

} // namespace DMA2D

namespace DMAMUX1 {
    // DMAMUX_C0CR fields
    inline constexpr uint32_t DMAMUX_C0CR_DMAREQ_ID_Pos = 0;
    inline constexpr uint32_t DMAMUX_C0CR_DMAREQ_ID_Msk = 0x0000007F;
    inline constexpr uint32_t DMAMUX_C0CR_SOIE_Pos = 8;
    inline constexpr uint32_t DMAMUX_C0CR_SOIE_Msk = 0x00000100;
    inline constexpr uint32_t DMAMUX_C0CR_SOIE = (1U << 8);
    inline constexpr uint32_t DMAMUX_C0CR_EGE_Pos = 9;
    inline constexpr uint32_t DMAMUX_C0CR_EGE_Msk = 0x00000200;
    inline constexpr uint32_t DMAMUX_C0CR_EGE = (1U << 9);
    inline constexpr uint32_t DMAMUX_C0CR_SE_Pos = 16;
    inline constexpr uint32_t DMAMUX_C0CR_SE_Msk = 0x00010000;
    inline constexpr uint32_t DMAMUX_C0CR_SE = (1U << 16);
    inline constexpr uint32_t DMAMUX_C0CR_SPOL_Pos = 17;
    inline constexpr uint32_t DMAMUX_C0CR_SPOL_Msk = 0x00060000;
    inline constexpr uint32_t DMAMUX_C0CR_NBREQ_Pos = 19;
    inline constexpr uint32_t DMAMUX_C0CR_NBREQ_Msk = 0x00F80000;
    inline constexpr uint32_t DMAMUX_C0CR_SYNC_ID_Pos = 24;
    inline constexpr uint32_t DMAMUX_C0CR_SYNC_ID_Msk = 0x07000000;

    // DMAMUX_C1CR fields
    inline constexpr uint32_t DMAMUX_C1CR_DMAREQ_ID_Pos = 0;
    inline constexpr uint32_t DMAMUX_C1CR_DMAREQ_ID_Msk = 0x0000007F;
    inline constexpr uint32_t DMAMUX_C1CR_SOIE_Pos = 8;
    inline constexpr uint32_t DMAMUX_C1CR_SOIE_Msk = 0x00000100;
    inline constexpr uint32_t DMAMUX_C1CR_SOIE = (1U << 8);
    inline constexpr uint32_t DMAMUX_C1CR_EGE_Pos = 9;
    inline constexpr uint32_t DMAMUX_C1CR_EGE_Msk = 0x00000200;
    inline constexpr uint32_t DMAMUX_C1CR_EGE = (1U << 9);
    inline constexpr uint32_t DMAMUX_C1CR_SE_Pos = 16;
    inline constexpr uint32_t DMAMUX_C1CR_SE_Msk = 0x00010000;
    inline constexpr uint32_t DMAMUX_C1CR_SE = (1U << 16);
    inline constexpr uint32_t DMAMUX_C1CR_SPOL_Pos = 17;
    inline constexpr uint32_t DMAMUX_C1CR_SPOL_Msk = 0x00060000;
    inline constexpr uint32_t DMAMUX_C1CR_NBREQ_Pos = 19;
    inline constexpr uint32_t DMAMUX_C1CR_NBREQ_Msk = 0x00F80000;
    inline constexpr uint32_t DMAMUX_C1CR_SYNC_ID_Pos = 24;
    inline constexpr uint32_t DMAMUX_C1CR_SYNC_ID_Msk = 0x07000000;

    // DMAMUX_C2CR fields
    inline constexpr uint32_t DMAMUX_C2CR_DMAREQ_ID_Pos = 0;
    inline constexpr uint32_t DMAMUX_C2CR_DMAREQ_ID_Msk = 0x0000007F;
    inline constexpr uint32_t DMAMUX_C2CR_SOIE_Pos = 8;
    inline constexpr uint32_t DMAMUX_C2CR_SOIE_Msk = 0x00000100;
    inline constexpr uint32_t DMAMUX_C2CR_SOIE = (1U << 8);
    inline constexpr uint32_t DMAMUX_C2CR_EGE_Pos = 9;
    inline constexpr uint32_t DMAMUX_C2CR_EGE_Msk = 0x00000200;
    inline constexpr uint32_t DMAMUX_C2CR_EGE = (1U << 9);
    inline constexpr uint32_t DMAMUX_C2CR_SE_Pos = 16;
    inline constexpr uint32_t DMAMUX_C2CR_SE_Msk = 0x00010000;
    inline constexpr uint32_t DMAMUX_C2CR_SE = (1U << 16);
    inline constexpr uint32_t DMAMUX_C2CR_SPOL_Pos = 17;
    inline constexpr uint32_t DMAMUX_C2CR_SPOL_Msk = 0x00060000;
    inline constexpr uint32_t DMAMUX_C2CR_NBREQ_Pos = 19;
    inline constexpr uint32_t DMAMUX_C2CR_NBREQ_Msk = 0x00F80000;
    inline constexpr uint32_t DMAMUX_C2CR_SYNC_ID_Pos = 24;
    inline constexpr uint32_t DMAMUX_C2CR_SYNC_ID_Msk = 0x07000000;

    // DMAMUX_C3CR fields
    inline constexpr uint32_t DMAMUX_C3CR_DMAREQ_ID_Pos = 0;
    inline constexpr uint32_t DMAMUX_C3CR_DMAREQ_ID_Msk = 0x0000007F;
    inline constexpr uint32_t DMAMUX_C3CR_SOIE_Pos = 8;
    inline constexpr uint32_t DMAMUX_C3CR_SOIE_Msk = 0x00000100;
    inline constexpr uint32_t DMAMUX_C3CR_SOIE = (1U << 8);
    inline constexpr uint32_t DMAMUX_C3CR_EGE_Pos = 9;
    inline constexpr uint32_t DMAMUX_C3CR_EGE_Msk = 0x00000200;
    inline constexpr uint32_t DMAMUX_C3CR_EGE = (1U << 9);
    inline constexpr uint32_t DMAMUX_C3CR_SE_Pos = 16;
    inline constexpr uint32_t DMAMUX_C3CR_SE_Msk = 0x00010000;
    inline constexpr uint32_t DMAMUX_C3CR_SE = (1U << 16);
    inline constexpr uint32_t DMAMUX_C3CR_SPOL_Pos = 17;
    inline constexpr uint32_t DMAMUX_C3CR_SPOL_Msk = 0x00060000;
    inline constexpr uint32_t DMAMUX_C3CR_NBREQ_Pos = 19;
    inline constexpr uint32_t DMAMUX_C3CR_NBREQ_Msk = 0x00F80000;
    inline constexpr uint32_t DMAMUX_C3CR_SYNC_ID_Pos = 24;
    inline constexpr uint32_t DMAMUX_C3CR_SYNC_ID_Msk = 0x07000000;

    // DMAMUX_C4CR fields
    inline constexpr uint32_t DMAMUX_C4CR_DMAREQ_ID_Pos = 0;
    inline constexpr uint32_t DMAMUX_C4CR_DMAREQ_ID_Msk = 0x0000007F;
    inline constexpr uint32_t DMAMUX_C4CR_SOIE_Pos = 8;
    inline constexpr uint32_t DMAMUX_C4CR_SOIE_Msk = 0x00000100;
    inline constexpr uint32_t DMAMUX_C4CR_SOIE = (1U << 8);
    inline constexpr uint32_t DMAMUX_C4CR_EGE_Pos = 9;
    inline constexpr uint32_t DMAMUX_C4CR_EGE_Msk = 0x00000200;
    inline constexpr uint32_t DMAMUX_C4CR_EGE = (1U << 9);
    inline constexpr uint32_t DMAMUX_C4CR_SE_Pos = 16;
    inline constexpr uint32_t DMAMUX_C4CR_SE_Msk = 0x00010000;
    inline constexpr uint32_t DMAMUX_C4CR_SE = (1U << 16);
    inline constexpr uint32_t DMAMUX_C4CR_SPOL_Pos = 17;
    inline constexpr uint32_t DMAMUX_C4CR_SPOL_Msk = 0x00060000;
    inline constexpr uint32_t DMAMUX_C4CR_NBREQ_Pos = 19;
    inline constexpr uint32_t DMAMUX_C4CR_NBREQ_Msk = 0x00F80000;
    inline constexpr uint32_t DMAMUX_C4CR_SYNC_ID_Pos = 24;
    inline constexpr uint32_t DMAMUX_C4CR_SYNC_ID_Msk = 0x07000000;

    // DMAMUX_C5CR fields
    inline constexpr uint32_t DMAMUX_C5CR_DMAREQ_ID_Pos = 0;
    inline constexpr uint32_t DMAMUX_C5CR_DMAREQ_ID_Msk = 0x0000007F;
    inline constexpr uint32_t DMAMUX_C5CR_SOIE_Pos = 8;
    inline constexpr uint32_t DMAMUX_C5CR_SOIE_Msk = 0x00000100;
    inline constexpr uint32_t DMAMUX_C5CR_SOIE = (1U << 8);
    inline constexpr uint32_t DMAMUX_C5CR_EGE_Pos = 9;
    inline constexpr uint32_t DMAMUX_C5CR_EGE_Msk = 0x00000200;
    inline constexpr uint32_t DMAMUX_C5CR_EGE = (1U << 9);
    inline constexpr uint32_t DMAMUX_C5CR_SE_Pos = 16;
    inline constexpr uint32_t DMAMUX_C5CR_SE_Msk = 0x00010000;
    inline constexpr uint32_t DMAMUX_C5CR_SE = (1U << 16);
    inline constexpr uint32_t DMAMUX_C5CR_SPOL_Pos = 17;
    inline constexpr uint32_t DMAMUX_C5CR_SPOL_Msk = 0x00060000;
    inline constexpr uint32_t DMAMUX_C5CR_NBREQ_Pos = 19;
    inline constexpr uint32_t DMAMUX_C5CR_NBREQ_Msk = 0x00F80000;
    inline constexpr uint32_t DMAMUX_C5CR_SYNC_ID_Pos = 24;
    inline constexpr uint32_t DMAMUX_C5CR_SYNC_ID_Msk = 0x07000000;

    // DMAMUX_C6CR fields
    inline constexpr uint32_t DMAMUX_C6CR_DMAREQ_ID_Pos = 0;
    inline constexpr uint32_t DMAMUX_C6CR_DMAREQ_ID_Msk = 0x0000007F;
    inline constexpr uint32_t DMAMUX_C6CR_SOIE_Pos = 8;
    inline constexpr uint32_t DMAMUX_C6CR_SOIE_Msk = 0x00000100;
    inline constexpr uint32_t DMAMUX_C6CR_SOIE = (1U << 8);
    inline constexpr uint32_t DMAMUX_C6CR_EGE_Pos = 9;
    inline constexpr uint32_t DMAMUX_C6CR_EGE_Msk = 0x00000200;
    inline constexpr uint32_t DMAMUX_C6CR_EGE = (1U << 9);
    inline constexpr uint32_t DMAMUX_C6CR_SE_Pos = 16;
    inline constexpr uint32_t DMAMUX_C6CR_SE_Msk = 0x00010000;
    inline constexpr uint32_t DMAMUX_C6CR_SE = (1U << 16);
    inline constexpr uint32_t DMAMUX_C6CR_SPOL_Pos = 17;
    inline constexpr uint32_t DMAMUX_C6CR_SPOL_Msk = 0x00060000;
    inline constexpr uint32_t DMAMUX_C6CR_NBREQ_Pos = 19;
    inline constexpr uint32_t DMAMUX_C6CR_NBREQ_Msk = 0x00F80000;
    inline constexpr uint32_t DMAMUX_C6CR_SYNC_ID_Pos = 24;
    inline constexpr uint32_t DMAMUX_C6CR_SYNC_ID_Msk = 0x07000000;

    // DMAMUX_C7CR fields
    inline constexpr uint32_t DMAMUX_C7CR_DMAREQ_ID_Pos = 0;
    inline constexpr uint32_t DMAMUX_C7CR_DMAREQ_ID_Msk = 0x0000007F;
    inline constexpr uint32_t DMAMUX_C7CR_SOIE_Pos = 8;
    inline constexpr uint32_t DMAMUX_C7CR_SOIE_Msk = 0x00000100;
    inline constexpr uint32_t DMAMUX_C7CR_SOIE = (1U << 8);
    inline constexpr uint32_t DMAMUX_C7CR_EGE_Pos = 9;
    inline constexpr uint32_t DMAMUX_C7CR_EGE_Msk = 0x00000200;
    inline constexpr uint32_t DMAMUX_C7CR_EGE = (1U << 9);
    inline constexpr uint32_t DMAMUX_C7CR_SE_Pos = 16;
    inline constexpr uint32_t DMAMUX_C7CR_SE_Msk = 0x00010000;
    inline constexpr uint32_t DMAMUX_C7CR_SE = (1U << 16);
    inline constexpr uint32_t DMAMUX_C7CR_SPOL_Pos = 17;
    inline constexpr uint32_t DMAMUX_C7CR_SPOL_Msk = 0x00060000;
    inline constexpr uint32_t DMAMUX_C7CR_NBREQ_Pos = 19;
    inline constexpr uint32_t DMAMUX_C7CR_NBREQ_Msk = 0x00F80000;
    inline constexpr uint32_t DMAMUX_C7CR_SYNC_ID_Pos = 24;
    inline constexpr uint32_t DMAMUX_C7CR_SYNC_ID_Msk = 0x07000000;

    // DMAMUX_C8CR fields
    inline constexpr uint32_t DMAMUX_C8CR_DMAREQ_ID_Pos = 0;
    inline constexpr uint32_t DMAMUX_C8CR_DMAREQ_ID_Msk = 0x0000007F;
    inline constexpr uint32_t DMAMUX_C8CR_SOIE_Pos = 8;
    inline constexpr uint32_t DMAMUX_C8CR_SOIE_Msk = 0x00000100;
    inline constexpr uint32_t DMAMUX_C8CR_SOIE = (1U << 8);
    inline constexpr uint32_t DMAMUX_C8CR_EGE_Pos = 9;
    inline constexpr uint32_t DMAMUX_C8CR_EGE_Msk = 0x00000200;
    inline constexpr uint32_t DMAMUX_C8CR_EGE = (1U << 9);
    inline constexpr uint32_t DMAMUX_C8CR_SE_Pos = 16;
    inline constexpr uint32_t DMAMUX_C8CR_SE_Msk = 0x00010000;
    inline constexpr uint32_t DMAMUX_C8CR_SE = (1U << 16);
    inline constexpr uint32_t DMAMUX_C8CR_SPOL_Pos = 17;
    inline constexpr uint32_t DMAMUX_C8CR_SPOL_Msk = 0x00060000;
    inline constexpr uint32_t DMAMUX_C8CR_NBREQ_Pos = 19;
    inline constexpr uint32_t DMAMUX_C8CR_NBREQ_Msk = 0x00F80000;
    inline constexpr uint32_t DMAMUX_C8CR_SYNC_ID_Pos = 24;
    inline constexpr uint32_t DMAMUX_C8CR_SYNC_ID_Msk = 0x07000000;

    // DMAMUX_C9CR fields
    inline constexpr uint32_t DMAMUX_C9CR_DMAREQ_ID_Pos = 0;
    inline constexpr uint32_t DMAMUX_C9CR_DMAREQ_ID_Msk = 0x0000007F;
    inline constexpr uint32_t DMAMUX_C9CR_SOIE_Pos = 8;
    inline constexpr uint32_t DMAMUX_C9CR_SOIE_Msk = 0x00000100;
    inline constexpr uint32_t DMAMUX_C9CR_SOIE = (1U << 8);
    inline constexpr uint32_t DMAMUX_C9CR_EGE_Pos = 9;
    inline constexpr uint32_t DMAMUX_C9CR_EGE_Msk = 0x00000200;
    inline constexpr uint32_t DMAMUX_C9CR_EGE = (1U << 9);
    inline constexpr uint32_t DMAMUX_C9CR_SE_Pos = 16;
    inline constexpr uint32_t DMAMUX_C9CR_SE_Msk = 0x00010000;
    inline constexpr uint32_t DMAMUX_C9CR_SE = (1U << 16);
    inline constexpr uint32_t DMAMUX_C9CR_SPOL_Pos = 17;
    inline constexpr uint32_t DMAMUX_C9CR_SPOL_Msk = 0x00060000;
    inline constexpr uint32_t DMAMUX_C9CR_NBREQ_Pos = 19;
    inline constexpr uint32_t DMAMUX_C9CR_NBREQ_Msk = 0x00F80000;
    inline constexpr uint32_t DMAMUX_C9CR_SYNC_ID_Pos = 24;
    inline constexpr uint32_t DMAMUX_C9CR_SYNC_ID_Msk = 0x07000000;

    // DMAMUX_C10CR fields
    inline constexpr uint32_t DMAMUX_C10CR_DMAREQ_ID_Pos = 0;
    inline constexpr uint32_t DMAMUX_C10CR_DMAREQ_ID_Msk = 0x0000007F;
    inline constexpr uint32_t DMAMUX_C10CR_SOIE_Pos = 8;
    inline constexpr uint32_t DMAMUX_C10CR_SOIE_Msk = 0x00000100;
    inline constexpr uint32_t DMAMUX_C10CR_SOIE = (1U << 8);
    inline constexpr uint32_t DMAMUX_C10CR_EGE_Pos = 9;
    inline constexpr uint32_t DMAMUX_C10CR_EGE_Msk = 0x00000200;
    inline constexpr uint32_t DMAMUX_C10CR_EGE = (1U << 9);
    inline constexpr uint32_t DMAMUX_C10CR_SE_Pos = 16;
    inline constexpr uint32_t DMAMUX_C10CR_SE_Msk = 0x00010000;
    inline constexpr uint32_t DMAMUX_C10CR_SE = (1U << 16);
    inline constexpr uint32_t DMAMUX_C10CR_SPOL_Pos = 17;
    inline constexpr uint32_t DMAMUX_C10CR_SPOL_Msk = 0x00060000;
    inline constexpr uint32_t DMAMUX_C10CR_NBREQ_Pos = 19;
    inline constexpr uint32_t DMAMUX_C10CR_NBREQ_Msk = 0x00F80000;
    inline constexpr uint32_t DMAMUX_C10CR_SYNC_ID_Pos = 24;
    inline constexpr uint32_t DMAMUX_C10CR_SYNC_ID_Msk = 0x07000000;

    // DMAMUX_C11CR fields
    inline constexpr uint32_t DMAMUX_C11CR_DMAREQ_ID_Pos = 0;
    inline constexpr uint32_t DMAMUX_C11CR_DMAREQ_ID_Msk = 0x0000007F;
    inline constexpr uint32_t DMAMUX_C11CR_SOIE_Pos = 8;
    inline constexpr uint32_t DMAMUX_C11CR_SOIE_Msk = 0x00000100;
    inline constexpr uint32_t DMAMUX_C11CR_SOIE = (1U << 8);
    inline constexpr uint32_t DMAMUX_C11CR_EGE_Pos = 9;
    inline constexpr uint32_t DMAMUX_C11CR_EGE_Msk = 0x00000200;
    inline constexpr uint32_t DMAMUX_C11CR_EGE = (1U << 9);
    inline constexpr uint32_t DMAMUX_C11CR_SE_Pos = 16;
    inline constexpr uint32_t DMAMUX_C11CR_SE_Msk = 0x00010000;
    inline constexpr uint32_t DMAMUX_C11CR_SE = (1U << 16);
    inline constexpr uint32_t DMAMUX_C11CR_SPOL_Pos = 17;
    inline constexpr uint32_t DMAMUX_C11CR_SPOL_Msk = 0x00060000;
    inline constexpr uint32_t DMAMUX_C11CR_NBREQ_Pos = 19;
    inline constexpr uint32_t DMAMUX_C11CR_NBREQ_Msk = 0x00F80000;
    inline constexpr uint32_t DMAMUX_C11CR_SYNC_ID_Pos = 24;
    inline constexpr uint32_t DMAMUX_C11CR_SYNC_ID_Msk = 0x07000000;

    // DMAMUX_C12CR fields
    inline constexpr uint32_t DMAMUX_C12CR_DMAREQ_ID_Pos = 0;
    inline constexpr uint32_t DMAMUX_C12CR_DMAREQ_ID_Msk = 0x0000007F;
    inline constexpr uint32_t DMAMUX_C12CR_SOIE_Pos = 8;
    inline constexpr uint32_t DMAMUX_C12CR_SOIE_Msk = 0x00000100;
    inline constexpr uint32_t DMAMUX_C12CR_SOIE = (1U << 8);
    inline constexpr uint32_t DMAMUX_C12CR_EGE_Pos = 9;
    inline constexpr uint32_t DMAMUX_C12CR_EGE_Msk = 0x00000200;
    inline constexpr uint32_t DMAMUX_C12CR_EGE = (1U << 9);
    inline constexpr uint32_t DMAMUX_C12CR_SE_Pos = 16;
    inline constexpr uint32_t DMAMUX_C12CR_SE_Msk = 0x00010000;
    inline constexpr uint32_t DMAMUX_C12CR_SE = (1U << 16);
    inline constexpr uint32_t DMAMUX_C12CR_SPOL_Pos = 17;
    inline constexpr uint32_t DMAMUX_C12CR_SPOL_Msk = 0x00060000;
    inline constexpr uint32_t DMAMUX_C12CR_NBREQ_Pos = 19;
    inline constexpr uint32_t DMAMUX_C12CR_NBREQ_Msk = 0x00F80000;
    inline constexpr uint32_t DMAMUX_C12CR_SYNC_ID_Pos = 24;
    inline constexpr uint32_t DMAMUX_C12CR_SYNC_ID_Msk = 0x07000000;

    // DMAMUX_C13CR fields
    inline constexpr uint32_t DMAMUX_C13CR_DMAREQ_ID_Pos = 0;
    inline constexpr uint32_t DMAMUX_C13CR_DMAREQ_ID_Msk = 0x0000007F;
    inline constexpr uint32_t DMAMUX_C13CR_SOIE_Pos = 8;
    inline constexpr uint32_t DMAMUX_C13CR_SOIE_Msk = 0x00000100;
    inline constexpr uint32_t DMAMUX_C13CR_SOIE = (1U << 8);
    inline constexpr uint32_t DMAMUX_C13CR_EGE_Pos = 9;
    inline constexpr uint32_t DMAMUX_C13CR_EGE_Msk = 0x00000200;
    inline constexpr uint32_t DMAMUX_C13CR_EGE = (1U << 9);
    inline constexpr uint32_t DMAMUX_C13CR_SE_Pos = 16;
    inline constexpr uint32_t DMAMUX_C13CR_SE_Msk = 0x00010000;
    inline constexpr uint32_t DMAMUX_C13CR_SE = (1U << 16);
    inline constexpr uint32_t DMAMUX_C13CR_SPOL_Pos = 17;
    inline constexpr uint32_t DMAMUX_C13CR_SPOL_Msk = 0x00060000;
    inline constexpr uint32_t DMAMUX_C13CR_NBREQ_Pos = 19;
    inline constexpr uint32_t DMAMUX_C13CR_NBREQ_Msk = 0x00F80000;
    inline constexpr uint32_t DMAMUX_C13CR_SYNC_ID_Pos = 24;
    inline constexpr uint32_t DMAMUX_C13CR_SYNC_ID_Msk = 0x07000000;

    // DMAMUX_C14CR fields
    inline constexpr uint32_t DMAMUX_C14CR_DMAREQ_ID_Pos = 0;
    inline constexpr uint32_t DMAMUX_C14CR_DMAREQ_ID_Msk = 0x0000007F;
    inline constexpr uint32_t DMAMUX_C14CR_SOIE_Pos = 8;
    inline constexpr uint32_t DMAMUX_C14CR_SOIE_Msk = 0x00000100;
    inline constexpr uint32_t DMAMUX_C14CR_SOIE = (1U << 8);
    inline constexpr uint32_t DMAMUX_C14CR_EGE_Pos = 9;
    inline constexpr uint32_t DMAMUX_C14CR_EGE_Msk = 0x00000200;
    inline constexpr uint32_t DMAMUX_C14CR_EGE = (1U << 9);
    inline constexpr uint32_t DMAMUX_C14CR_SE_Pos = 16;
    inline constexpr uint32_t DMAMUX_C14CR_SE_Msk = 0x00010000;
    inline constexpr uint32_t DMAMUX_C14CR_SE = (1U << 16);
    inline constexpr uint32_t DMAMUX_C14CR_SPOL_Pos = 17;
    inline constexpr uint32_t DMAMUX_C14CR_SPOL_Msk = 0x00060000;
    inline constexpr uint32_t DMAMUX_C14CR_NBREQ_Pos = 19;
    inline constexpr uint32_t DMAMUX_C14CR_NBREQ_Msk = 0x00F80000;
    inline constexpr uint32_t DMAMUX_C14CR_SYNC_ID_Pos = 24;
    inline constexpr uint32_t DMAMUX_C14CR_SYNC_ID_Msk = 0x07000000;

    // DMAMUX_C15CR fields
    inline constexpr uint32_t DMAMUX_C15CR_DMAREQ_ID_Pos = 0;
    inline constexpr uint32_t DMAMUX_C15CR_DMAREQ_ID_Msk = 0x0000007F;
    inline constexpr uint32_t DMAMUX_C15CR_SOIE_Pos = 8;
    inline constexpr uint32_t DMAMUX_C15CR_SOIE_Msk = 0x00000100;
    inline constexpr uint32_t DMAMUX_C15CR_SOIE = (1U << 8);
    inline constexpr uint32_t DMAMUX_C15CR_EGE_Pos = 9;
    inline constexpr uint32_t DMAMUX_C15CR_EGE_Msk = 0x00000200;
    inline constexpr uint32_t DMAMUX_C15CR_EGE = (1U << 9);
    inline constexpr uint32_t DMAMUX_C15CR_SE_Pos = 16;
    inline constexpr uint32_t DMAMUX_C15CR_SE_Msk = 0x00010000;
    inline constexpr uint32_t DMAMUX_C15CR_SE = (1U << 16);
    inline constexpr uint32_t DMAMUX_C15CR_SPOL_Pos = 17;
    inline constexpr uint32_t DMAMUX_C15CR_SPOL_Msk = 0x00060000;
    inline constexpr uint32_t DMAMUX_C15CR_NBREQ_Pos = 19;
    inline constexpr uint32_t DMAMUX_C15CR_NBREQ_Msk = 0x00F80000;
    inline constexpr uint32_t DMAMUX_C15CR_SYNC_ID_Pos = 24;
    inline constexpr uint32_t DMAMUX_C15CR_SYNC_ID_Msk = 0x07000000;

    // DMAMUX_CSR fields
    inline constexpr uint32_t DMAMUX_CSR_SOF0_Pos = 0;
    inline constexpr uint32_t DMAMUX_CSR_SOF0_Msk = 0x00000001;
    inline constexpr uint32_t DMAMUX_CSR_SOF0 = (1U << 0);
    inline constexpr uint32_t DMAMUX_CSR_SOF1_Pos = 1;
    inline constexpr uint32_t DMAMUX_CSR_SOF1_Msk = 0x00000002;
    inline constexpr uint32_t DMAMUX_CSR_SOF1 = (1U << 1);
    inline constexpr uint32_t DMAMUX_CSR_SOF2_Pos = 2;
    inline constexpr uint32_t DMAMUX_CSR_SOF2_Msk = 0x00000004;
    inline constexpr uint32_t DMAMUX_CSR_SOF2 = (1U << 2);
    inline constexpr uint32_t DMAMUX_CSR_SOF3_Pos = 3;
    inline constexpr uint32_t DMAMUX_CSR_SOF3_Msk = 0x00000008;
    inline constexpr uint32_t DMAMUX_CSR_SOF3 = (1U << 3);
    inline constexpr uint32_t DMAMUX_CSR_SOF4_Pos = 4;
    inline constexpr uint32_t DMAMUX_CSR_SOF4_Msk = 0x00000010;
    inline constexpr uint32_t DMAMUX_CSR_SOF4 = (1U << 4);
    inline constexpr uint32_t DMAMUX_CSR_SOF5_Pos = 5;
    inline constexpr uint32_t DMAMUX_CSR_SOF5_Msk = 0x00000020;
    inline constexpr uint32_t DMAMUX_CSR_SOF5 = (1U << 5);
    inline constexpr uint32_t DMAMUX_CSR_SOF6_Pos = 6;
    inline constexpr uint32_t DMAMUX_CSR_SOF6_Msk = 0x00000040;
    inline constexpr uint32_t DMAMUX_CSR_SOF6 = (1U << 6);
    inline constexpr uint32_t DMAMUX_CSR_SOF7_Pos = 7;
    inline constexpr uint32_t DMAMUX_CSR_SOF7_Msk = 0x00000080;
    inline constexpr uint32_t DMAMUX_CSR_SOF7 = (1U << 7);
    inline constexpr uint32_t DMAMUX_CSR_SOF8_Pos = 8;
    inline constexpr uint32_t DMAMUX_CSR_SOF8_Msk = 0x00000100;
    inline constexpr uint32_t DMAMUX_CSR_SOF8 = (1U << 8);
    inline constexpr uint32_t DMAMUX_CSR_SOF9_Pos = 9;
    inline constexpr uint32_t DMAMUX_CSR_SOF9_Msk = 0x00000200;
    inline constexpr uint32_t DMAMUX_CSR_SOF9 = (1U << 9);
    inline constexpr uint32_t DMAMUX_CSR_SOF10_Pos = 10;
    inline constexpr uint32_t DMAMUX_CSR_SOF10_Msk = 0x00000400;
    inline constexpr uint32_t DMAMUX_CSR_SOF10 = (1U << 10);
    inline constexpr uint32_t DMAMUX_CSR_SOF11_Pos = 11;
    inline constexpr uint32_t DMAMUX_CSR_SOF11_Msk = 0x00000800;
    inline constexpr uint32_t DMAMUX_CSR_SOF11 = (1U << 11);
    inline constexpr uint32_t DMAMUX_CSR_SOF12_Pos = 12;
    inline constexpr uint32_t DMAMUX_CSR_SOF12_Msk = 0x00001000;
    inline constexpr uint32_t DMAMUX_CSR_SOF12 = (1U << 12);
    inline constexpr uint32_t DMAMUX_CSR_SOF13_Pos = 13;
    inline constexpr uint32_t DMAMUX_CSR_SOF13_Msk = 0x00002000;
    inline constexpr uint32_t DMAMUX_CSR_SOF13 = (1U << 13);
    inline constexpr uint32_t DMAMUX_CSR_SOF14_Pos = 14;
    inline constexpr uint32_t DMAMUX_CSR_SOF14_Msk = 0x00004000;
    inline constexpr uint32_t DMAMUX_CSR_SOF14 = (1U << 14);
    inline constexpr uint32_t DMAMUX_CSR_SOF15_Pos = 15;
    inline constexpr uint32_t DMAMUX_CSR_SOF15_Msk = 0x00008000;
    inline constexpr uint32_t DMAMUX_CSR_SOF15 = (1U << 15);

    // DMAMUX_CFR fields
    inline constexpr uint32_t DMAMUX_CFR_CSOF0_Pos = 0;
    inline constexpr uint32_t DMAMUX_CFR_CSOF0_Msk = 0x00000001;
    inline constexpr uint32_t DMAMUX_CFR_CSOF0 = (1U << 0);
    inline constexpr uint32_t DMAMUX_CFR_CSOF1_Pos = 1;
    inline constexpr uint32_t DMAMUX_CFR_CSOF1_Msk = 0x00000002;
    inline constexpr uint32_t DMAMUX_CFR_CSOF1 = (1U << 1);
    inline constexpr uint32_t DMAMUX_CFR_CSOF2_Pos = 2;
    inline constexpr uint32_t DMAMUX_CFR_CSOF2_Msk = 0x00000004;
    inline constexpr uint32_t DMAMUX_CFR_CSOF2 = (1U << 2);
    inline constexpr uint32_t DMAMUX_CFR_CSOF3_Pos = 3;
    inline constexpr uint32_t DMAMUX_CFR_CSOF3_Msk = 0x00000008;
    inline constexpr uint32_t DMAMUX_CFR_CSOF3 = (1U << 3);
    inline constexpr uint32_t DMAMUX_CFR_CSOF4_Pos = 4;
    inline constexpr uint32_t DMAMUX_CFR_CSOF4_Msk = 0x00000010;
    inline constexpr uint32_t DMAMUX_CFR_CSOF4 = (1U << 4);
    inline constexpr uint32_t DMAMUX_CFR_CSOF5_Pos = 5;
    inline constexpr uint32_t DMAMUX_CFR_CSOF5_Msk = 0x00000020;
    inline constexpr uint32_t DMAMUX_CFR_CSOF5 = (1U << 5);
    inline constexpr uint32_t DMAMUX_CFR_CSOF6_Pos = 6;
    inline constexpr uint32_t DMAMUX_CFR_CSOF6_Msk = 0x00000040;
    inline constexpr uint32_t DMAMUX_CFR_CSOF6 = (1U << 6);
    inline constexpr uint32_t DMAMUX_CFR_CSOF7_Pos = 7;
    inline constexpr uint32_t DMAMUX_CFR_CSOF7_Msk = 0x00000080;
    inline constexpr uint32_t DMAMUX_CFR_CSOF7 = (1U << 7);
    inline constexpr uint32_t DMAMUX_CFR_CSOF8_Pos = 8;
    inline constexpr uint32_t DMAMUX_CFR_CSOF8_Msk = 0x00000100;
    inline constexpr uint32_t DMAMUX_CFR_CSOF8 = (1U << 8);
    inline constexpr uint32_t DMAMUX_CFR_CSOF9_Pos = 9;
    inline constexpr uint32_t DMAMUX_CFR_CSOF9_Msk = 0x00000200;
    inline constexpr uint32_t DMAMUX_CFR_CSOF9 = (1U << 9);
    inline constexpr uint32_t DMAMUX_CFR_CSOF10_Pos = 10;
    inline constexpr uint32_t DMAMUX_CFR_CSOF10_Msk = 0x00000400;
    inline constexpr uint32_t DMAMUX_CFR_CSOF10 = (1U << 10);
    inline constexpr uint32_t DMAMUX_CFR_CSOF11_Pos = 11;
    inline constexpr uint32_t DMAMUX_CFR_CSOF11_Msk = 0x00000800;
    inline constexpr uint32_t DMAMUX_CFR_CSOF11 = (1U << 11);
    inline constexpr uint32_t DMAMUX_CFR_CSOF12_Pos = 12;
    inline constexpr uint32_t DMAMUX_CFR_CSOF12_Msk = 0x00001000;
    inline constexpr uint32_t DMAMUX_CFR_CSOF12 = (1U << 12);
    inline constexpr uint32_t DMAMUX_CFR_CSOF13_Pos = 13;
    inline constexpr uint32_t DMAMUX_CFR_CSOF13_Msk = 0x00002000;
    inline constexpr uint32_t DMAMUX_CFR_CSOF13 = (1U << 13);
    inline constexpr uint32_t DMAMUX_CFR_CSOF14_Pos = 14;
    inline constexpr uint32_t DMAMUX_CFR_CSOF14_Msk = 0x00004000;
    inline constexpr uint32_t DMAMUX_CFR_CSOF14 = (1U << 14);
    inline constexpr uint32_t DMAMUX_CFR_CSOF15_Pos = 15;
    inline constexpr uint32_t DMAMUX_CFR_CSOF15_Msk = 0x00008000;
    inline constexpr uint32_t DMAMUX_CFR_CSOF15 = (1U << 15);

    // DMAMUX_RG0CR fields
    inline constexpr uint32_t DMAMUX_RG0CR_SIG_ID_Pos = 0;
    inline constexpr uint32_t DMAMUX_RG0CR_SIG_ID_Msk = 0x00000007;
    inline constexpr uint32_t DMAMUX_RG0CR_OIE_Pos = 8;
    inline constexpr uint32_t DMAMUX_RG0CR_OIE_Msk = 0x00000100;
    inline constexpr uint32_t DMAMUX_RG0CR_OIE = (1U << 8);
    inline constexpr uint32_t DMAMUX_RG0CR_GE_Pos = 16;
    inline constexpr uint32_t DMAMUX_RG0CR_GE_Msk = 0x00010000;
    inline constexpr uint32_t DMAMUX_RG0CR_GE = (1U << 16);
    inline constexpr uint32_t DMAMUX_RG0CR_GPOL_Pos = 17;
    inline constexpr uint32_t DMAMUX_RG0CR_GPOL_Msk = 0x00060000;
    inline constexpr uint32_t DMAMUX_RG0CR_GNBREQ_Pos = 19;
    inline constexpr uint32_t DMAMUX_RG0CR_GNBREQ_Msk = 0x00F80000;

    // DMAMUX_RG1CR fields
    inline constexpr uint32_t DMAMUX_RG1CR_SIG_ID_Pos = 0;
    inline constexpr uint32_t DMAMUX_RG1CR_SIG_ID_Msk = 0x00000007;
    inline constexpr uint32_t DMAMUX_RG1CR_OIE_Pos = 8;
    inline constexpr uint32_t DMAMUX_RG1CR_OIE_Msk = 0x00000100;
    inline constexpr uint32_t DMAMUX_RG1CR_OIE = (1U << 8);
    inline constexpr uint32_t DMAMUX_RG1CR_GE_Pos = 16;
    inline constexpr uint32_t DMAMUX_RG1CR_GE_Msk = 0x00010000;
    inline constexpr uint32_t DMAMUX_RG1CR_GE = (1U << 16);
    inline constexpr uint32_t DMAMUX_RG1CR_GPOL_Pos = 17;
    inline constexpr uint32_t DMAMUX_RG1CR_GPOL_Msk = 0x00060000;
    inline constexpr uint32_t DMAMUX_RG1CR_GNBREQ_Pos = 19;
    inline constexpr uint32_t DMAMUX_RG1CR_GNBREQ_Msk = 0x00F80000;

    // DMAMUX_RG2CR fields
    inline constexpr uint32_t DMAMUX_RG2CR_SIG_ID_Pos = 0;
    inline constexpr uint32_t DMAMUX_RG2CR_SIG_ID_Msk = 0x00000007;
    inline constexpr uint32_t DMAMUX_RG2CR_OIE_Pos = 8;
    inline constexpr uint32_t DMAMUX_RG2CR_OIE_Msk = 0x00000100;
    inline constexpr uint32_t DMAMUX_RG2CR_OIE = (1U << 8);
    inline constexpr uint32_t DMAMUX_RG2CR_GE_Pos = 16;
    inline constexpr uint32_t DMAMUX_RG2CR_GE_Msk = 0x00010000;
    inline constexpr uint32_t DMAMUX_RG2CR_GE = (1U << 16);
    inline constexpr uint32_t DMAMUX_RG2CR_GPOL_Pos = 17;
    inline constexpr uint32_t DMAMUX_RG2CR_GPOL_Msk = 0x00060000;
    inline constexpr uint32_t DMAMUX_RG2CR_GNBREQ_Pos = 19;
    inline constexpr uint32_t DMAMUX_RG2CR_GNBREQ_Msk = 0x00F80000;

    // DMAMUX_RG3CR fields
    inline constexpr uint32_t DMAMUX_RG3CR_SIG_ID_Pos = 0;
    inline constexpr uint32_t DMAMUX_RG3CR_SIG_ID_Msk = 0x00000007;
    inline constexpr uint32_t DMAMUX_RG3CR_OIE_Pos = 8;
    inline constexpr uint32_t DMAMUX_RG3CR_OIE_Msk = 0x00000100;
    inline constexpr uint32_t DMAMUX_RG3CR_OIE = (1U << 8);
    inline constexpr uint32_t DMAMUX_RG3CR_GE_Pos = 16;
    inline constexpr uint32_t DMAMUX_RG3CR_GE_Msk = 0x00010000;
    inline constexpr uint32_t DMAMUX_RG3CR_GE = (1U << 16);
    inline constexpr uint32_t DMAMUX_RG3CR_GPOL_Pos = 17;
    inline constexpr uint32_t DMAMUX_RG3CR_GPOL_Msk = 0x00060000;
    inline constexpr uint32_t DMAMUX_RG3CR_GNBREQ_Pos = 19;
    inline constexpr uint32_t DMAMUX_RG3CR_GNBREQ_Msk = 0x00F80000;

    // DMAMUX_RG4CR fields
    inline constexpr uint32_t DMAMUX_RG4CR_SIG_ID_Pos = 0;
    inline constexpr uint32_t DMAMUX_RG4CR_SIG_ID_Msk = 0x00000007;
    inline constexpr uint32_t DMAMUX_RG4CR_OIE_Pos = 8;
    inline constexpr uint32_t DMAMUX_RG4CR_OIE_Msk = 0x00000100;
    inline constexpr uint32_t DMAMUX_RG4CR_OIE = (1U << 8);
    inline constexpr uint32_t DMAMUX_RG4CR_GE_Pos = 16;
    inline constexpr uint32_t DMAMUX_RG4CR_GE_Msk = 0x00010000;
    inline constexpr uint32_t DMAMUX_RG4CR_GE = (1U << 16);
    inline constexpr uint32_t DMAMUX_RG4CR_GPOL_Pos = 17;
    inline constexpr uint32_t DMAMUX_RG4CR_GPOL_Msk = 0x00060000;
    inline constexpr uint32_t DMAMUX_RG4CR_GNBREQ_Pos = 19;
    inline constexpr uint32_t DMAMUX_RG4CR_GNBREQ_Msk = 0x00F80000;

    // DMAMUX_RG5CR fields
    inline constexpr uint32_t DMAMUX_RG5CR_SIG_ID_Pos = 0;
    inline constexpr uint32_t DMAMUX_RG5CR_SIG_ID_Msk = 0x00000007;
    inline constexpr uint32_t DMAMUX_RG5CR_OIE_Pos = 8;
    inline constexpr uint32_t DMAMUX_RG5CR_OIE_Msk = 0x00000100;
    inline constexpr uint32_t DMAMUX_RG5CR_OIE = (1U << 8);
    inline constexpr uint32_t DMAMUX_RG5CR_GE_Pos = 16;
    inline constexpr uint32_t DMAMUX_RG5CR_GE_Msk = 0x00010000;
    inline constexpr uint32_t DMAMUX_RG5CR_GE = (1U << 16);
    inline constexpr uint32_t DMAMUX_RG5CR_GPOL_Pos = 17;
    inline constexpr uint32_t DMAMUX_RG5CR_GPOL_Msk = 0x00060000;
    inline constexpr uint32_t DMAMUX_RG5CR_GNBREQ_Pos = 19;
    inline constexpr uint32_t DMAMUX_RG5CR_GNBREQ_Msk = 0x00F80000;

    // DMAMUX_RG6CR fields
    inline constexpr uint32_t DMAMUX_RG6CR_SIG_ID_Pos = 0;
    inline constexpr uint32_t DMAMUX_RG6CR_SIG_ID_Msk = 0x00000007;
    inline constexpr uint32_t DMAMUX_RG6CR_OIE_Pos = 8;
    inline constexpr uint32_t DMAMUX_RG6CR_OIE_Msk = 0x00000100;
    inline constexpr uint32_t DMAMUX_RG6CR_OIE = (1U << 8);
    inline constexpr uint32_t DMAMUX_RG6CR_GE_Pos = 16;
    inline constexpr uint32_t DMAMUX_RG6CR_GE_Msk = 0x00010000;
    inline constexpr uint32_t DMAMUX_RG6CR_GE = (1U << 16);
    inline constexpr uint32_t DMAMUX_RG6CR_GPOL_Pos = 17;
    inline constexpr uint32_t DMAMUX_RG6CR_GPOL_Msk = 0x00060000;
    inline constexpr uint32_t DMAMUX_RG6CR_GNBREQ_Pos = 19;
    inline constexpr uint32_t DMAMUX_RG6CR_GNBREQ_Msk = 0x00F80000;

    // DMAMUX_RG7CR fields
    inline constexpr uint32_t DMAMUX_RG7CR_SIG_ID_Pos = 0;
    inline constexpr uint32_t DMAMUX_RG7CR_SIG_ID_Msk = 0x00000007;
    inline constexpr uint32_t DMAMUX_RG7CR_OIE_Pos = 8;
    inline constexpr uint32_t DMAMUX_RG7CR_OIE_Msk = 0x00000100;
    inline constexpr uint32_t DMAMUX_RG7CR_OIE = (1U << 8);
    inline constexpr uint32_t DMAMUX_RG7CR_GE_Pos = 16;
    inline constexpr uint32_t DMAMUX_RG7CR_GE_Msk = 0x00010000;
    inline constexpr uint32_t DMAMUX_RG7CR_GE = (1U << 16);
    inline constexpr uint32_t DMAMUX_RG7CR_GPOL_Pos = 17;
    inline constexpr uint32_t DMAMUX_RG7CR_GPOL_Msk = 0x00060000;
    inline constexpr uint32_t DMAMUX_RG7CR_GNBREQ_Pos = 19;
    inline constexpr uint32_t DMAMUX_RG7CR_GNBREQ_Msk = 0x00F80000;

    // DMAMUX_RGSR fields
    inline constexpr uint32_t DMAMUX_RGSR_OF0_Pos = 0;
    inline constexpr uint32_t DMAMUX_RGSR_OF0_Msk = 0x00000001;
    inline constexpr uint32_t DMAMUX_RGSR_OF0 = (1U << 0);
    inline constexpr uint32_t DMAMUX_RGSR_OF1_Pos = 1;
    inline constexpr uint32_t DMAMUX_RGSR_OF1_Msk = 0x00000002;
    inline constexpr uint32_t DMAMUX_RGSR_OF1 = (1U << 1);
    inline constexpr uint32_t DMAMUX_RGSR_OF2_Pos = 2;
    inline constexpr uint32_t DMAMUX_RGSR_OF2_Msk = 0x00000004;
    inline constexpr uint32_t DMAMUX_RGSR_OF2 = (1U << 2);
    inline constexpr uint32_t DMAMUX_RGSR_OF3_Pos = 3;
    inline constexpr uint32_t DMAMUX_RGSR_OF3_Msk = 0x00000008;
    inline constexpr uint32_t DMAMUX_RGSR_OF3 = (1U << 3);
    inline constexpr uint32_t DMAMUX_RGSR_OF4_Pos = 4;
    inline constexpr uint32_t DMAMUX_RGSR_OF4_Msk = 0x00000010;
    inline constexpr uint32_t DMAMUX_RGSR_OF4 = (1U << 4);
    inline constexpr uint32_t DMAMUX_RGSR_OF5_Pos = 5;
    inline constexpr uint32_t DMAMUX_RGSR_OF5_Msk = 0x00000020;
    inline constexpr uint32_t DMAMUX_RGSR_OF5 = (1U << 5);
    inline constexpr uint32_t DMAMUX_RGSR_OF6_Pos = 6;
    inline constexpr uint32_t DMAMUX_RGSR_OF6_Msk = 0x00000040;
    inline constexpr uint32_t DMAMUX_RGSR_OF6 = (1U << 6);
    inline constexpr uint32_t DMAMUX_RGSR_OF7_Pos = 7;
    inline constexpr uint32_t DMAMUX_RGSR_OF7_Msk = 0x00000080;
    inline constexpr uint32_t DMAMUX_RGSR_OF7 = (1U << 7);

    // DMAMUX_RGCFR fields
    inline constexpr uint32_t DMAMUX_RGCFR_COF0_Pos = 0;
    inline constexpr uint32_t DMAMUX_RGCFR_COF0_Msk = 0x00000001;
    inline constexpr uint32_t DMAMUX_RGCFR_COF0 = (1U << 0);
    inline constexpr uint32_t DMAMUX_RGCFR_COF1_Pos = 1;
    inline constexpr uint32_t DMAMUX_RGCFR_COF1_Msk = 0x00000002;
    inline constexpr uint32_t DMAMUX_RGCFR_COF1 = (1U << 1);
    inline constexpr uint32_t DMAMUX_RGCFR_COF2_Pos = 2;
    inline constexpr uint32_t DMAMUX_RGCFR_COF2_Msk = 0x00000004;
    inline constexpr uint32_t DMAMUX_RGCFR_COF2 = (1U << 2);
    inline constexpr uint32_t DMAMUX_RGCFR_COF3_Pos = 3;
    inline constexpr uint32_t DMAMUX_RGCFR_COF3_Msk = 0x00000008;
    inline constexpr uint32_t DMAMUX_RGCFR_COF3 = (1U << 3);
    inline constexpr uint32_t DMAMUX_RGCFR_COF4_Pos = 4;
    inline constexpr uint32_t DMAMUX_RGCFR_COF4_Msk = 0x00000010;
    inline constexpr uint32_t DMAMUX_RGCFR_COF4 = (1U << 4);
    inline constexpr uint32_t DMAMUX_RGCFR_COF5_Pos = 5;
    inline constexpr uint32_t DMAMUX_RGCFR_COF5_Msk = 0x00000020;
    inline constexpr uint32_t DMAMUX_RGCFR_COF5 = (1U << 5);
    inline constexpr uint32_t DMAMUX_RGCFR_COF6_Pos = 6;
    inline constexpr uint32_t DMAMUX_RGCFR_COF6_Msk = 0x00000040;
    inline constexpr uint32_t DMAMUX_RGCFR_COF6 = (1U << 6);
    inline constexpr uint32_t DMAMUX_RGCFR_COF7_Pos = 7;
    inline constexpr uint32_t DMAMUX_RGCFR_COF7_Msk = 0x00000080;
    inline constexpr uint32_t DMAMUX_RGCFR_COF7 = (1U << 7);

} // namespace DMAMUX1

namespace DMAMUX2 {
    // C0CR fields
    inline constexpr uint32_t C0CR_DMAREQ_ID_Pos = 0;
    inline constexpr uint32_t C0CR_DMAREQ_ID_Msk = 0x0000001F;
    inline constexpr uint32_t C0CR_SOIE_Pos = 8;
    inline constexpr uint32_t C0CR_SOIE_Msk = 0x00000100;
    inline constexpr uint32_t C0CR_SOIE = (1U << 8);
    inline constexpr uint32_t C0CR_EGE_Pos = 9;
    inline constexpr uint32_t C0CR_EGE_Msk = 0x00000200;
    inline constexpr uint32_t C0CR_EGE = (1U << 9);
    inline constexpr uint32_t C0CR_SE_Pos = 16;
    inline constexpr uint32_t C0CR_SE_Msk = 0x00010000;
    inline constexpr uint32_t C0CR_SE = (1U << 16);
    inline constexpr uint32_t C0CR_SPOL_Pos = 17;
    inline constexpr uint32_t C0CR_SPOL_Msk = 0x00060000;
    inline constexpr uint32_t C0CR_NBREQ_Pos = 19;
    inline constexpr uint32_t C0CR_NBREQ_Msk = 0x00F80000;
    inline constexpr uint32_t C0CR_SYNC_ID_Pos = 24;
    inline constexpr uint32_t C0CR_SYNC_ID_Msk = 0x1F000000;

    // C1CR fields
    inline constexpr uint32_t C1CR_DMAREQ_ID_Pos = 0;
    inline constexpr uint32_t C1CR_DMAREQ_ID_Msk = 0x0000001F;
    inline constexpr uint32_t C1CR_SOIE_Pos = 8;
    inline constexpr uint32_t C1CR_SOIE_Msk = 0x00000100;
    inline constexpr uint32_t C1CR_SOIE = (1U << 8);
    inline constexpr uint32_t C1CR_EGE_Pos = 9;
    inline constexpr uint32_t C1CR_EGE_Msk = 0x00000200;
    inline constexpr uint32_t C1CR_EGE = (1U << 9);
    inline constexpr uint32_t C1CR_SE_Pos = 16;
    inline constexpr uint32_t C1CR_SE_Msk = 0x00010000;
    inline constexpr uint32_t C1CR_SE = (1U << 16);
    inline constexpr uint32_t C1CR_SPOL_Pos = 17;
    inline constexpr uint32_t C1CR_SPOL_Msk = 0x00060000;
    inline constexpr uint32_t C1CR_NBREQ_Pos = 19;
    inline constexpr uint32_t C1CR_NBREQ_Msk = 0x00F80000;
    inline constexpr uint32_t C1CR_SYNC_ID_Pos = 24;
    inline constexpr uint32_t C1CR_SYNC_ID_Msk = 0x1F000000;

    // C2CR fields
    inline constexpr uint32_t C2CR_DMAREQ_ID_Pos = 0;
    inline constexpr uint32_t C2CR_DMAREQ_ID_Msk = 0x0000001F;
    inline constexpr uint32_t C2CR_SOIE_Pos = 8;
    inline constexpr uint32_t C2CR_SOIE_Msk = 0x00000100;
    inline constexpr uint32_t C2CR_SOIE = (1U << 8);
    inline constexpr uint32_t C2CR_EGE_Pos = 9;
    inline constexpr uint32_t C2CR_EGE_Msk = 0x00000200;
    inline constexpr uint32_t C2CR_EGE = (1U << 9);
    inline constexpr uint32_t C2CR_SE_Pos = 16;
    inline constexpr uint32_t C2CR_SE_Msk = 0x00010000;
    inline constexpr uint32_t C2CR_SE = (1U << 16);
    inline constexpr uint32_t C2CR_SPOL_Pos = 17;
    inline constexpr uint32_t C2CR_SPOL_Msk = 0x00060000;
    inline constexpr uint32_t C2CR_NBREQ_Pos = 19;
    inline constexpr uint32_t C2CR_NBREQ_Msk = 0x00F80000;
    inline constexpr uint32_t C2CR_SYNC_ID_Pos = 24;
    inline constexpr uint32_t C2CR_SYNC_ID_Msk = 0x1F000000;

    // C3CR fields
    inline constexpr uint32_t C3CR_DMAREQ_ID_Pos = 0;
    inline constexpr uint32_t C3CR_DMAREQ_ID_Msk = 0x0000001F;
    inline constexpr uint32_t C3CR_SOIE_Pos = 8;
    inline constexpr uint32_t C3CR_SOIE_Msk = 0x00000100;
    inline constexpr uint32_t C3CR_SOIE = (1U << 8);
    inline constexpr uint32_t C3CR_EGE_Pos = 9;
    inline constexpr uint32_t C3CR_EGE_Msk = 0x00000200;
    inline constexpr uint32_t C3CR_EGE = (1U << 9);
    inline constexpr uint32_t C3CR_SE_Pos = 16;
    inline constexpr uint32_t C3CR_SE_Msk = 0x00010000;
    inline constexpr uint32_t C3CR_SE = (1U << 16);
    inline constexpr uint32_t C3CR_SPOL_Pos = 17;
    inline constexpr uint32_t C3CR_SPOL_Msk = 0x00060000;
    inline constexpr uint32_t C3CR_NBREQ_Pos = 19;
    inline constexpr uint32_t C3CR_NBREQ_Msk = 0x00F80000;
    inline constexpr uint32_t C3CR_SYNC_ID_Pos = 24;
    inline constexpr uint32_t C3CR_SYNC_ID_Msk = 0x1F000000;

    // C4CR fields
    inline constexpr uint32_t C4CR_DMAREQ_ID_Pos = 0;
    inline constexpr uint32_t C4CR_DMAREQ_ID_Msk = 0x0000001F;
    inline constexpr uint32_t C4CR_SOIE_Pos = 8;
    inline constexpr uint32_t C4CR_SOIE_Msk = 0x00000100;
    inline constexpr uint32_t C4CR_SOIE = (1U << 8);
    inline constexpr uint32_t C4CR_EGE_Pos = 9;
    inline constexpr uint32_t C4CR_EGE_Msk = 0x00000200;
    inline constexpr uint32_t C4CR_EGE = (1U << 9);
    inline constexpr uint32_t C4CR_SE_Pos = 16;
    inline constexpr uint32_t C4CR_SE_Msk = 0x00010000;
    inline constexpr uint32_t C4CR_SE = (1U << 16);
    inline constexpr uint32_t C4CR_SPOL_Pos = 17;
    inline constexpr uint32_t C4CR_SPOL_Msk = 0x00060000;
    inline constexpr uint32_t C4CR_NBREQ_Pos = 19;
    inline constexpr uint32_t C4CR_NBREQ_Msk = 0x00F80000;
    inline constexpr uint32_t C4CR_SYNC_ID_Pos = 24;
    inline constexpr uint32_t C4CR_SYNC_ID_Msk = 0x1F000000;

    // C5CR fields
    inline constexpr uint32_t C5CR_DMAREQ_ID_Pos = 0;
    inline constexpr uint32_t C5CR_DMAREQ_ID_Msk = 0x0000001F;
    inline constexpr uint32_t C5CR_SOIE_Pos = 8;
    inline constexpr uint32_t C5CR_SOIE_Msk = 0x00000100;
    inline constexpr uint32_t C5CR_SOIE = (1U << 8);
    inline constexpr uint32_t C5CR_EGE_Pos = 9;
    inline constexpr uint32_t C5CR_EGE_Msk = 0x00000200;
    inline constexpr uint32_t C5CR_EGE = (1U << 9);
    inline constexpr uint32_t C5CR_SE_Pos = 16;
    inline constexpr uint32_t C5CR_SE_Msk = 0x00010000;
    inline constexpr uint32_t C5CR_SE = (1U << 16);
    inline constexpr uint32_t C5CR_SPOL_Pos = 17;
    inline constexpr uint32_t C5CR_SPOL_Msk = 0x00060000;
    inline constexpr uint32_t C5CR_NBREQ_Pos = 19;
    inline constexpr uint32_t C5CR_NBREQ_Msk = 0x00F80000;
    inline constexpr uint32_t C5CR_SYNC_ID_Pos = 24;
    inline constexpr uint32_t C5CR_SYNC_ID_Msk = 0x1F000000;

    // C6CR fields
    inline constexpr uint32_t C6CR_DMAREQ_ID_Pos = 0;
    inline constexpr uint32_t C6CR_DMAREQ_ID_Msk = 0x0000001F;
    inline constexpr uint32_t C6CR_SOIE_Pos = 8;
    inline constexpr uint32_t C6CR_SOIE_Msk = 0x00000100;
    inline constexpr uint32_t C6CR_SOIE = (1U << 8);
    inline constexpr uint32_t C6CR_EGE_Pos = 9;
    inline constexpr uint32_t C6CR_EGE_Msk = 0x00000200;
    inline constexpr uint32_t C6CR_EGE = (1U << 9);
    inline constexpr uint32_t C6CR_SE_Pos = 16;
    inline constexpr uint32_t C6CR_SE_Msk = 0x00010000;
    inline constexpr uint32_t C6CR_SE = (1U << 16);
    inline constexpr uint32_t C6CR_SPOL_Pos = 17;
    inline constexpr uint32_t C6CR_SPOL_Msk = 0x00060000;
    inline constexpr uint32_t C6CR_NBREQ_Pos = 19;
    inline constexpr uint32_t C6CR_NBREQ_Msk = 0x00F80000;
    inline constexpr uint32_t C6CR_SYNC_ID_Pos = 24;
    inline constexpr uint32_t C6CR_SYNC_ID_Msk = 0x1F000000;

    // C7CR fields
    inline constexpr uint32_t C7CR_DMAREQ_ID_Pos = 0;
    inline constexpr uint32_t C7CR_DMAREQ_ID_Msk = 0x0000001F;
    inline constexpr uint32_t C7CR_SOIE_Pos = 8;
    inline constexpr uint32_t C7CR_SOIE_Msk = 0x00000100;
    inline constexpr uint32_t C7CR_SOIE = (1U << 8);
    inline constexpr uint32_t C7CR_EGE_Pos = 9;
    inline constexpr uint32_t C7CR_EGE_Msk = 0x00000200;
    inline constexpr uint32_t C7CR_EGE = (1U << 9);
    inline constexpr uint32_t C7CR_SE_Pos = 16;
    inline constexpr uint32_t C7CR_SE_Msk = 0x00010000;
    inline constexpr uint32_t C7CR_SE = (1U << 16);
    inline constexpr uint32_t C7CR_SPOL_Pos = 17;
    inline constexpr uint32_t C7CR_SPOL_Msk = 0x00060000;
    inline constexpr uint32_t C7CR_NBREQ_Pos = 19;
    inline constexpr uint32_t C7CR_NBREQ_Msk = 0x00F80000;
    inline constexpr uint32_t C7CR_SYNC_ID_Pos = 24;
    inline constexpr uint32_t C7CR_SYNC_ID_Msk = 0x1F000000;

    // CSR fields
    inline constexpr uint32_t CSR_SOF0_Pos = 0;
    inline constexpr uint32_t CSR_SOF0_Msk = 0x00000001;
    inline constexpr uint32_t CSR_SOF0 = (1U << 0);
    inline constexpr uint32_t CSR_SOF1_Pos = 1;
    inline constexpr uint32_t CSR_SOF1_Msk = 0x00000002;
    inline constexpr uint32_t CSR_SOF1 = (1U << 1);
    inline constexpr uint32_t CSR_SOF2_Pos = 2;
    inline constexpr uint32_t CSR_SOF2_Msk = 0x00000004;
    inline constexpr uint32_t CSR_SOF2 = (1U << 2);
    inline constexpr uint32_t CSR_SOF3_Pos = 3;
    inline constexpr uint32_t CSR_SOF3_Msk = 0x00000008;
    inline constexpr uint32_t CSR_SOF3 = (1U << 3);
    inline constexpr uint32_t CSR_SOF4_Pos = 4;
    inline constexpr uint32_t CSR_SOF4_Msk = 0x00000010;
    inline constexpr uint32_t CSR_SOF4 = (1U << 4);
    inline constexpr uint32_t CSR_SOF5_Pos = 5;
    inline constexpr uint32_t CSR_SOF5_Msk = 0x00000020;
    inline constexpr uint32_t CSR_SOF5 = (1U << 5);
    inline constexpr uint32_t CSR_SOF6_Pos = 6;
    inline constexpr uint32_t CSR_SOF6_Msk = 0x00000040;
    inline constexpr uint32_t CSR_SOF6 = (1U << 6);
    inline constexpr uint32_t CSR_SOF7_Pos = 7;
    inline constexpr uint32_t CSR_SOF7_Msk = 0x00000080;
    inline constexpr uint32_t CSR_SOF7 = (1U << 7);

    // CFR fields
    inline constexpr uint32_t CFR_CSOF0_Pos = 0;
    inline constexpr uint32_t CFR_CSOF0_Msk = 0x00000001;
    inline constexpr uint32_t CFR_CSOF0 = (1U << 0);
    inline constexpr uint32_t CFR_CSOF1_Pos = 1;
    inline constexpr uint32_t CFR_CSOF1_Msk = 0x00000002;
    inline constexpr uint32_t CFR_CSOF1 = (1U << 1);
    inline constexpr uint32_t CFR_CSOF2_Pos = 2;
    inline constexpr uint32_t CFR_CSOF2_Msk = 0x00000004;
    inline constexpr uint32_t CFR_CSOF2 = (1U << 2);
    inline constexpr uint32_t CFR_CSOF3_Pos = 3;
    inline constexpr uint32_t CFR_CSOF3_Msk = 0x00000008;
    inline constexpr uint32_t CFR_CSOF3 = (1U << 3);
    inline constexpr uint32_t CFR_CSOF4_Pos = 4;
    inline constexpr uint32_t CFR_CSOF4_Msk = 0x00000010;
    inline constexpr uint32_t CFR_CSOF4 = (1U << 4);
    inline constexpr uint32_t CFR_CSOF5_Pos = 5;
    inline constexpr uint32_t CFR_CSOF5_Msk = 0x00000020;
    inline constexpr uint32_t CFR_CSOF5 = (1U << 5);
    inline constexpr uint32_t CFR_CSOF6_Pos = 6;
    inline constexpr uint32_t CFR_CSOF6_Msk = 0x00000040;
    inline constexpr uint32_t CFR_CSOF6 = (1U << 6);
    inline constexpr uint32_t CFR_CSOF7_Pos = 7;
    inline constexpr uint32_t CFR_CSOF7_Msk = 0x00000080;
    inline constexpr uint32_t CFR_CSOF7 = (1U << 7);

    // RG0CR fields
    inline constexpr uint32_t RG0CR_SIG_ID_Pos = 0;
    inline constexpr uint32_t RG0CR_SIG_ID_Msk = 0x0000001F;
    inline constexpr uint32_t RG0CR_OIE_Pos = 8;
    inline constexpr uint32_t RG0CR_OIE_Msk = 0x00000100;
    inline constexpr uint32_t RG0CR_OIE = (1U << 8);
    inline constexpr uint32_t RG0CR_GE_Pos = 16;
    inline constexpr uint32_t RG0CR_GE_Msk = 0x00010000;
    inline constexpr uint32_t RG0CR_GE = (1U << 16);
    inline constexpr uint32_t RG0CR_GPOL_Pos = 17;
    inline constexpr uint32_t RG0CR_GPOL_Msk = 0x00060000;
    inline constexpr uint32_t RG0CR_GNBREQ_Pos = 19;
    inline constexpr uint32_t RG0CR_GNBREQ_Msk = 0x00F80000;

    // RG1CR fields
    inline constexpr uint32_t RG1CR_SIG_ID_Pos = 0;
    inline constexpr uint32_t RG1CR_SIG_ID_Msk = 0x0000001F;
    inline constexpr uint32_t RG1CR_OIE_Pos = 8;
    inline constexpr uint32_t RG1CR_OIE_Msk = 0x00000100;
    inline constexpr uint32_t RG1CR_OIE = (1U << 8);
    inline constexpr uint32_t RG1CR_GE_Pos = 16;
    inline constexpr uint32_t RG1CR_GE_Msk = 0x00010000;
    inline constexpr uint32_t RG1CR_GE = (1U << 16);
    inline constexpr uint32_t RG1CR_GPOL_Pos = 17;
    inline constexpr uint32_t RG1CR_GPOL_Msk = 0x00060000;
    inline constexpr uint32_t RG1CR_GNBREQ_Pos = 19;
    inline constexpr uint32_t RG1CR_GNBREQ_Msk = 0x00F80000;

    // RG2CR fields
    inline constexpr uint32_t RG2CR_SIG_ID_Pos = 0;
    inline constexpr uint32_t RG2CR_SIG_ID_Msk = 0x0000001F;
    inline constexpr uint32_t RG2CR_OIE_Pos = 8;
    inline constexpr uint32_t RG2CR_OIE_Msk = 0x00000100;
    inline constexpr uint32_t RG2CR_OIE = (1U << 8);
    inline constexpr uint32_t RG2CR_GE_Pos = 16;
    inline constexpr uint32_t RG2CR_GE_Msk = 0x00010000;
    inline constexpr uint32_t RG2CR_GE = (1U << 16);
    inline constexpr uint32_t RG2CR_GPOL_Pos = 17;
    inline constexpr uint32_t RG2CR_GPOL_Msk = 0x00060000;
    inline constexpr uint32_t RG2CR_GNBREQ_Pos = 19;
    inline constexpr uint32_t RG2CR_GNBREQ_Msk = 0x00F80000;

    // RG3CR fields
    inline constexpr uint32_t RG3CR_SIG_ID_Pos = 0;
    inline constexpr uint32_t RG3CR_SIG_ID_Msk = 0x0000001F;
    inline constexpr uint32_t RG3CR_OIE_Pos = 8;
    inline constexpr uint32_t RG3CR_OIE_Msk = 0x00000100;
    inline constexpr uint32_t RG3CR_OIE = (1U << 8);
    inline constexpr uint32_t RG3CR_GE_Pos = 16;
    inline constexpr uint32_t RG3CR_GE_Msk = 0x00010000;
    inline constexpr uint32_t RG3CR_GE = (1U << 16);
    inline constexpr uint32_t RG3CR_GPOL_Pos = 17;
    inline constexpr uint32_t RG3CR_GPOL_Msk = 0x00060000;
    inline constexpr uint32_t RG3CR_GNBREQ_Pos = 19;
    inline constexpr uint32_t RG3CR_GNBREQ_Msk = 0x00F80000;

    // RG4CR fields
    inline constexpr uint32_t RG4CR_SIG_ID_Pos = 0;
    inline constexpr uint32_t RG4CR_SIG_ID_Msk = 0x0000001F;
    inline constexpr uint32_t RG4CR_OIE_Pos = 8;
    inline constexpr uint32_t RG4CR_OIE_Msk = 0x00000100;
    inline constexpr uint32_t RG4CR_OIE = (1U << 8);
    inline constexpr uint32_t RG4CR_GE_Pos = 16;
    inline constexpr uint32_t RG4CR_GE_Msk = 0x00010000;
    inline constexpr uint32_t RG4CR_GE = (1U << 16);
    inline constexpr uint32_t RG4CR_GPOL_Pos = 17;
    inline constexpr uint32_t RG4CR_GPOL_Msk = 0x00060000;
    inline constexpr uint32_t RG4CR_GNBREQ_Pos = 19;
    inline constexpr uint32_t RG4CR_GNBREQ_Msk = 0x00F80000;

    // RG5CR fields
    inline constexpr uint32_t RG5CR_SIG_ID_Pos = 0;
    inline constexpr uint32_t RG5CR_SIG_ID_Msk = 0x0000001F;
    inline constexpr uint32_t RG5CR_OIE_Pos = 8;
    inline constexpr uint32_t RG5CR_OIE_Msk = 0x00000100;
    inline constexpr uint32_t RG5CR_OIE = (1U << 8);
    inline constexpr uint32_t RG5CR_GE_Pos = 16;
    inline constexpr uint32_t RG5CR_GE_Msk = 0x00010000;
    inline constexpr uint32_t RG5CR_GE = (1U << 16);
    inline constexpr uint32_t RG5CR_GPOL_Pos = 17;
    inline constexpr uint32_t RG5CR_GPOL_Msk = 0x00060000;
    inline constexpr uint32_t RG5CR_GNBREQ_Pos = 19;
    inline constexpr uint32_t RG5CR_GNBREQ_Msk = 0x00F80000;

    // RG6CR fields
    inline constexpr uint32_t RG6CR_SIG_ID_Pos = 0;
    inline constexpr uint32_t RG6CR_SIG_ID_Msk = 0x0000001F;
    inline constexpr uint32_t RG6CR_OIE_Pos = 8;
    inline constexpr uint32_t RG6CR_OIE_Msk = 0x00000100;
    inline constexpr uint32_t RG6CR_OIE = (1U << 8);
    inline constexpr uint32_t RG6CR_GE_Pos = 16;
    inline constexpr uint32_t RG6CR_GE_Msk = 0x00010000;
    inline constexpr uint32_t RG6CR_GE = (1U << 16);
    inline constexpr uint32_t RG6CR_GPOL_Pos = 17;
    inline constexpr uint32_t RG6CR_GPOL_Msk = 0x00060000;
    inline constexpr uint32_t RG6CR_GNBREQ_Pos = 19;
    inline constexpr uint32_t RG6CR_GNBREQ_Msk = 0x00F80000;

    // RG7CR fields
    inline constexpr uint32_t RG7CR_SIG_ID_Pos = 0;
    inline constexpr uint32_t RG7CR_SIG_ID_Msk = 0x0000001F;
    inline constexpr uint32_t RG7CR_OIE_Pos = 8;
    inline constexpr uint32_t RG7CR_OIE_Msk = 0x00000100;
    inline constexpr uint32_t RG7CR_OIE = (1U << 8);
    inline constexpr uint32_t RG7CR_GE_Pos = 16;
    inline constexpr uint32_t RG7CR_GE_Msk = 0x00010000;
    inline constexpr uint32_t RG7CR_GE = (1U << 16);
    inline constexpr uint32_t RG7CR_GPOL_Pos = 17;
    inline constexpr uint32_t RG7CR_GPOL_Msk = 0x00060000;
    inline constexpr uint32_t RG7CR_GNBREQ_Pos = 19;
    inline constexpr uint32_t RG7CR_GNBREQ_Msk = 0x00F80000;

    // RGSR fields
    inline constexpr uint32_t RGSR_OF0_Pos = 0;
    inline constexpr uint32_t RGSR_OF0_Msk = 0x00000001;
    inline constexpr uint32_t RGSR_OF0 = (1U << 0);
    inline constexpr uint32_t RGSR_OF1_Pos = 1;
    inline constexpr uint32_t RGSR_OF1_Msk = 0x00000002;
    inline constexpr uint32_t RGSR_OF1 = (1U << 1);
    inline constexpr uint32_t RGSR_OF2_Pos = 2;
    inline constexpr uint32_t RGSR_OF2_Msk = 0x00000004;
    inline constexpr uint32_t RGSR_OF2 = (1U << 2);
    inline constexpr uint32_t RGSR_OF3_Pos = 3;
    inline constexpr uint32_t RGSR_OF3_Msk = 0x00000008;
    inline constexpr uint32_t RGSR_OF3 = (1U << 3);
    inline constexpr uint32_t RGSR_OF4_Pos = 4;
    inline constexpr uint32_t RGSR_OF4_Msk = 0x00000010;
    inline constexpr uint32_t RGSR_OF4 = (1U << 4);
    inline constexpr uint32_t RGSR_OF5_Pos = 5;
    inline constexpr uint32_t RGSR_OF5_Msk = 0x00000020;
    inline constexpr uint32_t RGSR_OF5 = (1U << 5);
    inline constexpr uint32_t RGSR_OF6_Pos = 6;
    inline constexpr uint32_t RGSR_OF6_Msk = 0x00000040;
    inline constexpr uint32_t RGSR_OF6 = (1U << 6);
    inline constexpr uint32_t RGSR_OF7_Pos = 7;
    inline constexpr uint32_t RGSR_OF7_Msk = 0x00000080;
    inline constexpr uint32_t RGSR_OF7 = (1U << 7);

    // RGCFR fields
    inline constexpr uint32_t RGCFR_COF0_Pos = 0;
    inline constexpr uint32_t RGCFR_COF0_Msk = 0x00000001;
    inline constexpr uint32_t RGCFR_COF0 = (1U << 0);
    inline constexpr uint32_t RGCFR_COF1_Pos = 1;
    inline constexpr uint32_t RGCFR_COF1_Msk = 0x00000002;
    inline constexpr uint32_t RGCFR_COF1 = (1U << 1);
    inline constexpr uint32_t RGCFR_COF2_Pos = 2;
    inline constexpr uint32_t RGCFR_COF2_Msk = 0x00000004;
    inline constexpr uint32_t RGCFR_COF2 = (1U << 2);
    inline constexpr uint32_t RGCFR_COF3_Pos = 3;
    inline constexpr uint32_t RGCFR_COF3_Msk = 0x00000008;
    inline constexpr uint32_t RGCFR_COF3 = (1U << 3);
    inline constexpr uint32_t RGCFR_COF4_Pos = 4;
    inline constexpr uint32_t RGCFR_COF4_Msk = 0x00000010;
    inline constexpr uint32_t RGCFR_COF4 = (1U << 4);
    inline constexpr uint32_t RGCFR_COF5_Pos = 5;
    inline constexpr uint32_t RGCFR_COF5_Msk = 0x00000020;
    inline constexpr uint32_t RGCFR_COF5 = (1U << 5);
    inline constexpr uint32_t RGCFR_COF6_Pos = 6;
    inline constexpr uint32_t RGCFR_COF6_Msk = 0x00000040;
    inline constexpr uint32_t RGCFR_COF6 = (1U << 6);
    inline constexpr uint32_t RGCFR_COF7_Pos = 7;
    inline constexpr uint32_t RGCFR_COF7_Msk = 0x00000080;
    inline constexpr uint32_t RGCFR_COF7 = (1U << 7);

} // namespace DMAMUX2

namespace DMA1 {
    // LISR fields
    inline constexpr uint32_t LISR_FEIF0_Pos = 0;
    inline constexpr uint32_t LISR_FEIF0_Msk = 0x00000001;
    inline constexpr uint32_t LISR_FEIF0 = (1U << 0);
    inline constexpr uint32_t LISR_DMEIF0_Pos = 2;
    inline constexpr uint32_t LISR_DMEIF0_Msk = 0x00000004;
    inline constexpr uint32_t LISR_DMEIF0 = (1U << 2);
    inline constexpr uint32_t LISR_TEIF0_Pos = 3;
    inline constexpr uint32_t LISR_TEIF0_Msk = 0x00000008;
    inline constexpr uint32_t LISR_TEIF0 = (1U << 3);
    inline constexpr uint32_t LISR_HTIF0_Pos = 4;
    inline constexpr uint32_t LISR_HTIF0_Msk = 0x00000010;
    inline constexpr uint32_t LISR_HTIF0 = (1U << 4);
    inline constexpr uint32_t LISR_TCIF0_Pos = 5;
    inline constexpr uint32_t LISR_TCIF0_Msk = 0x00000020;
    inline constexpr uint32_t LISR_TCIF0 = (1U << 5);
    inline constexpr uint32_t LISR_FEIF1_Pos = 6;
    inline constexpr uint32_t LISR_FEIF1_Msk = 0x00000040;
    inline constexpr uint32_t LISR_FEIF1 = (1U << 6);
    inline constexpr uint32_t LISR_DMEIF1_Pos = 8;
    inline constexpr uint32_t LISR_DMEIF1_Msk = 0x00000100;
    inline constexpr uint32_t LISR_DMEIF1 = (1U << 8);
    inline constexpr uint32_t LISR_TEIF1_Pos = 9;
    inline constexpr uint32_t LISR_TEIF1_Msk = 0x00000200;
    inline constexpr uint32_t LISR_TEIF1 = (1U << 9);
    inline constexpr uint32_t LISR_HTIF1_Pos = 10;
    inline constexpr uint32_t LISR_HTIF1_Msk = 0x00000400;
    inline constexpr uint32_t LISR_HTIF1 = (1U << 10);
    inline constexpr uint32_t LISR_TCIF1_Pos = 11;
    inline constexpr uint32_t LISR_TCIF1_Msk = 0x00000800;
    inline constexpr uint32_t LISR_TCIF1 = (1U << 11);
    inline constexpr uint32_t LISR_FEIF2_Pos = 16;
    inline constexpr uint32_t LISR_FEIF2_Msk = 0x00010000;
    inline constexpr uint32_t LISR_FEIF2 = (1U << 16);
    inline constexpr uint32_t LISR_DMEIF2_Pos = 18;
    inline constexpr uint32_t LISR_DMEIF2_Msk = 0x00040000;
    inline constexpr uint32_t LISR_DMEIF2 = (1U << 18);
    inline constexpr uint32_t LISR_TEIF2_Pos = 19;
    inline constexpr uint32_t LISR_TEIF2_Msk = 0x00080000;
    inline constexpr uint32_t LISR_TEIF2 = (1U << 19);
    inline constexpr uint32_t LISR_HTIF2_Pos = 20;
    inline constexpr uint32_t LISR_HTIF2_Msk = 0x00100000;
    inline constexpr uint32_t LISR_HTIF2 = (1U << 20);
    inline constexpr uint32_t LISR_TCIF2_Pos = 21;
    inline constexpr uint32_t LISR_TCIF2_Msk = 0x00200000;
    inline constexpr uint32_t LISR_TCIF2 = (1U << 21);
    inline constexpr uint32_t LISR_FEIF3_Pos = 22;
    inline constexpr uint32_t LISR_FEIF3_Msk = 0x00400000;
    inline constexpr uint32_t LISR_FEIF3 = (1U << 22);
    inline constexpr uint32_t LISR_DMEIF3_Pos = 24;
    inline constexpr uint32_t LISR_DMEIF3_Msk = 0x01000000;
    inline constexpr uint32_t LISR_DMEIF3 = (1U << 24);
    inline constexpr uint32_t LISR_TEIF3_Pos = 25;
    inline constexpr uint32_t LISR_TEIF3_Msk = 0x02000000;
    inline constexpr uint32_t LISR_TEIF3 = (1U << 25);
    inline constexpr uint32_t LISR_HTIF3_Pos = 26;
    inline constexpr uint32_t LISR_HTIF3_Msk = 0x04000000;
    inline constexpr uint32_t LISR_HTIF3 = (1U << 26);
    inline constexpr uint32_t LISR_TCIF3_Pos = 27;
    inline constexpr uint32_t LISR_TCIF3_Msk = 0x08000000;
    inline constexpr uint32_t LISR_TCIF3 = (1U << 27);

    // HISR fields
    inline constexpr uint32_t HISR_FEIF4_Pos = 0;
    inline constexpr uint32_t HISR_FEIF4_Msk = 0x00000001;
    inline constexpr uint32_t HISR_FEIF4 = (1U << 0);
    inline constexpr uint32_t HISR_DMEIF4_Pos = 2;
    inline constexpr uint32_t HISR_DMEIF4_Msk = 0x00000004;
    inline constexpr uint32_t HISR_DMEIF4 = (1U << 2);
    inline constexpr uint32_t HISR_TEIF4_Pos = 3;
    inline constexpr uint32_t HISR_TEIF4_Msk = 0x00000008;
    inline constexpr uint32_t HISR_TEIF4 = (1U << 3);
    inline constexpr uint32_t HISR_HTIF4_Pos = 4;
    inline constexpr uint32_t HISR_HTIF4_Msk = 0x00000010;
    inline constexpr uint32_t HISR_HTIF4 = (1U << 4);
    inline constexpr uint32_t HISR_TCIF4_Pos = 5;
    inline constexpr uint32_t HISR_TCIF4_Msk = 0x00000020;
    inline constexpr uint32_t HISR_TCIF4 = (1U << 5);
    inline constexpr uint32_t HISR_FEIF5_Pos = 6;
    inline constexpr uint32_t HISR_FEIF5_Msk = 0x00000040;
    inline constexpr uint32_t HISR_FEIF5 = (1U << 6);
    inline constexpr uint32_t HISR_DMEIF5_Pos = 8;
    inline constexpr uint32_t HISR_DMEIF5_Msk = 0x00000100;
    inline constexpr uint32_t HISR_DMEIF5 = (1U << 8);
    inline constexpr uint32_t HISR_TEIF5_Pos = 9;
    inline constexpr uint32_t HISR_TEIF5_Msk = 0x00000200;
    inline constexpr uint32_t HISR_TEIF5 = (1U << 9);
    inline constexpr uint32_t HISR_HTIF5_Pos = 10;
    inline constexpr uint32_t HISR_HTIF5_Msk = 0x00000400;
    inline constexpr uint32_t HISR_HTIF5 = (1U << 10);
    inline constexpr uint32_t HISR_TCIF5_Pos = 11;
    inline constexpr uint32_t HISR_TCIF5_Msk = 0x00000800;
    inline constexpr uint32_t HISR_TCIF5 = (1U << 11);
    inline constexpr uint32_t HISR_FEIF6_Pos = 16;
    inline constexpr uint32_t HISR_FEIF6_Msk = 0x00010000;
    inline constexpr uint32_t HISR_FEIF6 = (1U << 16);
    inline constexpr uint32_t HISR_DMEIF6_Pos = 18;
    inline constexpr uint32_t HISR_DMEIF6_Msk = 0x00040000;
    inline constexpr uint32_t HISR_DMEIF6 = (1U << 18);
    inline constexpr uint32_t HISR_TEIF6_Pos = 19;
    inline constexpr uint32_t HISR_TEIF6_Msk = 0x00080000;
    inline constexpr uint32_t HISR_TEIF6 = (1U << 19);
    inline constexpr uint32_t HISR_HTIF6_Pos = 20;
    inline constexpr uint32_t HISR_HTIF6_Msk = 0x00100000;
    inline constexpr uint32_t HISR_HTIF6 = (1U << 20);
    inline constexpr uint32_t HISR_TCIF6_Pos = 21;
    inline constexpr uint32_t HISR_TCIF6_Msk = 0x00200000;
    inline constexpr uint32_t HISR_TCIF6 = (1U << 21);
    inline constexpr uint32_t HISR_FEIF7_Pos = 22;
    inline constexpr uint32_t HISR_FEIF7_Msk = 0x00400000;
    inline constexpr uint32_t HISR_FEIF7 = (1U << 22);
    inline constexpr uint32_t HISR_DMEIF7_Pos = 24;
    inline constexpr uint32_t HISR_DMEIF7_Msk = 0x01000000;
    inline constexpr uint32_t HISR_DMEIF7 = (1U << 24);
    inline constexpr uint32_t HISR_TEIF7_Pos = 25;
    inline constexpr uint32_t HISR_TEIF7_Msk = 0x02000000;
    inline constexpr uint32_t HISR_TEIF7 = (1U << 25);
    inline constexpr uint32_t HISR_HTIF7_Pos = 26;
    inline constexpr uint32_t HISR_HTIF7_Msk = 0x04000000;
    inline constexpr uint32_t HISR_HTIF7 = (1U << 26);
    inline constexpr uint32_t HISR_TCIF7_Pos = 27;
    inline constexpr uint32_t HISR_TCIF7_Msk = 0x08000000;
    inline constexpr uint32_t HISR_TCIF7 = (1U << 27);

    // LIFCR fields
    inline constexpr uint32_t LIFCR_CFEIF0_Pos = 0;
    inline constexpr uint32_t LIFCR_CFEIF0_Msk = 0x00000001;
    inline constexpr uint32_t LIFCR_CFEIF0 = (1U << 0);
    inline constexpr uint32_t LIFCR_CDMEIF0_Pos = 2;
    inline constexpr uint32_t LIFCR_CDMEIF0_Msk = 0x00000004;
    inline constexpr uint32_t LIFCR_CDMEIF0 = (1U << 2);
    inline constexpr uint32_t LIFCR_CTEIF0_Pos = 3;
    inline constexpr uint32_t LIFCR_CTEIF0_Msk = 0x00000008;
    inline constexpr uint32_t LIFCR_CTEIF0 = (1U << 3);
    inline constexpr uint32_t LIFCR_CHTIF0_Pos = 4;
    inline constexpr uint32_t LIFCR_CHTIF0_Msk = 0x00000010;
    inline constexpr uint32_t LIFCR_CHTIF0 = (1U << 4);
    inline constexpr uint32_t LIFCR_CTCIF0_Pos = 5;
    inline constexpr uint32_t LIFCR_CTCIF0_Msk = 0x00000020;
    inline constexpr uint32_t LIFCR_CTCIF0 = (1U << 5);
    inline constexpr uint32_t LIFCR_CFEIF1_Pos = 6;
    inline constexpr uint32_t LIFCR_CFEIF1_Msk = 0x00000040;
    inline constexpr uint32_t LIFCR_CFEIF1 = (1U << 6);
    inline constexpr uint32_t LIFCR_CDMEIF1_Pos = 8;
    inline constexpr uint32_t LIFCR_CDMEIF1_Msk = 0x00000100;
    inline constexpr uint32_t LIFCR_CDMEIF1 = (1U << 8);
    inline constexpr uint32_t LIFCR_CTEIF1_Pos = 9;
    inline constexpr uint32_t LIFCR_CTEIF1_Msk = 0x00000200;
    inline constexpr uint32_t LIFCR_CTEIF1 = (1U << 9);
    inline constexpr uint32_t LIFCR_CHTIF1_Pos = 10;
    inline constexpr uint32_t LIFCR_CHTIF1_Msk = 0x00000400;
    inline constexpr uint32_t LIFCR_CHTIF1 = (1U << 10);
    inline constexpr uint32_t LIFCR_CTCIF1_Pos = 11;
    inline constexpr uint32_t LIFCR_CTCIF1_Msk = 0x00000800;
    inline constexpr uint32_t LIFCR_CTCIF1 = (1U << 11);
    inline constexpr uint32_t LIFCR_CFEIF2_Pos = 16;
    inline constexpr uint32_t LIFCR_CFEIF2_Msk = 0x00010000;
    inline constexpr uint32_t LIFCR_CFEIF2 = (1U << 16);
    inline constexpr uint32_t LIFCR_CDMEIF2_Pos = 18;
    inline constexpr uint32_t LIFCR_CDMEIF2_Msk = 0x00040000;
    inline constexpr uint32_t LIFCR_CDMEIF2 = (1U << 18);
    inline constexpr uint32_t LIFCR_CTEIF2_Pos = 19;
    inline constexpr uint32_t LIFCR_CTEIF2_Msk = 0x00080000;
    inline constexpr uint32_t LIFCR_CTEIF2 = (1U << 19);
    inline constexpr uint32_t LIFCR_CHTIF2_Pos = 20;
    inline constexpr uint32_t LIFCR_CHTIF2_Msk = 0x00100000;
    inline constexpr uint32_t LIFCR_CHTIF2 = (1U << 20);
    inline constexpr uint32_t LIFCR_CTCIF2_Pos = 21;
    inline constexpr uint32_t LIFCR_CTCIF2_Msk = 0x00200000;
    inline constexpr uint32_t LIFCR_CTCIF2 = (1U << 21);
    inline constexpr uint32_t LIFCR_CFEIF3_Pos = 22;
    inline constexpr uint32_t LIFCR_CFEIF3_Msk = 0x00400000;
    inline constexpr uint32_t LIFCR_CFEIF3 = (1U << 22);
    inline constexpr uint32_t LIFCR_CDMEIF3_Pos = 24;
    inline constexpr uint32_t LIFCR_CDMEIF3_Msk = 0x01000000;
    inline constexpr uint32_t LIFCR_CDMEIF3 = (1U << 24);
    inline constexpr uint32_t LIFCR_CTEIF3_Pos = 25;
    inline constexpr uint32_t LIFCR_CTEIF3_Msk = 0x02000000;
    inline constexpr uint32_t LIFCR_CTEIF3 = (1U << 25);
    inline constexpr uint32_t LIFCR_CHTIF3_Pos = 26;
    inline constexpr uint32_t LIFCR_CHTIF3_Msk = 0x04000000;
    inline constexpr uint32_t LIFCR_CHTIF3 = (1U << 26);
    inline constexpr uint32_t LIFCR_CTCIF3_Pos = 27;
    inline constexpr uint32_t LIFCR_CTCIF3_Msk = 0x08000000;
    inline constexpr uint32_t LIFCR_CTCIF3 = (1U << 27);

    // HIFCR fields
    inline constexpr uint32_t HIFCR_CFEIF4_Pos = 0;
    inline constexpr uint32_t HIFCR_CFEIF4_Msk = 0x00000001;
    inline constexpr uint32_t HIFCR_CFEIF4 = (1U << 0);
    inline constexpr uint32_t HIFCR_CDMEIF4_Pos = 2;
    inline constexpr uint32_t HIFCR_CDMEIF4_Msk = 0x00000004;
    inline constexpr uint32_t HIFCR_CDMEIF4 = (1U << 2);
    inline constexpr uint32_t HIFCR_CTEIF4_Pos = 3;
    inline constexpr uint32_t HIFCR_CTEIF4_Msk = 0x00000008;
    inline constexpr uint32_t HIFCR_CTEIF4 = (1U << 3);
    inline constexpr uint32_t HIFCR_CHTIF4_Pos = 4;
    inline constexpr uint32_t HIFCR_CHTIF4_Msk = 0x00000010;
    inline constexpr uint32_t HIFCR_CHTIF4 = (1U << 4);
    inline constexpr uint32_t HIFCR_CTCIF4_Pos = 5;
    inline constexpr uint32_t HIFCR_CTCIF4_Msk = 0x00000020;
    inline constexpr uint32_t HIFCR_CTCIF4 = (1U << 5);
    inline constexpr uint32_t HIFCR_CFEIF5_Pos = 6;
    inline constexpr uint32_t HIFCR_CFEIF5_Msk = 0x00000040;
    inline constexpr uint32_t HIFCR_CFEIF5 = (1U << 6);
    inline constexpr uint32_t HIFCR_CDMEIF5_Pos = 8;
    inline constexpr uint32_t HIFCR_CDMEIF5_Msk = 0x00000100;
    inline constexpr uint32_t HIFCR_CDMEIF5 = (1U << 8);
    inline constexpr uint32_t HIFCR_CTEIF5_Pos = 9;
    inline constexpr uint32_t HIFCR_CTEIF5_Msk = 0x00000200;
    inline constexpr uint32_t HIFCR_CTEIF5 = (1U << 9);
    inline constexpr uint32_t HIFCR_CHTIF5_Pos = 10;
    inline constexpr uint32_t HIFCR_CHTIF5_Msk = 0x00000400;
    inline constexpr uint32_t HIFCR_CHTIF5 = (1U << 10);
    inline constexpr uint32_t HIFCR_CTCIF5_Pos = 11;
    inline constexpr uint32_t HIFCR_CTCIF5_Msk = 0x00000800;
    inline constexpr uint32_t HIFCR_CTCIF5 = (1U << 11);
    inline constexpr uint32_t HIFCR_CFEIF6_Pos = 16;
    inline constexpr uint32_t HIFCR_CFEIF6_Msk = 0x00010000;
    inline constexpr uint32_t HIFCR_CFEIF6 = (1U << 16);
    inline constexpr uint32_t HIFCR_CDMEIF6_Pos = 18;
    inline constexpr uint32_t HIFCR_CDMEIF6_Msk = 0x00040000;
    inline constexpr uint32_t HIFCR_CDMEIF6 = (1U << 18);
    inline constexpr uint32_t HIFCR_CTEIF6_Pos = 19;
    inline constexpr uint32_t HIFCR_CTEIF6_Msk = 0x00080000;
    inline constexpr uint32_t HIFCR_CTEIF6 = (1U << 19);
    inline constexpr uint32_t HIFCR_CHTIF6_Pos = 20;
    inline constexpr uint32_t HIFCR_CHTIF6_Msk = 0x00100000;
    inline constexpr uint32_t HIFCR_CHTIF6 = (1U << 20);
    inline constexpr uint32_t HIFCR_CTCIF6_Pos = 21;
    inline constexpr uint32_t HIFCR_CTCIF6_Msk = 0x00200000;
    inline constexpr uint32_t HIFCR_CTCIF6 = (1U << 21);
    inline constexpr uint32_t HIFCR_CFEIF7_Pos = 22;
    inline constexpr uint32_t HIFCR_CFEIF7_Msk = 0x00400000;
    inline constexpr uint32_t HIFCR_CFEIF7 = (1U << 22);
    inline constexpr uint32_t HIFCR_CDMEIF7_Pos = 24;
    inline constexpr uint32_t HIFCR_CDMEIF7_Msk = 0x01000000;
    inline constexpr uint32_t HIFCR_CDMEIF7 = (1U << 24);
    inline constexpr uint32_t HIFCR_CTEIF7_Pos = 25;
    inline constexpr uint32_t HIFCR_CTEIF7_Msk = 0x02000000;
    inline constexpr uint32_t HIFCR_CTEIF7 = (1U << 25);
    inline constexpr uint32_t HIFCR_CHTIF7_Pos = 26;
    inline constexpr uint32_t HIFCR_CHTIF7_Msk = 0x04000000;
    inline constexpr uint32_t HIFCR_CHTIF7 = (1U << 26);
    inline constexpr uint32_t HIFCR_CTCIF7_Pos = 27;
    inline constexpr uint32_t HIFCR_CTCIF7_Msk = 0x08000000;
    inline constexpr uint32_t HIFCR_CTCIF7 = (1U << 27);

    // S0CR fields
    inline constexpr uint32_t S0CR_EN_Pos = 0;
    inline constexpr uint32_t S0CR_EN_Msk = 0x00000001;
    inline constexpr uint32_t S0CR_EN = (1U << 0);
    inline constexpr uint32_t S0CR_DMEIE_Pos = 1;
    inline constexpr uint32_t S0CR_DMEIE_Msk = 0x00000002;
    inline constexpr uint32_t S0CR_DMEIE = (1U << 1);
    inline constexpr uint32_t S0CR_TEIE_Pos = 2;
    inline constexpr uint32_t S0CR_TEIE_Msk = 0x00000004;
    inline constexpr uint32_t S0CR_TEIE = (1U << 2);
    inline constexpr uint32_t S0CR_HTIE_Pos = 3;
    inline constexpr uint32_t S0CR_HTIE_Msk = 0x00000008;
    inline constexpr uint32_t S0CR_HTIE = (1U << 3);
    inline constexpr uint32_t S0CR_TCIE_Pos = 4;
    inline constexpr uint32_t S0CR_TCIE_Msk = 0x00000010;
    inline constexpr uint32_t S0CR_TCIE = (1U << 4);
    inline constexpr uint32_t S0CR_PFCTRL_Pos = 5;
    inline constexpr uint32_t S0CR_PFCTRL_Msk = 0x00000020;
    inline constexpr uint32_t S0CR_PFCTRL = (1U << 5);
    inline constexpr uint32_t S0CR_DIR_Pos = 6;
    inline constexpr uint32_t S0CR_DIR_Msk = 0x000000C0;
    inline constexpr uint32_t S0CR_CIRC_Pos = 8;
    inline constexpr uint32_t S0CR_CIRC_Msk = 0x00000100;
    inline constexpr uint32_t S0CR_CIRC = (1U << 8);
    inline constexpr uint32_t S0CR_PINC_Pos = 9;
    inline constexpr uint32_t S0CR_PINC_Msk = 0x00000200;
    inline constexpr uint32_t S0CR_PINC = (1U << 9);
    inline constexpr uint32_t S0CR_MINC_Pos = 10;
    inline constexpr uint32_t S0CR_MINC_Msk = 0x00000400;
    inline constexpr uint32_t S0CR_MINC = (1U << 10);
    inline constexpr uint32_t S0CR_PSIZE_Pos = 11;
    inline constexpr uint32_t S0CR_PSIZE_Msk = 0x00001800;
    inline constexpr uint32_t S0CR_MSIZE_Pos = 13;
    inline constexpr uint32_t S0CR_MSIZE_Msk = 0x00006000;
    inline constexpr uint32_t S0CR_PINCOS_Pos = 15;
    inline constexpr uint32_t S0CR_PINCOS_Msk = 0x00008000;
    inline constexpr uint32_t S0CR_PINCOS = (1U << 15);
    inline constexpr uint32_t S0CR_PL_Pos = 16;
    inline constexpr uint32_t S0CR_PL_Msk = 0x00030000;
    inline constexpr uint32_t S0CR_DBM_Pos = 18;
    inline constexpr uint32_t S0CR_DBM_Msk = 0x00040000;
    inline constexpr uint32_t S0CR_DBM = (1U << 18);
    inline constexpr uint32_t S0CR_CT_Pos = 19;
    inline constexpr uint32_t S0CR_CT_Msk = 0x00080000;
    inline constexpr uint32_t S0CR_CT = (1U << 19);
    inline constexpr uint32_t S0CR_PBURST_Pos = 21;
    inline constexpr uint32_t S0CR_PBURST_Msk = 0x00600000;
    inline constexpr uint32_t S0CR_MBURST_Pos = 23;
    inline constexpr uint32_t S0CR_MBURST_Msk = 0x01800000;

    // S0NDTR fields
    inline constexpr uint32_t S0NDTR_NDT_Pos = 0;
    inline constexpr uint32_t S0NDTR_NDT_Msk = 0x0000FFFF;

    // S0PAR fields
    inline constexpr uint32_t S0PAR_PA_Pos = 0;
    inline constexpr uint32_t S0PAR_PA_Msk = 0xFFFFFFFF;

    // S0M0AR fields
    inline constexpr uint32_t S0M0AR_M0A_Pos = 0;
    inline constexpr uint32_t S0M0AR_M0A_Msk = 0xFFFFFFFF;

    // S0M1AR fields
    inline constexpr uint32_t S0M1AR_M1A_Pos = 0;
    inline constexpr uint32_t S0M1AR_M1A_Msk = 0xFFFFFFFF;

    // S0FCR fields
    inline constexpr uint32_t S0FCR_FTH_Pos = 0;
    inline constexpr uint32_t S0FCR_FTH_Msk = 0x00000003;
    inline constexpr uint32_t S0FCR_DMDIS_Pos = 2;
    inline constexpr uint32_t S0FCR_DMDIS_Msk = 0x00000004;
    inline constexpr uint32_t S0FCR_DMDIS = (1U << 2);
    inline constexpr uint32_t S0FCR_FS_Pos = 3;
    inline constexpr uint32_t S0FCR_FS_Msk = 0x00000038;
    inline constexpr uint32_t S0FCR_FEIE_Pos = 7;
    inline constexpr uint32_t S0FCR_FEIE_Msk = 0x00000080;
    inline constexpr uint32_t S0FCR_FEIE = (1U << 7);

    // S1CR fields
    inline constexpr uint32_t S1CR_EN_Pos = 0;
    inline constexpr uint32_t S1CR_EN_Msk = 0x00000001;
    inline constexpr uint32_t S1CR_EN = (1U << 0);
    inline constexpr uint32_t S1CR_DMEIE_Pos = 1;
    inline constexpr uint32_t S1CR_DMEIE_Msk = 0x00000002;
    inline constexpr uint32_t S1CR_DMEIE = (1U << 1);
    inline constexpr uint32_t S1CR_TEIE_Pos = 2;
    inline constexpr uint32_t S1CR_TEIE_Msk = 0x00000004;
    inline constexpr uint32_t S1CR_TEIE = (1U << 2);
    inline constexpr uint32_t S1CR_HTIE_Pos = 3;
    inline constexpr uint32_t S1CR_HTIE_Msk = 0x00000008;
    inline constexpr uint32_t S1CR_HTIE = (1U << 3);
    inline constexpr uint32_t S1CR_TCIE_Pos = 4;
    inline constexpr uint32_t S1CR_TCIE_Msk = 0x00000010;
    inline constexpr uint32_t S1CR_TCIE = (1U << 4);
    inline constexpr uint32_t S1CR_PFCTRL_Pos = 5;
    inline constexpr uint32_t S1CR_PFCTRL_Msk = 0x00000020;
    inline constexpr uint32_t S1CR_PFCTRL = (1U << 5);
    inline constexpr uint32_t S1CR_DIR_Pos = 6;
    inline constexpr uint32_t S1CR_DIR_Msk = 0x000000C0;
    inline constexpr uint32_t S1CR_CIRC_Pos = 8;
    inline constexpr uint32_t S1CR_CIRC_Msk = 0x00000100;
    inline constexpr uint32_t S1CR_CIRC = (1U << 8);
    inline constexpr uint32_t S1CR_PINC_Pos = 9;
    inline constexpr uint32_t S1CR_PINC_Msk = 0x00000200;
    inline constexpr uint32_t S1CR_PINC = (1U << 9);
    inline constexpr uint32_t S1CR_MINC_Pos = 10;
    inline constexpr uint32_t S1CR_MINC_Msk = 0x00000400;
    inline constexpr uint32_t S1CR_MINC = (1U << 10);
    inline constexpr uint32_t S1CR_PSIZE_Pos = 11;
    inline constexpr uint32_t S1CR_PSIZE_Msk = 0x00001800;
    inline constexpr uint32_t S1CR_MSIZE_Pos = 13;
    inline constexpr uint32_t S1CR_MSIZE_Msk = 0x00006000;
    inline constexpr uint32_t S1CR_PINCOS_Pos = 15;
    inline constexpr uint32_t S1CR_PINCOS_Msk = 0x00008000;
    inline constexpr uint32_t S1CR_PINCOS = (1U << 15);
    inline constexpr uint32_t S1CR_PL_Pos = 16;
    inline constexpr uint32_t S1CR_PL_Msk = 0x00030000;
    inline constexpr uint32_t S1CR_DBM_Pos = 18;
    inline constexpr uint32_t S1CR_DBM_Msk = 0x00040000;
    inline constexpr uint32_t S1CR_DBM = (1U << 18);
    inline constexpr uint32_t S1CR_CT_Pos = 19;
    inline constexpr uint32_t S1CR_CT_Msk = 0x00080000;
    inline constexpr uint32_t S1CR_CT = (1U << 19);
    inline constexpr uint32_t S1CR_ACK_Pos = 20;
    inline constexpr uint32_t S1CR_ACK_Msk = 0x00100000;
    inline constexpr uint32_t S1CR_ACK = (1U << 20);
    inline constexpr uint32_t S1CR_PBURST_Pos = 21;
    inline constexpr uint32_t S1CR_PBURST_Msk = 0x00600000;
    inline constexpr uint32_t S1CR_MBURST_Pos = 23;
    inline constexpr uint32_t S1CR_MBURST_Msk = 0x01800000;

    // S1NDTR fields
    inline constexpr uint32_t S1NDTR_NDT_Pos = 0;
    inline constexpr uint32_t S1NDTR_NDT_Msk = 0x0000FFFF;

    // S1PAR fields
    inline constexpr uint32_t S1PAR_PA_Pos = 0;
    inline constexpr uint32_t S1PAR_PA_Msk = 0xFFFFFFFF;

    // S1M0AR fields
    inline constexpr uint32_t S1M0AR_M0A_Pos = 0;
    inline constexpr uint32_t S1M0AR_M0A_Msk = 0xFFFFFFFF;

    // S1M1AR fields
    inline constexpr uint32_t S1M1AR_M1A_Pos = 0;
    inline constexpr uint32_t S1M1AR_M1A_Msk = 0xFFFFFFFF;

    // S1FCR fields
    inline constexpr uint32_t S1FCR_FTH_Pos = 0;
    inline constexpr uint32_t S1FCR_FTH_Msk = 0x00000003;
    inline constexpr uint32_t S1FCR_DMDIS_Pos = 2;
    inline constexpr uint32_t S1FCR_DMDIS_Msk = 0x00000004;
    inline constexpr uint32_t S1FCR_DMDIS = (1U << 2);
    inline constexpr uint32_t S1FCR_FS_Pos = 3;
    inline constexpr uint32_t S1FCR_FS_Msk = 0x00000038;
    inline constexpr uint32_t S1FCR_FEIE_Pos = 7;
    inline constexpr uint32_t S1FCR_FEIE_Msk = 0x00000080;
    inline constexpr uint32_t S1FCR_FEIE = (1U << 7);

    // S2CR fields
    inline constexpr uint32_t S2CR_EN_Pos = 0;
    inline constexpr uint32_t S2CR_EN_Msk = 0x00000001;
    inline constexpr uint32_t S2CR_EN = (1U << 0);
    inline constexpr uint32_t S2CR_DMEIE_Pos = 1;
    inline constexpr uint32_t S2CR_DMEIE_Msk = 0x00000002;
    inline constexpr uint32_t S2CR_DMEIE = (1U << 1);
    inline constexpr uint32_t S2CR_TEIE_Pos = 2;
    inline constexpr uint32_t S2CR_TEIE_Msk = 0x00000004;
    inline constexpr uint32_t S2CR_TEIE = (1U << 2);
    inline constexpr uint32_t S2CR_HTIE_Pos = 3;
    inline constexpr uint32_t S2CR_HTIE_Msk = 0x00000008;
    inline constexpr uint32_t S2CR_HTIE = (1U << 3);
    inline constexpr uint32_t S2CR_TCIE_Pos = 4;
    inline constexpr uint32_t S2CR_TCIE_Msk = 0x00000010;
    inline constexpr uint32_t S2CR_TCIE = (1U << 4);
    inline constexpr uint32_t S2CR_PFCTRL_Pos = 5;
    inline constexpr uint32_t S2CR_PFCTRL_Msk = 0x00000020;
    inline constexpr uint32_t S2CR_PFCTRL = (1U << 5);
    inline constexpr uint32_t S2CR_DIR_Pos = 6;
    inline constexpr uint32_t S2CR_DIR_Msk = 0x000000C0;
    inline constexpr uint32_t S2CR_CIRC_Pos = 8;
    inline constexpr uint32_t S2CR_CIRC_Msk = 0x00000100;
    inline constexpr uint32_t S2CR_CIRC = (1U << 8);
    inline constexpr uint32_t S2CR_PINC_Pos = 9;
    inline constexpr uint32_t S2CR_PINC_Msk = 0x00000200;
    inline constexpr uint32_t S2CR_PINC = (1U << 9);
    inline constexpr uint32_t S2CR_MINC_Pos = 10;
    inline constexpr uint32_t S2CR_MINC_Msk = 0x00000400;
    inline constexpr uint32_t S2CR_MINC = (1U << 10);
    inline constexpr uint32_t S2CR_PSIZE_Pos = 11;
    inline constexpr uint32_t S2CR_PSIZE_Msk = 0x00001800;
    inline constexpr uint32_t S2CR_MSIZE_Pos = 13;
    inline constexpr uint32_t S2CR_MSIZE_Msk = 0x00006000;
    inline constexpr uint32_t S2CR_PINCOS_Pos = 15;
    inline constexpr uint32_t S2CR_PINCOS_Msk = 0x00008000;
    inline constexpr uint32_t S2CR_PINCOS = (1U << 15);
    inline constexpr uint32_t S2CR_PL_Pos = 16;
    inline constexpr uint32_t S2CR_PL_Msk = 0x00030000;
    inline constexpr uint32_t S2CR_DBM_Pos = 18;
    inline constexpr uint32_t S2CR_DBM_Msk = 0x00040000;
    inline constexpr uint32_t S2CR_DBM = (1U << 18);
    inline constexpr uint32_t S2CR_CT_Pos = 19;
    inline constexpr uint32_t S2CR_CT_Msk = 0x00080000;
    inline constexpr uint32_t S2CR_CT = (1U << 19);
    inline constexpr uint32_t S2CR_ACK_Pos = 20;
    inline constexpr uint32_t S2CR_ACK_Msk = 0x00100000;
    inline constexpr uint32_t S2CR_ACK = (1U << 20);
    inline constexpr uint32_t S2CR_PBURST_Pos = 21;
    inline constexpr uint32_t S2CR_PBURST_Msk = 0x00600000;
    inline constexpr uint32_t S2CR_MBURST_Pos = 23;
    inline constexpr uint32_t S2CR_MBURST_Msk = 0x01800000;

    // S2NDTR fields
    inline constexpr uint32_t S2NDTR_NDT_Pos = 0;
    inline constexpr uint32_t S2NDTR_NDT_Msk = 0x0000FFFF;

    // S2PAR fields
    inline constexpr uint32_t S2PAR_PA_Pos = 0;
    inline constexpr uint32_t S2PAR_PA_Msk = 0xFFFFFFFF;

    // S2M0AR fields
    inline constexpr uint32_t S2M0AR_M0A_Pos = 0;
    inline constexpr uint32_t S2M0AR_M0A_Msk = 0xFFFFFFFF;

    // S2M1AR fields
    inline constexpr uint32_t S2M1AR_M1A_Pos = 0;
    inline constexpr uint32_t S2M1AR_M1A_Msk = 0xFFFFFFFF;

    // S2FCR fields
    inline constexpr uint32_t S2FCR_FTH_Pos = 0;
    inline constexpr uint32_t S2FCR_FTH_Msk = 0x00000003;
    inline constexpr uint32_t S2FCR_DMDIS_Pos = 2;
    inline constexpr uint32_t S2FCR_DMDIS_Msk = 0x00000004;
    inline constexpr uint32_t S2FCR_DMDIS = (1U << 2);
    inline constexpr uint32_t S2FCR_FS_Pos = 3;
    inline constexpr uint32_t S2FCR_FS_Msk = 0x00000038;
    inline constexpr uint32_t S2FCR_FEIE_Pos = 7;
    inline constexpr uint32_t S2FCR_FEIE_Msk = 0x00000080;
    inline constexpr uint32_t S2FCR_FEIE = (1U << 7);

    // S3CR fields
    inline constexpr uint32_t S3CR_EN_Pos = 0;
    inline constexpr uint32_t S3CR_EN_Msk = 0x00000001;
    inline constexpr uint32_t S3CR_EN = (1U << 0);
    inline constexpr uint32_t S3CR_DMEIE_Pos = 1;
    inline constexpr uint32_t S3CR_DMEIE_Msk = 0x00000002;
    inline constexpr uint32_t S3CR_DMEIE = (1U << 1);
    inline constexpr uint32_t S3CR_TEIE_Pos = 2;
    inline constexpr uint32_t S3CR_TEIE_Msk = 0x00000004;
    inline constexpr uint32_t S3CR_TEIE = (1U << 2);
    inline constexpr uint32_t S3CR_HTIE_Pos = 3;
    inline constexpr uint32_t S3CR_HTIE_Msk = 0x00000008;
    inline constexpr uint32_t S3CR_HTIE = (1U << 3);
    inline constexpr uint32_t S3CR_TCIE_Pos = 4;
    inline constexpr uint32_t S3CR_TCIE_Msk = 0x00000010;
    inline constexpr uint32_t S3CR_TCIE = (1U << 4);
    inline constexpr uint32_t S3CR_PFCTRL_Pos = 5;
    inline constexpr uint32_t S3CR_PFCTRL_Msk = 0x00000020;
    inline constexpr uint32_t S3CR_PFCTRL = (1U << 5);
    inline constexpr uint32_t S3CR_DIR_Pos = 6;
    inline constexpr uint32_t S3CR_DIR_Msk = 0x000000C0;
    inline constexpr uint32_t S3CR_CIRC_Pos = 8;
    inline constexpr uint32_t S3CR_CIRC_Msk = 0x00000100;
    inline constexpr uint32_t S3CR_CIRC = (1U << 8);
    inline constexpr uint32_t S3CR_PINC_Pos = 9;
    inline constexpr uint32_t S3CR_PINC_Msk = 0x00000200;
    inline constexpr uint32_t S3CR_PINC = (1U << 9);
    inline constexpr uint32_t S3CR_MINC_Pos = 10;
    inline constexpr uint32_t S3CR_MINC_Msk = 0x00000400;
    inline constexpr uint32_t S3CR_MINC = (1U << 10);
    inline constexpr uint32_t S3CR_PSIZE_Pos = 11;
    inline constexpr uint32_t S3CR_PSIZE_Msk = 0x00001800;
    inline constexpr uint32_t S3CR_MSIZE_Pos = 13;
    inline constexpr uint32_t S3CR_MSIZE_Msk = 0x00006000;
    inline constexpr uint32_t S3CR_PINCOS_Pos = 15;
    inline constexpr uint32_t S3CR_PINCOS_Msk = 0x00008000;
    inline constexpr uint32_t S3CR_PINCOS = (1U << 15);
    inline constexpr uint32_t S3CR_PL_Pos = 16;
    inline constexpr uint32_t S3CR_PL_Msk = 0x00030000;
    inline constexpr uint32_t S3CR_DBM_Pos = 18;
    inline constexpr uint32_t S3CR_DBM_Msk = 0x00040000;
    inline constexpr uint32_t S3CR_DBM = (1U << 18);
    inline constexpr uint32_t S3CR_CT_Pos = 19;
    inline constexpr uint32_t S3CR_CT_Msk = 0x00080000;
    inline constexpr uint32_t S3CR_CT = (1U << 19);
    inline constexpr uint32_t S3CR_ACK_Pos = 20;
    inline constexpr uint32_t S3CR_ACK_Msk = 0x00100000;
    inline constexpr uint32_t S3CR_ACK = (1U << 20);
    inline constexpr uint32_t S3CR_PBURST_Pos = 21;
    inline constexpr uint32_t S3CR_PBURST_Msk = 0x00600000;
    inline constexpr uint32_t S3CR_MBURST_Pos = 23;
    inline constexpr uint32_t S3CR_MBURST_Msk = 0x01800000;

    // S3NDTR fields
    inline constexpr uint32_t S3NDTR_NDT_Pos = 0;
    inline constexpr uint32_t S3NDTR_NDT_Msk = 0x0000FFFF;

    // S3PAR fields
    inline constexpr uint32_t S3PAR_PA_Pos = 0;
    inline constexpr uint32_t S3PAR_PA_Msk = 0xFFFFFFFF;

    // S3M0AR fields
    inline constexpr uint32_t S3M0AR_M0A_Pos = 0;
    inline constexpr uint32_t S3M0AR_M0A_Msk = 0xFFFFFFFF;

    // S3M1AR fields
    inline constexpr uint32_t S3M1AR_M1A_Pos = 0;
    inline constexpr uint32_t S3M1AR_M1A_Msk = 0xFFFFFFFF;

    // S3FCR fields
    inline constexpr uint32_t S3FCR_FTH_Pos = 0;
    inline constexpr uint32_t S3FCR_FTH_Msk = 0x00000003;
    inline constexpr uint32_t S3FCR_DMDIS_Pos = 2;
    inline constexpr uint32_t S3FCR_DMDIS_Msk = 0x00000004;
    inline constexpr uint32_t S3FCR_DMDIS = (1U << 2);
    inline constexpr uint32_t S3FCR_FS_Pos = 3;
    inline constexpr uint32_t S3FCR_FS_Msk = 0x00000038;
    inline constexpr uint32_t S3FCR_FEIE_Pos = 7;
    inline constexpr uint32_t S3FCR_FEIE_Msk = 0x00000080;
    inline constexpr uint32_t S3FCR_FEIE = (1U << 7);

    // S4CR fields
    inline constexpr uint32_t S4CR_EN_Pos = 0;
    inline constexpr uint32_t S4CR_EN_Msk = 0x00000001;
    inline constexpr uint32_t S4CR_EN = (1U << 0);
    inline constexpr uint32_t S4CR_DMEIE_Pos = 1;
    inline constexpr uint32_t S4CR_DMEIE_Msk = 0x00000002;
    inline constexpr uint32_t S4CR_DMEIE = (1U << 1);
    inline constexpr uint32_t S4CR_TEIE_Pos = 2;
    inline constexpr uint32_t S4CR_TEIE_Msk = 0x00000004;
    inline constexpr uint32_t S4CR_TEIE = (1U << 2);
    inline constexpr uint32_t S4CR_HTIE_Pos = 3;
    inline constexpr uint32_t S4CR_HTIE_Msk = 0x00000008;
    inline constexpr uint32_t S4CR_HTIE = (1U << 3);
    inline constexpr uint32_t S4CR_TCIE_Pos = 4;
    inline constexpr uint32_t S4CR_TCIE_Msk = 0x00000010;
    inline constexpr uint32_t S4CR_TCIE = (1U << 4);
    inline constexpr uint32_t S4CR_PFCTRL_Pos = 5;
    inline constexpr uint32_t S4CR_PFCTRL_Msk = 0x00000020;
    inline constexpr uint32_t S4CR_PFCTRL = (1U << 5);
    inline constexpr uint32_t S4CR_DIR_Pos = 6;
    inline constexpr uint32_t S4CR_DIR_Msk = 0x000000C0;
    inline constexpr uint32_t S4CR_CIRC_Pos = 8;
    inline constexpr uint32_t S4CR_CIRC_Msk = 0x00000100;
    inline constexpr uint32_t S4CR_CIRC = (1U << 8);
    inline constexpr uint32_t S4CR_PINC_Pos = 9;
    inline constexpr uint32_t S4CR_PINC_Msk = 0x00000200;
    inline constexpr uint32_t S4CR_PINC = (1U << 9);
    inline constexpr uint32_t S4CR_MINC_Pos = 10;
    inline constexpr uint32_t S4CR_MINC_Msk = 0x00000400;
    inline constexpr uint32_t S4CR_MINC = (1U << 10);
    inline constexpr uint32_t S4CR_PSIZE_Pos = 11;
    inline constexpr uint32_t S4CR_PSIZE_Msk = 0x00001800;
    inline constexpr uint32_t S4CR_MSIZE_Pos = 13;
    inline constexpr uint32_t S4CR_MSIZE_Msk = 0x00006000;
    inline constexpr uint32_t S4CR_PINCOS_Pos = 15;
    inline constexpr uint32_t S4CR_PINCOS_Msk = 0x00008000;
    inline constexpr uint32_t S4CR_PINCOS = (1U << 15);
    inline constexpr uint32_t S4CR_PL_Pos = 16;
    inline constexpr uint32_t S4CR_PL_Msk = 0x00030000;
    inline constexpr uint32_t S4CR_DBM_Pos = 18;
    inline constexpr uint32_t S4CR_DBM_Msk = 0x00040000;
    inline constexpr uint32_t S4CR_DBM = (1U << 18);
    inline constexpr uint32_t S4CR_CT_Pos = 19;
    inline constexpr uint32_t S4CR_CT_Msk = 0x00080000;
    inline constexpr uint32_t S4CR_CT = (1U << 19);
    inline constexpr uint32_t S4CR_ACK_Pos = 20;
    inline constexpr uint32_t S4CR_ACK_Msk = 0x00100000;
    inline constexpr uint32_t S4CR_ACK = (1U << 20);
    inline constexpr uint32_t S4CR_PBURST_Pos = 21;
    inline constexpr uint32_t S4CR_PBURST_Msk = 0x00600000;
    inline constexpr uint32_t S4CR_MBURST_Pos = 23;
    inline constexpr uint32_t S4CR_MBURST_Msk = 0x01800000;

    // S4NDTR fields
    inline constexpr uint32_t S4NDTR_NDT_Pos = 0;
    inline constexpr uint32_t S4NDTR_NDT_Msk = 0x0000FFFF;

    // S4PAR fields
    inline constexpr uint32_t S4PAR_PA_Pos = 0;
    inline constexpr uint32_t S4PAR_PA_Msk = 0xFFFFFFFF;

    // S4M0AR fields
    inline constexpr uint32_t S4M0AR_M0A_Pos = 0;
    inline constexpr uint32_t S4M0AR_M0A_Msk = 0xFFFFFFFF;

    // S4M1AR fields
    inline constexpr uint32_t S4M1AR_M1A_Pos = 0;
    inline constexpr uint32_t S4M1AR_M1A_Msk = 0xFFFFFFFF;

    // S4FCR fields
    inline constexpr uint32_t S4FCR_FTH_Pos = 0;
    inline constexpr uint32_t S4FCR_FTH_Msk = 0x00000003;
    inline constexpr uint32_t S4FCR_DMDIS_Pos = 2;
    inline constexpr uint32_t S4FCR_DMDIS_Msk = 0x00000004;
    inline constexpr uint32_t S4FCR_DMDIS = (1U << 2);
    inline constexpr uint32_t S4FCR_FS_Pos = 3;
    inline constexpr uint32_t S4FCR_FS_Msk = 0x00000038;
    inline constexpr uint32_t S4FCR_FEIE_Pos = 7;
    inline constexpr uint32_t S4FCR_FEIE_Msk = 0x00000080;
    inline constexpr uint32_t S4FCR_FEIE = (1U << 7);

    // S5CR fields
    inline constexpr uint32_t S5CR_EN_Pos = 0;
    inline constexpr uint32_t S5CR_EN_Msk = 0x00000001;
    inline constexpr uint32_t S5CR_EN = (1U << 0);
    inline constexpr uint32_t S5CR_DMEIE_Pos = 1;
    inline constexpr uint32_t S5CR_DMEIE_Msk = 0x00000002;
    inline constexpr uint32_t S5CR_DMEIE = (1U << 1);
    inline constexpr uint32_t S5CR_TEIE_Pos = 2;
    inline constexpr uint32_t S5CR_TEIE_Msk = 0x00000004;
    inline constexpr uint32_t S5CR_TEIE = (1U << 2);
    inline constexpr uint32_t S5CR_HTIE_Pos = 3;
    inline constexpr uint32_t S5CR_HTIE_Msk = 0x00000008;
    inline constexpr uint32_t S5CR_HTIE = (1U << 3);
    inline constexpr uint32_t S5CR_TCIE_Pos = 4;
    inline constexpr uint32_t S5CR_TCIE_Msk = 0x00000010;
    inline constexpr uint32_t S5CR_TCIE = (1U << 4);
    inline constexpr uint32_t S5CR_PFCTRL_Pos = 5;
    inline constexpr uint32_t S5CR_PFCTRL_Msk = 0x00000020;
    inline constexpr uint32_t S5CR_PFCTRL = (1U << 5);
    inline constexpr uint32_t S5CR_DIR_Pos = 6;
    inline constexpr uint32_t S5CR_DIR_Msk = 0x000000C0;
    inline constexpr uint32_t S5CR_CIRC_Pos = 8;
    inline constexpr uint32_t S5CR_CIRC_Msk = 0x00000100;
    inline constexpr uint32_t S5CR_CIRC = (1U << 8);
    inline constexpr uint32_t S5CR_PINC_Pos = 9;
    inline constexpr uint32_t S5CR_PINC_Msk = 0x00000200;
    inline constexpr uint32_t S5CR_PINC = (1U << 9);
    inline constexpr uint32_t S5CR_MINC_Pos = 10;
    inline constexpr uint32_t S5CR_MINC_Msk = 0x00000400;
    inline constexpr uint32_t S5CR_MINC = (1U << 10);
    inline constexpr uint32_t S5CR_PSIZE_Pos = 11;
    inline constexpr uint32_t S5CR_PSIZE_Msk = 0x00001800;
    inline constexpr uint32_t S5CR_MSIZE_Pos = 13;
    inline constexpr uint32_t S5CR_MSIZE_Msk = 0x00006000;
    inline constexpr uint32_t S5CR_PINCOS_Pos = 15;
    inline constexpr uint32_t S5CR_PINCOS_Msk = 0x00008000;
    inline constexpr uint32_t S5CR_PINCOS = (1U << 15);
    inline constexpr uint32_t S5CR_PL_Pos = 16;
    inline constexpr uint32_t S5CR_PL_Msk = 0x00030000;
    inline constexpr uint32_t S5CR_DBM_Pos = 18;
    inline constexpr uint32_t S5CR_DBM_Msk = 0x00040000;
    inline constexpr uint32_t S5CR_DBM = (1U << 18);
    inline constexpr uint32_t S5CR_CT_Pos = 19;
    inline constexpr uint32_t S5CR_CT_Msk = 0x00080000;
    inline constexpr uint32_t S5CR_CT = (1U << 19);
    inline constexpr uint32_t S5CR_ACK_Pos = 20;
    inline constexpr uint32_t S5CR_ACK_Msk = 0x00100000;
    inline constexpr uint32_t S5CR_ACK = (1U << 20);
    inline constexpr uint32_t S5CR_PBURST_Pos = 21;
    inline constexpr uint32_t S5CR_PBURST_Msk = 0x00600000;
    inline constexpr uint32_t S5CR_MBURST_Pos = 23;
    inline constexpr uint32_t S5CR_MBURST_Msk = 0x01800000;

    // S5NDTR fields
    inline constexpr uint32_t S5NDTR_NDT_Pos = 0;
    inline constexpr uint32_t S5NDTR_NDT_Msk = 0x0000FFFF;

    // S5PAR fields
    inline constexpr uint32_t S5PAR_PA_Pos = 0;
    inline constexpr uint32_t S5PAR_PA_Msk = 0xFFFFFFFF;

    // S5M0AR fields
    inline constexpr uint32_t S5M0AR_M0A_Pos = 0;
    inline constexpr uint32_t S5M0AR_M0A_Msk = 0xFFFFFFFF;

    // S5M1AR fields
    inline constexpr uint32_t S5M1AR_M1A_Pos = 0;
    inline constexpr uint32_t S5M1AR_M1A_Msk = 0xFFFFFFFF;

    // S5FCR fields
    inline constexpr uint32_t S5FCR_FTH_Pos = 0;
    inline constexpr uint32_t S5FCR_FTH_Msk = 0x00000003;
    inline constexpr uint32_t S5FCR_DMDIS_Pos = 2;
    inline constexpr uint32_t S5FCR_DMDIS_Msk = 0x00000004;
    inline constexpr uint32_t S5FCR_DMDIS = (1U << 2);
    inline constexpr uint32_t S5FCR_FS_Pos = 3;
    inline constexpr uint32_t S5FCR_FS_Msk = 0x00000038;
    inline constexpr uint32_t S5FCR_FEIE_Pos = 7;
    inline constexpr uint32_t S5FCR_FEIE_Msk = 0x00000080;
    inline constexpr uint32_t S5FCR_FEIE = (1U << 7);

    // S6CR fields
    inline constexpr uint32_t S6CR_EN_Pos = 0;
    inline constexpr uint32_t S6CR_EN_Msk = 0x00000001;
    inline constexpr uint32_t S6CR_EN = (1U << 0);
    inline constexpr uint32_t S6CR_DMEIE_Pos = 1;
    inline constexpr uint32_t S6CR_DMEIE_Msk = 0x00000002;
    inline constexpr uint32_t S6CR_DMEIE = (1U << 1);
    inline constexpr uint32_t S6CR_TEIE_Pos = 2;
    inline constexpr uint32_t S6CR_TEIE_Msk = 0x00000004;
    inline constexpr uint32_t S6CR_TEIE = (1U << 2);
    inline constexpr uint32_t S6CR_HTIE_Pos = 3;
    inline constexpr uint32_t S6CR_HTIE_Msk = 0x00000008;
    inline constexpr uint32_t S6CR_HTIE = (1U << 3);
    inline constexpr uint32_t S6CR_TCIE_Pos = 4;
    inline constexpr uint32_t S6CR_TCIE_Msk = 0x00000010;
    inline constexpr uint32_t S6CR_TCIE = (1U << 4);
    inline constexpr uint32_t S6CR_PFCTRL_Pos = 5;
    inline constexpr uint32_t S6CR_PFCTRL_Msk = 0x00000020;
    inline constexpr uint32_t S6CR_PFCTRL = (1U << 5);
    inline constexpr uint32_t S6CR_DIR_Pos = 6;
    inline constexpr uint32_t S6CR_DIR_Msk = 0x000000C0;
    inline constexpr uint32_t S6CR_CIRC_Pos = 8;
    inline constexpr uint32_t S6CR_CIRC_Msk = 0x00000100;
    inline constexpr uint32_t S6CR_CIRC = (1U << 8);
    inline constexpr uint32_t S6CR_PINC_Pos = 9;
    inline constexpr uint32_t S6CR_PINC_Msk = 0x00000200;
    inline constexpr uint32_t S6CR_PINC = (1U << 9);
    inline constexpr uint32_t S6CR_MINC_Pos = 10;
    inline constexpr uint32_t S6CR_MINC_Msk = 0x00000400;
    inline constexpr uint32_t S6CR_MINC = (1U << 10);
    inline constexpr uint32_t S6CR_PSIZE_Pos = 11;
    inline constexpr uint32_t S6CR_PSIZE_Msk = 0x00001800;
    inline constexpr uint32_t S6CR_MSIZE_Pos = 13;
    inline constexpr uint32_t S6CR_MSIZE_Msk = 0x00006000;
    inline constexpr uint32_t S6CR_PINCOS_Pos = 15;
    inline constexpr uint32_t S6CR_PINCOS_Msk = 0x00008000;
    inline constexpr uint32_t S6CR_PINCOS = (1U << 15);
    inline constexpr uint32_t S6CR_PL_Pos = 16;
    inline constexpr uint32_t S6CR_PL_Msk = 0x00030000;
    inline constexpr uint32_t S6CR_DBM_Pos = 18;
    inline constexpr uint32_t S6CR_DBM_Msk = 0x00040000;
    inline constexpr uint32_t S6CR_DBM = (1U << 18);
    inline constexpr uint32_t S6CR_CT_Pos = 19;
    inline constexpr uint32_t S6CR_CT_Msk = 0x00080000;
    inline constexpr uint32_t S6CR_CT = (1U << 19);
    inline constexpr uint32_t S6CR_ACK_Pos = 20;
    inline constexpr uint32_t S6CR_ACK_Msk = 0x00100000;
    inline constexpr uint32_t S6CR_ACK = (1U << 20);
    inline constexpr uint32_t S6CR_PBURST_Pos = 21;
    inline constexpr uint32_t S6CR_PBURST_Msk = 0x00600000;
    inline constexpr uint32_t S6CR_MBURST_Pos = 23;
    inline constexpr uint32_t S6CR_MBURST_Msk = 0x01800000;

    // S6NDTR fields
    inline constexpr uint32_t S6NDTR_NDT_Pos = 0;
    inline constexpr uint32_t S6NDTR_NDT_Msk = 0x0000FFFF;

    // S6PAR fields
    inline constexpr uint32_t S6PAR_PA_Pos = 0;
    inline constexpr uint32_t S6PAR_PA_Msk = 0xFFFFFFFF;

    // S6M0AR fields
    inline constexpr uint32_t S6M0AR_M0A_Pos = 0;
    inline constexpr uint32_t S6M0AR_M0A_Msk = 0xFFFFFFFF;

    // S6M1AR fields
    inline constexpr uint32_t S6M1AR_M1A_Pos = 0;
    inline constexpr uint32_t S6M1AR_M1A_Msk = 0xFFFFFFFF;

    // S6FCR fields
    inline constexpr uint32_t S6FCR_FTH_Pos = 0;
    inline constexpr uint32_t S6FCR_FTH_Msk = 0x00000003;
    inline constexpr uint32_t S6FCR_DMDIS_Pos = 2;
    inline constexpr uint32_t S6FCR_DMDIS_Msk = 0x00000004;
    inline constexpr uint32_t S6FCR_DMDIS = (1U << 2);
    inline constexpr uint32_t S6FCR_FS_Pos = 3;
    inline constexpr uint32_t S6FCR_FS_Msk = 0x00000038;
    inline constexpr uint32_t S6FCR_FEIE_Pos = 7;
    inline constexpr uint32_t S6FCR_FEIE_Msk = 0x00000080;
    inline constexpr uint32_t S6FCR_FEIE = (1U << 7);

    // S7CR fields
    inline constexpr uint32_t S7CR_EN_Pos = 0;
    inline constexpr uint32_t S7CR_EN_Msk = 0x00000001;
    inline constexpr uint32_t S7CR_EN = (1U << 0);
    inline constexpr uint32_t S7CR_DMEIE_Pos = 1;
    inline constexpr uint32_t S7CR_DMEIE_Msk = 0x00000002;
    inline constexpr uint32_t S7CR_DMEIE = (1U << 1);
    inline constexpr uint32_t S7CR_TEIE_Pos = 2;
    inline constexpr uint32_t S7CR_TEIE_Msk = 0x00000004;
    inline constexpr uint32_t S7CR_TEIE = (1U << 2);
    inline constexpr uint32_t S7CR_HTIE_Pos = 3;
    inline constexpr uint32_t S7CR_HTIE_Msk = 0x00000008;
    inline constexpr uint32_t S7CR_HTIE = (1U << 3);
    inline constexpr uint32_t S7CR_TCIE_Pos = 4;
    inline constexpr uint32_t S7CR_TCIE_Msk = 0x00000010;
    inline constexpr uint32_t S7CR_TCIE = (1U << 4);
    inline constexpr uint32_t S7CR_PFCTRL_Pos = 5;
    inline constexpr uint32_t S7CR_PFCTRL_Msk = 0x00000020;
    inline constexpr uint32_t S7CR_PFCTRL = (1U << 5);
    inline constexpr uint32_t S7CR_DIR_Pos = 6;
    inline constexpr uint32_t S7CR_DIR_Msk = 0x000000C0;
    inline constexpr uint32_t S7CR_CIRC_Pos = 8;
    inline constexpr uint32_t S7CR_CIRC_Msk = 0x00000100;
    inline constexpr uint32_t S7CR_CIRC = (1U << 8);
    inline constexpr uint32_t S7CR_PINC_Pos = 9;
    inline constexpr uint32_t S7CR_PINC_Msk = 0x00000200;
    inline constexpr uint32_t S7CR_PINC = (1U << 9);
    inline constexpr uint32_t S7CR_MINC_Pos = 10;
    inline constexpr uint32_t S7CR_MINC_Msk = 0x00000400;
    inline constexpr uint32_t S7CR_MINC = (1U << 10);
    inline constexpr uint32_t S7CR_PSIZE_Pos = 11;
    inline constexpr uint32_t S7CR_PSIZE_Msk = 0x00001800;
    inline constexpr uint32_t S7CR_MSIZE_Pos = 13;
    inline constexpr uint32_t S7CR_MSIZE_Msk = 0x00006000;
    inline constexpr uint32_t S7CR_PINCOS_Pos = 15;
    inline constexpr uint32_t S7CR_PINCOS_Msk = 0x00008000;
    inline constexpr uint32_t S7CR_PINCOS = (1U << 15);
    inline constexpr uint32_t S7CR_PL_Pos = 16;
    inline constexpr uint32_t S7CR_PL_Msk = 0x00030000;
    inline constexpr uint32_t S7CR_DBM_Pos = 18;
    inline constexpr uint32_t S7CR_DBM_Msk = 0x00040000;
    inline constexpr uint32_t S7CR_DBM = (1U << 18);
    inline constexpr uint32_t S7CR_CT_Pos = 19;
    inline constexpr uint32_t S7CR_CT_Msk = 0x00080000;
    inline constexpr uint32_t S7CR_CT = (1U << 19);
    inline constexpr uint32_t S7CR_ACK_Pos = 20;
    inline constexpr uint32_t S7CR_ACK_Msk = 0x00100000;
    inline constexpr uint32_t S7CR_ACK = (1U << 20);
    inline constexpr uint32_t S7CR_PBURST_Pos = 21;
    inline constexpr uint32_t S7CR_PBURST_Msk = 0x00600000;
    inline constexpr uint32_t S7CR_MBURST_Pos = 23;
    inline constexpr uint32_t S7CR_MBURST_Msk = 0x01800000;

    // S7NDTR fields
    inline constexpr uint32_t S7NDTR_NDT_Pos = 0;
    inline constexpr uint32_t S7NDTR_NDT_Msk = 0x0000FFFF;

    // S7PAR fields
    inline constexpr uint32_t S7PAR_PA_Pos = 0;
    inline constexpr uint32_t S7PAR_PA_Msk = 0xFFFFFFFF;

    // S7M0AR fields
    inline constexpr uint32_t S7M0AR_M0A_Pos = 0;
    inline constexpr uint32_t S7M0AR_M0A_Msk = 0xFFFFFFFF;

    // S7M1AR fields
    inline constexpr uint32_t S7M1AR_M1A_Pos = 0;
    inline constexpr uint32_t S7M1AR_M1A_Msk = 0xFFFFFFFF;

    // S7FCR fields
    inline constexpr uint32_t S7FCR_FTH_Pos = 0;
    inline constexpr uint32_t S7FCR_FTH_Msk = 0x00000003;
    inline constexpr uint32_t S7FCR_DMDIS_Pos = 2;
    inline constexpr uint32_t S7FCR_DMDIS_Msk = 0x00000004;
    inline constexpr uint32_t S7FCR_DMDIS = (1U << 2);
    inline constexpr uint32_t S7FCR_FS_Pos = 3;
    inline constexpr uint32_t S7FCR_FS_Msk = 0x00000038;
    inline constexpr uint32_t S7FCR_FEIE_Pos = 7;
    inline constexpr uint32_t S7FCR_FEIE_Msk = 0x00000080;
    inline constexpr uint32_t S7FCR_FEIE = (1U << 7);

} // namespace DMA1

namespace DMA2 {
    // LISR fields
    inline constexpr uint32_t LISR_FEIF0_Pos = 0;
    inline constexpr uint32_t LISR_FEIF0_Msk = 0x00000001;
    inline constexpr uint32_t LISR_FEIF0 = (1U << 0);
    inline constexpr uint32_t LISR_DMEIF0_Pos = 2;
    inline constexpr uint32_t LISR_DMEIF0_Msk = 0x00000004;
    inline constexpr uint32_t LISR_DMEIF0 = (1U << 2);
    inline constexpr uint32_t LISR_TEIF0_Pos = 3;
    inline constexpr uint32_t LISR_TEIF0_Msk = 0x00000008;
    inline constexpr uint32_t LISR_TEIF0 = (1U << 3);
    inline constexpr uint32_t LISR_HTIF0_Pos = 4;
    inline constexpr uint32_t LISR_HTIF0_Msk = 0x00000010;
    inline constexpr uint32_t LISR_HTIF0 = (1U << 4);
    inline constexpr uint32_t LISR_TCIF0_Pos = 5;
    inline constexpr uint32_t LISR_TCIF0_Msk = 0x00000020;
    inline constexpr uint32_t LISR_TCIF0 = (1U << 5);
    inline constexpr uint32_t LISR_FEIF1_Pos = 6;
    inline constexpr uint32_t LISR_FEIF1_Msk = 0x00000040;
    inline constexpr uint32_t LISR_FEIF1 = (1U << 6);
    inline constexpr uint32_t LISR_DMEIF1_Pos = 8;
    inline constexpr uint32_t LISR_DMEIF1_Msk = 0x00000100;
    inline constexpr uint32_t LISR_DMEIF1 = (1U << 8);
    inline constexpr uint32_t LISR_TEIF1_Pos = 9;
    inline constexpr uint32_t LISR_TEIF1_Msk = 0x00000200;
    inline constexpr uint32_t LISR_TEIF1 = (1U << 9);
    inline constexpr uint32_t LISR_HTIF1_Pos = 10;
    inline constexpr uint32_t LISR_HTIF1_Msk = 0x00000400;
    inline constexpr uint32_t LISR_HTIF1 = (1U << 10);
    inline constexpr uint32_t LISR_TCIF1_Pos = 11;
    inline constexpr uint32_t LISR_TCIF1_Msk = 0x00000800;
    inline constexpr uint32_t LISR_TCIF1 = (1U << 11);
    inline constexpr uint32_t LISR_FEIF2_Pos = 16;
    inline constexpr uint32_t LISR_FEIF2_Msk = 0x00010000;
    inline constexpr uint32_t LISR_FEIF2 = (1U << 16);
    inline constexpr uint32_t LISR_DMEIF2_Pos = 18;
    inline constexpr uint32_t LISR_DMEIF2_Msk = 0x00040000;
    inline constexpr uint32_t LISR_DMEIF2 = (1U << 18);
    inline constexpr uint32_t LISR_TEIF2_Pos = 19;
    inline constexpr uint32_t LISR_TEIF2_Msk = 0x00080000;
    inline constexpr uint32_t LISR_TEIF2 = (1U << 19);
    inline constexpr uint32_t LISR_HTIF2_Pos = 20;
    inline constexpr uint32_t LISR_HTIF2_Msk = 0x00100000;
    inline constexpr uint32_t LISR_HTIF2 = (1U << 20);
    inline constexpr uint32_t LISR_TCIF2_Pos = 21;
    inline constexpr uint32_t LISR_TCIF2_Msk = 0x00200000;
    inline constexpr uint32_t LISR_TCIF2 = (1U << 21);
    inline constexpr uint32_t LISR_FEIF3_Pos = 22;
    inline constexpr uint32_t LISR_FEIF3_Msk = 0x00400000;
    inline constexpr uint32_t LISR_FEIF3 = (1U << 22);
    inline constexpr uint32_t LISR_DMEIF3_Pos = 24;
    inline constexpr uint32_t LISR_DMEIF3_Msk = 0x01000000;
    inline constexpr uint32_t LISR_DMEIF3 = (1U << 24);
    inline constexpr uint32_t LISR_TEIF3_Pos = 25;
    inline constexpr uint32_t LISR_TEIF3_Msk = 0x02000000;
    inline constexpr uint32_t LISR_TEIF3 = (1U << 25);
    inline constexpr uint32_t LISR_HTIF3_Pos = 26;
    inline constexpr uint32_t LISR_HTIF3_Msk = 0x04000000;
    inline constexpr uint32_t LISR_HTIF3 = (1U << 26);
    inline constexpr uint32_t LISR_TCIF3_Pos = 27;
    inline constexpr uint32_t LISR_TCIF3_Msk = 0x08000000;
    inline constexpr uint32_t LISR_TCIF3 = (1U << 27);

    // HISR fields
    inline constexpr uint32_t HISR_FEIF4_Pos = 0;
    inline constexpr uint32_t HISR_FEIF4_Msk = 0x00000001;
    inline constexpr uint32_t HISR_FEIF4 = (1U << 0);
    inline constexpr uint32_t HISR_DMEIF4_Pos = 2;
    inline constexpr uint32_t HISR_DMEIF4_Msk = 0x00000004;
    inline constexpr uint32_t HISR_DMEIF4 = (1U << 2);
    inline constexpr uint32_t HISR_TEIF4_Pos = 3;
    inline constexpr uint32_t HISR_TEIF4_Msk = 0x00000008;
    inline constexpr uint32_t HISR_TEIF4 = (1U << 3);
    inline constexpr uint32_t HISR_HTIF4_Pos = 4;
    inline constexpr uint32_t HISR_HTIF4_Msk = 0x00000010;
    inline constexpr uint32_t HISR_HTIF4 = (1U << 4);
    inline constexpr uint32_t HISR_TCIF4_Pos = 5;
    inline constexpr uint32_t HISR_TCIF4_Msk = 0x00000020;
    inline constexpr uint32_t HISR_TCIF4 = (1U << 5);
    inline constexpr uint32_t HISR_FEIF5_Pos = 6;
    inline constexpr uint32_t HISR_FEIF5_Msk = 0x00000040;
    inline constexpr uint32_t HISR_FEIF5 = (1U << 6);
    inline constexpr uint32_t HISR_DMEIF5_Pos = 8;
    inline constexpr uint32_t HISR_DMEIF5_Msk = 0x00000100;
    inline constexpr uint32_t HISR_DMEIF5 = (1U << 8);
    inline constexpr uint32_t HISR_TEIF5_Pos = 9;
    inline constexpr uint32_t HISR_TEIF5_Msk = 0x00000200;
    inline constexpr uint32_t HISR_TEIF5 = (1U << 9);
    inline constexpr uint32_t HISR_HTIF5_Pos = 10;
    inline constexpr uint32_t HISR_HTIF5_Msk = 0x00000400;
    inline constexpr uint32_t HISR_HTIF5 = (1U << 10);
    inline constexpr uint32_t HISR_TCIF5_Pos = 11;
    inline constexpr uint32_t HISR_TCIF5_Msk = 0x00000800;
    inline constexpr uint32_t HISR_TCIF5 = (1U << 11);
    inline constexpr uint32_t HISR_FEIF6_Pos = 16;
    inline constexpr uint32_t HISR_FEIF6_Msk = 0x00010000;
    inline constexpr uint32_t HISR_FEIF6 = (1U << 16);
    inline constexpr uint32_t HISR_DMEIF6_Pos = 18;
    inline constexpr uint32_t HISR_DMEIF6_Msk = 0x00040000;
    inline constexpr uint32_t HISR_DMEIF6 = (1U << 18);
    inline constexpr uint32_t HISR_TEIF6_Pos = 19;
    inline constexpr uint32_t HISR_TEIF6_Msk = 0x00080000;
    inline constexpr uint32_t HISR_TEIF6 = (1U << 19);
    inline constexpr uint32_t HISR_HTIF6_Pos = 20;
    inline constexpr uint32_t HISR_HTIF6_Msk = 0x00100000;
    inline constexpr uint32_t HISR_HTIF6 = (1U << 20);
    inline constexpr uint32_t HISR_TCIF6_Pos = 21;
    inline constexpr uint32_t HISR_TCIF6_Msk = 0x00200000;
    inline constexpr uint32_t HISR_TCIF6 = (1U << 21);
    inline constexpr uint32_t HISR_FEIF7_Pos = 22;
    inline constexpr uint32_t HISR_FEIF7_Msk = 0x00400000;
    inline constexpr uint32_t HISR_FEIF7 = (1U << 22);
    inline constexpr uint32_t HISR_DMEIF7_Pos = 24;
    inline constexpr uint32_t HISR_DMEIF7_Msk = 0x01000000;
    inline constexpr uint32_t HISR_DMEIF7 = (1U << 24);
    inline constexpr uint32_t HISR_TEIF7_Pos = 25;
    inline constexpr uint32_t HISR_TEIF7_Msk = 0x02000000;
    inline constexpr uint32_t HISR_TEIF7 = (1U << 25);
    inline constexpr uint32_t HISR_HTIF7_Pos = 26;
    inline constexpr uint32_t HISR_HTIF7_Msk = 0x04000000;
    inline constexpr uint32_t HISR_HTIF7 = (1U << 26);
    inline constexpr uint32_t HISR_TCIF7_Pos = 27;
    inline constexpr uint32_t HISR_TCIF7_Msk = 0x08000000;
    inline constexpr uint32_t HISR_TCIF7 = (1U << 27);

    // LIFCR fields
    inline constexpr uint32_t LIFCR_CFEIF0_Pos = 0;
    inline constexpr uint32_t LIFCR_CFEIF0_Msk = 0x00000001;
    inline constexpr uint32_t LIFCR_CFEIF0 = (1U << 0);
    inline constexpr uint32_t LIFCR_CDMEIF0_Pos = 2;
    inline constexpr uint32_t LIFCR_CDMEIF0_Msk = 0x00000004;
    inline constexpr uint32_t LIFCR_CDMEIF0 = (1U << 2);
    inline constexpr uint32_t LIFCR_CTEIF0_Pos = 3;
    inline constexpr uint32_t LIFCR_CTEIF0_Msk = 0x00000008;
    inline constexpr uint32_t LIFCR_CTEIF0 = (1U << 3);
    inline constexpr uint32_t LIFCR_CHTIF0_Pos = 4;
    inline constexpr uint32_t LIFCR_CHTIF0_Msk = 0x00000010;
    inline constexpr uint32_t LIFCR_CHTIF0 = (1U << 4);
    inline constexpr uint32_t LIFCR_CTCIF0_Pos = 5;
    inline constexpr uint32_t LIFCR_CTCIF0_Msk = 0x00000020;
    inline constexpr uint32_t LIFCR_CTCIF0 = (1U << 5);
    inline constexpr uint32_t LIFCR_CFEIF1_Pos = 6;
    inline constexpr uint32_t LIFCR_CFEIF1_Msk = 0x00000040;
    inline constexpr uint32_t LIFCR_CFEIF1 = (1U << 6);
    inline constexpr uint32_t LIFCR_CDMEIF1_Pos = 8;
    inline constexpr uint32_t LIFCR_CDMEIF1_Msk = 0x00000100;
    inline constexpr uint32_t LIFCR_CDMEIF1 = (1U << 8);
    inline constexpr uint32_t LIFCR_CTEIF1_Pos = 9;
    inline constexpr uint32_t LIFCR_CTEIF1_Msk = 0x00000200;
    inline constexpr uint32_t LIFCR_CTEIF1 = (1U << 9);
    inline constexpr uint32_t LIFCR_CHTIF1_Pos = 10;
    inline constexpr uint32_t LIFCR_CHTIF1_Msk = 0x00000400;
    inline constexpr uint32_t LIFCR_CHTIF1 = (1U << 10);
    inline constexpr uint32_t LIFCR_CTCIF1_Pos = 11;
    inline constexpr uint32_t LIFCR_CTCIF1_Msk = 0x00000800;
    inline constexpr uint32_t LIFCR_CTCIF1 = (1U << 11);
    inline constexpr uint32_t LIFCR_CFEIF2_Pos = 16;
    inline constexpr uint32_t LIFCR_CFEIF2_Msk = 0x00010000;
    inline constexpr uint32_t LIFCR_CFEIF2 = (1U << 16);
    inline constexpr uint32_t LIFCR_CDMEIF2_Pos = 18;
    inline constexpr uint32_t LIFCR_CDMEIF2_Msk = 0x00040000;
    inline constexpr uint32_t LIFCR_CDMEIF2 = (1U << 18);
    inline constexpr uint32_t LIFCR_CTEIF2_Pos = 19;
    inline constexpr uint32_t LIFCR_CTEIF2_Msk = 0x00080000;
    inline constexpr uint32_t LIFCR_CTEIF2 = (1U << 19);
    inline constexpr uint32_t LIFCR_CHTIF2_Pos = 20;
    inline constexpr uint32_t LIFCR_CHTIF2_Msk = 0x00100000;
    inline constexpr uint32_t LIFCR_CHTIF2 = (1U << 20);
    inline constexpr uint32_t LIFCR_CTCIF2_Pos = 21;
    inline constexpr uint32_t LIFCR_CTCIF2_Msk = 0x00200000;
    inline constexpr uint32_t LIFCR_CTCIF2 = (1U << 21);
    inline constexpr uint32_t LIFCR_CFEIF3_Pos = 22;
    inline constexpr uint32_t LIFCR_CFEIF3_Msk = 0x00400000;
    inline constexpr uint32_t LIFCR_CFEIF3 = (1U << 22);
    inline constexpr uint32_t LIFCR_CDMEIF3_Pos = 24;
    inline constexpr uint32_t LIFCR_CDMEIF3_Msk = 0x01000000;
    inline constexpr uint32_t LIFCR_CDMEIF3 = (1U << 24);
    inline constexpr uint32_t LIFCR_CTEIF3_Pos = 25;
    inline constexpr uint32_t LIFCR_CTEIF3_Msk = 0x02000000;
    inline constexpr uint32_t LIFCR_CTEIF3 = (1U << 25);
    inline constexpr uint32_t LIFCR_CHTIF3_Pos = 26;
    inline constexpr uint32_t LIFCR_CHTIF3_Msk = 0x04000000;
    inline constexpr uint32_t LIFCR_CHTIF3 = (1U << 26);
    inline constexpr uint32_t LIFCR_CTCIF3_Pos = 27;
    inline constexpr uint32_t LIFCR_CTCIF3_Msk = 0x08000000;
    inline constexpr uint32_t LIFCR_CTCIF3 = (1U << 27);

    // HIFCR fields
    inline constexpr uint32_t HIFCR_CFEIF4_Pos = 0;
    inline constexpr uint32_t HIFCR_CFEIF4_Msk = 0x00000001;
    inline constexpr uint32_t HIFCR_CFEIF4 = (1U << 0);
    inline constexpr uint32_t HIFCR_CDMEIF4_Pos = 2;
    inline constexpr uint32_t HIFCR_CDMEIF4_Msk = 0x00000004;
    inline constexpr uint32_t HIFCR_CDMEIF4 = (1U << 2);
    inline constexpr uint32_t HIFCR_CTEIF4_Pos = 3;
    inline constexpr uint32_t HIFCR_CTEIF4_Msk = 0x00000008;
    inline constexpr uint32_t HIFCR_CTEIF4 = (1U << 3);
    inline constexpr uint32_t HIFCR_CHTIF4_Pos = 4;
    inline constexpr uint32_t HIFCR_CHTIF4_Msk = 0x00000010;
    inline constexpr uint32_t HIFCR_CHTIF4 = (1U << 4);
    inline constexpr uint32_t HIFCR_CTCIF4_Pos = 5;
    inline constexpr uint32_t HIFCR_CTCIF4_Msk = 0x00000020;
    inline constexpr uint32_t HIFCR_CTCIF4 = (1U << 5);
    inline constexpr uint32_t HIFCR_CFEIF5_Pos = 6;
    inline constexpr uint32_t HIFCR_CFEIF5_Msk = 0x00000040;
    inline constexpr uint32_t HIFCR_CFEIF5 = (1U << 6);
    inline constexpr uint32_t HIFCR_CDMEIF5_Pos = 8;
    inline constexpr uint32_t HIFCR_CDMEIF5_Msk = 0x00000100;
    inline constexpr uint32_t HIFCR_CDMEIF5 = (1U << 8);
    inline constexpr uint32_t HIFCR_CTEIF5_Pos = 9;
    inline constexpr uint32_t HIFCR_CTEIF5_Msk = 0x00000200;
    inline constexpr uint32_t HIFCR_CTEIF5 = (1U << 9);
    inline constexpr uint32_t HIFCR_CHTIF5_Pos = 10;
    inline constexpr uint32_t HIFCR_CHTIF5_Msk = 0x00000400;
    inline constexpr uint32_t HIFCR_CHTIF5 = (1U << 10);
    inline constexpr uint32_t HIFCR_CTCIF5_Pos = 11;
    inline constexpr uint32_t HIFCR_CTCIF5_Msk = 0x00000800;
    inline constexpr uint32_t HIFCR_CTCIF5 = (1U << 11);
    inline constexpr uint32_t HIFCR_CFEIF6_Pos = 16;
    inline constexpr uint32_t HIFCR_CFEIF6_Msk = 0x00010000;
    inline constexpr uint32_t HIFCR_CFEIF6 = (1U << 16);
    inline constexpr uint32_t HIFCR_CDMEIF6_Pos = 18;
    inline constexpr uint32_t HIFCR_CDMEIF6_Msk = 0x00040000;
    inline constexpr uint32_t HIFCR_CDMEIF6 = (1U << 18);
    inline constexpr uint32_t HIFCR_CTEIF6_Pos = 19;
    inline constexpr uint32_t HIFCR_CTEIF6_Msk = 0x00080000;
    inline constexpr uint32_t HIFCR_CTEIF6 = (1U << 19);
    inline constexpr uint32_t HIFCR_CHTIF6_Pos = 20;
    inline constexpr uint32_t HIFCR_CHTIF6_Msk = 0x00100000;
    inline constexpr uint32_t HIFCR_CHTIF6 = (1U << 20);
    inline constexpr uint32_t HIFCR_CTCIF6_Pos = 21;
    inline constexpr uint32_t HIFCR_CTCIF6_Msk = 0x00200000;
    inline constexpr uint32_t HIFCR_CTCIF6 = (1U << 21);
    inline constexpr uint32_t HIFCR_CFEIF7_Pos = 22;
    inline constexpr uint32_t HIFCR_CFEIF7_Msk = 0x00400000;
    inline constexpr uint32_t HIFCR_CFEIF7 = (1U << 22);
    inline constexpr uint32_t HIFCR_CDMEIF7_Pos = 24;
    inline constexpr uint32_t HIFCR_CDMEIF7_Msk = 0x01000000;
    inline constexpr uint32_t HIFCR_CDMEIF7 = (1U << 24);
    inline constexpr uint32_t HIFCR_CTEIF7_Pos = 25;
    inline constexpr uint32_t HIFCR_CTEIF7_Msk = 0x02000000;
    inline constexpr uint32_t HIFCR_CTEIF7 = (1U << 25);
    inline constexpr uint32_t HIFCR_CHTIF7_Pos = 26;
    inline constexpr uint32_t HIFCR_CHTIF7_Msk = 0x04000000;
    inline constexpr uint32_t HIFCR_CHTIF7 = (1U << 26);
    inline constexpr uint32_t HIFCR_CTCIF7_Pos = 27;
    inline constexpr uint32_t HIFCR_CTCIF7_Msk = 0x08000000;
    inline constexpr uint32_t HIFCR_CTCIF7 = (1U << 27);

    // S0CR fields
    inline constexpr uint32_t S0CR_EN_Pos = 0;
    inline constexpr uint32_t S0CR_EN_Msk = 0x00000001;
    inline constexpr uint32_t S0CR_EN = (1U << 0);
    inline constexpr uint32_t S0CR_DMEIE_Pos = 1;
    inline constexpr uint32_t S0CR_DMEIE_Msk = 0x00000002;
    inline constexpr uint32_t S0CR_DMEIE = (1U << 1);
    inline constexpr uint32_t S0CR_TEIE_Pos = 2;
    inline constexpr uint32_t S0CR_TEIE_Msk = 0x00000004;
    inline constexpr uint32_t S0CR_TEIE = (1U << 2);
    inline constexpr uint32_t S0CR_HTIE_Pos = 3;
    inline constexpr uint32_t S0CR_HTIE_Msk = 0x00000008;
    inline constexpr uint32_t S0CR_HTIE = (1U << 3);
    inline constexpr uint32_t S0CR_TCIE_Pos = 4;
    inline constexpr uint32_t S0CR_TCIE_Msk = 0x00000010;
    inline constexpr uint32_t S0CR_TCIE = (1U << 4);
    inline constexpr uint32_t S0CR_PFCTRL_Pos = 5;
    inline constexpr uint32_t S0CR_PFCTRL_Msk = 0x00000020;
    inline constexpr uint32_t S0CR_PFCTRL = (1U << 5);
    inline constexpr uint32_t S0CR_DIR_Pos = 6;
    inline constexpr uint32_t S0CR_DIR_Msk = 0x000000C0;
    inline constexpr uint32_t S0CR_CIRC_Pos = 8;
    inline constexpr uint32_t S0CR_CIRC_Msk = 0x00000100;
    inline constexpr uint32_t S0CR_CIRC = (1U << 8);
    inline constexpr uint32_t S0CR_PINC_Pos = 9;
    inline constexpr uint32_t S0CR_PINC_Msk = 0x00000200;
    inline constexpr uint32_t S0CR_PINC = (1U << 9);
    inline constexpr uint32_t S0CR_MINC_Pos = 10;
    inline constexpr uint32_t S0CR_MINC_Msk = 0x00000400;
    inline constexpr uint32_t S0CR_MINC = (1U << 10);
    inline constexpr uint32_t S0CR_PSIZE_Pos = 11;
    inline constexpr uint32_t S0CR_PSIZE_Msk = 0x00001800;
    inline constexpr uint32_t S0CR_MSIZE_Pos = 13;
    inline constexpr uint32_t S0CR_MSIZE_Msk = 0x00006000;
    inline constexpr uint32_t S0CR_PINCOS_Pos = 15;
    inline constexpr uint32_t S0CR_PINCOS_Msk = 0x00008000;
    inline constexpr uint32_t S0CR_PINCOS = (1U << 15);
    inline constexpr uint32_t S0CR_PL_Pos = 16;
    inline constexpr uint32_t S0CR_PL_Msk = 0x00030000;
    inline constexpr uint32_t S0CR_DBM_Pos = 18;
    inline constexpr uint32_t S0CR_DBM_Msk = 0x00040000;
    inline constexpr uint32_t S0CR_DBM = (1U << 18);
    inline constexpr uint32_t S0CR_CT_Pos = 19;
    inline constexpr uint32_t S0CR_CT_Msk = 0x00080000;
    inline constexpr uint32_t S0CR_CT = (1U << 19);
    inline constexpr uint32_t S0CR_PBURST_Pos = 21;
    inline constexpr uint32_t S0CR_PBURST_Msk = 0x00600000;
    inline constexpr uint32_t S0CR_MBURST_Pos = 23;
    inline constexpr uint32_t S0CR_MBURST_Msk = 0x01800000;

    // S0NDTR fields
    inline constexpr uint32_t S0NDTR_NDT_Pos = 0;
    inline constexpr uint32_t S0NDTR_NDT_Msk = 0x0000FFFF;

    // S0PAR fields
    inline constexpr uint32_t S0PAR_PA_Pos = 0;
    inline constexpr uint32_t S0PAR_PA_Msk = 0xFFFFFFFF;

    // S0M0AR fields
    inline constexpr uint32_t S0M0AR_M0A_Pos = 0;
    inline constexpr uint32_t S0M0AR_M0A_Msk = 0xFFFFFFFF;

    // S0M1AR fields
    inline constexpr uint32_t S0M1AR_M1A_Pos = 0;
    inline constexpr uint32_t S0M1AR_M1A_Msk = 0xFFFFFFFF;

    // S0FCR fields
    inline constexpr uint32_t S0FCR_FTH_Pos = 0;
    inline constexpr uint32_t S0FCR_FTH_Msk = 0x00000003;
    inline constexpr uint32_t S0FCR_DMDIS_Pos = 2;
    inline constexpr uint32_t S0FCR_DMDIS_Msk = 0x00000004;
    inline constexpr uint32_t S0FCR_DMDIS = (1U << 2);
    inline constexpr uint32_t S0FCR_FS_Pos = 3;
    inline constexpr uint32_t S0FCR_FS_Msk = 0x00000038;
    inline constexpr uint32_t S0FCR_FEIE_Pos = 7;
    inline constexpr uint32_t S0FCR_FEIE_Msk = 0x00000080;
    inline constexpr uint32_t S0FCR_FEIE = (1U << 7);

    // S1CR fields
    inline constexpr uint32_t S1CR_EN_Pos = 0;
    inline constexpr uint32_t S1CR_EN_Msk = 0x00000001;
    inline constexpr uint32_t S1CR_EN = (1U << 0);
    inline constexpr uint32_t S1CR_DMEIE_Pos = 1;
    inline constexpr uint32_t S1CR_DMEIE_Msk = 0x00000002;
    inline constexpr uint32_t S1CR_DMEIE = (1U << 1);
    inline constexpr uint32_t S1CR_TEIE_Pos = 2;
    inline constexpr uint32_t S1CR_TEIE_Msk = 0x00000004;
    inline constexpr uint32_t S1CR_TEIE = (1U << 2);
    inline constexpr uint32_t S1CR_HTIE_Pos = 3;
    inline constexpr uint32_t S1CR_HTIE_Msk = 0x00000008;
    inline constexpr uint32_t S1CR_HTIE = (1U << 3);
    inline constexpr uint32_t S1CR_TCIE_Pos = 4;
    inline constexpr uint32_t S1CR_TCIE_Msk = 0x00000010;
    inline constexpr uint32_t S1CR_TCIE = (1U << 4);
    inline constexpr uint32_t S1CR_PFCTRL_Pos = 5;
    inline constexpr uint32_t S1CR_PFCTRL_Msk = 0x00000020;
    inline constexpr uint32_t S1CR_PFCTRL = (1U << 5);
    inline constexpr uint32_t S1CR_DIR_Pos = 6;
    inline constexpr uint32_t S1CR_DIR_Msk = 0x000000C0;
    inline constexpr uint32_t S1CR_CIRC_Pos = 8;
    inline constexpr uint32_t S1CR_CIRC_Msk = 0x00000100;
    inline constexpr uint32_t S1CR_CIRC = (1U << 8);
    inline constexpr uint32_t S1CR_PINC_Pos = 9;
    inline constexpr uint32_t S1CR_PINC_Msk = 0x00000200;
    inline constexpr uint32_t S1CR_PINC = (1U << 9);
    inline constexpr uint32_t S1CR_MINC_Pos = 10;
    inline constexpr uint32_t S1CR_MINC_Msk = 0x00000400;
    inline constexpr uint32_t S1CR_MINC = (1U << 10);
    inline constexpr uint32_t S1CR_PSIZE_Pos = 11;
    inline constexpr uint32_t S1CR_PSIZE_Msk = 0x00001800;
    inline constexpr uint32_t S1CR_MSIZE_Pos = 13;
    inline constexpr uint32_t S1CR_MSIZE_Msk = 0x00006000;
    inline constexpr uint32_t S1CR_PINCOS_Pos = 15;
    inline constexpr uint32_t S1CR_PINCOS_Msk = 0x00008000;
    inline constexpr uint32_t S1CR_PINCOS = (1U << 15);
    inline constexpr uint32_t S1CR_PL_Pos = 16;
    inline constexpr uint32_t S1CR_PL_Msk = 0x00030000;
    inline constexpr uint32_t S1CR_DBM_Pos = 18;
    inline constexpr uint32_t S1CR_DBM_Msk = 0x00040000;
    inline constexpr uint32_t S1CR_DBM = (1U << 18);
    inline constexpr uint32_t S1CR_CT_Pos = 19;
    inline constexpr uint32_t S1CR_CT_Msk = 0x00080000;
    inline constexpr uint32_t S1CR_CT = (1U << 19);
    inline constexpr uint32_t S1CR_ACK_Pos = 20;
    inline constexpr uint32_t S1CR_ACK_Msk = 0x00100000;
    inline constexpr uint32_t S1CR_ACK = (1U << 20);
    inline constexpr uint32_t S1CR_PBURST_Pos = 21;
    inline constexpr uint32_t S1CR_PBURST_Msk = 0x00600000;
    inline constexpr uint32_t S1CR_MBURST_Pos = 23;
    inline constexpr uint32_t S1CR_MBURST_Msk = 0x01800000;

    // S1NDTR fields
    inline constexpr uint32_t S1NDTR_NDT_Pos = 0;
    inline constexpr uint32_t S1NDTR_NDT_Msk = 0x0000FFFF;

    // S1PAR fields
    inline constexpr uint32_t S1PAR_PA_Pos = 0;
    inline constexpr uint32_t S1PAR_PA_Msk = 0xFFFFFFFF;

    // S1M0AR fields
    inline constexpr uint32_t S1M0AR_M0A_Pos = 0;
    inline constexpr uint32_t S1M0AR_M0A_Msk = 0xFFFFFFFF;

    // S1M1AR fields
    inline constexpr uint32_t S1M1AR_M1A_Pos = 0;
    inline constexpr uint32_t S1M1AR_M1A_Msk = 0xFFFFFFFF;

    // S1FCR fields
    inline constexpr uint32_t S1FCR_FTH_Pos = 0;
    inline constexpr uint32_t S1FCR_FTH_Msk = 0x00000003;
    inline constexpr uint32_t S1FCR_DMDIS_Pos = 2;
    inline constexpr uint32_t S1FCR_DMDIS_Msk = 0x00000004;
    inline constexpr uint32_t S1FCR_DMDIS = (1U << 2);
    inline constexpr uint32_t S1FCR_FS_Pos = 3;
    inline constexpr uint32_t S1FCR_FS_Msk = 0x00000038;
    inline constexpr uint32_t S1FCR_FEIE_Pos = 7;
    inline constexpr uint32_t S1FCR_FEIE_Msk = 0x00000080;
    inline constexpr uint32_t S1FCR_FEIE = (1U << 7);

    // S2CR fields
    inline constexpr uint32_t S2CR_EN_Pos = 0;
    inline constexpr uint32_t S2CR_EN_Msk = 0x00000001;
    inline constexpr uint32_t S2CR_EN = (1U << 0);
    inline constexpr uint32_t S2CR_DMEIE_Pos = 1;
    inline constexpr uint32_t S2CR_DMEIE_Msk = 0x00000002;
    inline constexpr uint32_t S2CR_DMEIE = (1U << 1);
    inline constexpr uint32_t S2CR_TEIE_Pos = 2;
    inline constexpr uint32_t S2CR_TEIE_Msk = 0x00000004;
    inline constexpr uint32_t S2CR_TEIE = (1U << 2);
    inline constexpr uint32_t S2CR_HTIE_Pos = 3;
    inline constexpr uint32_t S2CR_HTIE_Msk = 0x00000008;
    inline constexpr uint32_t S2CR_HTIE = (1U << 3);
    inline constexpr uint32_t S2CR_TCIE_Pos = 4;
    inline constexpr uint32_t S2CR_TCIE_Msk = 0x00000010;
    inline constexpr uint32_t S2CR_TCIE = (1U << 4);
    inline constexpr uint32_t S2CR_PFCTRL_Pos = 5;
    inline constexpr uint32_t S2CR_PFCTRL_Msk = 0x00000020;
    inline constexpr uint32_t S2CR_PFCTRL = (1U << 5);
    inline constexpr uint32_t S2CR_DIR_Pos = 6;
    inline constexpr uint32_t S2CR_DIR_Msk = 0x000000C0;
    inline constexpr uint32_t S2CR_CIRC_Pos = 8;
    inline constexpr uint32_t S2CR_CIRC_Msk = 0x00000100;
    inline constexpr uint32_t S2CR_CIRC = (1U << 8);
    inline constexpr uint32_t S2CR_PINC_Pos = 9;
    inline constexpr uint32_t S2CR_PINC_Msk = 0x00000200;
    inline constexpr uint32_t S2CR_PINC = (1U << 9);
    inline constexpr uint32_t S2CR_MINC_Pos = 10;
    inline constexpr uint32_t S2CR_MINC_Msk = 0x00000400;
    inline constexpr uint32_t S2CR_MINC = (1U << 10);
    inline constexpr uint32_t S2CR_PSIZE_Pos = 11;
    inline constexpr uint32_t S2CR_PSIZE_Msk = 0x00001800;
    inline constexpr uint32_t S2CR_MSIZE_Pos = 13;
    inline constexpr uint32_t S2CR_MSIZE_Msk = 0x00006000;
    inline constexpr uint32_t S2CR_PINCOS_Pos = 15;
    inline constexpr uint32_t S2CR_PINCOS_Msk = 0x00008000;
    inline constexpr uint32_t S2CR_PINCOS = (1U << 15);
    inline constexpr uint32_t S2CR_PL_Pos = 16;
    inline constexpr uint32_t S2CR_PL_Msk = 0x00030000;
    inline constexpr uint32_t S2CR_DBM_Pos = 18;
    inline constexpr uint32_t S2CR_DBM_Msk = 0x00040000;
    inline constexpr uint32_t S2CR_DBM = (1U << 18);
    inline constexpr uint32_t S2CR_CT_Pos = 19;
    inline constexpr uint32_t S2CR_CT_Msk = 0x00080000;
    inline constexpr uint32_t S2CR_CT = (1U << 19);
    inline constexpr uint32_t S2CR_ACK_Pos = 20;
    inline constexpr uint32_t S2CR_ACK_Msk = 0x00100000;
    inline constexpr uint32_t S2CR_ACK = (1U << 20);
    inline constexpr uint32_t S2CR_PBURST_Pos = 21;
    inline constexpr uint32_t S2CR_PBURST_Msk = 0x00600000;
    inline constexpr uint32_t S2CR_MBURST_Pos = 23;
    inline constexpr uint32_t S2CR_MBURST_Msk = 0x01800000;

    // S2NDTR fields
    inline constexpr uint32_t S2NDTR_NDT_Pos = 0;
    inline constexpr uint32_t S2NDTR_NDT_Msk = 0x0000FFFF;

    // S2PAR fields
    inline constexpr uint32_t S2PAR_PA_Pos = 0;
    inline constexpr uint32_t S2PAR_PA_Msk = 0xFFFFFFFF;

    // S2M0AR fields
    inline constexpr uint32_t S2M0AR_M0A_Pos = 0;
    inline constexpr uint32_t S2M0AR_M0A_Msk = 0xFFFFFFFF;

    // S2M1AR fields
    inline constexpr uint32_t S2M1AR_M1A_Pos = 0;
    inline constexpr uint32_t S2M1AR_M1A_Msk = 0xFFFFFFFF;

    // S2FCR fields
    inline constexpr uint32_t S2FCR_FTH_Pos = 0;
    inline constexpr uint32_t S2FCR_FTH_Msk = 0x00000003;
    inline constexpr uint32_t S2FCR_DMDIS_Pos = 2;
    inline constexpr uint32_t S2FCR_DMDIS_Msk = 0x00000004;
    inline constexpr uint32_t S2FCR_DMDIS = (1U << 2);
    inline constexpr uint32_t S2FCR_FS_Pos = 3;
    inline constexpr uint32_t S2FCR_FS_Msk = 0x00000038;
    inline constexpr uint32_t S2FCR_FEIE_Pos = 7;
    inline constexpr uint32_t S2FCR_FEIE_Msk = 0x00000080;
    inline constexpr uint32_t S2FCR_FEIE = (1U << 7);

    // S3CR fields
    inline constexpr uint32_t S3CR_EN_Pos = 0;
    inline constexpr uint32_t S3CR_EN_Msk = 0x00000001;
    inline constexpr uint32_t S3CR_EN = (1U << 0);
    inline constexpr uint32_t S3CR_DMEIE_Pos = 1;
    inline constexpr uint32_t S3CR_DMEIE_Msk = 0x00000002;
    inline constexpr uint32_t S3CR_DMEIE = (1U << 1);
    inline constexpr uint32_t S3CR_TEIE_Pos = 2;
    inline constexpr uint32_t S3CR_TEIE_Msk = 0x00000004;
    inline constexpr uint32_t S3CR_TEIE = (1U << 2);
    inline constexpr uint32_t S3CR_HTIE_Pos = 3;
    inline constexpr uint32_t S3CR_HTIE_Msk = 0x00000008;
    inline constexpr uint32_t S3CR_HTIE = (1U << 3);
    inline constexpr uint32_t S3CR_TCIE_Pos = 4;
    inline constexpr uint32_t S3CR_TCIE_Msk = 0x00000010;
    inline constexpr uint32_t S3CR_TCIE = (1U << 4);
    inline constexpr uint32_t S3CR_PFCTRL_Pos = 5;
    inline constexpr uint32_t S3CR_PFCTRL_Msk = 0x00000020;
    inline constexpr uint32_t S3CR_PFCTRL = (1U << 5);
    inline constexpr uint32_t S3CR_DIR_Pos = 6;
    inline constexpr uint32_t S3CR_DIR_Msk = 0x000000C0;
    inline constexpr uint32_t S3CR_CIRC_Pos = 8;
    inline constexpr uint32_t S3CR_CIRC_Msk = 0x00000100;
    inline constexpr uint32_t S3CR_CIRC = (1U << 8);
    inline constexpr uint32_t S3CR_PINC_Pos = 9;
    inline constexpr uint32_t S3CR_PINC_Msk = 0x00000200;
    inline constexpr uint32_t S3CR_PINC = (1U << 9);
    inline constexpr uint32_t S3CR_MINC_Pos = 10;
    inline constexpr uint32_t S3CR_MINC_Msk = 0x00000400;
    inline constexpr uint32_t S3CR_MINC = (1U << 10);
    inline constexpr uint32_t S3CR_PSIZE_Pos = 11;
    inline constexpr uint32_t S3CR_PSIZE_Msk = 0x00001800;
    inline constexpr uint32_t S3CR_MSIZE_Pos = 13;
    inline constexpr uint32_t S3CR_MSIZE_Msk = 0x00006000;
    inline constexpr uint32_t S3CR_PINCOS_Pos = 15;
    inline constexpr uint32_t S3CR_PINCOS_Msk = 0x00008000;
    inline constexpr uint32_t S3CR_PINCOS = (1U << 15);
    inline constexpr uint32_t S3CR_PL_Pos = 16;
    inline constexpr uint32_t S3CR_PL_Msk = 0x00030000;
    inline constexpr uint32_t S3CR_DBM_Pos = 18;
    inline constexpr uint32_t S3CR_DBM_Msk = 0x00040000;
    inline constexpr uint32_t S3CR_DBM = (1U << 18);
    inline constexpr uint32_t S3CR_CT_Pos = 19;
    inline constexpr uint32_t S3CR_CT_Msk = 0x00080000;
    inline constexpr uint32_t S3CR_CT = (1U << 19);
    inline constexpr uint32_t S3CR_ACK_Pos = 20;
    inline constexpr uint32_t S3CR_ACK_Msk = 0x00100000;
    inline constexpr uint32_t S3CR_ACK = (1U << 20);
    inline constexpr uint32_t S3CR_PBURST_Pos = 21;
    inline constexpr uint32_t S3CR_PBURST_Msk = 0x00600000;
    inline constexpr uint32_t S3CR_MBURST_Pos = 23;
    inline constexpr uint32_t S3CR_MBURST_Msk = 0x01800000;

    // S3NDTR fields
    inline constexpr uint32_t S3NDTR_NDT_Pos = 0;
    inline constexpr uint32_t S3NDTR_NDT_Msk = 0x0000FFFF;

    // S3PAR fields
    inline constexpr uint32_t S3PAR_PA_Pos = 0;
    inline constexpr uint32_t S3PAR_PA_Msk = 0xFFFFFFFF;

    // S3M0AR fields
    inline constexpr uint32_t S3M0AR_M0A_Pos = 0;
    inline constexpr uint32_t S3M0AR_M0A_Msk = 0xFFFFFFFF;

    // S3M1AR fields
    inline constexpr uint32_t S3M1AR_M1A_Pos = 0;
    inline constexpr uint32_t S3M1AR_M1A_Msk = 0xFFFFFFFF;

    // S3FCR fields
    inline constexpr uint32_t S3FCR_FTH_Pos = 0;
    inline constexpr uint32_t S3FCR_FTH_Msk = 0x00000003;
    inline constexpr uint32_t S3FCR_DMDIS_Pos = 2;
    inline constexpr uint32_t S3FCR_DMDIS_Msk = 0x00000004;
    inline constexpr uint32_t S3FCR_DMDIS = (1U << 2);
    inline constexpr uint32_t S3FCR_FS_Pos = 3;
    inline constexpr uint32_t S3FCR_FS_Msk = 0x00000038;
    inline constexpr uint32_t S3FCR_FEIE_Pos = 7;
    inline constexpr uint32_t S3FCR_FEIE_Msk = 0x00000080;
    inline constexpr uint32_t S3FCR_FEIE = (1U << 7);

    // S4CR fields
    inline constexpr uint32_t S4CR_EN_Pos = 0;
    inline constexpr uint32_t S4CR_EN_Msk = 0x00000001;
    inline constexpr uint32_t S4CR_EN = (1U << 0);
    inline constexpr uint32_t S4CR_DMEIE_Pos = 1;
    inline constexpr uint32_t S4CR_DMEIE_Msk = 0x00000002;
    inline constexpr uint32_t S4CR_DMEIE = (1U << 1);
    inline constexpr uint32_t S4CR_TEIE_Pos = 2;
    inline constexpr uint32_t S4CR_TEIE_Msk = 0x00000004;
    inline constexpr uint32_t S4CR_TEIE = (1U << 2);
    inline constexpr uint32_t S4CR_HTIE_Pos = 3;
    inline constexpr uint32_t S4CR_HTIE_Msk = 0x00000008;
    inline constexpr uint32_t S4CR_HTIE = (1U << 3);
    inline constexpr uint32_t S4CR_TCIE_Pos = 4;
    inline constexpr uint32_t S4CR_TCIE_Msk = 0x00000010;
    inline constexpr uint32_t S4CR_TCIE = (1U << 4);
    inline constexpr uint32_t S4CR_PFCTRL_Pos = 5;
    inline constexpr uint32_t S4CR_PFCTRL_Msk = 0x00000020;
    inline constexpr uint32_t S4CR_PFCTRL = (1U << 5);
    inline constexpr uint32_t S4CR_DIR_Pos = 6;
    inline constexpr uint32_t S4CR_DIR_Msk = 0x000000C0;
    inline constexpr uint32_t S4CR_CIRC_Pos = 8;
    inline constexpr uint32_t S4CR_CIRC_Msk = 0x00000100;
    inline constexpr uint32_t S4CR_CIRC = (1U << 8);
    inline constexpr uint32_t S4CR_PINC_Pos = 9;
    inline constexpr uint32_t S4CR_PINC_Msk = 0x00000200;
    inline constexpr uint32_t S4CR_PINC = (1U << 9);
    inline constexpr uint32_t S4CR_MINC_Pos = 10;
    inline constexpr uint32_t S4CR_MINC_Msk = 0x00000400;
    inline constexpr uint32_t S4CR_MINC = (1U << 10);
    inline constexpr uint32_t S4CR_PSIZE_Pos = 11;
    inline constexpr uint32_t S4CR_PSIZE_Msk = 0x00001800;
    inline constexpr uint32_t S4CR_MSIZE_Pos = 13;
    inline constexpr uint32_t S4CR_MSIZE_Msk = 0x00006000;
    inline constexpr uint32_t S4CR_PINCOS_Pos = 15;
    inline constexpr uint32_t S4CR_PINCOS_Msk = 0x00008000;
    inline constexpr uint32_t S4CR_PINCOS = (1U << 15);
    inline constexpr uint32_t S4CR_PL_Pos = 16;
    inline constexpr uint32_t S4CR_PL_Msk = 0x00030000;
    inline constexpr uint32_t S4CR_DBM_Pos = 18;
    inline constexpr uint32_t S4CR_DBM_Msk = 0x00040000;
    inline constexpr uint32_t S4CR_DBM = (1U << 18);
    inline constexpr uint32_t S4CR_CT_Pos = 19;
    inline constexpr uint32_t S4CR_CT_Msk = 0x00080000;
    inline constexpr uint32_t S4CR_CT = (1U << 19);
    inline constexpr uint32_t S4CR_ACK_Pos = 20;
    inline constexpr uint32_t S4CR_ACK_Msk = 0x00100000;
    inline constexpr uint32_t S4CR_ACK = (1U << 20);
    inline constexpr uint32_t S4CR_PBURST_Pos = 21;
    inline constexpr uint32_t S4CR_PBURST_Msk = 0x00600000;
    inline constexpr uint32_t S4CR_MBURST_Pos = 23;
    inline constexpr uint32_t S4CR_MBURST_Msk = 0x01800000;

    // S4NDTR fields
    inline constexpr uint32_t S4NDTR_NDT_Pos = 0;
    inline constexpr uint32_t S4NDTR_NDT_Msk = 0x0000FFFF;

    // S4PAR fields
    inline constexpr uint32_t S4PAR_PA_Pos = 0;
    inline constexpr uint32_t S4PAR_PA_Msk = 0xFFFFFFFF;

    // S4M0AR fields
    inline constexpr uint32_t S4M0AR_M0A_Pos = 0;
    inline constexpr uint32_t S4M0AR_M0A_Msk = 0xFFFFFFFF;

    // S4M1AR fields
    inline constexpr uint32_t S4M1AR_M1A_Pos = 0;
    inline constexpr uint32_t S4M1AR_M1A_Msk = 0xFFFFFFFF;

    // S4FCR fields
    inline constexpr uint32_t S4FCR_FTH_Pos = 0;
    inline constexpr uint32_t S4FCR_FTH_Msk = 0x00000003;
    inline constexpr uint32_t S4FCR_DMDIS_Pos = 2;
    inline constexpr uint32_t S4FCR_DMDIS_Msk = 0x00000004;
    inline constexpr uint32_t S4FCR_DMDIS = (1U << 2);
    inline constexpr uint32_t S4FCR_FS_Pos = 3;
    inline constexpr uint32_t S4FCR_FS_Msk = 0x00000038;
    inline constexpr uint32_t S4FCR_FEIE_Pos = 7;
    inline constexpr uint32_t S4FCR_FEIE_Msk = 0x00000080;
    inline constexpr uint32_t S4FCR_FEIE = (1U << 7);

    // S5CR fields
    inline constexpr uint32_t S5CR_EN_Pos = 0;
    inline constexpr uint32_t S5CR_EN_Msk = 0x00000001;
    inline constexpr uint32_t S5CR_EN = (1U << 0);
    inline constexpr uint32_t S5CR_DMEIE_Pos = 1;
    inline constexpr uint32_t S5CR_DMEIE_Msk = 0x00000002;
    inline constexpr uint32_t S5CR_DMEIE = (1U << 1);
    inline constexpr uint32_t S5CR_TEIE_Pos = 2;
    inline constexpr uint32_t S5CR_TEIE_Msk = 0x00000004;
    inline constexpr uint32_t S5CR_TEIE = (1U << 2);
    inline constexpr uint32_t S5CR_HTIE_Pos = 3;
    inline constexpr uint32_t S5CR_HTIE_Msk = 0x00000008;
    inline constexpr uint32_t S5CR_HTIE = (1U << 3);
    inline constexpr uint32_t S5CR_TCIE_Pos = 4;
    inline constexpr uint32_t S5CR_TCIE_Msk = 0x00000010;
    inline constexpr uint32_t S5CR_TCIE = (1U << 4);
    inline constexpr uint32_t S5CR_PFCTRL_Pos = 5;
    inline constexpr uint32_t S5CR_PFCTRL_Msk = 0x00000020;
    inline constexpr uint32_t S5CR_PFCTRL = (1U << 5);
    inline constexpr uint32_t S5CR_DIR_Pos = 6;
    inline constexpr uint32_t S5CR_DIR_Msk = 0x000000C0;
    inline constexpr uint32_t S5CR_CIRC_Pos = 8;
    inline constexpr uint32_t S5CR_CIRC_Msk = 0x00000100;
    inline constexpr uint32_t S5CR_CIRC = (1U << 8);
    inline constexpr uint32_t S5CR_PINC_Pos = 9;
    inline constexpr uint32_t S5CR_PINC_Msk = 0x00000200;
    inline constexpr uint32_t S5CR_PINC = (1U << 9);
    inline constexpr uint32_t S5CR_MINC_Pos = 10;
    inline constexpr uint32_t S5CR_MINC_Msk = 0x00000400;
    inline constexpr uint32_t S5CR_MINC = (1U << 10);
    inline constexpr uint32_t S5CR_PSIZE_Pos = 11;
    inline constexpr uint32_t S5CR_PSIZE_Msk = 0x00001800;
    inline constexpr uint32_t S5CR_MSIZE_Pos = 13;
    inline constexpr uint32_t S5CR_MSIZE_Msk = 0x00006000;
    inline constexpr uint32_t S5CR_PINCOS_Pos = 15;
    inline constexpr uint32_t S5CR_PINCOS_Msk = 0x00008000;
    inline constexpr uint32_t S5CR_PINCOS = (1U << 15);
    inline constexpr uint32_t S5CR_PL_Pos = 16;
    inline constexpr uint32_t S5CR_PL_Msk = 0x00030000;
    inline constexpr uint32_t S5CR_DBM_Pos = 18;
    inline constexpr uint32_t S5CR_DBM_Msk = 0x00040000;
    inline constexpr uint32_t S5CR_DBM = (1U << 18);
    inline constexpr uint32_t S5CR_CT_Pos = 19;
    inline constexpr uint32_t S5CR_CT_Msk = 0x00080000;
    inline constexpr uint32_t S5CR_CT = (1U << 19);
    inline constexpr uint32_t S5CR_ACK_Pos = 20;
    inline constexpr uint32_t S5CR_ACK_Msk = 0x00100000;
    inline constexpr uint32_t S5CR_ACK = (1U << 20);
    inline constexpr uint32_t S5CR_PBURST_Pos = 21;
    inline constexpr uint32_t S5CR_PBURST_Msk = 0x00600000;
    inline constexpr uint32_t S5CR_MBURST_Pos = 23;
    inline constexpr uint32_t S5CR_MBURST_Msk = 0x01800000;

    // S5NDTR fields
    inline constexpr uint32_t S5NDTR_NDT_Pos = 0;
    inline constexpr uint32_t S5NDTR_NDT_Msk = 0x0000FFFF;

    // S5PAR fields
    inline constexpr uint32_t S5PAR_PA_Pos = 0;
    inline constexpr uint32_t S5PAR_PA_Msk = 0xFFFFFFFF;

    // S5M0AR fields
    inline constexpr uint32_t S5M0AR_M0A_Pos = 0;
    inline constexpr uint32_t S5M0AR_M0A_Msk = 0xFFFFFFFF;

    // S5M1AR fields
    inline constexpr uint32_t S5M1AR_M1A_Pos = 0;
    inline constexpr uint32_t S5M1AR_M1A_Msk = 0xFFFFFFFF;

    // S5FCR fields
    inline constexpr uint32_t S5FCR_FTH_Pos = 0;
    inline constexpr uint32_t S5FCR_FTH_Msk = 0x00000003;
    inline constexpr uint32_t S5FCR_DMDIS_Pos = 2;
    inline constexpr uint32_t S5FCR_DMDIS_Msk = 0x00000004;
    inline constexpr uint32_t S5FCR_DMDIS = (1U << 2);
    inline constexpr uint32_t S5FCR_FS_Pos = 3;
    inline constexpr uint32_t S5FCR_FS_Msk = 0x00000038;
    inline constexpr uint32_t S5FCR_FEIE_Pos = 7;
    inline constexpr uint32_t S5FCR_FEIE_Msk = 0x00000080;
    inline constexpr uint32_t S5FCR_FEIE = (1U << 7);

    // S6CR fields
    inline constexpr uint32_t S6CR_EN_Pos = 0;
    inline constexpr uint32_t S6CR_EN_Msk = 0x00000001;
    inline constexpr uint32_t S6CR_EN = (1U << 0);
    inline constexpr uint32_t S6CR_DMEIE_Pos = 1;
    inline constexpr uint32_t S6CR_DMEIE_Msk = 0x00000002;
    inline constexpr uint32_t S6CR_DMEIE = (1U << 1);
    inline constexpr uint32_t S6CR_TEIE_Pos = 2;
    inline constexpr uint32_t S6CR_TEIE_Msk = 0x00000004;
    inline constexpr uint32_t S6CR_TEIE = (1U << 2);
    inline constexpr uint32_t S6CR_HTIE_Pos = 3;
    inline constexpr uint32_t S6CR_HTIE_Msk = 0x00000008;
    inline constexpr uint32_t S6CR_HTIE = (1U << 3);
    inline constexpr uint32_t S6CR_TCIE_Pos = 4;
    inline constexpr uint32_t S6CR_TCIE_Msk = 0x00000010;
    inline constexpr uint32_t S6CR_TCIE = (1U << 4);
    inline constexpr uint32_t S6CR_PFCTRL_Pos = 5;
    inline constexpr uint32_t S6CR_PFCTRL_Msk = 0x00000020;
    inline constexpr uint32_t S6CR_PFCTRL = (1U << 5);
    inline constexpr uint32_t S6CR_DIR_Pos = 6;
    inline constexpr uint32_t S6CR_DIR_Msk = 0x000000C0;
    inline constexpr uint32_t S6CR_CIRC_Pos = 8;
    inline constexpr uint32_t S6CR_CIRC_Msk = 0x00000100;
    inline constexpr uint32_t S6CR_CIRC = (1U << 8);
    inline constexpr uint32_t S6CR_PINC_Pos = 9;
    inline constexpr uint32_t S6CR_PINC_Msk = 0x00000200;
    inline constexpr uint32_t S6CR_PINC = (1U << 9);
    inline constexpr uint32_t S6CR_MINC_Pos = 10;
    inline constexpr uint32_t S6CR_MINC_Msk = 0x00000400;
    inline constexpr uint32_t S6CR_MINC = (1U << 10);
    inline constexpr uint32_t S6CR_PSIZE_Pos = 11;
    inline constexpr uint32_t S6CR_PSIZE_Msk = 0x00001800;
    inline constexpr uint32_t S6CR_MSIZE_Pos = 13;
    inline constexpr uint32_t S6CR_MSIZE_Msk = 0x00006000;
    inline constexpr uint32_t S6CR_PINCOS_Pos = 15;
    inline constexpr uint32_t S6CR_PINCOS_Msk = 0x00008000;
    inline constexpr uint32_t S6CR_PINCOS = (1U << 15);
    inline constexpr uint32_t S6CR_PL_Pos = 16;
    inline constexpr uint32_t S6CR_PL_Msk = 0x00030000;
    inline constexpr uint32_t S6CR_DBM_Pos = 18;
    inline constexpr uint32_t S6CR_DBM_Msk = 0x00040000;
    inline constexpr uint32_t S6CR_DBM = (1U << 18);
    inline constexpr uint32_t S6CR_CT_Pos = 19;
    inline constexpr uint32_t S6CR_CT_Msk = 0x00080000;
    inline constexpr uint32_t S6CR_CT = (1U << 19);
    inline constexpr uint32_t S6CR_ACK_Pos = 20;
    inline constexpr uint32_t S6CR_ACK_Msk = 0x00100000;
    inline constexpr uint32_t S6CR_ACK = (1U << 20);
    inline constexpr uint32_t S6CR_PBURST_Pos = 21;
    inline constexpr uint32_t S6CR_PBURST_Msk = 0x00600000;
    inline constexpr uint32_t S6CR_MBURST_Pos = 23;
    inline constexpr uint32_t S6CR_MBURST_Msk = 0x01800000;

    // S6NDTR fields
    inline constexpr uint32_t S6NDTR_NDT_Pos = 0;
    inline constexpr uint32_t S6NDTR_NDT_Msk = 0x0000FFFF;

    // S6PAR fields
    inline constexpr uint32_t S6PAR_PA_Pos = 0;
    inline constexpr uint32_t S6PAR_PA_Msk = 0xFFFFFFFF;

    // S6M0AR fields
    inline constexpr uint32_t S6M0AR_M0A_Pos = 0;
    inline constexpr uint32_t S6M0AR_M0A_Msk = 0xFFFFFFFF;

    // S6M1AR fields
    inline constexpr uint32_t S6M1AR_M1A_Pos = 0;
    inline constexpr uint32_t S6M1AR_M1A_Msk = 0xFFFFFFFF;

    // S6FCR fields
    inline constexpr uint32_t S6FCR_FTH_Pos = 0;
    inline constexpr uint32_t S6FCR_FTH_Msk = 0x00000003;
    inline constexpr uint32_t S6FCR_DMDIS_Pos = 2;
    inline constexpr uint32_t S6FCR_DMDIS_Msk = 0x00000004;
    inline constexpr uint32_t S6FCR_DMDIS = (1U << 2);
    inline constexpr uint32_t S6FCR_FS_Pos = 3;
    inline constexpr uint32_t S6FCR_FS_Msk = 0x00000038;
    inline constexpr uint32_t S6FCR_FEIE_Pos = 7;
    inline constexpr uint32_t S6FCR_FEIE_Msk = 0x00000080;
    inline constexpr uint32_t S6FCR_FEIE = (1U << 7);

    // S7CR fields
    inline constexpr uint32_t S7CR_EN_Pos = 0;
    inline constexpr uint32_t S7CR_EN_Msk = 0x00000001;
    inline constexpr uint32_t S7CR_EN = (1U << 0);
    inline constexpr uint32_t S7CR_DMEIE_Pos = 1;
    inline constexpr uint32_t S7CR_DMEIE_Msk = 0x00000002;
    inline constexpr uint32_t S7CR_DMEIE = (1U << 1);
    inline constexpr uint32_t S7CR_TEIE_Pos = 2;
    inline constexpr uint32_t S7CR_TEIE_Msk = 0x00000004;
    inline constexpr uint32_t S7CR_TEIE = (1U << 2);
    inline constexpr uint32_t S7CR_HTIE_Pos = 3;
    inline constexpr uint32_t S7CR_HTIE_Msk = 0x00000008;
    inline constexpr uint32_t S7CR_HTIE = (1U << 3);
    inline constexpr uint32_t S7CR_TCIE_Pos = 4;
    inline constexpr uint32_t S7CR_TCIE_Msk = 0x00000010;
    inline constexpr uint32_t S7CR_TCIE = (1U << 4);
    inline constexpr uint32_t S7CR_PFCTRL_Pos = 5;
    inline constexpr uint32_t S7CR_PFCTRL_Msk = 0x00000020;
    inline constexpr uint32_t S7CR_PFCTRL = (1U << 5);
    inline constexpr uint32_t S7CR_DIR_Pos = 6;
    inline constexpr uint32_t S7CR_DIR_Msk = 0x000000C0;
    inline constexpr uint32_t S7CR_CIRC_Pos = 8;
    inline constexpr uint32_t S7CR_CIRC_Msk = 0x00000100;
    inline constexpr uint32_t S7CR_CIRC = (1U << 8);
    inline constexpr uint32_t S7CR_PINC_Pos = 9;
    inline constexpr uint32_t S7CR_PINC_Msk = 0x00000200;
    inline constexpr uint32_t S7CR_PINC = (1U << 9);
    inline constexpr uint32_t S7CR_MINC_Pos = 10;
    inline constexpr uint32_t S7CR_MINC_Msk = 0x00000400;
    inline constexpr uint32_t S7CR_MINC = (1U << 10);
    inline constexpr uint32_t S7CR_PSIZE_Pos = 11;
    inline constexpr uint32_t S7CR_PSIZE_Msk = 0x00001800;
    inline constexpr uint32_t S7CR_MSIZE_Pos = 13;
    inline constexpr uint32_t S7CR_MSIZE_Msk = 0x00006000;
    inline constexpr uint32_t S7CR_PINCOS_Pos = 15;
    inline constexpr uint32_t S7CR_PINCOS_Msk = 0x00008000;
    inline constexpr uint32_t S7CR_PINCOS = (1U << 15);
    inline constexpr uint32_t S7CR_PL_Pos = 16;
    inline constexpr uint32_t S7CR_PL_Msk = 0x00030000;
    inline constexpr uint32_t S7CR_DBM_Pos = 18;
    inline constexpr uint32_t S7CR_DBM_Msk = 0x00040000;
    inline constexpr uint32_t S7CR_DBM = (1U << 18);
    inline constexpr uint32_t S7CR_CT_Pos = 19;
    inline constexpr uint32_t S7CR_CT_Msk = 0x00080000;
    inline constexpr uint32_t S7CR_CT = (1U << 19);
    inline constexpr uint32_t S7CR_ACK_Pos = 20;
    inline constexpr uint32_t S7CR_ACK_Msk = 0x00100000;
    inline constexpr uint32_t S7CR_ACK = (1U << 20);
    inline constexpr uint32_t S7CR_PBURST_Pos = 21;
    inline constexpr uint32_t S7CR_PBURST_Msk = 0x00600000;
    inline constexpr uint32_t S7CR_MBURST_Pos = 23;
    inline constexpr uint32_t S7CR_MBURST_Msk = 0x01800000;

    // S7NDTR fields
    inline constexpr uint32_t S7NDTR_NDT_Pos = 0;
    inline constexpr uint32_t S7NDTR_NDT_Msk = 0x0000FFFF;

    // S7PAR fields
    inline constexpr uint32_t S7PAR_PA_Pos = 0;
    inline constexpr uint32_t S7PAR_PA_Msk = 0xFFFFFFFF;

    // S7M0AR fields
    inline constexpr uint32_t S7M0AR_M0A_Pos = 0;
    inline constexpr uint32_t S7M0AR_M0A_Msk = 0xFFFFFFFF;

    // S7M1AR fields
    inline constexpr uint32_t S7M1AR_M1A_Pos = 0;
    inline constexpr uint32_t S7M1AR_M1A_Msk = 0xFFFFFFFF;

    // S7FCR fields
    inline constexpr uint32_t S7FCR_FTH_Pos = 0;
    inline constexpr uint32_t S7FCR_FTH_Msk = 0x00000003;
    inline constexpr uint32_t S7FCR_DMDIS_Pos = 2;
    inline constexpr uint32_t S7FCR_DMDIS_Msk = 0x00000004;
    inline constexpr uint32_t S7FCR_DMDIS = (1U << 2);
    inline constexpr uint32_t S7FCR_FS_Pos = 3;
    inline constexpr uint32_t S7FCR_FS_Msk = 0x00000038;
    inline constexpr uint32_t S7FCR_FEIE_Pos = 7;
    inline constexpr uint32_t S7FCR_FEIE_Msk = 0x00000080;
    inline constexpr uint32_t S7FCR_FEIE = (1U << 7);

} // namespace DMA2

// Peripheral instances (lowercase to avoid namespace collision)
namespace periph {
    inline auto* const bdma = reinterpret_cast<BDMA_t*>(0x58025400);
    inline auto* const dma2d = reinterpret_cast<DMA2D_t*>(0x52001000);
    inline auto* const dmamux1 = reinterpret_cast<DMAMUX1_t*>(0x40020800);
    inline auto* const dmamux2 = reinterpret_cast<DMAMUX2_t*>(0x58025800);
    inline auto* const dma1 = reinterpret_cast<DMA1_t*>(0x40020000);
    inline auto* const dma2 = reinterpret_cast<DMA1_t*>(0x40020400);
} // namespace periph

} // namespace sbl::hw::reg

#endif // SBL_HW_REG_STM32H750_DMA_HPP
