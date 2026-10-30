/**
 * @file tim_general.hpp
 * @brief Register definitions for STM32H750 - tim_general
 *
 * Generated from: stm32h750.svd.patched
 * Generator: cecrops
 * Generated: 2026-10-30T11:17:11.833266
 *
 * DO NOT EDIT - Regenerate with: cecrops generate <mcu-dir>
 */

#ifndef SBL_HW_REG_STM32H750_TIM_GENERAL_HPP
#define SBL_HW_REG_STM32H750_TIM_GENERAL_HPP

#include <cstdint>

namespace sbl::hw::reg {

/** General purpose timers */
struct TIM2_t {
    volatile uint32_t CR1;  ///< control register 1
    volatile uint32_t CR2;  ///< control register 2
    volatile uint32_t SMCR;  ///< slave mode control register
    volatile uint32_t DIER;  ///< DMA/Interrupt enable register
    volatile uint32_t SR;  ///< status register
    volatile uint32_t EGR;  ///< event generation register
    union {  // 0x18: alternate views of one register
        volatile uint32_t CCMR1_Output;  ///< capture/compare mode register 1 (output mode)
        volatile uint32_t CCMR1_Input;  ///< capture/compare mode register 1 (input mode)
    };
    union {  // 0x1C: alternate views of one register
        volatile uint32_t CCMR2_Output;  ///< capture/compare mode register 2 (output mode)
        volatile uint32_t CCMR2_Input;  ///< capture/compare mode register 2 (input mode)
    };
    volatile uint32_t CCER;  ///< capture/compare enable register
    volatile uint32_t CNT;  ///< counter
    volatile uint32_t PSC;  ///< prescaler
    volatile uint32_t ARR;  ///< auto-reload register
    uint8_t _reserved0[4];
    volatile uint32_t CCR1;  ///< capture/compare register 1
    volatile uint32_t CCR2;  ///< capture/compare register 2
    volatile uint32_t CCR3;  ///< capture/compare register 3
    volatile uint32_t CCR4;  ///< capture/compare register 4
    uint8_t _reserved1[4];
    volatile uint32_t DCR;  ///< DMA control register
    volatile uint32_t DMAR;  ///< DMA address for full transfer
    uint8_t _reserved2[16];
    volatile uint32_t AF1;  ///< TIM alternate function option register 1
    uint8_t _reserved3[4];
    volatile uint32_t TISEL;  ///< TIM timer input selection register
};

/** General purpose timers */
struct TIM3_t {
    volatile uint32_t CR1;  ///< control register 1
    volatile uint32_t CR2;  ///< control register 2
    volatile uint32_t SMCR;  ///< slave mode control register
    volatile uint32_t DIER;  ///< DMA/Interrupt enable register
    volatile uint32_t SR;  ///< status register
    volatile uint32_t EGR;  ///< event generation register
    union {  // 0x18: alternate views of one register
        volatile uint32_t CCMR1_Output;  ///< capture/compare mode register 1 (output mode)
        volatile uint32_t CCMR1_Input;  ///< capture/compare mode register 1 (input mode)
    };
    union {  // 0x1C: alternate views of one register
        volatile uint32_t CCMR2_Output;  ///< capture/compare mode register 2 (output mode)
        volatile uint32_t CCMR2_Input;  ///< capture/compare mode register 2 (input mode)
    };
    volatile uint32_t CCER;  ///< capture/compare enable register
    volatile uint32_t CNT;  ///< counter
    volatile uint32_t PSC;  ///< prescaler
    volatile uint32_t ARR;  ///< auto-reload register
    uint8_t _reserved0[4];
    volatile uint32_t CCR1;  ///< capture/compare register 1
    volatile uint32_t CCR2;  ///< capture/compare register 2
    volatile uint32_t CCR3;  ///< capture/compare register 3
    volatile uint32_t CCR4;  ///< capture/compare register 4
    uint8_t _reserved1[4];
    volatile uint32_t DCR;  ///< DMA control register
    volatile uint32_t DMAR;  ///< DMA address for full transfer
    uint8_t _reserved2[16];
    volatile uint32_t AF1;  ///< TIM alternate function option register 1
    uint8_t _reserved3[4];
    volatile uint32_t TISEL;  ///< TIM timer input selection register
};

/** General purpose timers */
struct TIM4_t {
    volatile uint32_t CR1;  ///< control register 1
    volatile uint32_t CR2;  ///< control register 2
    volatile uint32_t SMCR;  ///< slave mode control register
    volatile uint32_t DIER;  ///< DMA/Interrupt enable register
    volatile uint32_t SR;  ///< status register
    volatile uint32_t EGR;  ///< event generation register
    union {  // 0x18: alternate views of one register
        volatile uint32_t CCMR1_Output;  ///< capture/compare mode register 1 (output mode)
        volatile uint32_t CCMR1_Input;  ///< capture/compare mode register 1 (input mode)
    };
    union {  // 0x1C: alternate views of one register
        volatile uint32_t CCMR2_Output;  ///< capture/compare mode register 2 (output mode)
        volatile uint32_t CCMR2_Input;  ///< capture/compare mode register 2 (input mode)
    };
    volatile uint32_t CCER;  ///< capture/compare enable register
    volatile uint32_t CNT;  ///< counter
    volatile uint32_t PSC;  ///< prescaler
    volatile uint32_t ARR;  ///< auto-reload register
    uint8_t _reserved0[4];
    volatile uint32_t CCR1;  ///< capture/compare register 1
    volatile uint32_t CCR2;  ///< capture/compare register 2
    volatile uint32_t CCR3;  ///< capture/compare register 3
    volatile uint32_t CCR4;  ///< capture/compare register 4
    uint8_t _reserved1[4];
    volatile uint32_t DCR;  ///< DMA control register
    volatile uint32_t DMAR;  ///< DMA address for full transfer
    uint8_t _reserved2[16];
    volatile uint32_t AF1;  ///< TIM alternate function option register 1
    uint8_t _reserved3[4];
    volatile uint32_t TISEL;  ///< TIM timer input selection register
};

/** General purpose timers */
struct TIM5_t {
    volatile uint32_t CR1;  ///< control register 1
    volatile uint32_t CR2;  ///< control register 2
    volatile uint32_t SMCR;  ///< slave mode control register
    volatile uint32_t DIER;  ///< DMA/Interrupt enable register
    volatile uint32_t SR;  ///< status register
    volatile uint32_t EGR;  ///< event generation register
    union {  // 0x18: alternate views of one register
        volatile uint32_t CCMR1_Output;  ///< capture/compare mode register 1 (output mode)
        volatile uint32_t CCMR1_Input;  ///< capture/compare mode register 1 (input mode)
    };
    union {  // 0x1C: alternate views of one register
        volatile uint32_t CCMR2_Output;  ///< capture/compare mode register 2 (output mode)
        volatile uint32_t CCMR2_Input;  ///< capture/compare mode register 2 (input mode)
    };
    volatile uint32_t CCER;  ///< capture/compare enable register
    volatile uint32_t CNT;  ///< counter
    volatile uint32_t PSC;  ///< prescaler
    volatile uint32_t ARR;  ///< auto-reload register
    uint8_t _reserved0[4];
    volatile uint32_t CCR1;  ///< capture/compare register 1
    volatile uint32_t CCR2;  ///< capture/compare register 2
    volatile uint32_t CCR3;  ///< capture/compare register 3
    volatile uint32_t CCR4;  ///< capture/compare register 4
    uint8_t _reserved1[4];
    volatile uint32_t DCR;  ///< DMA control register
    volatile uint32_t DMAR;  ///< DMA address for full transfer
    uint8_t _reserved2[16];
    volatile uint32_t AF1;  ///< TIM alternate function option register 1
    uint8_t _reserved3[4];
    volatile uint32_t TISEL;  ///< TIM timer input selection register
};

namespace TIM2 {
    // CR1 fields
    inline constexpr uint32_t CR1_CEN_Pos = 0;
    inline constexpr uint32_t CR1_CEN_Msk = 0x00000001;
    inline constexpr uint32_t CR1_CEN = (1U << 0);
    inline constexpr uint32_t CR1_UDIS_Pos = 1;
    inline constexpr uint32_t CR1_UDIS_Msk = 0x00000002;
    inline constexpr uint32_t CR1_UDIS = (1U << 1);
    inline constexpr uint32_t CR1_URS_Pos = 2;
    inline constexpr uint32_t CR1_URS_Msk = 0x00000004;
    inline constexpr uint32_t CR1_URS = (1U << 2);
    inline constexpr uint32_t CR1_OPM_Pos = 3;
    inline constexpr uint32_t CR1_OPM_Msk = 0x00000008;
    inline constexpr uint32_t CR1_OPM = (1U << 3);
    inline constexpr uint32_t CR1_DIR_Pos = 4;
    inline constexpr uint32_t CR1_DIR_Msk = 0x00000010;
    inline constexpr uint32_t CR1_DIR = (1U << 4);
    inline constexpr uint32_t CR1_CMS_Pos = 5;
    inline constexpr uint32_t CR1_CMS_Msk = 0x00000060;
    inline constexpr uint32_t CR1_ARPE_Pos = 7;
    inline constexpr uint32_t CR1_ARPE_Msk = 0x00000080;
    inline constexpr uint32_t CR1_ARPE = (1U << 7);
    inline constexpr uint32_t CR1_CKD_Pos = 8;
    inline constexpr uint32_t CR1_CKD_Msk = 0x00000300;
    inline constexpr uint32_t CR1_UIFREMAP_Pos = 11;
    inline constexpr uint32_t CR1_UIFREMAP_Msk = 0x00000800;
    inline constexpr uint32_t CR1_UIFREMAP = (1U << 11);

    // CR2 fields
    inline constexpr uint32_t CR2_CCDS_Pos = 3;
    inline constexpr uint32_t CR2_CCDS_Msk = 0x00000008;
    inline constexpr uint32_t CR2_CCDS = (1U << 3);
    inline constexpr uint32_t CR2_MMS_Pos = 4;
    inline constexpr uint32_t CR2_MMS_Msk = 0x00000070;
    inline constexpr uint32_t CR2_TI1S_Pos = 7;
    inline constexpr uint32_t CR2_TI1S_Msk = 0x00000080;
    inline constexpr uint32_t CR2_TI1S = (1U << 7);

    // SMCR fields
    inline constexpr uint32_t SMCR_SMS_Pos = 0;
    inline constexpr uint32_t SMCR_SMS_Msk = 0x00000007;
    inline constexpr uint32_t SMCR_TS_Pos = 4;
    inline constexpr uint32_t SMCR_TS_Msk = 0x00000070;
    inline constexpr uint32_t SMCR_MSM_Pos = 7;
    inline constexpr uint32_t SMCR_MSM_Msk = 0x00000080;
    inline constexpr uint32_t SMCR_MSM = (1U << 7);
    inline constexpr uint32_t SMCR_ETF_Pos = 8;
    inline constexpr uint32_t SMCR_ETF_Msk = 0x00000F00;
    inline constexpr uint32_t SMCR_ETPS_Pos = 12;
    inline constexpr uint32_t SMCR_ETPS_Msk = 0x00003000;
    inline constexpr uint32_t SMCR_ECE_Pos = 14;
    inline constexpr uint32_t SMCR_ECE_Msk = 0x00004000;
    inline constexpr uint32_t SMCR_ECE = (1U << 14);
    inline constexpr uint32_t SMCR_ETP_Pos = 15;
    inline constexpr uint32_t SMCR_ETP_Msk = 0x00008000;
    inline constexpr uint32_t SMCR_ETP = (1U << 15);
    inline constexpr uint32_t SMCR_SMS_3_Pos = 16;
    inline constexpr uint32_t SMCR_SMS_3_Msk = 0x00010000;
    inline constexpr uint32_t SMCR_SMS_3 = (1U << 16);
    inline constexpr uint32_t SMCR_TS_4_3_Pos = 20;
    inline constexpr uint32_t SMCR_TS_4_3_Msk = 0x00300000;

    // DIER fields
    inline constexpr uint32_t DIER_UIE_Pos = 0;
    inline constexpr uint32_t DIER_UIE_Msk = 0x00000001;
    inline constexpr uint32_t DIER_UIE = (1U << 0);
    inline constexpr uint32_t DIER_CC1IE_Pos = 1;
    inline constexpr uint32_t DIER_CC1IE_Msk = 0x00000002;
    inline constexpr uint32_t DIER_CC1IE = (1U << 1);
    inline constexpr uint32_t DIER_CC2IE_Pos = 2;
    inline constexpr uint32_t DIER_CC2IE_Msk = 0x00000004;
    inline constexpr uint32_t DIER_CC2IE = (1U << 2);
    inline constexpr uint32_t DIER_CC3IE_Pos = 3;
    inline constexpr uint32_t DIER_CC3IE_Msk = 0x00000008;
    inline constexpr uint32_t DIER_CC3IE = (1U << 3);
    inline constexpr uint32_t DIER_CC4IE_Pos = 4;
    inline constexpr uint32_t DIER_CC4IE_Msk = 0x00000010;
    inline constexpr uint32_t DIER_CC4IE = (1U << 4);
    inline constexpr uint32_t DIER_TIE_Pos = 6;
    inline constexpr uint32_t DIER_TIE_Msk = 0x00000040;
    inline constexpr uint32_t DIER_TIE = (1U << 6);
    inline constexpr uint32_t DIER_UDE_Pos = 8;
    inline constexpr uint32_t DIER_UDE_Msk = 0x00000100;
    inline constexpr uint32_t DIER_UDE = (1U << 8);
    inline constexpr uint32_t DIER_CC1DE_Pos = 9;
    inline constexpr uint32_t DIER_CC1DE_Msk = 0x00000200;
    inline constexpr uint32_t DIER_CC1DE = (1U << 9);
    inline constexpr uint32_t DIER_CC2DE_Pos = 10;
    inline constexpr uint32_t DIER_CC2DE_Msk = 0x00000400;
    inline constexpr uint32_t DIER_CC2DE = (1U << 10);
    inline constexpr uint32_t DIER_CC3DE_Pos = 11;
    inline constexpr uint32_t DIER_CC3DE_Msk = 0x00000800;
    inline constexpr uint32_t DIER_CC3DE = (1U << 11);
    inline constexpr uint32_t DIER_CC4DE_Pos = 12;
    inline constexpr uint32_t DIER_CC4DE_Msk = 0x00001000;
    inline constexpr uint32_t DIER_CC4DE = (1U << 12);
    inline constexpr uint32_t DIER_TDE_Pos = 14;
    inline constexpr uint32_t DIER_TDE_Msk = 0x00004000;
    inline constexpr uint32_t DIER_TDE = (1U << 14);

    // SR fields
    inline constexpr uint32_t SR_UIF_Pos = 0;
    inline constexpr uint32_t SR_UIF_Msk = 0x00000001;
    inline constexpr uint32_t SR_UIF = (1U << 0);
    inline constexpr uint32_t SR_CC1IF_Pos = 1;
    inline constexpr uint32_t SR_CC1IF_Msk = 0x00000002;
    inline constexpr uint32_t SR_CC1IF = (1U << 1);
    inline constexpr uint32_t SR_CC2IF_Pos = 2;
    inline constexpr uint32_t SR_CC2IF_Msk = 0x00000004;
    inline constexpr uint32_t SR_CC2IF = (1U << 2);
    inline constexpr uint32_t SR_CC3IF_Pos = 3;
    inline constexpr uint32_t SR_CC3IF_Msk = 0x00000008;
    inline constexpr uint32_t SR_CC3IF = (1U << 3);
    inline constexpr uint32_t SR_CC4IF_Pos = 4;
    inline constexpr uint32_t SR_CC4IF_Msk = 0x00000010;
    inline constexpr uint32_t SR_CC4IF = (1U << 4);
    inline constexpr uint32_t SR_TIF_Pos = 6;
    inline constexpr uint32_t SR_TIF_Msk = 0x00000040;
    inline constexpr uint32_t SR_TIF = (1U << 6);
    inline constexpr uint32_t SR_CC1OF_Pos = 9;
    inline constexpr uint32_t SR_CC1OF_Msk = 0x00000200;
    inline constexpr uint32_t SR_CC1OF = (1U << 9);
    inline constexpr uint32_t SR_CC2OF_Pos = 10;
    inline constexpr uint32_t SR_CC2OF_Msk = 0x00000400;
    inline constexpr uint32_t SR_CC2OF = (1U << 10);
    inline constexpr uint32_t SR_CC3OF_Pos = 11;
    inline constexpr uint32_t SR_CC3OF_Msk = 0x00000800;
    inline constexpr uint32_t SR_CC3OF = (1U << 11);
    inline constexpr uint32_t SR_CC4OF_Pos = 12;
    inline constexpr uint32_t SR_CC4OF_Msk = 0x00001000;
    inline constexpr uint32_t SR_CC4OF = (1U << 12);

    // EGR fields
    inline constexpr uint32_t EGR_UG_Pos = 0;
    inline constexpr uint32_t EGR_UG_Msk = 0x00000001;
    inline constexpr uint32_t EGR_UG = (1U << 0);
    inline constexpr uint32_t EGR_CC1G_Pos = 1;
    inline constexpr uint32_t EGR_CC1G_Msk = 0x00000002;
    inline constexpr uint32_t EGR_CC1G = (1U << 1);
    inline constexpr uint32_t EGR_CC2G_Pos = 2;
    inline constexpr uint32_t EGR_CC2G_Msk = 0x00000004;
    inline constexpr uint32_t EGR_CC2G = (1U << 2);
    inline constexpr uint32_t EGR_CC3G_Pos = 3;
    inline constexpr uint32_t EGR_CC3G_Msk = 0x00000008;
    inline constexpr uint32_t EGR_CC3G = (1U << 3);
    inline constexpr uint32_t EGR_CC4G_Pos = 4;
    inline constexpr uint32_t EGR_CC4G_Msk = 0x00000010;
    inline constexpr uint32_t EGR_CC4G = (1U << 4);
    inline constexpr uint32_t EGR_TG_Pos = 6;
    inline constexpr uint32_t EGR_TG_Msk = 0x00000040;
    inline constexpr uint32_t EGR_TG = (1U << 6);

    // CCMR1_Output fields
    inline constexpr uint32_t CCMR1_Output_CC1S_Pos = 0;
    inline constexpr uint32_t CCMR1_Output_CC1S_Msk = 0x00000003;
    inline constexpr uint32_t CCMR1_Output_OC1FE_Pos = 2;
    inline constexpr uint32_t CCMR1_Output_OC1FE_Msk = 0x00000004;
    inline constexpr uint32_t CCMR1_Output_OC1FE = (1U << 2);
    inline constexpr uint32_t CCMR1_Output_OC1PE_Pos = 3;
    inline constexpr uint32_t CCMR1_Output_OC1PE_Msk = 0x00000008;
    inline constexpr uint32_t CCMR1_Output_OC1PE = (1U << 3);
    inline constexpr uint32_t CCMR1_Output_OC1M_Pos = 4;
    inline constexpr uint32_t CCMR1_Output_OC1M_Msk = 0x00000070;
    inline constexpr uint32_t CCMR1_Output_OC1CE_Pos = 7;
    inline constexpr uint32_t CCMR1_Output_OC1CE_Msk = 0x00000080;
    inline constexpr uint32_t CCMR1_Output_OC1CE = (1U << 7);
    inline constexpr uint32_t CCMR1_Output_CC2S_Pos = 8;
    inline constexpr uint32_t CCMR1_Output_CC2S_Msk = 0x00000300;
    inline constexpr uint32_t CCMR1_Output_OC2FE_Pos = 10;
    inline constexpr uint32_t CCMR1_Output_OC2FE_Msk = 0x00000400;
    inline constexpr uint32_t CCMR1_Output_OC2FE = (1U << 10);
    inline constexpr uint32_t CCMR1_Output_OC2PE_Pos = 11;
    inline constexpr uint32_t CCMR1_Output_OC2PE_Msk = 0x00000800;
    inline constexpr uint32_t CCMR1_Output_OC2PE = (1U << 11);
    inline constexpr uint32_t CCMR1_Output_OC2M_Pos = 12;
    inline constexpr uint32_t CCMR1_Output_OC2M_Msk = 0x00007000;
    inline constexpr uint32_t CCMR1_Output_OC2CE_Pos = 15;
    inline constexpr uint32_t CCMR1_Output_OC2CE_Msk = 0x00008000;
    inline constexpr uint32_t CCMR1_Output_OC2CE = (1U << 15);
    inline constexpr uint32_t CCMR1_Output_OC1M_3_Pos = 16;
    inline constexpr uint32_t CCMR1_Output_OC1M_3_Msk = 0x00010000;
    inline constexpr uint32_t CCMR1_Output_OC1M_3 = (1U << 16);
    inline constexpr uint32_t CCMR1_Output_OC2M_3_Pos = 24;
    inline constexpr uint32_t CCMR1_Output_OC2M_3_Msk = 0x01000000;
    inline constexpr uint32_t CCMR1_Output_OC2M_3 = (1U << 24);

    // CCMR1_Input fields
    inline constexpr uint32_t CCMR1_Input_CC1S_Pos = 0;
    inline constexpr uint32_t CCMR1_Input_CC1S_Msk = 0x00000003;
    inline constexpr uint32_t CCMR1_Input_ICPCS_Pos = 2;
    inline constexpr uint32_t CCMR1_Input_ICPCS_Msk = 0x0000000C;
    inline constexpr uint32_t CCMR1_Input_IC1F_Pos = 4;
    inline constexpr uint32_t CCMR1_Input_IC1F_Msk = 0x000000F0;
    inline constexpr uint32_t CCMR1_Input_CC2S_Pos = 8;
    inline constexpr uint32_t CCMR1_Input_CC2S_Msk = 0x00000300;
    inline constexpr uint32_t CCMR1_Input_IC2PCS_Pos = 10;
    inline constexpr uint32_t CCMR1_Input_IC2PCS_Msk = 0x00000C00;
    inline constexpr uint32_t CCMR1_Input_IC2F_Pos = 12;
    inline constexpr uint32_t CCMR1_Input_IC2F_Msk = 0x0000F000;

    // CCMR2_Output fields
    inline constexpr uint32_t CCMR2_Output_CC3S_Pos = 0;
    inline constexpr uint32_t CCMR2_Output_CC3S_Msk = 0x00000003;
    inline constexpr uint32_t CCMR2_Output_OC3FE_Pos = 2;
    inline constexpr uint32_t CCMR2_Output_OC3FE_Msk = 0x00000004;
    inline constexpr uint32_t CCMR2_Output_OC3FE = (1U << 2);
    inline constexpr uint32_t CCMR2_Output_OC3PE_Pos = 3;
    inline constexpr uint32_t CCMR2_Output_OC3PE_Msk = 0x00000008;
    inline constexpr uint32_t CCMR2_Output_OC3PE = (1U << 3);
    inline constexpr uint32_t CCMR2_Output_OC3M_Pos = 4;
    inline constexpr uint32_t CCMR2_Output_OC3M_Msk = 0x00000070;
    inline constexpr uint32_t CCMR2_Output_OC3CE_Pos = 7;
    inline constexpr uint32_t CCMR2_Output_OC3CE_Msk = 0x00000080;
    inline constexpr uint32_t CCMR2_Output_OC3CE = (1U << 7);
    inline constexpr uint32_t CCMR2_Output_CC4S_Pos = 8;
    inline constexpr uint32_t CCMR2_Output_CC4S_Msk = 0x00000300;
    inline constexpr uint32_t CCMR2_Output_OC4FE_Pos = 10;
    inline constexpr uint32_t CCMR2_Output_OC4FE_Msk = 0x00000400;
    inline constexpr uint32_t CCMR2_Output_OC4FE = (1U << 10);
    inline constexpr uint32_t CCMR2_Output_OC4PE_Pos = 11;
    inline constexpr uint32_t CCMR2_Output_OC4PE_Msk = 0x00000800;
    inline constexpr uint32_t CCMR2_Output_OC4PE = (1U << 11);
    inline constexpr uint32_t CCMR2_Output_OC4M_Pos = 12;
    inline constexpr uint32_t CCMR2_Output_OC4M_Msk = 0x00007000;
    inline constexpr uint32_t CCMR2_Output_OC4CE_Pos = 15;
    inline constexpr uint32_t CCMR2_Output_OC4CE_Msk = 0x00008000;
    inline constexpr uint32_t CCMR2_Output_OC4CE = (1U << 15);
    inline constexpr uint32_t CCMR2_Output_OC3M_3_Pos = 16;
    inline constexpr uint32_t CCMR2_Output_OC3M_3_Msk = 0x00010000;
    inline constexpr uint32_t CCMR2_Output_OC3M_3 = (1U << 16);
    inline constexpr uint32_t CCMR2_Output_OC4M_3_Pos = 24;
    inline constexpr uint32_t CCMR2_Output_OC4M_3_Msk = 0x01000000;
    inline constexpr uint32_t CCMR2_Output_OC4M_3 = (1U << 24);

    // CCMR2_Input fields
    inline constexpr uint32_t CCMR2_Input_CC3S_Pos = 0;
    inline constexpr uint32_t CCMR2_Input_CC3S_Msk = 0x00000003;
    inline constexpr uint32_t CCMR2_Input_IC3PSC_Pos = 2;
    inline constexpr uint32_t CCMR2_Input_IC3PSC_Msk = 0x0000000C;
    inline constexpr uint32_t CCMR2_Input_IC3F_Pos = 4;
    inline constexpr uint32_t CCMR2_Input_IC3F_Msk = 0x000000F0;
    inline constexpr uint32_t CCMR2_Input_CC4S_Pos = 8;
    inline constexpr uint32_t CCMR2_Input_CC4S_Msk = 0x00000300;
    inline constexpr uint32_t CCMR2_Input_IC4PSC_Pos = 10;
    inline constexpr uint32_t CCMR2_Input_IC4PSC_Msk = 0x00000C00;
    inline constexpr uint32_t CCMR2_Input_IC4F_Pos = 12;
    inline constexpr uint32_t CCMR2_Input_IC4F_Msk = 0x0000F000;

    // CCER fields
    inline constexpr uint32_t CCER_CC1E_Pos = 0;
    inline constexpr uint32_t CCER_CC1E_Msk = 0x00000001;
    inline constexpr uint32_t CCER_CC1E = (1U << 0);
    inline constexpr uint32_t CCER_CC1P_Pos = 1;
    inline constexpr uint32_t CCER_CC1P_Msk = 0x00000002;
    inline constexpr uint32_t CCER_CC1P = (1U << 1);
    inline constexpr uint32_t CCER_CC1NP_Pos = 3;
    inline constexpr uint32_t CCER_CC1NP_Msk = 0x00000008;
    inline constexpr uint32_t CCER_CC1NP = (1U << 3);
    inline constexpr uint32_t CCER_CC2E_Pos = 4;
    inline constexpr uint32_t CCER_CC2E_Msk = 0x00000010;
    inline constexpr uint32_t CCER_CC2E = (1U << 4);
    inline constexpr uint32_t CCER_CC2P_Pos = 5;
    inline constexpr uint32_t CCER_CC2P_Msk = 0x00000020;
    inline constexpr uint32_t CCER_CC2P = (1U << 5);
    inline constexpr uint32_t CCER_CC2NP_Pos = 7;
    inline constexpr uint32_t CCER_CC2NP_Msk = 0x00000080;
    inline constexpr uint32_t CCER_CC2NP = (1U << 7);
    inline constexpr uint32_t CCER_CC3E_Pos = 8;
    inline constexpr uint32_t CCER_CC3E_Msk = 0x00000100;
    inline constexpr uint32_t CCER_CC3E = (1U << 8);
    inline constexpr uint32_t CCER_CC3P_Pos = 9;
    inline constexpr uint32_t CCER_CC3P_Msk = 0x00000200;
    inline constexpr uint32_t CCER_CC3P = (1U << 9);
    inline constexpr uint32_t CCER_CC3NP_Pos = 11;
    inline constexpr uint32_t CCER_CC3NP_Msk = 0x00000800;
    inline constexpr uint32_t CCER_CC3NP = (1U << 11);
    inline constexpr uint32_t CCER_CC4E_Pos = 12;
    inline constexpr uint32_t CCER_CC4E_Msk = 0x00001000;
    inline constexpr uint32_t CCER_CC4E = (1U << 12);
    inline constexpr uint32_t CCER_CC4P_Pos = 13;
    inline constexpr uint32_t CCER_CC4P_Msk = 0x00002000;
    inline constexpr uint32_t CCER_CC4P = (1U << 13);
    inline constexpr uint32_t CCER_CC4NP_Pos = 15;
    inline constexpr uint32_t CCER_CC4NP_Msk = 0x00008000;
    inline constexpr uint32_t CCER_CC4NP = (1U << 15);

    // CNT fields
    inline constexpr uint32_t CNT_CNT_L_Pos = 0;
    inline constexpr uint32_t CNT_CNT_L_Msk = 0x0000FFFF;
    inline constexpr uint32_t CNT_CNT_H_Pos = 16;
    inline constexpr uint32_t CNT_CNT_H_Msk = 0xFFFF0000;

    // PSC fields
    inline constexpr uint32_t PSC_PSC_Pos = 0;
    inline constexpr uint32_t PSC_PSC_Msk = 0x0000FFFF;

    // ARR fields
    inline constexpr uint32_t ARR_ARR_L_Pos = 0;
    inline constexpr uint32_t ARR_ARR_L_Msk = 0x0000FFFF;
    inline constexpr uint32_t ARR_ARR_H_Pos = 16;
    inline constexpr uint32_t ARR_ARR_H_Msk = 0xFFFF0000;

    // CCR1 fields
    inline constexpr uint32_t CCR1_CCR1_L_Pos = 0;
    inline constexpr uint32_t CCR1_CCR1_L_Msk = 0x0000FFFF;
    inline constexpr uint32_t CCR1_CCR1_H_Pos = 16;
    inline constexpr uint32_t CCR1_CCR1_H_Msk = 0xFFFF0000;

    // CCR2 fields
    inline constexpr uint32_t CCR2_CCR2_L_Pos = 0;
    inline constexpr uint32_t CCR2_CCR2_L_Msk = 0x0000FFFF;
    inline constexpr uint32_t CCR2_CCR2_H_Pos = 16;
    inline constexpr uint32_t CCR2_CCR2_H_Msk = 0xFFFF0000;

    // CCR3 fields
    inline constexpr uint32_t CCR3_CCR3_L_Pos = 0;
    inline constexpr uint32_t CCR3_CCR3_L_Msk = 0x0000FFFF;
    inline constexpr uint32_t CCR3_CCR3_H_Pos = 16;
    inline constexpr uint32_t CCR3_CCR3_H_Msk = 0xFFFF0000;

    // CCR4 fields
    inline constexpr uint32_t CCR4_CCR4_L_Pos = 0;
    inline constexpr uint32_t CCR4_CCR4_L_Msk = 0x0000FFFF;
    inline constexpr uint32_t CCR4_CCR4_H_Pos = 16;
    inline constexpr uint32_t CCR4_CCR4_H_Msk = 0xFFFF0000;

    // DCR fields
    inline constexpr uint32_t DCR_DBA_Pos = 0;
    inline constexpr uint32_t DCR_DBA_Msk = 0x0000001F;
    inline constexpr uint32_t DCR_DBL_Pos = 8;
    inline constexpr uint32_t DCR_DBL_Msk = 0x00001F00;

    // DMAR fields
    inline constexpr uint32_t DMAR_DMAB_Pos = 0;
    inline constexpr uint32_t DMAR_DMAB_Msk = 0x0000FFFF;

    // AF1 fields
    inline constexpr uint32_t AF1_ETRSEL_Pos = 14;
    inline constexpr uint32_t AF1_ETRSEL_Msk = 0x0003C000;

    // TISEL fields
    inline constexpr uint32_t TISEL_TI1SEL_Pos = 0;
    inline constexpr uint32_t TISEL_TI1SEL_Msk = 0x0000000F;
    inline constexpr uint32_t TISEL_TI2SEL_Pos = 8;
    inline constexpr uint32_t TISEL_TI2SEL_Msk = 0x00000F00;
    inline constexpr uint32_t TISEL_TI3SEL_Pos = 16;
    inline constexpr uint32_t TISEL_TI3SEL_Msk = 0x000F0000;
    inline constexpr uint32_t TISEL_TI4SEL_Pos = 24;
    inline constexpr uint32_t TISEL_TI4SEL_Msk = 0x0F000000;

} // namespace TIM2

namespace TIM3 {
    // CR1 fields
    inline constexpr uint32_t CR1_CEN_Pos = 0;
    inline constexpr uint32_t CR1_CEN_Msk = 0x00000001;
    inline constexpr uint32_t CR1_CEN = (1U << 0);
    inline constexpr uint32_t CR1_UDIS_Pos = 1;
    inline constexpr uint32_t CR1_UDIS_Msk = 0x00000002;
    inline constexpr uint32_t CR1_UDIS = (1U << 1);
    inline constexpr uint32_t CR1_URS_Pos = 2;
    inline constexpr uint32_t CR1_URS_Msk = 0x00000004;
    inline constexpr uint32_t CR1_URS = (1U << 2);
    inline constexpr uint32_t CR1_OPM_Pos = 3;
    inline constexpr uint32_t CR1_OPM_Msk = 0x00000008;
    inline constexpr uint32_t CR1_OPM = (1U << 3);
    inline constexpr uint32_t CR1_DIR_Pos = 4;
    inline constexpr uint32_t CR1_DIR_Msk = 0x00000010;
    inline constexpr uint32_t CR1_DIR = (1U << 4);
    inline constexpr uint32_t CR1_CMS_Pos = 5;
    inline constexpr uint32_t CR1_CMS_Msk = 0x00000060;
    inline constexpr uint32_t CR1_ARPE_Pos = 7;
    inline constexpr uint32_t CR1_ARPE_Msk = 0x00000080;
    inline constexpr uint32_t CR1_ARPE = (1U << 7);
    inline constexpr uint32_t CR1_CKD_Pos = 8;
    inline constexpr uint32_t CR1_CKD_Msk = 0x00000300;
    inline constexpr uint32_t CR1_UIFREMAP_Pos = 11;
    inline constexpr uint32_t CR1_UIFREMAP_Msk = 0x00000800;
    inline constexpr uint32_t CR1_UIFREMAP = (1U << 11);

    // CR2 fields
    inline constexpr uint32_t CR2_CCDS_Pos = 3;
    inline constexpr uint32_t CR2_CCDS_Msk = 0x00000008;
    inline constexpr uint32_t CR2_CCDS = (1U << 3);
    inline constexpr uint32_t CR2_MMS_Pos = 4;
    inline constexpr uint32_t CR2_MMS_Msk = 0x00000070;
    inline constexpr uint32_t CR2_TI1S_Pos = 7;
    inline constexpr uint32_t CR2_TI1S_Msk = 0x00000080;
    inline constexpr uint32_t CR2_TI1S = (1U << 7);

    // SMCR fields
    inline constexpr uint32_t SMCR_SMS_Pos = 0;
    inline constexpr uint32_t SMCR_SMS_Msk = 0x00000007;
    inline constexpr uint32_t SMCR_TS_Pos = 4;
    inline constexpr uint32_t SMCR_TS_Msk = 0x00000070;
    inline constexpr uint32_t SMCR_MSM_Pos = 7;
    inline constexpr uint32_t SMCR_MSM_Msk = 0x00000080;
    inline constexpr uint32_t SMCR_MSM = (1U << 7);
    inline constexpr uint32_t SMCR_ETF_Pos = 8;
    inline constexpr uint32_t SMCR_ETF_Msk = 0x00000F00;
    inline constexpr uint32_t SMCR_ETPS_Pos = 12;
    inline constexpr uint32_t SMCR_ETPS_Msk = 0x00003000;
    inline constexpr uint32_t SMCR_ECE_Pos = 14;
    inline constexpr uint32_t SMCR_ECE_Msk = 0x00004000;
    inline constexpr uint32_t SMCR_ECE = (1U << 14);
    inline constexpr uint32_t SMCR_ETP_Pos = 15;
    inline constexpr uint32_t SMCR_ETP_Msk = 0x00008000;
    inline constexpr uint32_t SMCR_ETP = (1U << 15);
    inline constexpr uint32_t SMCR_SMS_3_Pos = 16;
    inline constexpr uint32_t SMCR_SMS_3_Msk = 0x00010000;
    inline constexpr uint32_t SMCR_SMS_3 = (1U << 16);
    inline constexpr uint32_t SMCR_TS_4_3_Pos = 20;
    inline constexpr uint32_t SMCR_TS_4_3_Msk = 0x00300000;

    // DIER fields
    inline constexpr uint32_t DIER_UIE_Pos = 0;
    inline constexpr uint32_t DIER_UIE_Msk = 0x00000001;
    inline constexpr uint32_t DIER_UIE = (1U << 0);
    inline constexpr uint32_t DIER_CC1IE_Pos = 1;
    inline constexpr uint32_t DIER_CC1IE_Msk = 0x00000002;
    inline constexpr uint32_t DIER_CC1IE = (1U << 1);
    inline constexpr uint32_t DIER_CC2IE_Pos = 2;
    inline constexpr uint32_t DIER_CC2IE_Msk = 0x00000004;
    inline constexpr uint32_t DIER_CC2IE = (1U << 2);
    inline constexpr uint32_t DIER_CC3IE_Pos = 3;
    inline constexpr uint32_t DIER_CC3IE_Msk = 0x00000008;
    inline constexpr uint32_t DIER_CC3IE = (1U << 3);
    inline constexpr uint32_t DIER_CC4IE_Pos = 4;
    inline constexpr uint32_t DIER_CC4IE_Msk = 0x00000010;
    inline constexpr uint32_t DIER_CC4IE = (1U << 4);
    inline constexpr uint32_t DIER_TIE_Pos = 6;
    inline constexpr uint32_t DIER_TIE_Msk = 0x00000040;
    inline constexpr uint32_t DIER_TIE = (1U << 6);
    inline constexpr uint32_t DIER_UDE_Pos = 8;
    inline constexpr uint32_t DIER_UDE_Msk = 0x00000100;
    inline constexpr uint32_t DIER_UDE = (1U << 8);
    inline constexpr uint32_t DIER_CC1DE_Pos = 9;
    inline constexpr uint32_t DIER_CC1DE_Msk = 0x00000200;
    inline constexpr uint32_t DIER_CC1DE = (1U << 9);
    inline constexpr uint32_t DIER_CC2DE_Pos = 10;
    inline constexpr uint32_t DIER_CC2DE_Msk = 0x00000400;
    inline constexpr uint32_t DIER_CC2DE = (1U << 10);
    inline constexpr uint32_t DIER_CC3DE_Pos = 11;
    inline constexpr uint32_t DIER_CC3DE_Msk = 0x00000800;
    inline constexpr uint32_t DIER_CC3DE = (1U << 11);
    inline constexpr uint32_t DIER_CC4DE_Pos = 12;
    inline constexpr uint32_t DIER_CC4DE_Msk = 0x00001000;
    inline constexpr uint32_t DIER_CC4DE = (1U << 12);
    inline constexpr uint32_t DIER_TDE_Pos = 14;
    inline constexpr uint32_t DIER_TDE_Msk = 0x00004000;
    inline constexpr uint32_t DIER_TDE = (1U << 14);

    // SR fields
    inline constexpr uint32_t SR_UIF_Pos = 0;
    inline constexpr uint32_t SR_UIF_Msk = 0x00000001;
    inline constexpr uint32_t SR_UIF = (1U << 0);
    inline constexpr uint32_t SR_CC1IF_Pos = 1;
    inline constexpr uint32_t SR_CC1IF_Msk = 0x00000002;
    inline constexpr uint32_t SR_CC1IF = (1U << 1);
    inline constexpr uint32_t SR_CC2IF_Pos = 2;
    inline constexpr uint32_t SR_CC2IF_Msk = 0x00000004;
    inline constexpr uint32_t SR_CC2IF = (1U << 2);
    inline constexpr uint32_t SR_CC3IF_Pos = 3;
    inline constexpr uint32_t SR_CC3IF_Msk = 0x00000008;
    inline constexpr uint32_t SR_CC3IF = (1U << 3);
    inline constexpr uint32_t SR_CC4IF_Pos = 4;
    inline constexpr uint32_t SR_CC4IF_Msk = 0x00000010;
    inline constexpr uint32_t SR_CC4IF = (1U << 4);
    inline constexpr uint32_t SR_TIF_Pos = 6;
    inline constexpr uint32_t SR_TIF_Msk = 0x00000040;
    inline constexpr uint32_t SR_TIF = (1U << 6);
    inline constexpr uint32_t SR_CC1OF_Pos = 9;
    inline constexpr uint32_t SR_CC1OF_Msk = 0x00000200;
    inline constexpr uint32_t SR_CC1OF = (1U << 9);
    inline constexpr uint32_t SR_CC2OF_Pos = 10;
    inline constexpr uint32_t SR_CC2OF_Msk = 0x00000400;
    inline constexpr uint32_t SR_CC2OF = (1U << 10);
    inline constexpr uint32_t SR_CC3OF_Pos = 11;
    inline constexpr uint32_t SR_CC3OF_Msk = 0x00000800;
    inline constexpr uint32_t SR_CC3OF = (1U << 11);
    inline constexpr uint32_t SR_CC4OF_Pos = 12;
    inline constexpr uint32_t SR_CC4OF_Msk = 0x00001000;
    inline constexpr uint32_t SR_CC4OF = (1U << 12);

    // EGR fields
    inline constexpr uint32_t EGR_UG_Pos = 0;
    inline constexpr uint32_t EGR_UG_Msk = 0x00000001;
    inline constexpr uint32_t EGR_UG = (1U << 0);
    inline constexpr uint32_t EGR_CC1G_Pos = 1;
    inline constexpr uint32_t EGR_CC1G_Msk = 0x00000002;
    inline constexpr uint32_t EGR_CC1G = (1U << 1);
    inline constexpr uint32_t EGR_CC2G_Pos = 2;
    inline constexpr uint32_t EGR_CC2G_Msk = 0x00000004;
    inline constexpr uint32_t EGR_CC2G = (1U << 2);
    inline constexpr uint32_t EGR_CC3G_Pos = 3;
    inline constexpr uint32_t EGR_CC3G_Msk = 0x00000008;
    inline constexpr uint32_t EGR_CC3G = (1U << 3);
    inline constexpr uint32_t EGR_CC4G_Pos = 4;
    inline constexpr uint32_t EGR_CC4G_Msk = 0x00000010;
    inline constexpr uint32_t EGR_CC4G = (1U << 4);
    inline constexpr uint32_t EGR_TG_Pos = 6;
    inline constexpr uint32_t EGR_TG_Msk = 0x00000040;
    inline constexpr uint32_t EGR_TG = (1U << 6);

    // CCMR1_Output fields
    inline constexpr uint32_t CCMR1_Output_CC1S_Pos = 0;
    inline constexpr uint32_t CCMR1_Output_CC1S_Msk = 0x00000003;
    inline constexpr uint32_t CCMR1_Output_OC1FE_Pos = 2;
    inline constexpr uint32_t CCMR1_Output_OC1FE_Msk = 0x00000004;
    inline constexpr uint32_t CCMR1_Output_OC1FE = (1U << 2);
    inline constexpr uint32_t CCMR1_Output_OC1PE_Pos = 3;
    inline constexpr uint32_t CCMR1_Output_OC1PE_Msk = 0x00000008;
    inline constexpr uint32_t CCMR1_Output_OC1PE = (1U << 3);
    inline constexpr uint32_t CCMR1_Output_OC1M_Pos = 4;
    inline constexpr uint32_t CCMR1_Output_OC1M_Msk = 0x00000070;
    inline constexpr uint32_t CCMR1_Output_OC1CE_Pos = 7;
    inline constexpr uint32_t CCMR1_Output_OC1CE_Msk = 0x00000080;
    inline constexpr uint32_t CCMR1_Output_OC1CE = (1U << 7);
    inline constexpr uint32_t CCMR1_Output_CC2S_Pos = 8;
    inline constexpr uint32_t CCMR1_Output_CC2S_Msk = 0x00000300;
    inline constexpr uint32_t CCMR1_Output_OC2FE_Pos = 10;
    inline constexpr uint32_t CCMR1_Output_OC2FE_Msk = 0x00000400;
    inline constexpr uint32_t CCMR1_Output_OC2FE = (1U << 10);
    inline constexpr uint32_t CCMR1_Output_OC2PE_Pos = 11;
    inline constexpr uint32_t CCMR1_Output_OC2PE_Msk = 0x00000800;
    inline constexpr uint32_t CCMR1_Output_OC2PE = (1U << 11);
    inline constexpr uint32_t CCMR1_Output_OC2M_Pos = 12;
    inline constexpr uint32_t CCMR1_Output_OC2M_Msk = 0x00007000;
    inline constexpr uint32_t CCMR1_Output_OC2CE_Pos = 15;
    inline constexpr uint32_t CCMR1_Output_OC2CE_Msk = 0x00008000;
    inline constexpr uint32_t CCMR1_Output_OC2CE = (1U << 15);
    inline constexpr uint32_t CCMR1_Output_OC1M_3_Pos = 16;
    inline constexpr uint32_t CCMR1_Output_OC1M_3_Msk = 0x00010000;
    inline constexpr uint32_t CCMR1_Output_OC1M_3 = (1U << 16);
    inline constexpr uint32_t CCMR1_Output_OC2M_3_Pos = 24;
    inline constexpr uint32_t CCMR1_Output_OC2M_3_Msk = 0x01000000;
    inline constexpr uint32_t CCMR1_Output_OC2M_3 = (1U << 24);

    // CCMR1_Input fields
    inline constexpr uint32_t CCMR1_Input_CC1S_Pos = 0;
    inline constexpr uint32_t CCMR1_Input_CC1S_Msk = 0x00000003;
    inline constexpr uint32_t CCMR1_Input_ICPCS_Pos = 2;
    inline constexpr uint32_t CCMR1_Input_ICPCS_Msk = 0x0000000C;
    inline constexpr uint32_t CCMR1_Input_IC1F_Pos = 4;
    inline constexpr uint32_t CCMR1_Input_IC1F_Msk = 0x000000F0;
    inline constexpr uint32_t CCMR1_Input_CC2S_Pos = 8;
    inline constexpr uint32_t CCMR1_Input_CC2S_Msk = 0x00000300;
    inline constexpr uint32_t CCMR1_Input_IC2PCS_Pos = 10;
    inline constexpr uint32_t CCMR1_Input_IC2PCS_Msk = 0x00000C00;
    inline constexpr uint32_t CCMR1_Input_IC2F_Pos = 12;
    inline constexpr uint32_t CCMR1_Input_IC2F_Msk = 0x0000F000;

    // CCMR2_Output fields
    inline constexpr uint32_t CCMR2_Output_CC3S_Pos = 0;
    inline constexpr uint32_t CCMR2_Output_CC3S_Msk = 0x00000003;
    inline constexpr uint32_t CCMR2_Output_OC3FE_Pos = 2;
    inline constexpr uint32_t CCMR2_Output_OC3FE_Msk = 0x00000004;
    inline constexpr uint32_t CCMR2_Output_OC3FE = (1U << 2);
    inline constexpr uint32_t CCMR2_Output_OC3PE_Pos = 3;
    inline constexpr uint32_t CCMR2_Output_OC3PE_Msk = 0x00000008;
    inline constexpr uint32_t CCMR2_Output_OC3PE = (1U << 3);
    inline constexpr uint32_t CCMR2_Output_OC3M_Pos = 4;
    inline constexpr uint32_t CCMR2_Output_OC3M_Msk = 0x00000070;
    inline constexpr uint32_t CCMR2_Output_OC3CE_Pos = 7;
    inline constexpr uint32_t CCMR2_Output_OC3CE_Msk = 0x00000080;
    inline constexpr uint32_t CCMR2_Output_OC3CE = (1U << 7);
    inline constexpr uint32_t CCMR2_Output_CC4S_Pos = 8;
    inline constexpr uint32_t CCMR2_Output_CC4S_Msk = 0x00000300;
    inline constexpr uint32_t CCMR2_Output_OC4FE_Pos = 10;
    inline constexpr uint32_t CCMR2_Output_OC4FE_Msk = 0x00000400;
    inline constexpr uint32_t CCMR2_Output_OC4FE = (1U << 10);
    inline constexpr uint32_t CCMR2_Output_OC4PE_Pos = 11;
    inline constexpr uint32_t CCMR2_Output_OC4PE_Msk = 0x00000800;
    inline constexpr uint32_t CCMR2_Output_OC4PE = (1U << 11);
    inline constexpr uint32_t CCMR2_Output_OC4M_Pos = 12;
    inline constexpr uint32_t CCMR2_Output_OC4M_Msk = 0x00007000;
    inline constexpr uint32_t CCMR2_Output_OC4CE_Pos = 15;
    inline constexpr uint32_t CCMR2_Output_OC4CE_Msk = 0x00008000;
    inline constexpr uint32_t CCMR2_Output_OC4CE = (1U << 15);
    inline constexpr uint32_t CCMR2_Output_OC3M_3_Pos = 16;
    inline constexpr uint32_t CCMR2_Output_OC3M_3_Msk = 0x00010000;
    inline constexpr uint32_t CCMR2_Output_OC3M_3 = (1U << 16);
    inline constexpr uint32_t CCMR2_Output_OC4M_3_Pos = 24;
    inline constexpr uint32_t CCMR2_Output_OC4M_3_Msk = 0x01000000;
    inline constexpr uint32_t CCMR2_Output_OC4M_3 = (1U << 24);

    // CCMR2_Input fields
    inline constexpr uint32_t CCMR2_Input_CC3S_Pos = 0;
    inline constexpr uint32_t CCMR2_Input_CC3S_Msk = 0x00000003;
    inline constexpr uint32_t CCMR2_Input_IC3PSC_Pos = 2;
    inline constexpr uint32_t CCMR2_Input_IC3PSC_Msk = 0x0000000C;
    inline constexpr uint32_t CCMR2_Input_IC3F_Pos = 4;
    inline constexpr uint32_t CCMR2_Input_IC3F_Msk = 0x000000F0;
    inline constexpr uint32_t CCMR2_Input_CC4S_Pos = 8;
    inline constexpr uint32_t CCMR2_Input_CC4S_Msk = 0x00000300;
    inline constexpr uint32_t CCMR2_Input_IC4PSC_Pos = 10;
    inline constexpr uint32_t CCMR2_Input_IC4PSC_Msk = 0x00000C00;
    inline constexpr uint32_t CCMR2_Input_IC4F_Pos = 12;
    inline constexpr uint32_t CCMR2_Input_IC4F_Msk = 0x0000F000;

    // CCER fields
    inline constexpr uint32_t CCER_CC1E_Pos = 0;
    inline constexpr uint32_t CCER_CC1E_Msk = 0x00000001;
    inline constexpr uint32_t CCER_CC1E = (1U << 0);
    inline constexpr uint32_t CCER_CC1P_Pos = 1;
    inline constexpr uint32_t CCER_CC1P_Msk = 0x00000002;
    inline constexpr uint32_t CCER_CC1P = (1U << 1);
    inline constexpr uint32_t CCER_CC1NP_Pos = 3;
    inline constexpr uint32_t CCER_CC1NP_Msk = 0x00000008;
    inline constexpr uint32_t CCER_CC1NP = (1U << 3);
    inline constexpr uint32_t CCER_CC2E_Pos = 4;
    inline constexpr uint32_t CCER_CC2E_Msk = 0x00000010;
    inline constexpr uint32_t CCER_CC2E = (1U << 4);
    inline constexpr uint32_t CCER_CC2P_Pos = 5;
    inline constexpr uint32_t CCER_CC2P_Msk = 0x00000020;
    inline constexpr uint32_t CCER_CC2P = (1U << 5);
    inline constexpr uint32_t CCER_CC2NP_Pos = 7;
    inline constexpr uint32_t CCER_CC2NP_Msk = 0x00000080;
    inline constexpr uint32_t CCER_CC2NP = (1U << 7);
    inline constexpr uint32_t CCER_CC3E_Pos = 8;
    inline constexpr uint32_t CCER_CC3E_Msk = 0x00000100;
    inline constexpr uint32_t CCER_CC3E = (1U << 8);
    inline constexpr uint32_t CCER_CC3P_Pos = 9;
    inline constexpr uint32_t CCER_CC3P_Msk = 0x00000200;
    inline constexpr uint32_t CCER_CC3P = (1U << 9);
    inline constexpr uint32_t CCER_CC3NP_Pos = 11;
    inline constexpr uint32_t CCER_CC3NP_Msk = 0x00000800;
    inline constexpr uint32_t CCER_CC3NP = (1U << 11);
    inline constexpr uint32_t CCER_CC4E_Pos = 12;
    inline constexpr uint32_t CCER_CC4E_Msk = 0x00001000;
    inline constexpr uint32_t CCER_CC4E = (1U << 12);
    inline constexpr uint32_t CCER_CC4P_Pos = 13;
    inline constexpr uint32_t CCER_CC4P_Msk = 0x00002000;
    inline constexpr uint32_t CCER_CC4P = (1U << 13);
    inline constexpr uint32_t CCER_CC4NP_Pos = 15;
    inline constexpr uint32_t CCER_CC4NP_Msk = 0x00008000;
    inline constexpr uint32_t CCER_CC4NP = (1U << 15);

    // CNT fields
    inline constexpr uint32_t CNT_CNT_L_Pos = 0;
    inline constexpr uint32_t CNT_CNT_L_Msk = 0x0000FFFF;
    inline constexpr uint32_t CNT_CNT_H_Pos = 16;
    inline constexpr uint32_t CNT_CNT_H_Msk = 0xFFFF0000;

    // PSC fields
    inline constexpr uint32_t PSC_PSC_Pos = 0;
    inline constexpr uint32_t PSC_PSC_Msk = 0x0000FFFF;

    // ARR fields
    inline constexpr uint32_t ARR_ARR_L_Pos = 0;
    inline constexpr uint32_t ARR_ARR_L_Msk = 0x0000FFFF;
    inline constexpr uint32_t ARR_ARR_H_Pos = 16;
    inline constexpr uint32_t ARR_ARR_H_Msk = 0xFFFF0000;

    // CCR1 fields
    inline constexpr uint32_t CCR1_CCR1_L_Pos = 0;
    inline constexpr uint32_t CCR1_CCR1_L_Msk = 0x0000FFFF;
    inline constexpr uint32_t CCR1_CCR1_H_Pos = 16;
    inline constexpr uint32_t CCR1_CCR1_H_Msk = 0xFFFF0000;

    // CCR2 fields
    inline constexpr uint32_t CCR2_CCR2_L_Pos = 0;
    inline constexpr uint32_t CCR2_CCR2_L_Msk = 0x0000FFFF;
    inline constexpr uint32_t CCR2_CCR2_H_Pos = 16;
    inline constexpr uint32_t CCR2_CCR2_H_Msk = 0xFFFF0000;

    // CCR3 fields
    inline constexpr uint32_t CCR3_CCR3_L_Pos = 0;
    inline constexpr uint32_t CCR3_CCR3_L_Msk = 0x0000FFFF;
    inline constexpr uint32_t CCR3_CCR3_H_Pos = 16;
    inline constexpr uint32_t CCR3_CCR3_H_Msk = 0xFFFF0000;

    // CCR4 fields
    inline constexpr uint32_t CCR4_CCR4_L_Pos = 0;
    inline constexpr uint32_t CCR4_CCR4_L_Msk = 0x0000FFFF;
    inline constexpr uint32_t CCR4_CCR4_H_Pos = 16;
    inline constexpr uint32_t CCR4_CCR4_H_Msk = 0xFFFF0000;

    // DCR fields
    inline constexpr uint32_t DCR_DBA_Pos = 0;
    inline constexpr uint32_t DCR_DBA_Msk = 0x0000001F;
    inline constexpr uint32_t DCR_DBL_Pos = 8;
    inline constexpr uint32_t DCR_DBL_Msk = 0x00001F00;

    // DMAR fields
    inline constexpr uint32_t DMAR_DMAB_Pos = 0;
    inline constexpr uint32_t DMAR_DMAB_Msk = 0x0000FFFF;

    // AF1 fields
    inline constexpr uint32_t AF1_ETRSEL_Pos = 14;
    inline constexpr uint32_t AF1_ETRSEL_Msk = 0x0003C000;

    // TISEL fields
    inline constexpr uint32_t TISEL_TI1SEL_Pos = 0;
    inline constexpr uint32_t TISEL_TI1SEL_Msk = 0x0000000F;
    inline constexpr uint32_t TISEL_TI2SEL_Pos = 8;
    inline constexpr uint32_t TISEL_TI2SEL_Msk = 0x00000F00;
    inline constexpr uint32_t TISEL_TI3SEL_Pos = 16;
    inline constexpr uint32_t TISEL_TI3SEL_Msk = 0x000F0000;
    inline constexpr uint32_t TISEL_TI4SEL_Pos = 24;
    inline constexpr uint32_t TISEL_TI4SEL_Msk = 0x0F000000;

} // namespace TIM3

namespace TIM4 {
    // CR1 fields
    inline constexpr uint32_t CR1_CEN_Pos = 0;
    inline constexpr uint32_t CR1_CEN_Msk = 0x00000001;
    inline constexpr uint32_t CR1_CEN = (1U << 0);
    inline constexpr uint32_t CR1_UDIS_Pos = 1;
    inline constexpr uint32_t CR1_UDIS_Msk = 0x00000002;
    inline constexpr uint32_t CR1_UDIS = (1U << 1);
    inline constexpr uint32_t CR1_URS_Pos = 2;
    inline constexpr uint32_t CR1_URS_Msk = 0x00000004;
    inline constexpr uint32_t CR1_URS = (1U << 2);
    inline constexpr uint32_t CR1_OPM_Pos = 3;
    inline constexpr uint32_t CR1_OPM_Msk = 0x00000008;
    inline constexpr uint32_t CR1_OPM = (1U << 3);
    inline constexpr uint32_t CR1_DIR_Pos = 4;
    inline constexpr uint32_t CR1_DIR_Msk = 0x00000010;
    inline constexpr uint32_t CR1_DIR = (1U << 4);
    inline constexpr uint32_t CR1_CMS_Pos = 5;
    inline constexpr uint32_t CR1_CMS_Msk = 0x00000060;
    inline constexpr uint32_t CR1_ARPE_Pos = 7;
    inline constexpr uint32_t CR1_ARPE_Msk = 0x00000080;
    inline constexpr uint32_t CR1_ARPE = (1U << 7);
    inline constexpr uint32_t CR1_CKD_Pos = 8;
    inline constexpr uint32_t CR1_CKD_Msk = 0x00000300;
    inline constexpr uint32_t CR1_UIFREMAP_Pos = 11;
    inline constexpr uint32_t CR1_UIFREMAP_Msk = 0x00000800;
    inline constexpr uint32_t CR1_UIFREMAP = (1U << 11);

    // CR2 fields
    inline constexpr uint32_t CR2_CCDS_Pos = 3;
    inline constexpr uint32_t CR2_CCDS_Msk = 0x00000008;
    inline constexpr uint32_t CR2_CCDS = (1U << 3);
    inline constexpr uint32_t CR2_MMS_Pos = 4;
    inline constexpr uint32_t CR2_MMS_Msk = 0x00000070;
    inline constexpr uint32_t CR2_TI1S_Pos = 7;
    inline constexpr uint32_t CR2_TI1S_Msk = 0x00000080;
    inline constexpr uint32_t CR2_TI1S = (1U << 7);

    // SMCR fields
    inline constexpr uint32_t SMCR_SMS_Pos = 0;
    inline constexpr uint32_t SMCR_SMS_Msk = 0x00000007;
    inline constexpr uint32_t SMCR_TS_Pos = 4;
    inline constexpr uint32_t SMCR_TS_Msk = 0x00000070;
    inline constexpr uint32_t SMCR_MSM_Pos = 7;
    inline constexpr uint32_t SMCR_MSM_Msk = 0x00000080;
    inline constexpr uint32_t SMCR_MSM = (1U << 7);
    inline constexpr uint32_t SMCR_ETF_Pos = 8;
    inline constexpr uint32_t SMCR_ETF_Msk = 0x00000F00;
    inline constexpr uint32_t SMCR_ETPS_Pos = 12;
    inline constexpr uint32_t SMCR_ETPS_Msk = 0x00003000;
    inline constexpr uint32_t SMCR_ECE_Pos = 14;
    inline constexpr uint32_t SMCR_ECE_Msk = 0x00004000;
    inline constexpr uint32_t SMCR_ECE = (1U << 14);
    inline constexpr uint32_t SMCR_ETP_Pos = 15;
    inline constexpr uint32_t SMCR_ETP_Msk = 0x00008000;
    inline constexpr uint32_t SMCR_ETP = (1U << 15);
    inline constexpr uint32_t SMCR_SMS_3_Pos = 16;
    inline constexpr uint32_t SMCR_SMS_3_Msk = 0x00010000;
    inline constexpr uint32_t SMCR_SMS_3 = (1U << 16);
    inline constexpr uint32_t SMCR_TS_4_3_Pos = 20;
    inline constexpr uint32_t SMCR_TS_4_3_Msk = 0x00300000;

    // DIER fields
    inline constexpr uint32_t DIER_UIE_Pos = 0;
    inline constexpr uint32_t DIER_UIE_Msk = 0x00000001;
    inline constexpr uint32_t DIER_UIE = (1U << 0);
    inline constexpr uint32_t DIER_CC1IE_Pos = 1;
    inline constexpr uint32_t DIER_CC1IE_Msk = 0x00000002;
    inline constexpr uint32_t DIER_CC1IE = (1U << 1);
    inline constexpr uint32_t DIER_CC2IE_Pos = 2;
    inline constexpr uint32_t DIER_CC2IE_Msk = 0x00000004;
    inline constexpr uint32_t DIER_CC2IE = (1U << 2);
    inline constexpr uint32_t DIER_CC3IE_Pos = 3;
    inline constexpr uint32_t DIER_CC3IE_Msk = 0x00000008;
    inline constexpr uint32_t DIER_CC3IE = (1U << 3);
    inline constexpr uint32_t DIER_CC4IE_Pos = 4;
    inline constexpr uint32_t DIER_CC4IE_Msk = 0x00000010;
    inline constexpr uint32_t DIER_CC4IE = (1U << 4);
    inline constexpr uint32_t DIER_TIE_Pos = 6;
    inline constexpr uint32_t DIER_TIE_Msk = 0x00000040;
    inline constexpr uint32_t DIER_TIE = (1U << 6);
    inline constexpr uint32_t DIER_UDE_Pos = 8;
    inline constexpr uint32_t DIER_UDE_Msk = 0x00000100;
    inline constexpr uint32_t DIER_UDE = (1U << 8);
    inline constexpr uint32_t DIER_CC1DE_Pos = 9;
    inline constexpr uint32_t DIER_CC1DE_Msk = 0x00000200;
    inline constexpr uint32_t DIER_CC1DE = (1U << 9);
    inline constexpr uint32_t DIER_CC2DE_Pos = 10;
    inline constexpr uint32_t DIER_CC2DE_Msk = 0x00000400;
    inline constexpr uint32_t DIER_CC2DE = (1U << 10);
    inline constexpr uint32_t DIER_CC3DE_Pos = 11;
    inline constexpr uint32_t DIER_CC3DE_Msk = 0x00000800;
    inline constexpr uint32_t DIER_CC3DE = (1U << 11);
    inline constexpr uint32_t DIER_CC4DE_Pos = 12;
    inline constexpr uint32_t DIER_CC4DE_Msk = 0x00001000;
    inline constexpr uint32_t DIER_CC4DE = (1U << 12);
    inline constexpr uint32_t DIER_TDE_Pos = 14;
    inline constexpr uint32_t DIER_TDE_Msk = 0x00004000;
    inline constexpr uint32_t DIER_TDE = (1U << 14);

    // SR fields
    inline constexpr uint32_t SR_UIF_Pos = 0;
    inline constexpr uint32_t SR_UIF_Msk = 0x00000001;
    inline constexpr uint32_t SR_UIF = (1U << 0);
    inline constexpr uint32_t SR_CC1IF_Pos = 1;
    inline constexpr uint32_t SR_CC1IF_Msk = 0x00000002;
    inline constexpr uint32_t SR_CC1IF = (1U << 1);
    inline constexpr uint32_t SR_CC2IF_Pos = 2;
    inline constexpr uint32_t SR_CC2IF_Msk = 0x00000004;
    inline constexpr uint32_t SR_CC2IF = (1U << 2);
    inline constexpr uint32_t SR_CC3IF_Pos = 3;
    inline constexpr uint32_t SR_CC3IF_Msk = 0x00000008;
    inline constexpr uint32_t SR_CC3IF = (1U << 3);
    inline constexpr uint32_t SR_CC4IF_Pos = 4;
    inline constexpr uint32_t SR_CC4IF_Msk = 0x00000010;
    inline constexpr uint32_t SR_CC4IF = (1U << 4);
    inline constexpr uint32_t SR_TIF_Pos = 6;
    inline constexpr uint32_t SR_TIF_Msk = 0x00000040;
    inline constexpr uint32_t SR_TIF = (1U << 6);
    inline constexpr uint32_t SR_CC1OF_Pos = 9;
    inline constexpr uint32_t SR_CC1OF_Msk = 0x00000200;
    inline constexpr uint32_t SR_CC1OF = (1U << 9);
    inline constexpr uint32_t SR_CC2OF_Pos = 10;
    inline constexpr uint32_t SR_CC2OF_Msk = 0x00000400;
    inline constexpr uint32_t SR_CC2OF = (1U << 10);
    inline constexpr uint32_t SR_CC3OF_Pos = 11;
    inline constexpr uint32_t SR_CC3OF_Msk = 0x00000800;
    inline constexpr uint32_t SR_CC3OF = (1U << 11);
    inline constexpr uint32_t SR_CC4OF_Pos = 12;
    inline constexpr uint32_t SR_CC4OF_Msk = 0x00001000;
    inline constexpr uint32_t SR_CC4OF = (1U << 12);

    // EGR fields
    inline constexpr uint32_t EGR_UG_Pos = 0;
    inline constexpr uint32_t EGR_UG_Msk = 0x00000001;
    inline constexpr uint32_t EGR_UG = (1U << 0);
    inline constexpr uint32_t EGR_CC1G_Pos = 1;
    inline constexpr uint32_t EGR_CC1G_Msk = 0x00000002;
    inline constexpr uint32_t EGR_CC1G = (1U << 1);
    inline constexpr uint32_t EGR_CC2G_Pos = 2;
    inline constexpr uint32_t EGR_CC2G_Msk = 0x00000004;
    inline constexpr uint32_t EGR_CC2G = (1U << 2);
    inline constexpr uint32_t EGR_CC3G_Pos = 3;
    inline constexpr uint32_t EGR_CC3G_Msk = 0x00000008;
    inline constexpr uint32_t EGR_CC3G = (1U << 3);
    inline constexpr uint32_t EGR_CC4G_Pos = 4;
    inline constexpr uint32_t EGR_CC4G_Msk = 0x00000010;
    inline constexpr uint32_t EGR_CC4G = (1U << 4);
    inline constexpr uint32_t EGR_TG_Pos = 6;
    inline constexpr uint32_t EGR_TG_Msk = 0x00000040;
    inline constexpr uint32_t EGR_TG = (1U << 6);

    // CCMR1_Output fields
    inline constexpr uint32_t CCMR1_Output_CC1S_Pos = 0;
    inline constexpr uint32_t CCMR1_Output_CC1S_Msk = 0x00000003;
    inline constexpr uint32_t CCMR1_Output_OC1FE_Pos = 2;
    inline constexpr uint32_t CCMR1_Output_OC1FE_Msk = 0x00000004;
    inline constexpr uint32_t CCMR1_Output_OC1FE = (1U << 2);
    inline constexpr uint32_t CCMR1_Output_OC1PE_Pos = 3;
    inline constexpr uint32_t CCMR1_Output_OC1PE_Msk = 0x00000008;
    inline constexpr uint32_t CCMR1_Output_OC1PE = (1U << 3);
    inline constexpr uint32_t CCMR1_Output_OC1M_Pos = 4;
    inline constexpr uint32_t CCMR1_Output_OC1M_Msk = 0x00000070;
    inline constexpr uint32_t CCMR1_Output_OC1CE_Pos = 7;
    inline constexpr uint32_t CCMR1_Output_OC1CE_Msk = 0x00000080;
    inline constexpr uint32_t CCMR1_Output_OC1CE = (1U << 7);
    inline constexpr uint32_t CCMR1_Output_CC2S_Pos = 8;
    inline constexpr uint32_t CCMR1_Output_CC2S_Msk = 0x00000300;
    inline constexpr uint32_t CCMR1_Output_OC2FE_Pos = 10;
    inline constexpr uint32_t CCMR1_Output_OC2FE_Msk = 0x00000400;
    inline constexpr uint32_t CCMR1_Output_OC2FE = (1U << 10);
    inline constexpr uint32_t CCMR1_Output_OC2PE_Pos = 11;
    inline constexpr uint32_t CCMR1_Output_OC2PE_Msk = 0x00000800;
    inline constexpr uint32_t CCMR1_Output_OC2PE = (1U << 11);
    inline constexpr uint32_t CCMR1_Output_OC2M_Pos = 12;
    inline constexpr uint32_t CCMR1_Output_OC2M_Msk = 0x00007000;
    inline constexpr uint32_t CCMR1_Output_OC2CE_Pos = 15;
    inline constexpr uint32_t CCMR1_Output_OC2CE_Msk = 0x00008000;
    inline constexpr uint32_t CCMR1_Output_OC2CE = (1U << 15);
    inline constexpr uint32_t CCMR1_Output_OC1M_3_Pos = 16;
    inline constexpr uint32_t CCMR1_Output_OC1M_3_Msk = 0x00010000;
    inline constexpr uint32_t CCMR1_Output_OC1M_3 = (1U << 16);
    inline constexpr uint32_t CCMR1_Output_OC2M_3_Pos = 24;
    inline constexpr uint32_t CCMR1_Output_OC2M_3_Msk = 0x01000000;
    inline constexpr uint32_t CCMR1_Output_OC2M_3 = (1U << 24);

    // CCMR1_Input fields
    inline constexpr uint32_t CCMR1_Input_CC1S_Pos = 0;
    inline constexpr uint32_t CCMR1_Input_CC1S_Msk = 0x00000003;
    inline constexpr uint32_t CCMR1_Input_ICPCS_Pos = 2;
    inline constexpr uint32_t CCMR1_Input_ICPCS_Msk = 0x0000000C;
    inline constexpr uint32_t CCMR1_Input_IC1F_Pos = 4;
    inline constexpr uint32_t CCMR1_Input_IC1F_Msk = 0x000000F0;
    inline constexpr uint32_t CCMR1_Input_CC2S_Pos = 8;
    inline constexpr uint32_t CCMR1_Input_CC2S_Msk = 0x00000300;
    inline constexpr uint32_t CCMR1_Input_IC2PCS_Pos = 10;
    inline constexpr uint32_t CCMR1_Input_IC2PCS_Msk = 0x00000C00;
    inline constexpr uint32_t CCMR1_Input_IC2F_Pos = 12;
    inline constexpr uint32_t CCMR1_Input_IC2F_Msk = 0x0000F000;

    // CCMR2_Output fields
    inline constexpr uint32_t CCMR2_Output_CC3S_Pos = 0;
    inline constexpr uint32_t CCMR2_Output_CC3S_Msk = 0x00000003;
    inline constexpr uint32_t CCMR2_Output_OC3FE_Pos = 2;
    inline constexpr uint32_t CCMR2_Output_OC3FE_Msk = 0x00000004;
    inline constexpr uint32_t CCMR2_Output_OC3FE = (1U << 2);
    inline constexpr uint32_t CCMR2_Output_OC3PE_Pos = 3;
    inline constexpr uint32_t CCMR2_Output_OC3PE_Msk = 0x00000008;
    inline constexpr uint32_t CCMR2_Output_OC3PE = (1U << 3);
    inline constexpr uint32_t CCMR2_Output_OC3M_Pos = 4;
    inline constexpr uint32_t CCMR2_Output_OC3M_Msk = 0x00000070;
    inline constexpr uint32_t CCMR2_Output_OC3CE_Pos = 7;
    inline constexpr uint32_t CCMR2_Output_OC3CE_Msk = 0x00000080;
    inline constexpr uint32_t CCMR2_Output_OC3CE = (1U << 7);
    inline constexpr uint32_t CCMR2_Output_CC4S_Pos = 8;
    inline constexpr uint32_t CCMR2_Output_CC4S_Msk = 0x00000300;
    inline constexpr uint32_t CCMR2_Output_OC4FE_Pos = 10;
    inline constexpr uint32_t CCMR2_Output_OC4FE_Msk = 0x00000400;
    inline constexpr uint32_t CCMR2_Output_OC4FE = (1U << 10);
    inline constexpr uint32_t CCMR2_Output_OC4PE_Pos = 11;
    inline constexpr uint32_t CCMR2_Output_OC4PE_Msk = 0x00000800;
    inline constexpr uint32_t CCMR2_Output_OC4PE = (1U << 11);
    inline constexpr uint32_t CCMR2_Output_OC4M_Pos = 12;
    inline constexpr uint32_t CCMR2_Output_OC4M_Msk = 0x00007000;
    inline constexpr uint32_t CCMR2_Output_OC4CE_Pos = 15;
    inline constexpr uint32_t CCMR2_Output_OC4CE_Msk = 0x00008000;
    inline constexpr uint32_t CCMR2_Output_OC4CE = (1U << 15);
    inline constexpr uint32_t CCMR2_Output_OC3M_3_Pos = 16;
    inline constexpr uint32_t CCMR2_Output_OC3M_3_Msk = 0x00010000;
    inline constexpr uint32_t CCMR2_Output_OC3M_3 = (1U << 16);
    inline constexpr uint32_t CCMR2_Output_OC4M_3_Pos = 24;
    inline constexpr uint32_t CCMR2_Output_OC4M_3_Msk = 0x01000000;
    inline constexpr uint32_t CCMR2_Output_OC4M_3 = (1U << 24);

    // CCMR2_Input fields
    inline constexpr uint32_t CCMR2_Input_CC3S_Pos = 0;
    inline constexpr uint32_t CCMR2_Input_CC3S_Msk = 0x00000003;
    inline constexpr uint32_t CCMR2_Input_IC3PSC_Pos = 2;
    inline constexpr uint32_t CCMR2_Input_IC3PSC_Msk = 0x0000000C;
    inline constexpr uint32_t CCMR2_Input_IC3F_Pos = 4;
    inline constexpr uint32_t CCMR2_Input_IC3F_Msk = 0x000000F0;
    inline constexpr uint32_t CCMR2_Input_CC4S_Pos = 8;
    inline constexpr uint32_t CCMR2_Input_CC4S_Msk = 0x00000300;
    inline constexpr uint32_t CCMR2_Input_IC4PSC_Pos = 10;
    inline constexpr uint32_t CCMR2_Input_IC4PSC_Msk = 0x00000C00;
    inline constexpr uint32_t CCMR2_Input_IC4F_Pos = 12;
    inline constexpr uint32_t CCMR2_Input_IC4F_Msk = 0x0000F000;

    // CCER fields
    inline constexpr uint32_t CCER_CC1E_Pos = 0;
    inline constexpr uint32_t CCER_CC1E_Msk = 0x00000001;
    inline constexpr uint32_t CCER_CC1E = (1U << 0);
    inline constexpr uint32_t CCER_CC1P_Pos = 1;
    inline constexpr uint32_t CCER_CC1P_Msk = 0x00000002;
    inline constexpr uint32_t CCER_CC1P = (1U << 1);
    inline constexpr uint32_t CCER_CC1NP_Pos = 3;
    inline constexpr uint32_t CCER_CC1NP_Msk = 0x00000008;
    inline constexpr uint32_t CCER_CC1NP = (1U << 3);
    inline constexpr uint32_t CCER_CC2E_Pos = 4;
    inline constexpr uint32_t CCER_CC2E_Msk = 0x00000010;
    inline constexpr uint32_t CCER_CC2E = (1U << 4);
    inline constexpr uint32_t CCER_CC2P_Pos = 5;
    inline constexpr uint32_t CCER_CC2P_Msk = 0x00000020;
    inline constexpr uint32_t CCER_CC2P = (1U << 5);
    inline constexpr uint32_t CCER_CC2NP_Pos = 7;
    inline constexpr uint32_t CCER_CC2NP_Msk = 0x00000080;
    inline constexpr uint32_t CCER_CC2NP = (1U << 7);
    inline constexpr uint32_t CCER_CC3E_Pos = 8;
    inline constexpr uint32_t CCER_CC3E_Msk = 0x00000100;
    inline constexpr uint32_t CCER_CC3E = (1U << 8);
    inline constexpr uint32_t CCER_CC3P_Pos = 9;
    inline constexpr uint32_t CCER_CC3P_Msk = 0x00000200;
    inline constexpr uint32_t CCER_CC3P = (1U << 9);
    inline constexpr uint32_t CCER_CC3NP_Pos = 11;
    inline constexpr uint32_t CCER_CC3NP_Msk = 0x00000800;
    inline constexpr uint32_t CCER_CC3NP = (1U << 11);
    inline constexpr uint32_t CCER_CC4E_Pos = 12;
    inline constexpr uint32_t CCER_CC4E_Msk = 0x00001000;
    inline constexpr uint32_t CCER_CC4E = (1U << 12);
    inline constexpr uint32_t CCER_CC4P_Pos = 13;
    inline constexpr uint32_t CCER_CC4P_Msk = 0x00002000;
    inline constexpr uint32_t CCER_CC4P = (1U << 13);
    inline constexpr uint32_t CCER_CC4NP_Pos = 15;
    inline constexpr uint32_t CCER_CC4NP_Msk = 0x00008000;
    inline constexpr uint32_t CCER_CC4NP = (1U << 15);

    // CNT fields
    inline constexpr uint32_t CNT_CNT_L_Pos = 0;
    inline constexpr uint32_t CNT_CNT_L_Msk = 0x0000FFFF;
    inline constexpr uint32_t CNT_CNT_H_Pos = 16;
    inline constexpr uint32_t CNT_CNT_H_Msk = 0xFFFF0000;

    // PSC fields
    inline constexpr uint32_t PSC_PSC_Pos = 0;
    inline constexpr uint32_t PSC_PSC_Msk = 0x0000FFFF;

    // ARR fields
    inline constexpr uint32_t ARR_ARR_L_Pos = 0;
    inline constexpr uint32_t ARR_ARR_L_Msk = 0x0000FFFF;
    inline constexpr uint32_t ARR_ARR_H_Pos = 16;
    inline constexpr uint32_t ARR_ARR_H_Msk = 0xFFFF0000;

    // CCR1 fields
    inline constexpr uint32_t CCR1_CCR1_L_Pos = 0;
    inline constexpr uint32_t CCR1_CCR1_L_Msk = 0x0000FFFF;
    inline constexpr uint32_t CCR1_CCR1_H_Pos = 16;
    inline constexpr uint32_t CCR1_CCR1_H_Msk = 0xFFFF0000;

    // CCR2 fields
    inline constexpr uint32_t CCR2_CCR2_L_Pos = 0;
    inline constexpr uint32_t CCR2_CCR2_L_Msk = 0x0000FFFF;
    inline constexpr uint32_t CCR2_CCR2_H_Pos = 16;
    inline constexpr uint32_t CCR2_CCR2_H_Msk = 0xFFFF0000;

    // CCR3 fields
    inline constexpr uint32_t CCR3_CCR3_L_Pos = 0;
    inline constexpr uint32_t CCR3_CCR3_L_Msk = 0x0000FFFF;
    inline constexpr uint32_t CCR3_CCR3_H_Pos = 16;
    inline constexpr uint32_t CCR3_CCR3_H_Msk = 0xFFFF0000;

    // CCR4 fields
    inline constexpr uint32_t CCR4_CCR4_L_Pos = 0;
    inline constexpr uint32_t CCR4_CCR4_L_Msk = 0x0000FFFF;
    inline constexpr uint32_t CCR4_CCR4_H_Pos = 16;
    inline constexpr uint32_t CCR4_CCR4_H_Msk = 0xFFFF0000;

    // DCR fields
    inline constexpr uint32_t DCR_DBA_Pos = 0;
    inline constexpr uint32_t DCR_DBA_Msk = 0x0000001F;
    inline constexpr uint32_t DCR_DBL_Pos = 8;
    inline constexpr uint32_t DCR_DBL_Msk = 0x00001F00;

    // DMAR fields
    inline constexpr uint32_t DMAR_DMAB_Pos = 0;
    inline constexpr uint32_t DMAR_DMAB_Msk = 0x0000FFFF;

    // AF1 fields
    inline constexpr uint32_t AF1_ETRSEL_Pos = 14;
    inline constexpr uint32_t AF1_ETRSEL_Msk = 0x0003C000;

    // TISEL fields
    inline constexpr uint32_t TISEL_TI1SEL_Pos = 0;
    inline constexpr uint32_t TISEL_TI1SEL_Msk = 0x0000000F;
    inline constexpr uint32_t TISEL_TI2SEL_Pos = 8;
    inline constexpr uint32_t TISEL_TI2SEL_Msk = 0x00000F00;
    inline constexpr uint32_t TISEL_TI3SEL_Pos = 16;
    inline constexpr uint32_t TISEL_TI3SEL_Msk = 0x000F0000;
    inline constexpr uint32_t TISEL_TI4SEL_Pos = 24;
    inline constexpr uint32_t TISEL_TI4SEL_Msk = 0x0F000000;

} // namespace TIM4

namespace TIM5 {
    // CR1 fields
    inline constexpr uint32_t CR1_CEN_Pos = 0;
    inline constexpr uint32_t CR1_CEN_Msk = 0x00000001;
    inline constexpr uint32_t CR1_CEN = (1U << 0);
    inline constexpr uint32_t CR1_UDIS_Pos = 1;
    inline constexpr uint32_t CR1_UDIS_Msk = 0x00000002;
    inline constexpr uint32_t CR1_UDIS = (1U << 1);
    inline constexpr uint32_t CR1_URS_Pos = 2;
    inline constexpr uint32_t CR1_URS_Msk = 0x00000004;
    inline constexpr uint32_t CR1_URS = (1U << 2);
    inline constexpr uint32_t CR1_OPM_Pos = 3;
    inline constexpr uint32_t CR1_OPM_Msk = 0x00000008;
    inline constexpr uint32_t CR1_OPM = (1U << 3);
    inline constexpr uint32_t CR1_DIR_Pos = 4;
    inline constexpr uint32_t CR1_DIR_Msk = 0x00000010;
    inline constexpr uint32_t CR1_DIR = (1U << 4);
    inline constexpr uint32_t CR1_CMS_Pos = 5;
    inline constexpr uint32_t CR1_CMS_Msk = 0x00000060;
    inline constexpr uint32_t CR1_ARPE_Pos = 7;
    inline constexpr uint32_t CR1_ARPE_Msk = 0x00000080;
    inline constexpr uint32_t CR1_ARPE = (1U << 7);
    inline constexpr uint32_t CR1_CKD_Pos = 8;
    inline constexpr uint32_t CR1_CKD_Msk = 0x00000300;
    inline constexpr uint32_t CR1_UIFREMAP_Pos = 11;
    inline constexpr uint32_t CR1_UIFREMAP_Msk = 0x00000800;
    inline constexpr uint32_t CR1_UIFREMAP = (1U << 11);

    // CR2 fields
    inline constexpr uint32_t CR2_CCDS_Pos = 3;
    inline constexpr uint32_t CR2_CCDS_Msk = 0x00000008;
    inline constexpr uint32_t CR2_CCDS = (1U << 3);
    inline constexpr uint32_t CR2_MMS_Pos = 4;
    inline constexpr uint32_t CR2_MMS_Msk = 0x00000070;
    inline constexpr uint32_t CR2_TI1S_Pos = 7;
    inline constexpr uint32_t CR2_TI1S_Msk = 0x00000080;
    inline constexpr uint32_t CR2_TI1S = (1U << 7);

    // SMCR fields
    inline constexpr uint32_t SMCR_SMS_Pos = 0;
    inline constexpr uint32_t SMCR_SMS_Msk = 0x00000007;
    inline constexpr uint32_t SMCR_TS_Pos = 4;
    inline constexpr uint32_t SMCR_TS_Msk = 0x00000070;
    inline constexpr uint32_t SMCR_MSM_Pos = 7;
    inline constexpr uint32_t SMCR_MSM_Msk = 0x00000080;
    inline constexpr uint32_t SMCR_MSM = (1U << 7);
    inline constexpr uint32_t SMCR_ETF_Pos = 8;
    inline constexpr uint32_t SMCR_ETF_Msk = 0x00000F00;
    inline constexpr uint32_t SMCR_ETPS_Pos = 12;
    inline constexpr uint32_t SMCR_ETPS_Msk = 0x00003000;
    inline constexpr uint32_t SMCR_ECE_Pos = 14;
    inline constexpr uint32_t SMCR_ECE_Msk = 0x00004000;
    inline constexpr uint32_t SMCR_ECE = (1U << 14);
    inline constexpr uint32_t SMCR_ETP_Pos = 15;
    inline constexpr uint32_t SMCR_ETP_Msk = 0x00008000;
    inline constexpr uint32_t SMCR_ETP = (1U << 15);
    inline constexpr uint32_t SMCR_SMS_3_Pos = 16;
    inline constexpr uint32_t SMCR_SMS_3_Msk = 0x00010000;
    inline constexpr uint32_t SMCR_SMS_3 = (1U << 16);
    inline constexpr uint32_t SMCR_TS_4_3_Pos = 20;
    inline constexpr uint32_t SMCR_TS_4_3_Msk = 0x00300000;

    // DIER fields
    inline constexpr uint32_t DIER_UIE_Pos = 0;
    inline constexpr uint32_t DIER_UIE_Msk = 0x00000001;
    inline constexpr uint32_t DIER_UIE = (1U << 0);
    inline constexpr uint32_t DIER_CC1IE_Pos = 1;
    inline constexpr uint32_t DIER_CC1IE_Msk = 0x00000002;
    inline constexpr uint32_t DIER_CC1IE = (1U << 1);
    inline constexpr uint32_t DIER_CC2IE_Pos = 2;
    inline constexpr uint32_t DIER_CC2IE_Msk = 0x00000004;
    inline constexpr uint32_t DIER_CC2IE = (1U << 2);
    inline constexpr uint32_t DIER_CC3IE_Pos = 3;
    inline constexpr uint32_t DIER_CC3IE_Msk = 0x00000008;
    inline constexpr uint32_t DIER_CC3IE = (1U << 3);
    inline constexpr uint32_t DIER_CC4IE_Pos = 4;
    inline constexpr uint32_t DIER_CC4IE_Msk = 0x00000010;
    inline constexpr uint32_t DIER_CC4IE = (1U << 4);
    inline constexpr uint32_t DIER_TIE_Pos = 6;
    inline constexpr uint32_t DIER_TIE_Msk = 0x00000040;
    inline constexpr uint32_t DIER_TIE = (1U << 6);
    inline constexpr uint32_t DIER_UDE_Pos = 8;
    inline constexpr uint32_t DIER_UDE_Msk = 0x00000100;
    inline constexpr uint32_t DIER_UDE = (1U << 8);
    inline constexpr uint32_t DIER_CC1DE_Pos = 9;
    inline constexpr uint32_t DIER_CC1DE_Msk = 0x00000200;
    inline constexpr uint32_t DIER_CC1DE = (1U << 9);
    inline constexpr uint32_t DIER_CC2DE_Pos = 10;
    inline constexpr uint32_t DIER_CC2DE_Msk = 0x00000400;
    inline constexpr uint32_t DIER_CC2DE = (1U << 10);
    inline constexpr uint32_t DIER_CC3DE_Pos = 11;
    inline constexpr uint32_t DIER_CC3DE_Msk = 0x00000800;
    inline constexpr uint32_t DIER_CC3DE = (1U << 11);
    inline constexpr uint32_t DIER_CC4DE_Pos = 12;
    inline constexpr uint32_t DIER_CC4DE_Msk = 0x00001000;
    inline constexpr uint32_t DIER_CC4DE = (1U << 12);
    inline constexpr uint32_t DIER_TDE_Pos = 14;
    inline constexpr uint32_t DIER_TDE_Msk = 0x00004000;
    inline constexpr uint32_t DIER_TDE = (1U << 14);

    // SR fields
    inline constexpr uint32_t SR_UIF_Pos = 0;
    inline constexpr uint32_t SR_UIF_Msk = 0x00000001;
    inline constexpr uint32_t SR_UIF = (1U << 0);
    inline constexpr uint32_t SR_CC1IF_Pos = 1;
    inline constexpr uint32_t SR_CC1IF_Msk = 0x00000002;
    inline constexpr uint32_t SR_CC1IF = (1U << 1);
    inline constexpr uint32_t SR_CC2IF_Pos = 2;
    inline constexpr uint32_t SR_CC2IF_Msk = 0x00000004;
    inline constexpr uint32_t SR_CC2IF = (1U << 2);
    inline constexpr uint32_t SR_CC3IF_Pos = 3;
    inline constexpr uint32_t SR_CC3IF_Msk = 0x00000008;
    inline constexpr uint32_t SR_CC3IF = (1U << 3);
    inline constexpr uint32_t SR_CC4IF_Pos = 4;
    inline constexpr uint32_t SR_CC4IF_Msk = 0x00000010;
    inline constexpr uint32_t SR_CC4IF = (1U << 4);
    inline constexpr uint32_t SR_TIF_Pos = 6;
    inline constexpr uint32_t SR_TIF_Msk = 0x00000040;
    inline constexpr uint32_t SR_TIF = (1U << 6);
    inline constexpr uint32_t SR_CC1OF_Pos = 9;
    inline constexpr uint32_t SR_CC1OF_Msk = 0x00000200;
    inline constexpr uint32_t SR_CC1OF = (1U << 9);
    inline constexpr uint32_t SR_CC2OF_Pos = 10;
    inline constexpr uint32_t SR_CC2OF_Msk = 0x00000400;
    inline constexpr uint32_t SR_CC2OF = (1U << 10);
    inline constexpr uint32_t SR_CC3OF_Pos = 11;
    inline constexpr uint32_t SR_CC3OF_Msk = 0x00000800;
    inline constexpr uint32_t SR_CC3OF = (1U << 11);
    inline constexpr uint32_t SR_CC4OF_Pos = 12;
    inline constexpr uint32_t SR_CC4OF_Msk = 0x00001000;
    inline constexpr uint32_t SR_CC4OF = (1U << 12);

    // EGR fields
    inline constexpr uint32_t EGR_UG_Pos = 0;
    inline constexpr uint32_t EGR_UG_Msk = 0x00000001;
    inline constexpr uint32_t EGR_UG = (1U << 0);
    inline constexpr uint32_t EGR_CC1G_Pos = 1;
    inline constexpr uint32_t EGR_CC1G_Msk = 0x00000002;
    inline constexpr uint32_t EGR_CC1G = (1U << 1);
    inline constexpr uint32_t EGR_CC2G_Pos = 2;
    inline constexpr uint32_t EGR_CC2G_Msk = 0x00000004;
    inline constexpr uint32_t EGR_CC2G = (1U << 2);
    inline constexpr uint32_t EGR_CC3G_Pos = 3;
    inline constexpr uint32_t EGR_CC3G_Msk = 0x00000008;
    inline constexpr uint32_t EGR_CC3G = (1U << 3);
    inline constexpr uint32_t EGR_CC4G_Pos = 4;
    inline constexpr uint32_t EGR_CC4G_Msk = 0x00000010;
    inline constexpr uint32_t EGR_CC4G = (1U << 4);
    inline constexpr uint32_t EGR_TG_Pos = 6;
    inline constexpr uint32_t EGR_TG_Msk = 0x00000040;
    inline constexpr uint32_t EGR_TG = (1U << 6);

    // CCMR1_Output fields
    inline constexpr uint32_t CCMR1_Output_CC1S_Pos = 0;
    inline constexpr uint32_t CCMR1_Output_CC1S_Msk = 0x00000003;
    inline constexpr uint32_t CCMR1_Output_OC1FE_Pos = 2;
    inline constexpr uint32_t CCMR1_Output_OC1FE_Msk = 0x00000004;
    inline constexpr uint32_t CCMR1_Output_OC1FE = (1U << 2);
    inline constexpr uint32_t CCMR1_Output_OC1PE_Pos = 3;
    inline constexpr uint32_t CCMR1_Output_OC1PE_Msk = 0x00000008;
    inline constexpr uint32_t CCMR1_Output_OC1PE = (1U << 3);
    inline constexpr uint32_t CCMR1_Output_OC1M_Pos = 4;
    inline constexpr uint32_t CCMR1_Output_OC1M_Msk = 0x00000070;
    inline constexpr uint32_t CCMR1_Output_OC1CE_Pos = 7;
    inline constexpr uint32_t CCMR1_Output_OC1CE_Msk = 0x00000080;
    inline constexpr uint32_t CCMR1_Output_OC1CE = (1U << 7);
    inline constexpr uint32_t CCMR1_Output_CC2S_Pos = 8;
    inline constexpr uint32_t CCMR1_Output_CC2S_Msk = 0x00000300;
    inline constexpr uint32_t CCMR1_Output_OC2FE_Pos = 10;
    inline constexpr uint32_t CCMR1_Output_OC2FE_Msk = 0x00000400;
    inline constexpr uint32_t CCMR1_Output_OC2FE = (1U << 10);
    inline constexpr uint32_t CCMR1_Output_OC2PE_Pos = 11;
    inline constexpr uint32_t CCMR1_Output_OC2PE_Msk = 0x00000800;
    inline constexpr uint32_t CCMR1_Output_OC2PE = (1U << 11);
    inline constexpr uint32_t CCMR1_Output_OC2M_Pos = 12;
    inline constexpr uint32_t CCMR1_Output_OC2M_Msk = 0x00007000;
    inline constexpr uint32_t CCMR1_Output_OC2CE_Pos = 15;
    inline constexpr uint32_t CCMR1_Output_OC2CE_Msk = 0x00008000;
    inline constexpr uint32_t CCMR1_Output_OC2CE = (1U << 15);
    inline constexpr uint32_t CCMR1_Output_OC1M_3_Pos = 16;
    inline constexpr uint32_t CCMR1_Output_OC1M_3_Msk = 0x00010000;
    inline constexpr uint32_t CCMR1_Output_OC1M_3 = (1U << 16);
    inline constexpr uint32_t CCMR1_Output_OC2M_3_Pos = 24;
    inline constexpr uint32_t CCMR1_Output_OC2M_3_Msk = 0x01000000;
    inline constexpr uint32_t CCMR1_Output_OC2M_3 = (1U << 24);

    // CCMR1_Input fields
    inline constexpr uint32_t CCMR1_Input_CC1S_Pos = 0;
    inline constexpr uint32_t CCMR1_Input_CC1S_Msk = 0x00000003;
    inline constexpr uint32_t CCMR1_Input_ICPCS_Pos = 2;
    inline constexpr uint32_t CCMR1_Input_ICPCS_Msk = 0x0000000C;
    inline constexpr uint32_t CCMR1_Input_IC1F_Pos = 4;
    inline constexpr uint32_t CCMR1_Input_IC1F_Msk = 0x000000F0;
    inline constexpr uint32_t CCMR1_Input_CC2S_Pos = 8;
    inline constexpr uint32_t CCMR1_Input_CC2S_Msk = 0x00000300;
    inline constexpr uint32_t CCMR1_Input_IC2PCS_Pos = 10;
    inline constexpr uint32_t CCMR1_Input_IC2PCS_Msk = 0x00000C00;
    inline constexpr uint32_t CCMR1_Input_IC2F_Pos = 12;
    inline constexpr uint32_t CCMR1_Input_IC2F_Msk = 0x0000F000;

    // CCMR2_Output fields
    inline constexpr uint32_t CCMR2_Output_CC3S_Pos = 0;
    inline constexpr uint32_t CCMR2_Output_CC3S_Msk = 0x00000003;
    inline constexpr uint32_t CCMR2_Output_OC3FE_Pos = 2;
    inline constexpr uint32_t CCMR2_Output_OC3FE_Msk = 0x00000004;
    inline constexpr uint32_t CCMR2_Output_OC3FE = (1U << 2);
    inline constexpr uint32_t CCMR2_Output_OC3PE_Pos = 3;
    inline constexpr uint32_t CCMR2_Output_OC3PE_Msk = 0x00000008;
    inline constexpr uint32_t CCMR2_Output_OC3PE = (1U << 3);
    inline constexpr uint32_t CCMR2_Output_OC3M_Pos = 4;
    inline constexpr uint32_t CCMR2_Output_OC3M_Msk = 0x00000070;
    inline constexpr uint32_t CCMR2_Output_OC3CE_Pos = 7;
    inline constexpr uint32_t CCMR2_Output_OC3CE_Msk = 0x00000080;
    inline constexpr uint32_t CCMR2_Output_OC3CE = (1U << 7);
    inline constexpr uint32_t CCMR2_Output_CC4S_Pos = 8;
    inline constexpr uint32_t CCMR2_Output_CC4S_Msk = 0x00000300;
    inline constexpr uint32_t CCMR2_Output_OC4FE_Pos = 10;
    inline constexpr uint32_t CCMR2_Output_OC4FE_Msk = 0x00000400;
    inline constexpr uint32_t CCMR2_Output_OC4FE = (1U << 10);
    inline constexpr uint32_t CCMR2_Output_OC4PE_Pos = 11;
    inline constexpr uint32_t CCMR2_Output_OC4PE_Msk = 0x00000800;
    inline constexpr uint32_t CCMR2_Output_OC4PE = (1U << 11);
    inline constexpr uint32_t CCMR2_Output_OC4M_Pos = 12;
    inline constexpr uint32_t CCMR2_Output_OC4M_Msk = 0x00007000;
    inline constexpr uint32_t CCMR2_Output_OC4CE_Pos = 15;
    inline constexpr uint32_t CCMR2_Output_OC4CE_Msk = 0x00008000;
    inline constexpr uint32_t CCMR2_Output_OC4CE = (1U << 15);
    inline constexpr uint32_t CCMR2_Output_OC3M_3_Pos = 16;
    inline constexpr uint32_t CCMR2_Output_OC3M_3_Msk = 0x00010000;
    inline constexpr uint32_t CCMR2_Output_OC3M_3 = (1U << 16);
    inline constexpr uint32_t CCMR2_Output_OC4M_3_Pos = 24;
    inline constexpr uint32_t CCMR2_Output_OC4M_3_Msk = 0x01000000;
    inline constexpr uint32_t CCMR2_Output_OC4M_3 = (1U << 24);

    // CCMR2_Input fields
    inline constexpr uint32_t CCMR2_Input_CC3S_Pos = 0;
    inline constexpr uint32_t CCMR2_Input_CC3S_Msk = 0x00000003;
    inline constexpr uint32_t CCMR2_Input_IC3PSC_Pos = 2;
    inline constexpr uint32_t CCMR2_Input_IC3PSC_Msk = 0x0000000C;
    inline constexpr uint32_t CCMR2_Input_IC3F_Pos = 4;
    inline constexpr uint32_t CCMR2_Input_IC3F_Msk = 0x000000F0;
    inline constexpr uint32_t CCMR2_Input_CC4S_Pos = 8;
    inline constexpr uint32_t CCMR2_Input_CC4S_Msk = 0x00000300;
    inline constexpr uint32_t CCMR2_Input_IC4PSC_Pos = 10;
    inline constexpr uint32_t CCMR2_Input_IC4PSC_Msk = 0x00000C00;
    inline constexpr uint32_t CCMR2_Input_IC4F_Pos = 12;
    inline constexpr uint32_t CCMR2_Input_IC4F_Msk = 0x0000F000;

    // CCER fields
    inline constexpr uint32_t CCER_CC1E_Pos = 0;
    inline constexpr uint32_t CCER_CC1E_Msk = 0x00000001;
    inline constexpr uint32_t CCER_CC1E = (1U << 0);
    inline constexpr uint32_t CCER_CC1P_Pos = 1;
    inline constexpr uint32_t CCER_CC1P_Msk = 0x00000002;
    inline constexpr uint32_t CCER_CC1P = (1U << 1);
    inline constexpr uint32_t CCER_CC1NP_Pos = 3;
    inline constexpr uint32_t CCER_CC1NP_Msk = 0x00000008;
    inline constexpr uint32_t CCER_CC1NP = (1U << 3);
    inline constexpr uint32_t CCER_CC2E_Pos = 4;
    inline constexpr uint32_t CCER_CC2E_Msk = 0x00000010;
    inline constexpr uint32_t CCER_CC2E = (1U << 4);
    inline constexpr uint32_t CCER_CC2P_Pos = 5;
    inline constexpr uint32_t CCER_CC2P_Msk = 0x00000020;
    inline constexpr uint32_t CCER_CC2P = (1U << 5);
    inline constexpr uint32_t CCER_CC2NP_Pos = 7;
    inline constexpr uint32_t CCER_CC2NP_Msk = 0x00000080;
    inline constexpr uint32_t CCER_CC2NP = (1U << 7);
    inline constexpr uint32_t CCER_CC3E_Pos = 8;
    inline constexpr uint32_t CCER_CC3E_Msk = 0x00000100;
    inline constexpr uint32_t CCER_CC3E = (1U << 8);
    inline constexpr uint32_t CCER_CC3P_Pos = 9;
    inline constexpr uint32_t CCER_CC3P_Msk = 0x00000200;
    inline constexpr uint32_t CCER_CC3P = (1U << 9);
    inline constexpr uint32_t CCER_CC3NP_Pos = 11;
    inline constexpr uint32_t CCER_CC3NP_Msk = 0x00000800;
    inline constexpr uint32_t CCER_CC3NP = (1U << 11);
    inline constexpr uint32_t CCER_CC4E_Pos = 12;
    inline constexpr uint32_t CCER_CC4E_Msk = 0x00001000;
    inline constexpr uint32_t CCER_CC4E = (1U << 12);
    inline constexpr uint32_t CCER_CC4P_Pos = 13;
    inline constexpr uint32_t CCER_CC4P_Msk = 0x00002000;
    inline constexpr uint32_t CCER_CC4P = (1U << 13);
    inline constexpr uint32_t CCER_CC4NP_Pos = 15;
    inline constexpr uint32_t CCER_CC4NP_Msk = 0x00008000;
    inline constexpr uint32_t CCER_CC4NP = (1U << 15);

    // CNT fields
    inline constexpr uint32_t CNT_CNT_L_Pos = 0;
    inline constexpr uint32_t CNT_CNT_L_Msk = 0x0000FFFF;
    inline constexpr uint32_t CNT_CNT_H_Pos = 16;
    inline constexpr uint32_t CNT_CNT_H_Msk = 0xFFFF0000;

    // PSC fields
    inline constexpr uint32_t PSC_PSC_Pos = 0;
    inline constexpr uint32_t PSC_PSC_Msk = 0x0000FFFF;

    // ARR fields
    inline constexpr uint32_t ARR_ARR_L_Pos = 0;
    inline constexpr uint32_t ARR_ARR_L_Msk = 0x0000FFFF;
    inline constexpr uint32_t ARR_ARR_H_Pos = 16;
    inline constexpr uint32_t ARR_ARR_H_Msk = 0xFFFF0000;

    // CCR1 fields
    inline constexpr uint32_t CCR1_CCR1_L_Pos = 0;
    inline constexpr uint32_t CCR1_CCR1_L_Msk = 0x0000FFFF;
    inline constexpr uint32_t CCR1_CCR1_H_Pos = 16;
    inline constexpr uint32_t CCR1_CCR1_H_Msk = 0xFFFF0000;

    // CCR2 fields
    inline constexpr uint32_t CCR2_CCR2_L_Pos = 0;
    inline constexpr uint32_t CCR2_CCR2_L_Msk = 0x0000FFFF;
    inline constexpr uint32_t CCR2_CCR2_H_Pos = 16;
    inline constexpr uint32_t CCR2_CCR2_H_Msk = 0xFFFF0000;

    // CCR3 fields
    inline constexpr uint32_t CCR3_CCR3_L_Pos = 0;
    inline constexpr uint32_t CCR3_CCR3_L_Msk = 0x0000FFFF;
    inline constexpr uint32_t CCR3_CCR3_H_Pos = 16;
    inline constexpr uint32_t CCR3_CCR3_H_Msk = 0xFFFF0000;

    // CCR4 fields
    inline constexpr uint32_t CCR4_CCR4_L_Pos = 0;
    inline constexpr uint32_t CCR4_CCR4_L_Msk = 0x0000FFFF;
    inline constexpr uint32_t CCR4_CCR4_H_Pos = 16;
    inline constexpr uint32_t CCR4_CCR4_H_Msk = 0xFFFF0000;

    // DCR fields
    inline constexpr uint32_t DCR_DBA_Pos = 0;
    inline constexpr uint32_t DCR_DBA_Msk = 0x0000001F;
    inline constexpr uint32_t DCR_DBL_Pos = 8;
    inline constexpr uint32_t DCR_DBL_Msk = 0x00001F00;

    // DMAR fields
    inline constexpr uint32_t DMAR_DMAB_Pos = 0;
    inline constexpr uint32_t DMAR_DMAB_Msk = 0x0000FFFF;

    // AF1 fields
    inline constexpr uint32_t AF1_ETRSEL_Pos = 14;
    inline constexpr uint32_t AF1_ETRSEL_Msk = 0x0003C000;

    // TISEL fields
    inline constexpr uint32_t TISEL_TI1SEL_Pos = 0;
    inline constexpr uint32_t TISEL_TI1SEL_Msk = 0x0000000F;
    inline constexpr uint32_t TISEL_TI2SEL_Pos = 8;
    inline constexpr uint32_t TISEL_TI2SEL_Msk = 0x00000F00;
    inline constexpr uint32_t TISEL_TI3SEL_Pos = 16;
    inline constexpr uint32_t TISEL_TI3SEL_Msk = 0x000F0000;
    inline constexpr uint32_t TISEL_TI4SEL_Pos = 24;
    inline constexpr uint32_t TISEL_TI4SEL_Msk = 0x0F000000;

} // namespace TIM5

// Peripheral instances (lowercase to avoid namespace collision)
namespace periph {
    inline auto* const tim2 = reinterpret_cast<TIM2_t*>(0x40000000);
    inline auto* const tim3 = reinterpret_cast<TIM2_t*>(0x40000400);
    inline auto* const tim4 = reinterpret_cast<TIM2_t*>(0x40000800);
    inline auto* const tim5 = reinterpret_cast<TIM2_t*>(0x40000C00);
} // namespace periph

} // namespace sbl::hw::reg

#endif // SBL_HW_REG_STM32H750_TIM_GENERAL_HPP
