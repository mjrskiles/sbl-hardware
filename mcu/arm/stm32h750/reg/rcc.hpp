/**
 * @file rcc.hpp
 * @brief Register definitions for STM32H750 - rcc
 *
 * Generated from: stm32h750.svd.patched
 * Generator: cecrops
 * Generated: 2025-12-16T16:03:28.262491
 *
 * DO NOT EDIT - Regenerate with: cecrops generate <mcu-dir>
 */

#ifndef SBL_HW_REG_STM32H750_RCC_HPP
#define SBL_HW_REG_STM32H750_RCC_HPP

#include <cstdint>

namespace sbl::hw::reg {

/** Reset and clock control */
struct RCC_t {
    volatile uint32_t CR;  ///< clock control register
    volatile uint32_t ICSCR;  ///< RCC Internal Clock Source Calibration           Register
    volatile uint32_t HSICFGR;  ///< RCC HSI configuration register
    volatile uint32_t CRRCR;  ///< RCC Clock Recovery RC Register
    uint8_t _reserved0[4];
    volatile uint32_t CFGR;  ///< RCC Clock Configuration           Register
    uint8_t _reserved1[4];
    volatile uint32_t D1CFGR;  ///< RCC Domain 1 Clock Configuration           Register
    volatile uint32_t D2CFGR;  ///< RCC Domain 2 Clock Configuration           Register
    volatile uint32_t D3CFGR;  ///< RCC Domain 3 Clock Configuration           Register
    uint8_t _reserved2[4];
    volatile uint32_t PLLCKSELR;  ///< RCC PLLs Clock Source Selection           Register
    volatile uint32_t PLLCFGR;  ///< RCC PLLs Configuration           Register
    volatile uint32_t PLL1DIVR;  ///< RCC PLL1 Dividers Configuration           Register
    volatile uint32_t PLL1FRACR;  ///< RCC PLL1 Fractional Divider           Register
    volatile uint32_t PLL2DIVR;  ///< RCC PLL2 Dividers Configuration           Register
    volatile uint32_t PLL2FRACR;  ///< RCC PLL2 Fractional Divider           Register
    volatile uint32_t PLL3DIVR;  ///< RCC PLL3 Dividers Configuration           Register
    volatile uint32_t PLL3FRACR;  ///< RCC PLL3 Fractional Divider           Register
    uint8_t _reserved3[4];
    volatile uint32_t D1CCIPR;  ///< RCC Domain 1 Kernel Clock Configuration           Register
    volatile uint32_t D2CCIP1R;  ///< RCC Domain 2 Kernel Clock Configuration           Register
    volatile uint32_t D2CCIP2R;  ///< RCC Domain 2 Kernel Clock Configuration           Register
    volatile uint32_t D3CCIPR;  ///< RCC Domain 3 Kernel Clock Configuration           Register
    uint8_t _reserved4[4];
    volatile uint32_t CIER;  ///< RCC Clock Source Interrupt Enable           Register
    volatile uint32_t CIFR;  ///< RCC Clock Source Interrupt Flag           Register
    volatile uint32_t CICR;  ///< RCC Clock Source Interrupt Clear           Register
    uint8_t _reserved5[4];
    volatile uint32_t BDCR;  ///< RCC Backup Domain Control           Register
    uint8_t _reserved6[4];
    volatile uint32_t CSR;  ///< RCC Clock Control and Status           Register
    volatile uint32_t AHB3RSTR;  ///< RCC AHB3 Reset Register
    volatile uint32_t AHB1RSTR;  ///< RCC AHB1 Peripheral Reset           Register
    volatile uint32_t AHB2RSTR;  ///< RCC AHB2 Peripheral Reset           Register
    volatile uint32_t AHB4RSTR;  ///< RCC AHB4 Peripheral Reset           Register
    volatile uint32_t APB3RSTR;  ///< RCC APB3 Peripheral Reset           Register
    volatile uint32_t APB1LRSTR;  ///< RCC APB1 Peripheral Reset           Register
    volatile uint32_t APB1HRSTR;  ///< RCC APB1 Peripheral Reset           Register
    volatile uint32_t APB2RSTR;  ///< RCC APB2 Peripheral Reset           Register
    volatile uint32_t APB4RSTR;  ///< RCC APB4 Peripheral Reset           Register
    volatile uint32_t GCR;  ///< RCC Global Control Register
    uint8_t _reserved7[4];
    volatile uint32_t D3AMR;  ///< RCC D3 Autonomous mode           Register
    uint8_t _reserved8[36];
    volatile uint32_t RSR;  ///< RCC Reset Status Register
    volatile uint32_t AHB3ENR;  ///< RCC AHB3 Clock Register
    volatile uint32_t AHB1ENR;  ///< RCC AHB1 Clock Register
    volatile uint32_t AHB2ENR;  ///< RCC AHB2 Clock Register
    volatile uint32_t AHB4ENR;  ///< RCC AHB4 Clock Register
    volatile uint32_t APB3ENR;  ///< RCC APB3 Clock Register
    volatile uint32_t APB1LENR;  ///< RCC APB1 Clock Register
    volatile uint32_t APB1HENR;  ///< RCC APB1 Clock Register
    volatile uint32_t APB2ENR;  ///< RCC APB2 Clock Register
    volatile uint32_t APB4ENR;  ///< RCC APB4 Clock Register
    uint8_t _reserved9[4];
    volatile uint32_t AHB3LPENR;  ///< RCC AHB3 Sleep Clock Register
    volatile uint32_t AHB1LPENR;  ///< RCC AHB1 Sleep Clock Register
    volatile uint32_t AHB2LPENR;  ///< RCC AHB2 Sleep Clock Register
    volatile uint32_t AHB4LPENR;  ///< RCC AHB4 Sleep Clock Register
    volatile uint32_t APB3LPENR;  ///< RCC APB3 Sleep Clock Register
    volatile uint32_t APB1LLPENR;  ///< RCC APB1 Low Sleep Clock           Register
    volatile uint32_t APB1HLPENR;  ///< RCC APB1 High Sleep Clock           Register
    volatile uint32_t APB2LPENR;  ///< RCC APB2 Sleep Clock Register
    volatile uint32_t APB4LPENR;  ///< RCC APB4 Sleep Clock Register
    uint8_t _reserved10[16];
    volatile uint32_t C1_RSR;  ///< RCC Reset Status Register
    volatile uint32_t C1_AHB3ENR;  ///< RCC AHB3 Clock Register
    volatile uint32_t C1_AHB1ENR;  ///< RCC AHB1 Clock Register
    volatile uint32_t C1_AHB2ENR;  ///< RCC AHB2 Clock Register
    volatile uint32_t C1_AHB4ENR;  ///< RCC AHB4 Clock Register
    volatile uint32_t C1_APB3ENR;  ///< RCC APB3 Clock Register
    volatile uint32_t C1_APB1LENR;  ///< RCC APB1 Clock Register
    volatile uint32_t C1_APB1HENR;  ///< RCC APB1 Clock Register
    volatile uint32_t C1_APB2ENR;  ///< RCC APB2 Clock Register
    volatile uint32_t C1_APB4ENR;  ///< RCC APB4 Clock Register
    uint8_t _reserved11[4];
    volatile uint32_t C1_AHB3LPENR;  ///< RCC AHB3 Sleep Clock Register
    volatile uint32_t C1_AHB1LPENR;  ///< RCC AHB1 Sleep Clock Register
    volatile uint32_t C1_AHB2LPENR;  ///< RCC AHB2 Sleep Clock Register
    volatile uint32_t C1_AHB4LPENR;  ///< RCC AHB4 Sleep Clock Register
    volatile uint32_t C1_APB3LPENR;  ///< RCC APB3 Sleep Clock Register
    volatile uint32_t C1_APB1LLPENR;  ///< RCC APB1 Low Sleep Clock           Register
    volatile uint32_t C1_APB1HLPENR;  ///< RCC APB1 High Sleep Clock           Register
    volatile uint32_t C1_APB2LPENR;  ///< RCC APB2 Sleep Clock Register
    volatile uint32_t C1_APB4LPENR;  ///< RCC APB4 Sleep Clock Register
};

namespace RCC {
    // CR fields
    inline constexpr uint32_t CR_HSION_Pos = 0;
    inline constexpr uint32_t CR_HSION_Msk = 0x00000001;
    inline constexpr uint32_t CR_HSION = (1U << 0);
    inline constexpr uint32_t CR_HSIKERON_Pos = 1;
    inline constexpr uint32_t CR_HSIKERON_Msk = 0x00000002;
    inline constexpr uint32_t CR_HSIKERON = (1U << 1);
    inline constexpr uint32_t CR_HSIRDY_Pos = 2;
    inline constexpr uint32_t CR_HSIRDY_Msk = 0x00000004;
    inline constexpr uint32_t CR_HSIRDY = (1U << 2);
    inline constexpr uint32_t CR_HSIDIV_Pos = 3;
    inline constexpr uint32_t CR_HSIDIV_Msk = 0x00000018;
    inline constexpr uint32_t CR_HSIDIVF_Pos = 5;
    inline constexpr uint32_t CR_HSIDIVF_Msk = 0x00000020;
    inline constexpr uint32_t CR_HSIDIVF = (1U << 5);
    inline constexpr uint32_t CR_CSION_Pos = 7;
    inline constexpr uint32_t CR_CSION_Msk = 0x00000080;
    inline constexpr uint32_t CR_CSION = (1U << 7);
    inline constexpr uint32_t CR_CSIRDY_Pos = 8;
    inline constexpr uint32_t CR_CSIRDY_Msk = 0x00000100;
    inline constexpr uint32_t CR_CSIRDY = (1U << 8);
    inline constexpr uint32_t CR_CSIKERON_Pos = 9;
    inline constexpr uint32_t CR_CSIKERON_Msk = 0x00000200;
    inline constexpr uint32_t CR_CSIKERON = (1U << 9);
    inline constexpr uint32_t CR_RC48ON_Pos = 12;
    inline constexpr uint32_t CR_RC48ON_Msk = 0x00001000;
    inline constexpr uint32_t CR_RC48ON = (1U << 12);
    inline constexpr uint32_t CR_RC48RDY_Pos = 13;
    inline constexpr uint32_t CR_RC48RDY_Msk = 0x00002000;
    inline constexpr uint32_t CR_RC48RDY = (1U << 13);
    inline constexpr uint32_t CR_D1CKRDY_Pos = 14;
    inline constexpr uint32_t CR_D1CKRDY_Msk = 0x00004000;
    inline constexpr uint32_t CR_D1CKRDY = (1U << 14);
    inline constexpr uint32_t CR_D2CKRDY_Pos = 15;
    inline constexpr uint32_t CR_D2CKRDY_Msk = 0x00008000;
    inline constexpr uint32_t CR_D2CKRDY = (1U << 15);
    inline constexpr uint32_t CR_HSEON_Pos = 16;
    inline constexpr uint32_t CR_HSEON_Msk = 0x00010000;
    inline constexpr uint32_t CR_HSEON = (1U << 16);
    inline constexpr uint32_t CR_HSERDY_Pos = 17;
    inline constexpr uint32_t CR_HSERDY_Msk = 0x00020000;
    inline constexpr uint32_t CR_HSERDY = (1U << 17);
    inline constexpr uint32_t CR_HSEBYP_Pos = 18;
    inline constexpr uint32_t CR_HSEBYP_Msk = 0x00040000;
    inline constexpr uint32_t CR_HSEBYP = (1U << 18);
    inline constexpr uint32_t CR_HSECSSON_Pos = 19;
    inline constexpr uint32_t CR_HSECSSON_Msk = 0x00080000;
    inline constexpr uint32_t CR_HSECSSON = (1U << 19);
    inline constexpr uint32_t CR_PLL1ON_Pos = 24;
    inline constexpr uint32_t CR_PLL1ON_Msk = 0x01000000;
    inline constexpr uint32_t CR_PLL1ON = (1U << 24);
    inline constexpr uint32_t CR_PLL1RDY_Pos = 25;
    inline constexpr uint32_t CR_PLL1RDY_Msk = 0x02000000;
    inline constexpr uint32_t CR_PLL1RDY = (1U << 25);
    inline constexpr uint32_t CR_PLL2ON_Pos = 26;
    inline constexpr uint32_t CR_PLL2ON_Msk = 0x04000000;
    inline constexpr uint32_t CR_PLL2ON = (1U << 26);
    inline constexpr uint32_t CR_PLL2RDY_Pos = 27;
    inline constexpr uint32_t CR_PLL2RDY_Msk = 0x08000000;
    inline constexpr uint32_t CR_PLL2RDY = (1U << 27);
    inline constexpr uint32_t CR_PLL3ON_Pos = 28;
    inline constexpr uint32_t CR_PLL3ON_Msk = 0x10000000;
    inline constexpr uint32_t CR_PLL3ON = (1U << 28);
    inline constexpr uint32_t CR_PLL3RDY_Pos = 29;
    inline constexpr uint32_t CR_PLL3RDY_Msk = 0x20000000;
    inline constexpr uint32_t CR_PLL3RDY = (1U << 29);

    // ICSCR fields
    inline constexpr uint32_t ICSCR_HSICAL_Pos = 0;
    inline constexpr uint32_t ICSCR_HSICAL_Msk = 0x00000FFF;
    inline constexpr uint32_t ICSCR_HSITRIM_Pos = 12;
    inline constexpr uint32_t ICSCR_HSITRIM_Msk = 0x0003F000;
    inline constexpr uint32_t ICSCR_CSICAL_Pos = 18;
    inline constexpr uint32_t ICSCR_CSICAL_Msk = 0x03FC0000;
    inline constexpr uint32_t ICSCR_CSITRIM_Pos = 26;
    inline constexpr uint32_t ICSCR_CSITRIM_Msk = 0x7C000000;

    // HSICFGR fields
    inline constexpr uint32_t HSICFGR_HSICAL_Pos = 0;
    inline constexpr uint32_t HSICFGR_HSICAL_Msk = 0x00000FFF;
    inline constexpr uint32_t HSICFGR_HSITRIM_Pos = 24;
    inline constexpr uint32_t HSICFGR_HSITRIM_Msk = 0x7F000000;

    // CRRCR fields
    inline constexpr uint32_t CRRCR_RC48CAL_Pos = 0;
    inline constexpr uint32_t CRRCR_RC48CAL_Msk = 0x000003FF;

    // CFGR fields
    inline constexpr uint32_t CFGR_SW_Pos = 0;
    inline constexpr uint32_t CFGR_SW_Msk = 0x00000007;
    inline constexpr uint32_t CFGR_SWS_Pos = 3;
    inline constexpr uint32_t CFGR_SWS_Msk = 0x00000038;
    inline constexpr uint32_t CFGR_STOPWUCK_Pos = 6;
    inline constexpr uint32_t CFGR_STOPWUCK_Msk = 0x00000040;
    inline constexpr uint32_t CFGR_STOPWUCK = (1U << 6);
    inline constexpr uint32_t CFGR_STOPKERWUCK_Pos = 7;
    inline constexpr uint32_t CFGR_STOPKERWUCK_Msk = 0x00000080;
    inline constexpr uint32_t CFGR_STOPKERWUCK = (1U << 7);
    inline constexpr uint32_t CFGR_RTCPRE_Pos = 8;
    inline constexpr uint32_t CFGR_RTCPRE_Msk = 0x00003F00;
    inline constexpr uint32_t CFGR_HRTIMSEL_Pos = 14;
    inline constexpr uint32_t CFGR_HRTIMSEL_Msk = 0x00004000;
    inline constexpr uint32_t CFGR_HRTIMSEL = (1U << 14);
    inline constexpr uint32_t CFGR_TIMPRE_Pos = 15;
    inline constexpr uint32_t CFGR_TIMPRE_Msk = 0x00008000;
    inline constexpr uint32_t CFGR_TIMPRE = (1U << 15);
    inline constexpr uint32_t CFGR_MCO1PRE_Pos = 18;
    inline constexpr uint32_t CFGR_MCO1PRE_Msk = 0x003C0000;
    inline constexpr uint32_t CFGR_MCO1SEL_Pos = 22;
    inline constexpr uint32_t CFGR_MCO1SEL_Msk = 0x01C00000;
    inline constexpr uint32_t CFGR_MCO2PRE_Pos = 25;
    inline constexpr uint32_t CFGR_MCO2PRE_Msk = 0x1E000000;
    inline constexpr uint32_t CFGR_MCO2SEL_Pos = 29;
    inline constexpr uint32_t CFGR_MCO2SEL_Msk = 0xE0000000;

    // D1CFGR fields
    inline constexpr uint32_t D1CFGR_HPRE_Pos = 0;
    inline constexpr uint32_t D1CFGR_HPRE_Msk = 0x0000000F;
    inline constexpr uint32_t D1CFGR_D1PPRE_Pos = 4;
    inline constexpr uint32_t D1CFGR_D1PPRE_Msk = 0x00000070;
    inline constexpr uint32_t D1CFGR_D1CPRE_Pos = 8;
    inline constexpr uint32_t D1CFGR_D1CPRE_Msk = 0x00000F00;

    // D2CFGR fields
    inline constexpr uint32_t D2CFGR_D2PPRE1_Pos = 4;
    inline constexpr uint32_t D2CFGR_D2PPRE1_Msk = 0x00000070;
    inline constexpr uint32_t D2CFGR_D2PPRE2_Pos = 8;
    inline constexpr uint32_t D2CFGR_D2PPRE2_Msk = 0x00000700;

    // D3CFGR fields
    inline constexpr uint32_t D3CFGR_D3PPRE_Pos = 4;
    inline constexpr uint32_t D3CFGR_D3PPRE_Msk = 0x00000070;

    // PLLCKSELR fields
    inline constexpr uint32_t PLLCKSELR_PLLSRC_Pos = 0;
    inline constexpr uint32_t PLLCKSELR_PLLSRC_Msk = 0x00000003;
    inline constexpr uint32_t PLLCKSELR_DIVM1_Pos = 4;
    inline constexpr uint32_t PLLCKSELR_DIVM1_Msk = 0x000003F0;
    inline constexpr uint32_t PLLCKSELR_DIVM2_Pos = 12;
    inline constexpr uint32_t PLLCKSELR_DIVM2_Msk = 0x0003F000;
    inline constexpr uint32_t PLLCKSELR_DIVM3_Pos = 20;
    inline constexpr uint32_t PLLCKSELR_DIVM3_Msk = 0x03F00000;

    // PLLCFGR fields
    inline constexpr uint32_t PLLCFGR_PLL1FRACEN_Pos = 0;
    inline constexpr uint32_t PLLCFGR_PLL1FRACEN_Msk = 0x00000001;
    inline constexpr uint32_t PLLCFGR_PLL1FRACEN = (1U << 0);
    inline constexpr uint32_t PLLCFGR_PLL1VCOSEL_Pos = 1;
    inline constexpr uint32_t PLLCFGR_PLL1VCOSEL_Msk = 0x00000002;
    inline constexpr uint32_t PLLCFGR_PLL1VCOSEL = (1U << 1);
    inline constexpr uint32_t PLLCFGR_PLL1RGE_Pos = 2;
    inline constexpr uint32_t PLLCFGR_PLL1RGE_Msk = 0x0000000C;
    inline constexpr uint32_t PLLCFGR_PLL2FRACEN_Pos = 4;
    inline constexpr uint32_t PLLCFGR_PLL2FRACEN_Msk = 0x00000010;
    inline constexpr uint32_t PLLCFGR_PLL2FRACEN = (1U << 4);
    inline constexpr uint32_t PLLCFGR_PLL2VCOSEL_Pos = 5;
    inline constexpr uint32_t PLLCFGR_PLL2VCOSEL_Msk = 0x00000020;
    inline constexpr uint32_t PLLCFGR_PLL2VCOSEL = (1U << 5);
    inline constexpr uint32_t PLLCFGR_PLL2RGE_Pos = 6;
    inline constexpr uint32_t PLLCFGR_PLL2RGE_Msk = 0x000000C0;
    inline constexpr uint32_t PLLCFGR_PLL3FRACEN_Pos = 8;
    inline constexpr uint32_t PLLCFGR_PLL3FRACEN_Msk = 0x00000100;
    inline constexpr uint32_t PLLCFGR_PLL3FRACEN = (1U << 8);
    inline constexpr uint32_t PLLCFGR_PLL3VCOSEL_Pos = 9;
    inline constexpr uint32_t PLLCFGR_PLL3VCOSEL_Msk = 0x00000200;
    inline constexpr uint32_t PLLCFGR_PLL3VCOSEL = (1U << 9);
    inline constexpr uint32_t PLLCFGR_PLL3RGE_Pos = 10;
    inline constexpr uint32_t PLLCFGR_PLL3RGE_Msk = 0x00000C00;
    inline constexpr uint32_t PLLCFGR_DIVP1EN_Pos = 16;
    inline constexpr uint32_t PLLCFGR_DIVP1EN_Msk = 0x00010000;
    inline constexpr uint32_t PLLCFGR_DIVP1EN = (1U << 16);
    inline constexpr uint32_t PLLCFGR_DIVQ1EN_Pos = 17;
    inline constexpr uint32_t PLLCFGR_DIVQ1EN_Msk = 0x00020000;
    inline constexpr uint32_t PLLCFGR_DIVQ1EN = (1U << 17);
    inline constexpr uint32_t PLLCFGR_DIVR1EN_Pos = 18;
    inline constexpr uint32_t PLLCFGR_DIVR1EN_Msk = 0x00040000;
    inline constexpr uint32_t PLLCFGR_DIVR1EN = (1U << 18);
    inline constexpr uint32_t PLLCFGR_DIVP2EN_Pos = 19;
    inline constexpr uint32_t PLLCFGR_DIVP2EN_Msk = 0x00080000;
    inline constexpr uint32_t PLLCFGR_DIVP2EN = (1U << 19);
    inline constexpr uint32_t PLLCFGR_DIVQ2EN_Pos = 20;
    inline constexpr uint32_t PLLCFGR_DIVQ2EN_Msk = 0x00100000;
    inline constexpr uint32_t PLLCFGR_DIVQ2EN = (1U << 20);
    inline constexpr uint32_t PLLCFGR_DIVR2EN_Pos = 21;
    inline constexpr uint32_t PLLCFGR_DIVR2EN_Msk = 0x00200000;
    inline constexpr uint32_t PLLCFGR_DIVR2EN = (1U << 21);
    inline constexpr uint32_t PLLCFGR_DIVP3EN_Pos = 22;
    inline constexpr uint32_t PLLCFGR_DIVP3EN_Msk = 0x00400000;
    inline constexpr uint32_t PLLCFGR_DIVP3EN = (1U << 22);
    inline constexpr uint32_t PLLCFGR_DIVQ3EN_Pos = 23;
    inline constexpr uint32_t PLLCFGR_DIVQ3EN_Msk = 0x00800000;
    inline constexpr uint32_t PLLCFGR_DIVQ3EN = (1U << 23);
    inline constexpr uint32_t PLLCFGR_DIVR3EN_Pos = 24;
    inline constexpr uint32_t PLLCFGR_DIVR3EN_Msk = 0x01000000;
    inline constexpr uint32_t PLLCFGR_DIVR3EN = (1U << 24);

    // PLL1DIVR fields
    inline constexpr uint32_t PLL1DIVR_DIVN1_Pos = 0;
    inline constexpr uint32_t PLL1DIVR_DIVN1_Msk = 0x000001FF;
    inline constexpr uint32_t PLL1DIVR_DIVP1_Pos = 9;
    inline constexpr uint32_t PLL1DIVR_DIVP1_Msk = 0x0000FE00;
    inline constexpr uint32_t PLL1DIVR_DIVQ1_Pos = 16;
    inline constexpr uint32_t PLL1DIVR_DIVQ1_Msk = 0x007F0000;
    inline constexpr uint32_t PLL1DIVR_DIVR1_Pos = 24;
    inline constexpr uint32_t PLL1DIVR_DIVR1_Msk = 0x7F000000;

    // PLL1FRACR fields
    inline constexpr uint32_t PLL1FRACR_FRACN1_Pos = 3;
    inline constexpr uint32_t PLL1FRACR_FRACN1_Msk = 0x0000FFF8;

    // PLL2DIVR fields
    inline constexpr uint32_t PLL2DIVR_DIVN2_Pos = 0;
    inline constexpr uint32_t PLL2DIVR_DIVN2_Msk = 0x000001FF;
    inline constexpr uint32_t PLL2DIVR_DIVP2_Pos = 9;
    inline constexpr uint32_t PLL2DIVR_DIVP2_Msk = 0x0000FE00;
    inline constexpr uint32_t PLL2DIVR_DIVQ2_Pos = 16;
    inline constexpr uint32_t PLL2DIVR_DIVQ2_Msk = 0x007F0000;
    inline constexpr uint32_t PLL2DIVR_DIVR2_Pos = 24;
    inline constexpr uint32_t PLL2DIVR_DIVR2_Msk = 0x7F000000;

    // PLL2FRACR fields
    inline constexpr uint32_t PLL2FRACR_FRACN2_Pos = 3;
    inline constexpr uint32_t PLL2FRACR_FRACN2_Msk = 0x0000FFF8;

    // PLL3DIVR fields
    inline constexpr uint32_t PLL3DIVR_DIVN3_Pos = 0;
    inline constexpr uint32_t PLL3DIVR_DIVN3_Msk = 0x000001FF;
    inline constexpr uint32_t PLL3DIVR_DIVP3_Pos = 9;
    inline constexpr uint32_t PLL3DIVR_DIVP3_Msk = 0x0000FE00;
    inline constexpr uint32_t PLL3DIVR_DIVQ3_Pos = 16;
    inline constexpr uint32_t PLL3DIVR_DIVQ3_Msk = 0x007F0000;
    inline constexpr uint32_t PLL3DIVR_DIVR3_Pos = 24;
    inline constexpr uint32_t PLL3DIVR_DIVR3_Msk = 0x7F000000;

    // PLL3FRACR fields
    inline constexpr uint32_t PLL3FRACR_FRACN3_Pos = 3;
    inline constexpr uint32_t PLL3FRACR_FRACN3_Msk = 0x0000FFF8;

    // D1CCIPR fields
    inline constexpr uint32_t D1CCIPR_FMCSEL_Pos = 0;
    inline constexpr uint32_t D1CCIPR_FMCSEL_Msk = 0x00000003;
    inline constexpr uint32_t D1CCIPR_QSPISEL_Pos = 4;
    inline constexpr uint32_t D1CCIPR_QSPISEL_Msk = 0x00000030;
    inline constexpr uint32_t D1CCIPR_SDMMCSEL_Pos = 16;
    inline constexpr uint32_t D1CCIPR_SDMMCSEL_Msk = 0x00010000;
    inline constexpr uint32_t D1CCIPR_SDMMCSEL = (1U << 16);
    inline constexpr uint32_t D1CCIPR_CKPERSEL_Pos = 28;
    inline constexpr uint32_t D1CCIPR_CKPERSEL_Msk = 0x30000000;

    // D2CCIP1R fields
    inline constexpr uint32_t D2CCIP1R_SAI1SEL_Pos = 0;
    inline constexpr uint32_t D2CCIP1R_SAI1SEL_Msk = 0x00000007;
    inline constexpr uint32_t D2CCIP1R_SAI23SEL_Pos = 6;
    inline constexpr uint32_t D2CCIP1R_SAI23SEL_Msk = 0x000001C0;
    inline constexpr uint32_t D2CCIP1R_SPI123SEL_Pos = 12;
    inline constexpr uint32_t D2CCIP1R_SPI123SEL_Msk = 0x00007000;
    inline constexpr uint32_t D2CCIP1R_SPI45SEL_Pos = 16;
    inline constexpr uint32_t D2CCIP1R_SPI45SEL_Msk = 0x00070000;
    inline constexpr uint32_t D2CCIP1R_SPDIFSEL_Pos = 20;
    inline constexpr uint32_t D2CCIP1R_SPDIFSEL_Msk = 0x00300000;
    inline constexpr uint32_t D2CCIP1R_DFSDM1SEL_Pos = 24;
    inline constexpr uint32_t D2CCIP1R_DFSDM1SEL_Msk = 0x01000000;
    inline constexpr uint32_t D2CCIP1R_DFSDM1SEL = (1U << 24);
    inline constexpr uint32_t D2CCIP1R_FDCANSEL_Pos = 28;
    inline constexpr uint32_t D2CCIP1R_FDCANSEL_Msk = 0x30000000;
    inline constexpr uint32_t D2CCIP1R_SWPSEL_Pos = 31;
    inline constexpr uint32_t D2CCIP1R_SWPSEL_Msk = 0x80000000;
    inline constexpr uint32_t D2CCIP1R_SWPSEL = (1U << 31);

    // D2CCIP2R fields
    inline constexpr uint32_t D2CCIP2R_USART234578SEL_Pos = 0;
    inline constexpr uint32_t D2CCIP2R_USART234578SEL_Msk = 0x00000007;
    inline constexpr uint32_t D2CCIP2R_USART16SEL_Pos = 3;
    inline constexpr uint32_t D2CCIP2R_USART16SEL_Msk = 0x00000038;
    inline constexpr uint32_t D2CCIP2R_RNGSEL_Pos = 8;
    inline constexpr uint32_t D2CCIP2R_RNGSEL_Msk = 0x00000300;
    inline constexpr uint32_t D2CCIP2R_I2C123SEL_Pos = 12;
    inline constexpr uint32_t D2CCIP2R_I2C123SEL_Msk = 0x00003000;
    inline constexpr uint32_t D2CCIP2R_USBSEL_Pos = 20;
    inline constexpr uint32_t D2CCIP2R_USBSEL_Msk = 0x00300000;
    inline constexpr uint32_t D2CCIP2R_CECSEL_Pos = 22;
    inline constexpr uint32_t D2CCIP2R_CECSEL_Msk = 0x00C00000;
    inline constexpr uint32_t D2CCIP2R_LPTIM1SEL_Pos = 28;
    inline constexpr uint32_t D2CCIP2R_LPTIM1SEL_Msk = 0x70000000;

    // D3CCIPR fields
    inline constexpr uint32_t D3CCIPR_LPUART1SEL_Pos = 0;
    inline constexpr uint32_t D3CCIPR_LPUART1SEL_Msk = 0x00000007;
    inline constexpr uint32_t D3CCIPR_I2C4SEL_Pos = 8;
    inline constexpr uint32_t D3CCIPR_I2C4SEL_Msk = 0x00000300;
    inline constexpr uint32_t D3CCIPR_LPTIM2SEL_Pos = 10;
    inline constexpr uint32_t D3CCIPR_LPTIM2SEL_Msk = 0x00001C00;
    inline constexpr uint32_t D3CCIPR_LPTIM345SEL_Pos = 13;
    inline constexpr uint32_t D3CCIPR_LPTIM345SEL_Msk = 0x0000E000;
    inline constexpr uint32_t D3CCIPR_ADCSEL_Pos = 16;
    inline constexpr uint32_t D3CCIPR_ADCSEL_Msk = 0x00030000;
    inline constexpr uint32_t D3CCIPR_SAI4ASEL_Pos = 21;
    inline constexpr uint32_t D3CCIPR_SAI4ASEL_Msk = 0x00E00000;
    inline constexpr uint32_t D3CCIPR_SAI4BSEL_Pos = 24;
    inline constexpr uint32_t D3CCIPR_SAI4BSEL_Msk = 0x07000000;
    inline constexpr uint32_t D3CCIPR_SPI6SEL_Pos = 28;
    inline constexpr uint32_t D3CCIPR_SPI6SEL_Msk = 0x70000000;

    // CIER fields
    inline constexpr uint32_t CIER_LSIRDYIE_Pos = 0;
    inline constexpr uint32_t CIER_LSIRDYIE_Msk = 0x00000001;
    inline constexpr uint32_t CIER_LSIRDYIE = (1U << 0);
    inline constexpr uint32_t CIER_LSERDYIE_Pos = 1;
    inline constexpr uint32_t CIER_LSERDYIE_Msk = 0x00000002;
    inline constexpr uint32_t CIER_LSERDYIE = (1U << 1);
    inline constexpr uint32_t CIER_HSIRDYIE_Pos = 2;
    inline constexpr uint32_t CIER_HSIRDYIE_Msk = 0x00000004;
    inline constexpr uint32_t CIER_HSIRDYIE = (1U << 2);
    inline constexpr uint32_t CIER_HSERDYIE_Pos = 3;
    inline constexpr uint32_t CIER_HSERDYIE_Msk = 0x00000008;
    inline constexpr uint32_t CIER_HSERDYIE = (1U << 3);
    inline constexpr uint32_t CIER_CSIRDYIE_Pos = 4;
    inline constexpr uint32_t CIER_CSIRDYIE_Msk = 0x00000010;
    inline constexpr uint32_t CIER_CSIRDYIE = (1U << 4);
    inline constexpr uint32_t CIER_RC48RDYIE_Pos = 5;
    inline constexpr uint32_t CIER_RC48RDYIE_Msk = 0x00000020;
    inline constexpr uint32_t CIER_RC48RDYIE = (1U << 5);
    inline constexpr uint32_t CIER_PLL1RDYIE_Pos = 6;
    inline constexpr uint32_t CIER_PLL1RDYIE_Msk = 0x00000040;
    inline constexpr uint32_t CIER_PLL1RDYIE = (1U << 6);
    inline constexpr uint32_t CIER_PLL2RDYIE_Pos = 7;
    inline constexpr uint32_t CIER_PLL2RDYIE_Msk = 0x00000080;
    inline constexpr uint32_t CIER_PLL2RDYIE = (1U << 7);
    inline constexpr uint32_t CIER_PLL3RDYIE_Pos = 8;
    inline constexpr uint32_t CIER_PLL3RDYIE_Msk = 0x00000100;
    inline constexpr uint32_t CIER_PLL3RDYIE = (1U << 8);
    inline constexpr uint32_t CIER_LSECSSIE_Pos = 9;
    inline constexpr uint32_t CIER_LSECSSIE_Msk = 0x00000200;
    inline constexpr uint32_t CIER_LSECSSIE = (1U << 9);

    // CIFR fields
    inline constexpr uint32_t CIFR_LSIRDYF_Pos = 0;
    inline constexpr uint32_t CIFR_LSIRDYF_Msk = 0x00000001;
    inline constexpr uint32_t CIFR_LSIRDYF = (1U << 0);
    inline constexpr uint32_t CIFR_LSERDYF_Pos = 1;
    inline constexpr uint32_t CIFR_LSERDYF_Msk = 0x00000002;
    inline constexpr uint32_t CIFR_LSERDYF = (1U << 1);
    inline constexpr uint32_t CIFR_HSIRDYF_Pos = 2;
    inline constexpr uint32_t CIFR_HSIRDYF_Msk = 0x00000004;
    inline constexpr uint32_t CIFR_HSIRDYF = (1U << 2);
    inline constexpr uint32_t CIFR_HSERDYF_Pos = 3;
    inline constexpr uint32_t CIFR_HSERDYF_Msk = 0x00000008;
    inline constexpr uint32_t CIFR_HSERDYF = (1U << 3);
    inline constexpr uint32_t CIFR_CSIRDY_Pos = 4;
    inline constexpr uint32_t CIFR_CSIRDY_Msk = 0x00000010;
    inline constexpr uint32_t CIFR_CSIRDY = (1U << 4);
    inline constexpr uint32_t CIFR_RC48RDYF_Pos = 5;
    inline constexpr uint32_t CIFR_RC48RDYF_Msk = 0x00000020;
    inline constexpr uint32_t CIFR_RC48RDYF = (1U << 5);
    inline constexpr uint32_t CIFR_PLL1RDYF_Pos = 6;
    inline constexpr uint32_t CIFR_PLL1RDYF_Msk = 0x00000040;
    inline constexpr uint32_t CIFR_PLL1RDYF = (1U << 6);
    inline constexpr uint32_t CIFR_PLL2RDYF_Pos = 7;
    inline constexpr uint32_t CIFR_PLL2RDYF_Msk = 0x00000080;
    inline constexpr uint32_t CIFR_PLL2RDYF = (1U << 7);
    inline constexpr uint32_t CIFR_PLL3RDYF_Pos = 8;
    inline constexpr uint32_t CIFR_PLL3RDYF_Msk = 0x00000100;
    inline constexpr uint32_t CIFR_PLL3RDYF = (1U << 8);
    inline constexpr uint32_t CIFR_LSECSSF_Pos = 9;
    inline constexpr uint32_t CIFR_LSECSSF_Msk = 0x00000200;
    inline constexpr uint32_t CIFR_LSECSSF = (1U << 9);
    inline constexpr uint32_t CIFR_HSECSSF_Pos = 10;
    inline constexpr uint32_t CIFR_HSECSSF_Msk = 0x00000400;
    inline constexpr uint32_t CIFR_HSECSSF = (1U << 10);

    // CICR fields
    inline constexpr uint32_t CICR_LSIRDYC_Pos = 0;
    inline constexpr uint32_t CICR_LSIRDYC_Msk = 0x00000001;
    inline constexpr uint32_t CICR_LSIRDYC = (1U << 0);
    inline constexpr uint32_t CICR_LSERDYC_Pos = 1;
    inline constexpr uint32_t CICR_LSERDYC_Msk = 0x00000002;
    inline constexpr uint32_t CICR_LSERDYC = (1U << 1);
    inline constexpr uint32_t CICR_HSIRDYC_Pos = 2;
    inline constexpr uint32_t CICR_HSIRDYC_Msk = 0x00000004;
    inline constexpr uint32_t CICR_HSIRDYC = (1U << 2);
    inline constexpr uint32_t CICR_HSERDYC_Pos = 3;
    inline constexpr uint32_t CICR_HSERDYC_Msk = 0x00000008;
    inline constexpr uint32_t CICR_HSERDYC = (1U << 3);
    inline constexpr uint32_t CICR_HSE_ready_Interrupt_Clear_Pos = 4;
    inline constexpr uint32_t CICR_HSE_ready_Interrupt_Clear_Msk = 0x00000010;
    inline constexpr uint32_t CICR_HSE_ready_Interrupt_Clear = (1U << 4);
    inline constexpr uint32_t CICR_RC48RDYC_Pos = 5;
    inline constexpr uint32_t CICR_RC48RDYC_Msk = 0x00000020;
    inline constexpr uint32_t CICR_RC48RDYC = (1U << 5);
    inline constexpr uint32_t CICR_PLL1RDYC_Pos = 6;
    inline constexpr uint32_t CICR_PLL1RDYC_Msk = 0x00000040;
    inline constexpr uint32_t CICR_PLL1RDYC = (1U << 6);
    inline constexpr uint32_t CICR_PLL2RDYC_Pos = 7;
    inline constexpr uint32_t CICR_PLL2RDYC_Msk = 0x00000080;
    inline constexpr uint32_t CICR_PLL2RDYC = (1U << 7);
    inline constexpr uint32_t CICR_PLL3RDYC_Pos = 8;
    inline constexpr uint32_t CICR_PLL3RDYC_Msk = 0x00000100;
    inline constexpr uint32_t CICR_PLL3RDYC = (1U << 8);
    inline constexpr uint32_t CICR_LSECSSC_Pos = 9;
    inline constexpr uint32_t CICR_LSECSSC_Msk = 0x00000200;
    inline constexpr uint32_t CICR_LSECSSC = (1U << 9);
    inline constexpr uint32_t CICR_HSECSSC_Pos = 10;
    inline constexpr uint32_t CICR_HSECSSC_Msk = 0x00000400;
    inline constexpr uint32_t CICR_HSECSSC = (1U << 10);

    // BDCR fields
    inline constexpr uint32_t BDCR_LSEON_Pos = 0;
    inline constexpr uint32_t BDCR_LSEON_Msk = 0x00000001;
    inline constexpr uint32_t BDCR_LSEON = (1U << 0);
    inline constexpr uint32_t BDCR_LSERDY_Pos = 1;
    inline constexpr uint32_t BDCR_LSERDY_Msk = 0x00000002;
    inline constexpr uint32_t BDCR_LSERDY = (1U << 1);
    inline constexpr uint32_t BDCR_LSEBYP_Pos = 2;
    inline constexpr uint32_t BDCR_LSEBYP_Msk = 0x00000004;
    inline constexpr uint32_t BDCR_LSEBYP = (1U << 2);
    inline constexpr uint32_t BDCR_LSEDRV_Pos = 3;
    inline constexpr uint32_t BDCR_LSEDRV_Msk = 0x00000018;
    inline constexpr uint32_t BDCR_LSECSSON_Pos = 5;
    inline constexpr uint32_t BDCR_LSECSSON_Msk = 0x00000020;
    inline constexpr uint32_t BDCR_LSECSSON = (1U << 5);
    inline constexpr uint32_t BDCR_LSECSSD_Pos = 6;
    inline constexpr uint32_t BDCR_LSECSSD_Msk = 0x00000040;
    inline constexpr uint32_t BDCR_LSECSSD = (1U << 6);
    inline constexpr uint32_t BDCR_RTCSRC_Pos = 8;
    inline constexpr uint32_t BDCR_RTCSRC_Msk = 0x00000300;
    inline constexpr uint32_t BDCR_RTCEN_Pos = 15;
    inline constexpr uint32_t BDCR_RTCEN_Msk = 0x00008000;
    inline constexpr uint32_t BDCR_RTCEN = (1U << 15);
    inline constexpr uint32_t BDCR_VSWRST_Pos = 16;
    inline constexpr uint32_t BDCR_VSWRST_Msk = 0x00010000;
    inline constexpr uint32_t BDCR_VSWRST = (1U << 16);

    // CSR fields
    inline constexpr uint32_t CSR_LSION_Pos = 0;
    inline constexpr uint32_t CSR_LSION_Msk = 0x00000001;
    inline constexpr uint32_t CSR_LSION = (1U << 0);
    inline constexpr uint32_t CSR_LSIRDY_Pos = 1;
    inline constexpr uint32_t CSR_LSIRDY_Msk = 0x00000002;
    inline constexpr uint32_t CSR_LSIRDY = (1U << 1);

    // AHB3RSTR fields
    inline constexpr uint32_t AHB3RSTR_MDMARST_Pos = 0;
    inline constexpr uint32_t AHB3RSTR_MDMARST_Msk = 0x00000001;
    inline constexpr uint32_t AHB3RSTR_MDMARST = (1U << 0);
    inline constexpr uint32_t AHB3RSTR_DMA2DRST_Pos = 4;
    inline constexpr uint32_t AHB3RSTR_DMA2DRST_Msk = 0x00000010;
    inline constexpr uint32_t AHB3RSTR_DMA2DRST = (1U << 4);
    inline constexpr uint32_t AHB3RSTR_JPGDECRST_Pos = 5;
    inline constexpr uint32_t AHB3RSTR_JPGDECRST_Msk = 0x00000020;
    inline constexpr uint32_t AHB3RSTR_JPGDECRST = (1U << 5);
    inline constexpr uint32_t AHB3RSTR_FMCRST_Pos = 12;
    inline constexpr uint32_t AHB3RSTR_FMCRST_Msk = 0x00001000;
    inline constexpr uint32_t AHB3RSTR_FMCRST = (1U << 12);
    inline constexpr uint32_t AHB3RSTR_QSPIRST_Pos = 14;
    inline constexpr uint32_t AHB3RSTR_QSPIRST_Msk = 0x00004000;
    inline constexpr uint32_t AHB3RSTR_QSPIRST = (1U << 14);
    inline constexpr uint32_t AHB3RSTR_SDMMC1RST_Pos = 16;
    inline constexpr uint32_t AHB3RSTR_SDMMC1RST_Msk = 0x00010000;
    inline constexpr uint32_t AHB3RSTR_SDMMC1RST = (1U << 16);
    inline constexpr uint32_t AHB3RSTR_CPURST_Pos = 31;
    inline constexpr uint32_t AHB3RSTR_CPURST_Msk = 0x80000000;
    inline constexpr uint32_t AHB3RSTR_CPURST = (1U << 31);

    // AHB1RSTR fields
    inline constexpr uint32_t AHB1RSTR_DMA1RST_Pos = 0;
    inline constexpr uint32_t AHB1RSTR_DMA1RST_Msk = 0x00000001;
    inline constexpr uint32_t AHB1RSTR_DMA1RST = (1U << 0);
    inline constexpr uint32_t AHB1RSTR_DMA2RST_Pos = 1;
    inline constexpr uint32_t AHB1RSTR_DMA2RST_Msk = 0x00000002;
    inline constexpr uint32_t AHB1RSTR_DMA2RST = (1U << 1);
    inline constexpr uint32_t AHB1RSTR_ADC12RST_Pos = 5;
    inline constexpr uint32_t AHB1RSTR_ADC12RST_Msk = 0x00000020;
    inline constexpr uint32_t AHB1RSTR_ADC12RST = (1U << 5);
    inline constexpr uint32_t AHB1RSTR_ETH1MACRST_Pos = 15;
    inline constexpr uint32_t AHB1RSTR_ETH1MACRST_Msk = 0x00008000;
    inline constexpr uint32_t AHB1RSTR_ETH1MACRST = (1U << 15);
    inline constexpr uint32_t AHB1RSTR_USB1OTGRST_Pos = 25;
    inline constexpr uint32_t AHB1RSTR_USB1OTGRST_Msk = 0x02000000;
    inline constexpr uint32_t AHB1RSTR_USB1OTGRST = (1U << 25);
    inline constexpr uint32_t AHB1RSTR_USB2OTGRST_Pos = 27;
    inline constexpr uint32_t AHB1RSTR_USB2OTGRST_Msk = 0x08000000;
    inline constexpr uint32_t AHB1RSTR_USB2OTGRST = (1U << 27);

    // AHB2RSTR fields
    inline constexpr uint32_t AHB2RSTR_CAMITFRST_Pos = 0;
    inline constexpr uint32_t AHB2RSTR_CAMITFRST_Msk = 0x00000001;
    inline constexpr uint32_t AHB2RSTR_CAMITFRST = (1U << 0);
    inline constexpr uint32_t AHB2RSTR_CRYPTRST_Pos = 4;
    inline constexpr uint32_t AHB2RSTR_CRYPTRST_Msk = 0x00000010;
    inline constexpr uint32_t AHB2RSTR_CRYPTRST = (1U << 4);
    inline constexpr uint32_t AHB2RSTR_HASHRST_Pos = 5;
    inline constexpr uint32_t AHB2RSTR_HASHRST_Msk = 0x00000020;
    inline constexpr uint32_t AHB2RSTR_HASHRST = (1U << 5);
    inline constexpr uint32_t AHB2RSTR_RNGRST_Pos = 6;
    inline constexpr uint32_t AHB2RSTR_RNGRST_Msk = 0x00000040;
    inline constexpr uint32_t AHB2RSTR_RNGRST = (1U << 6);
    inline constexpr uint32_t AHB2RSTR_SDMMC2RST_Pos = 9;
    inline constexpr uint32_t AHB2RSTR_SDMMC2RST_Msk = 0x00000200;
    inline constexpr uint32_t AHB2RSTR_SDMMC2RST = (1U << 9);

    // AHB4RSTR fields
    inline constexpr uint32_t AHB4RSTR_GPIOARST_Pos = 0;
    inline constexpr uint32_t AHB4RSTR_GPIOARST_Msk = 0x00000001;
    inline constexpr uint32_t AHB4RSTR_GPIOARST = (1U << 0);
    inline constexpr uint32_t AHB4RSTR_GPIOBRST_Pos = 1;
    inline constexpr uint32_t AHB4RSTR_GPIOBRST_Msk = 0x00000002;
    inline constexpr uint32_t AHB4RSTR_GPIOBRST = (1U << 1);
    inline constexpr uint32_t AHB4RSTR_GPIOCRST_Pos = 2;
    inline constexpr uint32_t AHB4RSTR_GPIOCRST_Msk = 0x00000004;
    inline constexpr uint32_t AHB4RSTR_GPIOCRST = (1U << 2);
    inline constexpr uint32_t AHB4RSTR_GPIODRST_Pos = 3;
    inline constexpr uint32_t AHB4RSTR_GPIODRST_Msk = 0x00000008;
    inline constexpr uint32_t AHB4RSTR_GPIODRST = (1U << 3);
    inline constexpr uint32_t AHB4RSTR_GPIOERST_Pos = 4;
    inline constexpr uint32_t AHB4RSTR_GPIOERST_Msk = 0x00000010;
    inline constexpr uint32_t AHB4RSTR_GPIOERST = (1U << 4);
    inline constexpr uint32_t AHB4RSTR_GPIOFRST_Pos = 5;
    inline constexpr uint32_t AHB4RSTR_GPIOFRST_Msk = 0x00000020;
    inline constexpr uint32_t AHB4RSTR_GPIOFRST = (1U << 5);
    inline constexpr uint32_t AHB4RSTR_GPIOGRST_Pos = 6;
    inline constexpr uint32_t AHB4RSTR_GPIOGRST_Msk = 0x00000040;
    inline constexpr uint32_t AHB4RSTR_GPIOGRST = (1U << 6);
    inline constexpr uint32_t AHB4RSTR_GPIOHRST_Pos = 7;
    inline constexpr uint32_t AHB4RSTR_GPIOHRST_Msk = 0x00000080;
    inline constexpr uint32_t AHB4RSTR_GPIOHRST = (1U << 7);
    inline constexpr uint32_t AHB4RSTR_GPIOIRST_Pos = 8;
    inline constexpr uint32_t AHB4RSTR_GPIOIRST_Msk = 0x00000100;
    inline constexpr uint32_t AHB4RSTR_GPIOIRST = (1U << 8);
    inline constexpr uint32_t AHB4RSTR_GPIOJRST_Pos = 9;
    inline constexpr uint32_t AHB4RSTR_GPIOJRST_Msk = 0x00000200;
    inline constexpr uint32_t AHB4RSTR_GPIOJRST = (1U << 9);
    inline constexpr uint32_t AHB4RSTR_GPIOKRST_Pos = 10;
    inline constexpr uint32_t AHB4RSTR_GPIOKRST_Msk = 0x00000400;
    inline constexpr uint32_t AHB4RSTR_GPIOKRST = (1U << 10);
    inline constexpr uint32_t AHB4RSTR_CRCRST_Pos = 19;
    inline constexpr uint32_t AHB4RSTR_CRCRST_Msk = 0x00080000;
    inline constexpr uint32_t AHB4RSTR_CRCRST = (1U << 19);
    inline constexpr uint32_t AHB4RSTR_BDMARST_Pos = 21;
    inline constexpr uint32_t AHB4RSTR_BDMARST_Msk = 0x00200000;
    inline constexpr uint32_t AHB4RSTR_BDMARST = (1U << 21);
    inline constexpr uint32_t AHB4RSTR_ADC3RST_Pos = 24;
    inline constexpr uint32_t AHB4RSTR_ADC3RST_Msk = 0x01000000;
    inline constexpr uint32_t AHB4RSTR_ADC3RST = (1U << 24);
    inline constexpr uint32_t AHB4RSTR_HSEMRST_Pos = 25;
    inline constexpr uint32_t AHB4RSTR_HSEMRST_Msk = 0x02000000;
    inline constexpr uint32_t AHB4RSTR_HSEMRST = (1U << 25);

    // APB3RSTR fields
    inline constexpr uint32_t APB3RSTR_LTDCRST_Pos = 3;
    inline constexpr uint32_t APB3RSTR_LTDCRST_Msk = 0x00000008;
    inline constexpr uint32_t APB3RSTR_LTDCRST = (1U << 3);

    // APB1LRSTR fields
    inline constexpr uint32_t APB1LRSTR_TIM2RST_Pos = 0;
    inline constexpr uint32_t APB1LRSTR_TIM2RST_Msk = 0x00000001;
    inline constexpr uint32_t APB1LRSTR_TIM2RST = (1U << 0);
    inline constexpr uint32_t APB1LRSTR_TIM3RST_Pos = 1;
    inline constexpr uint32_t APB1LRSTR_TIM3RST_Msk = 0x00000002;
    inline constexpr uint32_t APB1LRSTR_TIM3RST = (1U << 1);
    inline constexpr uint32_t APB1LRSTR_TIM4RST_Pos = 2;
    inline constexpr uint32_t APB1LRSTR_TIM4RST_Msk = 0x00000004;
    inline constexpr uint32_t APB1LRSTR_TIM4RST = (1U << 2);
    inline constexpr uint32_t APB1LRSTR_TIM5RST_Pos = 3;
    inline constexpr uint32_t APB1LRSTR_TIM5RST_Msk = 0x00000008;
    inline constexpr uint32_t APB1LRSTR_TIM5RST = (1U << 3);
    inline constexpr uint32_t APB1LRSTR_TIM6RST_Pos = 4;
    inline constexpr uint32_t APB1LRSTR_TIM6RST_Msk = 0x00000010;
    inline constexpr uint32_t APB1LRSTR_TIM6RST = (1U << 4);
    inline constexpr uint32_t APB1LRSTR_TIM7RST_Pos = 5;
    inline constexpr uint32_t APB1LRSTR_TIM7RST_Msk = 0x00000020;
    inline constexpr uint32_t APB1LRSTR_TIM7RST = (1U << 5);
    inline constexpr uint32_t APB1LRSTR_TIM12RST_Pos = 6;
    inline constexpr uint32_t APB1LRSTR_TIM12RST_Msk = 0x00000040;
    inline constexpr uint32_t APB1LRSTR_TIM12RST = (1U << 6);
    inline constexpr uint32_t APB1LRSTR_TIM13RST_Pos = 7;
    inline constexpr uint32_t APB1LRSTR_TIM13RST_Msk = 0x00000080;
    inline constexpr uint32_t APB1LRSTR_TIM13RST = (1U << 7);
    inline constexpr uint32_t APB1LRSTR_TIM14RST_Pos = 8;
    inline constexpr uint32_t APB1LRSTR_TIM14RST_Msk = 0x00000100;
    inline constexpr uint32_t APB1LRSTR_TIM14RST = (1U << 8);
    inline constexpr uint32_t APB1LRSTR_LPTIM1RST_Pos = 9;
    inline constexpr uint32_t APB1LRSTR_LPTIM1RST_Msk = 0x00000200;
    inline constexpr uint32_t APB1LRSTR_LPTIM1RST = (1U << 9);
    inline constexpr uint32_t APB1LRSTR_SPI2RST_Pos = 14;
    inline constexpr uint32_t APB1LRSTR_SPI2RST_Msk = 0x00004000;
    inline constexpr uint32_t APB1LRSTR_SPI2RST = (1U << 14);
    inline constexpr uint32_t APB1LRSTR_SPI3RST_Pos = 15;
    inline constexpr uint32_t APB1LRSTR_SPI3RST_Msk = 0x00008000;
    inline constexpr uint32_t APB1LRSTR_SPI3RST = (1U << 15);
    inline constexpr uint32_t APB1LRSTR_SPDIFRXRST_Pos = 16;
    inline constexpr uint32_t APB1LRSTR_SPDIFRXRST_Msk = 0x00010000;
    inline constexpr uint32_t APB1LRSTR_SPDIFRXRST = (1U << 16);
    inline constexpr uint32_t APB1LRSTR_USART2RST_Pos = 17;
    inline constexpr uint32_t APB1LRSTR_USART2RST_Msk = 0x00020000;
    inline constexpr uint32_t APB1LRSTR_USART2RST = (1U << 17);
    inline constexpr uint32_t APB1LRSTR_USART3RST_Pos = 18;
    inline constexpr uint32_t APB1LRSTR_USART3RST_Msk = 0x00040000;
    inline constexpr uint32_t APB1LRSTR_USART3RST = (1U << 18);
    inline constexpr uint32_t APB1LRSTR_UART4RST_Pos = 19;
    inline constexpr uint32_t APB1LRSTR_UART4RST_Msk = 0x00080000;
    inline constexpr uint32_t APB1LRSTR_UART4RST = (1U << 19);
    inline constexpr uint32_t APB1LRSTR_UART5RST_Pos = 20;
    inline constexpr uint32_t APB1LRSTR_UART5RST_Msk = 0x00100000;
    inline constexpr uint32_t APB1LRSTR_UART5RST = (1U << 20);
    inline constexpr uint32_t APB1LRSTR_I2C1RST_Pos = 21;
    inline constexpr uint32_t APB1LRSTR_I2C1RST_Msk = 0x00200000;
    inline constexpr uint32_t APB1LRSTR_I2C1RST = (1U << 21);
    inline constexpr uint32_t APB1LRSTR_I2C2RST_Pos = 22;
    inline constexpr uint32_t APB1LRSTR_I2C2RST_Msk = 0x00400000;
    inline constexpr uint32_t APB1LRSTR_I2C2RST = (1U << 22);
    inline constexpr uint32_t APB1LRSTR_I2C3RST_Pos = 23;
    inline constexpr uint32_t APB1LRSTR_I2C3RST_Msk = 0x00800000;
    inline constexpr uint32_t APB1LRSTR_I2C3RST = (1U << 23);
    inline constexpr uint32_t APB1LRSTR_CECRST_Pos = 27;
    inline constexpr uint32_t APB1LRSTR_CECRST_Msk = 0x08000000;
    inline constexpr uint32_t APB1LRSTR_CECRST = (1U << 27);
    inline constexpr uint32_t APB1LRSTR_DAC12RST_Pos = 29;
    inline constexpr uint32_t APB1LRSTR_DAC12RST_Msk = 0x20000000;
    inline constexpr uint32_t APB1LRSTR_DAC12RST = (1U << 29);
    inline constexpr uint32_t APB1LRSTR_USART7RST_Pos = 30;
    inline constexpr uint32_t APB1LRSTR_USART7RST_Msk = 0x40000000;
    inline constexpr uint32_t APB1LRSTR_USART7RST = (1U << 30);
    inline constexpr uint32_t APB1LRSTR_USART8RST_Pos = 31;
    inline constexpr uint32_t APB1LRSTR_USART8RST_Msk = 0x80000000;
    inline constexpr uint32_t APB1LRSTR_USART8RST = (1U << 31);

    // APB1HRSTR fields
    inline constexpr uint32_t APB1HRSTR_CRSRST_Pos = 1;
    inline constexpr uint32_t APB1HRSTR_CRSRST_Msk = 0x00000002;
    inline constexpr uint32_t APB1HRSTR_CRSRST = (1U << 1);
    inline constexpr uint32_t APB1HRSTR_SWPRST_Pos = 2;
    inline constexpr uint32_t APB1HRSTR_SWPRST_Msk = 0x00000004;
    inline constexpr uint32_t APB1HRSTR_SWPRST = (1U << 2);
    inline constexpr uint32_t APB1HRSTR_OPAMPRST_Pos = 4;
    inline constexpr uint32_t APB1HRSTR_OPAMPRST_Msk = 0x00000010;
    inline constexpr uint32_t APB1HRSTR_OPAMPRST = (1U << 4);
    inline constexpr uint32_t APB1HRSTR_MDIOSRST_Pos = 5;
    inline constexpr uint32_t APB1HRSTR_MDIOSRST_Msk = 0x00000020;
    inline constexpr uint32_t APB1HRSTR_MDIOSRST = (1U << 5);
    inline constexpr uint32_t APB1HRSTR_FDCANRST_Pos = 8;
    inline constexpr uint32_t APB1HRSTR_FDCANRST_Msk = 0x00000100;
    inline constexpr uint32_t APB1HRSTR_FDCANRST = (1U << 8);

    // APB2RSTR fields
    inline constexpr uint32_t APB2RSTR_TIM1RST_Pos = 0;
    inline constexpr uint32_t APB2RSTR_TIM1RST_Msk = 0x00000001;
    inline constexpr uint32_t APB2RSTR_TIM1RST = (1U << 0);
    inline constexpr uint32_t APB2RSTR_TIM8RST_Pos = 1;
    inline constexpr uint32_t APB2RSTR_TIM8RST_Msk = 0x00000002;
    inline constexpr uint32_t APB2RSTR_TIM8RST = (1U << 1);
    inline constexpr uint32_t APB2RSTR_USART1RST_Pos = 4;
    inline constexpr uint32_t APB2RSTR_USART1RST_Msk = 0x00000010;
    inline constexpr uint32_t APB2RSTR_USART1RST = (1U << 4);
    inline constexpr uint32_t APB2RSTR_USART6RST_Pos = 5;
    inline constexpr uint32_t APB2RSTR_USART6RST_Msk = 0x00000020;
    inline constexpr uint32_t APB2RSTR_USART6RST = (1U << 5);
    inline constexpr uint32_t APB2RSTR_SPI1RST_Pos = 12;
    inline constexpr uint32_t APB2RSTR_SPI1RST_Msk = 0x00001000;
    inline constexpr uint32_t APB2RSTR_SPI1RST = (1U << 12);
    inline constexpr uint32_t APB2RSTR_SPI4RST_Pos = 13;
    inline constexpr uint32_t APB2RSTR_SPI4RST_Msk = 0x00002000;
    inline constexpr uint32_t APB2RSTR_SPI4RST = (1U << 13);
    inline constexpr uint32_t APB2RSTR_TIM15RST_Pos = 16;
    inline constexpr uint32_t APB2RSTR_TIM15RST_Msk = 0x00010000;
    inline constexpr uint32_t APB2RSTR_TIM15RST = (1U << 16);
    inline constexpr uint32_t APB2RSTR_TIM16RST_Pos = 17;
    inline constexpr uint32_t APB2RSTR_TIM16RST_Msk = 0x00020000;
    inline constexpr uint32_t APB2RSTR_TIM16RST = (1U << 17);
    inline constexpr uint32_t APB2RSTR_TIM17RST_Pos = 18;
    inline constexpr uint32_t APB2RSTR_TIM17RST_Msk = 0x00040000;
    inline constexpr uint32_t APB2RSTR_TIM17RST = (1U << 18);
    inline constexpr uint32_t APB2RSTR_SPI5RST_Pos = 20;
    inline constexpr uint32_t APB2RSTR_SPI5RST_Msk = 0x00100000;
    inline constexpr uint32_t APB2RSTR_SPI5RST = (1U << 20);
    inline constexpr uint32_t APB2RSTR_SAI1RST_Pos = 22;
    inline constexpr uint32_t APB2RSTR_SAI1RST_Msk = 0x00400000;
    inline constexpr uint32_t APB2RSTR_SAI1RST = (1U << 22);
    inline constexpr uint32_t APB2RSTR_SAI2RST_Pos = 23;
    inline constexpr uint32_t APB2RSTR_SAI2RST_Msk = 0x00800000;
    inline constexpr uint32_t APB2RSTR_SAI2RST = (1U << 23);
    inline constexpr uint32_t APB2RSTR_SAI3RST_Pos = 24;
    inline constexpr uint32_t APB2RSTR_SAI3RST_Msk = 0x01000000;
    inline constexpr uint32_t APB2RSTR_SAI3RST = (1U << 24);
    inline constexpr uint32_t APB2RSTR_DFSDM1RST_Pos = 28;
    inline constexpr uint32_t APB2RSTR_DFSDM1RST_Msk = 0x10000000;
    inline constexpr uint32_t APB2RSTR_DFSDM1RST = (1U << 28);
    inline constexpr uint32_t APB2RSTR_HRTIMRST_Pos = 29;
    inline constexpr uint32_t APB2RSTR_HRTIMRST_Msk = 0x20000000;
    inline constexpr uint32_t APB2RSTR_HRTIMRST = (1U << 29);

    // APB4RSTR fields
    inline constexpr uint32_t APB4RSTR_SYSCFGRST_Pos = 1;
    inline constexpr uint32_t APB4RSTR_SYSCFGRST_Msk = 0x00000002;
    inline constexpr uint32_t APB4RSTR_SYSCFGRST = (1U << 1);
    inline constexpr uint32_t APB4RSTR_LPUART1RST_Pos = 3;
    inline constexpr uint32_t APB4RSTR_LPUART1RST_Msk = 0x00000008;
    inline constexpr uint32_t APB4RSTR_LPUART1RST = (1U << 3);
    inline constexpr uint32_t APB4RSTR_SPI6RST_Pos = 5;
    inline constexpr uint32_t APB4RSTR_SPI6RST_Msk = 0x00000020;
    inline constexpr uint32_t APB4RSTR_SPI6RST = (1U << 5);
    inline constexpr uint32_t APB4RSTR_I2C4RST_Pos = 7;
    inline constexpr uint32_t APB4RSTR_I2C4RST_Msk = 0x00000080;
    inline constexpr uint32_t APB4RSTR_I2C4RST = (1U << 7);
    inline constexpr uint32_t APB4RSTR_LPTIM2RST_Pos = 9;
    inline constexpr uint32_t APB4RSTR_LPTIM2RST_Msk = 0x00000200;
    inline constexpr uint32_t APB4RSTR_LPTIM2RST = (1U << 9);
    inline constexpr uint32_t APB4RSTR_LPTIM3RST_Pos = 10;
    inline constexpr uint32_t APB4RSTR_LPTIM3RST_Msk = 0x00000400;
    inline constexpr uint32_t APB4RSTR_LPTIM3RST = (1U << 10);
    inline constexpr uint32_t APB4RSTR_LPTIM4RST_Pos = 11;
    inline constexpr uint32_t APB4RSTR_LPTIM4RST_Msk = 0x00000800;
    inline constexpr uint32_t APB4RSTR_LPTIM4RST = (1U << 11);
    inline constexpr uint32_t APB4RSTR_LPTIM5RST_Pos = 12;
    inline constexpr uint32_t APB4RSTR_LPTIM5RST_Msk = 0x00001000;
    inline constexpr uint32_t APB4RSTR_LPTIM5RST = (1U << 12);
    inline constexpr uint32_t APB4RSTR_COMP12RST_Pos = 14;
    inline constexpr uint32_t APB4RSTR_COMP12RST_Msk = 0x00004000;
    inline constexpr uint32_t APB4RSTR_COMP12RST = (1U << 14);
    inline constexpr uint32_t APB4RSTR_VREFRST_Pos = 15;
    inline constexpr uint32_t APB4RSTR_VREFRST_Msk = 0x00008000;
    inline constexpr uint32_t APB4RSTR_VREFRST = (1U << 15);
    inline constexpr uint32_t APB4RSTR_SAI4RST_Pos = 21;
    inline constexpr uint32_t APB4RSTR_SAI4RST_Msk = 0x00200000;
    inline constexpr uint32_t APB4RSTR_SAI4RST = (1U << 21);

    // GCR fields
    inline constexpr uint32_t GCR_WW1RSC_Pos = 0;
    inline constexpr uint32_t GCR_WW1RSC_Msk = 0x00000001;
    inline constexpr uint32_t GCR_WW1RSC = (1U << 0);

    // D3AMR fields
    inline constexpr uint32_t D3AMR_BDMAAMEN_Pos = 0;
    inline constexpr uint32_t D3AMR_BDMAAMEN_Msk = 0x00000001;
    inline constexpr uint32_t D3AMR_BDMAAMEN = (1U << 0);
    inline constexpr uint32_t D3AMR_LPUART1AMEN_Pos = 3;
    inline constexpr uint32_t D3AMR_LPUART1AMEN_Msk = 0x00000008;
    inline constexpr uint32_t D3AMR_LPUART1AMEN = (1U << 3);
    inline constexpr uint32_t D3AMR_SPI6AMEN_Pos = 5;
    inline constexpr uint32_t D3AMR_SPI6AMEN_Msk = 0x00000020;
    inline constexpr uint32_t D3AMR_SPI6AMEN = (1U << 5);
    inline constexpr uint32_t D3AMR_I2C4AMEN_Pos = 7;
    inline constexpr uint32_t D3AMR_I2C4AMEN_Msk = 0x00000080;
    inline constexpr uint32_t D3AMR_I2C4AMEN = (1U << 7);
    inline constexpr uint32_t D3AMR_LPTIM2AMEN_Pos = 9;
    inline constexpr uint32_t D3AMR_LPTIM2AMEN_Msk = 0x00000200;
    inline constexpr uint32_t D3AMR_LPTIM2AMEN = (1U << 9);
    inline constexpr uint32_t D3AMR_LPTIM3AMEN_Pos = 10;
    inline constexpr uint32_t D3AMR_LPTIM3AMEN_Msk = 0x00000400;
    inline constexpr uint32_t D3AMR_LPTIM3AMEN = (1U << 10);
    inline constexpr uint32_t D3AMR_LPTIM4AMEN_Pos = 11;
    inline constexpr uint32_t D3AMR_LPTIM4AMEN_Msk = 0x00000800;
    inline constexpr uint32_t D3AMR_LPTIM4AMEN = (1U << 11);
    inline constexpr uint32_t D3AMR_LPTIM5AMEN_Pos = 12;
    inline constexpr uint32_t D3AMR_LPTIM5AMEN_Msk = 0x00001000;
    inline constexpr uint32_t D3AMR_LPTIM5AMEN = (1U << 12);
    inline constexpr uint32_t D3AMR_COMP12AMEN_Pos = 14;
    inline constexpr uint32_t D3AMR_COMP12AMEN_Msk = 0x00004000;
    inline constexpr uint32_t D3AMR_COMP12AMEN = (1U << 14);
    inline constexpr uint32_t D3AMR_VREFAMEN_Pos = 15;
    inline constexpr uint32_t D3AMR_VREFAMEN_Msk = 0x00008000;
    inline constexpr uint32_t D3AMR_VREFAMEN = (1U << 15);
    inline constexpr uint32_t D3AMR_RTCAMEN_Pos = 16;
    inline constexpr uint32_t D3AMR_RTCAMEN_Msk = 0x00010000;
    inline constexpr uint32_t D3AMR_RTCAMEN = (1U << 16);
    inline constexpr uint32_t D3AMR_CRCAMEN_Pos = 19;
    inline constexpr uint32_t D3AMR_CRCAMEN_Msk = 0x00080000;
    inline constexpr uint32_t D3AMR_CRCAMEN = (1U << 19);
    inline constexpr uint32_t D3AMR_SAI4AMEN_Pos = 21;
    inline constexpr uint32_t D3AMR_SAI4AMEN_Msk = 0x00200000;
    inline constexpr uint32_t D3AMR_SAI4AMEN = (1U << 21);
    inline constexpr uint32_t D3AMR_ADC3AMEN_Pos = 24;
    inline constexpr uint32_t D3AMR_ADC3AMEN_Msk = 0x01000000;
    inline constexpr uint32_t D3AMR_ADC3AMEN = (1U << 24);
    inline constexpr uint32_t D3AMR_BKPRAMAMEN_Pos = 28;
    inline constexpr uint32_t D3AMR_BKPRAMAMEN_Msk = 0x10000000;
    inline constexpr uint32_t D3AMR_BKPRAMAMEN = (1U << 28);
    inline constexpr uint32_t D3AMR_SRAM4AMEN_Pos = 29;
    inline constexpr uint32_t D3AMR_SRAM4AMEN_Msk = 0x20000000;
    inline constexpr uint32_t D3AMR_SRAM4AMEN = (1U << 29);

    // RSR fields
    inline constexpr uint32_t RSR_RMVF_Pos = 16;
    inline constexpr uint32_t RSR_RMVF_Msk = 0x00010000;
    inline constexpr uint32_t RSR_RMVF = (1U << 16);
    inline constexpr uint32_t RSR_CPURSTF_Pos = 17;
    inline constexpr uint32_t RSR_CPURSTF_Msk = 0x00020000;
    inline constexpr uint32_t RSR_CPURSTF = (1U << 17);
    inline constexpr uint32_t RSR_D1RSTF_Pos = 19;
    inline constexpr uint32_t RSR_D1RSTF_Msk = 0x00080000;
    inline constexpr uint32_t RSR_D1RSTF = (1U << 19);
    inline constexpr uint32_t RSR_D2RSTF_Pos = 20;
    inline constexpr uint32_t RSR_D2RSTF_Msk = 0x00100000;
    inline constexpr uint32_t RSR_D2RSTF = (1U << 20);
    inline constexpr uint32_t RSR_BORRSTF_Pos = 21;
    inline constexpr uint32_t RSR_BORRSTF_Msk = 0x00200000;
    inline constexpr uint32_t RSR_BORRSTF = (1U << 21);
    inline constexpr uint32_t RSR_PINRSTF_Pos = 22;
    inline constexpr uint32_t RSR_PINRSTF_Msk = 0x00400000;
    inline constexpr uint32_t RSR_PINRSTF = (1U << 22);
    inline constexpr uint32_t RSR_PORRSTF_Pos = 23;
    inline constexpr uint32_t RSR_PORRSTF_Msk = 0x00800000;
    inline constexpr uint32_t RSR_PORRSTF = (1U << 23);
    inline constexpr uint32_t RSR_SFTRSTF_Pos = 24;
    inline constexpr uint32_t RSR_SFTRSTF_Msk = 0x01000000;
    inline constexpr uint32_t RSR_SFTRSTF = (1U << 24);
    inline constexpr uint32_t RSR_IWDG1RSTF_Pos = 26;
    inline constexpr uint32_t RSR_IWDG1RSTF_Msk = 0x04000000;
    inline constexpr uint32_t RSR_IWDG1RSTF = (1U << 26);
    inline constexpr uint32_t RSR_WWDG1RSTF_Pos = 28;
    inline constexpr uint32_t RSR_WWDG1RSTF_Msk = 0x10000000;
    inline constexpr uint32_t RSR_WWDG1RSTF = (1U << 28);
    inline constexpr uint32_t RSR_LPWRRSTF_Pos = 30;
    inline constexpr uint32_t RSR_LPWRRSTF_Msk = 0x40000000;
    inline constexpr uint32_t RSR_LPWRRSTF = (1U << 30);

    // AHB3ENR fields
    inline constexpr uint32_t AHB3ENR_MDMAEN_Pos = 0;
    inline constexpr uint32_t AHB3ENR_MDMAEN_Msk = 0x00000001;
    inline constexpr uint32_t AHB3ENR_MDMAEN = (1U << 0);
    inline constexpr uint32_t AHB3ENR_DMA2DEN_Pos = 4;
    inline constexpr uint32_t AHB3ENR_DMA2DEN_Msk = 0x00000010;
    inline constexpr uint32_t AHB3ENR_DMA2DEN = (1U << 4);
    inline constexpr uint32_t AHB3ENR_JPGDECEN_Pos = 5;
    inline constexpr uint32_t AHB3ENR_JPGDECEN_Msk = 0x00000020;
    inline constexpr uint32_t AHB3ENR_JPGDECEN = (1U << 5);
    inline constexpr uint32_t AHB3ENR_FMCEN_Pos = 12;
    inline constexpr uint32_t AHB3ENR_FMCEN_Msk = 0x00001000;
    inline constexpr uint32_t AHB3ENR_FMCEN = (1U << 12);
    inline constexpr uint32_t AHB3ENR_QSPIEN_Pos = 14;
    inline constexpr uint32_t AHB3ENR_QSPIEN_Msk = 0x00004000;
    inline constexpr uint32_t AHB3ENR_QSPIEN = (1U << 14);
    inline constexpr uint32_t AHB3ENR_SDMMC1EN_Pos = 16;
    inline constexpr uint32_t AHB3ENR_SDMMC1EN_Msk = 0x00010000;
    inline constexpr uint32_t AHB3ENR_SDMMC1EN = (1U << 16);

    // AHB1ENR fields
    inline constexpr uint32_t AHB1ENR_DMA1EN_Pos = 0;
    inline constexpr uint32_t AHB1ENR_DMA1EN_Msk = 0x00000001;
    inline constexpr uint32_t AHB1ENR_DMA1EN = (1U << 0);
    inline constexpr uint32_t AHB1ENR_DMA2EN_Pos = 1;
    inline constexpr uint32_t AHB1ENR_DMA2EN_Msk = 0x00000002;
    inline constexpr uint32_t AHB1ENR_DMA2EN = (1U << 1);
    inline constexpr uint32_t AHB1ENR_ADC12EN_Pos = 5;
    inline constexpr uint32_t AHB1ENR_ADC12EN_Msk = 0x00000020;
    inline constexpr uint32_t AHB1ENR_ADC12EN = (1U << 5);
    inline constexpr uint32_t AHB1ENR_ETH1MACEN_Pos = 15;
    inline constexpr uint32_t AHB1ENR_ETH1MACEN_Msk = 0x00008000;
    inline constexpr uint32_t AHB1ENR_ETH1MACEN = (1U << 15);
    inline constexpr uint32_t AHB1ENR_ETH1TXEN_Pos = 16;
    inline constexpr uint32_t AHB1ENR_ETH1TXEN_Msk = 0x00010000;
    inline constexpr uint32_t AHB1ENR_ETH1TXEN = (1U << 16);
    inline constexpr uint32_t AHB1ENR_ETH1RXEN_Pos = 17;
    inline constexpr uint32_t AHB1ENR_ETH1RXEN_Msk = 0x00020000;
    inline constexpr uint32_t AHB1ENR_ETH1RXEN = (1U << 17);
    inline constexpr uint32_t AHB1ENR_USB1OTGHSEN_Pos = 25;
    inline constexpr uint32_t AHB1ENR_USB1OTGHSEN_Msk = 0x02000000;
    inline constexpr uint32_t AHB1ENR_USB1OTGHSEN = (1U << 25);
    inline constexpr uint32_t AHB1ENR_USB1OTGHSULPIEN_Pos = 26;
    inline constexpr uint32_t AHB1ENR_USB1OTGHSULPIEN_Msk = 0x04000000;
    inline constexpr uint32_t AHB1ENR_USB1OTGHSULPIEN = (1U << 26);
    inline constexpr uint32_t AHB1ENR_USB2OTGHSEN_Pos = 27;
    inline constexpr uint32_t AHB1ENR_USB2OTGHSEN_Msk = 0x08000000;
    inline constexpr uint32_t AHB1ENR_USB2OTGHSEN = (1U << 27);
    inline constexpr uint32_t AHB1ENR_USB2OTGHSULPIEN_Pos = 28;
    inline constexpr uint32_t AHB1ENR_USB2OTGHSULPIEN_Msk = 0x10000000;
    inline constexpr uint32_t AHB1ENR_USB2OTGHSULPIEN = (1U << 28);

    // AHB2ENR fields
    inline constexpr uint32_t AHB2ENR_DCMIEN_Pos = 0;
    inline constexpr uint32_t AHB2ENR_DCMIEN_Msk = 0x00000001;
    inline constexpr uint32_t AHB2ENR_DCMIEN = (1U << 0);
    inline constexpr uint32_t AHB2ENR_CRYPTEN_Pos = 4;
    inline constexpr uint32_t AHB2ENR_CRYPTEN_Msk = 0x00000010;
    inline constexpr uint32_t AHB2ENR_CRYPTEN = (1U << 4);
    inline constexpr uint32_t AHB2ENR_HASHEN_Pos = 5;
    inline constexpr uint32_t AHB2ENR_HASHEN_Msk = 0x00000020;
    inline constexpr uint32_t AHB2ENR_HASHEN = (1U << 5);
    inline constexpr uint32_t AHB2ENR_RNGEN_Pos = 6;
    inline constexpr uint32_t AHB2ENR_RNGEN_Msk = 0x00000040;
    inline constexpr uint32_t AHB2ENR_RNGEN = (1U << 6);
    inline constexpr uint32_t AHB2ENR_SDMMC2EN_Pos = 9;
    inline constexpr uint32_t AHB2ENR_SDMMC2EN_Msk = 0x00000200;
    inline constexpr uint32_t AHB2ENR_SDMMC2EN = (1U << 9);
    inline constexpr uint32_t AHB2ENR_SRAM1EN_Pos = 29;
    inline constexpr uint32_t AHB2ENR_SRAM1EN_Msk = 0x20000000;
    inline constexpr uint32_t AHB2ENR_SRAM1EN = (1U << 29);
    inline constexpr uint32_t AHB2ENR_SRAM2EN_Pos = 30;
    inline constexpr uint32_t AHB2ENR_SRAM2EN_Msk = 0x40000000;
    inline constexpr uint32_t AHB2ENR_SRAM2EN = (1U << 30);
    inline constexpr uint32_t AHB2ENR_SRAM3EN_Pos = 31;
    inline constexpr uint32_t AHB2ENR_SRAM3EN_Msk = 0x80000000;
    inline constexpr uint32_t AHB2ENR_SRAM3EN = (1U << 31);

    // AHB4ENR fields
    inline constexpr uint32_t AHB4ENR_GPIOAEN_Pos = 0;
    inline constexpr uint32_t AHB4ENR_GPIOAEN_Msk = 0x00000001;
    inline constexpr uint32_t AHB4ENR_GPIOAEN = (1U << 0);
    inline constexpr uint32_t AHB4ENR_GPIOBEN_Pos = 1;
    inline constexpr uint32_t AHB4ENR_GPIOBEN_Msk = 0x00000002;
    inline constexpr uint32_t AHB4ENR_GPIOBEN = (1U << 1);
    inline constexpr uint32_t AHB4ENR_GPIOCEN_Pos = 2;
    inline constexpr uint32_t AHB4ENR_GPIOCEN_Msk = 0x00000004;
    inline constexpr uint32_t AHB4ENR_GPIOCEN = (1U << 2);
    inline constexpr uint32_t AHB4ENR_GPIODEN_Pos = 3;
    inline constexpr uint32_t AHB4ENR_GPIODEN_Msk = 0x00000008;
    inline constexpr uint32_t AHB4ENR_GPIODEN = (1U << 3);
    inline constexpr uint32_t AHB4ENR_GPIOEEN_Pos = 4;
    inline constexpr uint32_t AHB4ENR_GPIOEEN_Msk = 0x00000010;
    inline constexpr uint32_t AHB4ENR_GPIOEEN = (1U << 4);
    inline constexpr uint32_t AHB4ENR_GPIOFEN_Pos = 5;
    inline constexpr uint32_t AHB4ENR_GPIOFEN_Msk = 0x00000020;
    inline constexpr uint32_t AHB4ENR_GPIOFEN = (1U << 5);
    inline constexpr uint32_t AHB4ENR_GPIOGEN_Pos = 6;
    inline constexpr uint32_t AHB4ENR_GPIOGEN_Msk = 0x00000040;
    inline constexpr uint32_t AHB4ENR_GPIOGEN = (1U << 6);
    inline constexpr uint32_t AHB4ENR_GPIOHEN_Pos = 7;
    inline constexpr uint32_t AHB4ENR_GPIOHEN_Msk = 0x00000080;
    inline constexpr uint32_t AHB4ENR_GPIOHEN = (1U << 7);
    inline constexpr uint32_t AHB4ENR_GPIOIEN_Pos = 8;
    inline constexpr uint32_t AHB4ENR_GPIOIEN_Msk = 0x00000100;
    inline constexpr uint32_t AHB4ENR_GPIOIEN = (1U << 8);
    inline constexpr uint32_t AHB4ENR_GPIOJEN_Pos = 9;
    inline constexpr uint32_t AHB4ENR_GPIOJEN_Msk = 0x00000200;
    inline constexpr uint32_t AHB4ENR_GPIOJEN = (1U << 9);
    inline constexpr uint32_t AHB4ENR_GPIOKEN_Pos = 10;
    inline constexpr uint32_t AHB4ENR_GPIOKEN_Msk = 0x00000400;
    inline constexpr uint32_t AHB4ENR_GPIOKEN = (1U << 10);
    inline constexpr uint32_t AHB4ENR_CRCEN_Pos = 19;
    inline constexpr uint32_t AHB4ENR_CRCEN_Msk = 0x00080000;
    inline constexpr uint32_t AHB4ENR_CRCEN = (1U << 19);
    inline constexpr uint32_t AHB4ENR_BDMAEN_Pos = 21;
    inline constexpr uint32_t AHB4ENR_BDMAEN_Msk = 0x00200000;
    inline constexpr uint32_t AHB4ENR_BDMAEN = (1U << 21);
    inline constexpr uint32_t AHB4ENR_ADC3EN_Pos = 24;
    inline constexpr uint32_t AHB4ENR_ADC3EN_Msk = 0x01000000;
    inline constexpr uint32_t AHB4ENR_ADC3EN = (1U << 24);
    inline constexpr uint32_t AHB4ENR_HSEMEN_Pos = 25;
    inline constexpr uint32_t AHB4ENR_HSEMEN_Msk = 0x02000000;
    inline constexpr uint32_t AHB4ENR_HSEMEN = (1U << 25);
    inline constexpr uint32_t AHB4ENR_BKPRAMEN_Pos = 28;
    inline constexpr uint32_t AHB4ENR_BKPRAMEN_Msk = 0x10000000;
    inline constexpr uint32_t AHB4ENR_BKPRAMEN = (1U << 28);

    // APB3ENR fields
    inline constexpr uint32_t APB3ENR_LTDCEN_Pos = 3;
    inline constexpr uint32_t APB3ENR_LTDCEN_Msk = 0x00000008;
    inline constexpr uint32_t APB3ENR_LTDCEN = (1U << 3);
    inline constexpr uint32_t APB3ENR_WWDG1EN_Pos = 6;
    inline constexpr uint32_t APB3ENR_WWDG1EN_Msk = 0x00000040;
    inline constexpr uint32_t APB3ENR_WWDG1EN = (1U << 6);

    // APB1LENR fields
    inline constexpr uint32_t APB1LENR_TIM2EN_Pos = 0;
    inline constexpr uint32_t APB1LENR_TIM2EN_Msk = 0x00000001;
    inline constexpr uint32_t APB1LENR_TIM2EN = (1U << 0);
    inline constexpr uint32_t APB1LENR_TIM3EN_Pos = 1;
    inline constexpr uint32_t APB1LENR_TIM3EN_Msk = 0x00000002;
    inline constexpr uint32_t APB1LENR_TIM3EN = (1U << 1);
    inline constexpr uint32_t APB1LENR_TIM4EN_Pos = 2;
    inline constexpr uint32_t APB1LENR_TIM4EN_Msk = 0x00000004;
    inline constexpr uint32_t APB1LENR_TIM4EN = (1U << 2);
    inline constexpr uint32_t APB1LENR_TIM5EN_Pos = 3;
    inline constexpr uint32_t APB1LENR_TIM5EN_Msk = 0x00000008;
    inline constexpr uint32_t APB1LENR_TIM5EN = (1U << 3);
    inline constexpr uint32_t APB1LENR_TIM6EN_Pos = 4;
    inline constexpr uint32_t APB1LENR_TIM6EN_Msk = 0x00000010;
    inline constexpr uint32_t APB1LENR_TIM6EN = (1U << 4);
    inline constexpr uint32_t APB1LENR_TIM7EN_Pos = 5;
    inline constexpr uint32_t APB1LENR_TIM7EN_Msk = 0x00000020;
    inline constexpr uint32_t APB1LENR_TIM7EN = (1U << 5);
    inline constexpr uint32_t APB1LENR_TIM12EN_Pos = 6;
    inline constexpr uint32_t APB1LENR_TIM12EN_Msk = 0x00000040;
    inline constexpr uint32_t APB1LENR_TIM12EN = (1U << 6);
    inline constexpr uint32_t APB1LENR_TIM13EN_Pos = 7;
    inline constexpr uint32_t APB1LENR_TIM13EN_Msk = 0x00000080;
    inline constexpr uint32_t APB1LENR_TIM13EN = (1U << 7);
    inline constexpr uint32_t APB1LENR_TIM14EN_Pos = 8;
    inline constexpr uint32_t APB1LENR_TIM14EN_Msk = 0x00000100;
    inline constexpr uint32_t APB1LENR_TIM14EN = (1U << 8);
    inline constexpr uint32_t APB1LENR_LPTIM1EN_Pos = 9;
    inline constexpr uint32_t APB1LENR_LPTIM1EN_Msk = 0x00000200;
    inline constexpr uint32_t APB1LENR_LPTIM1EN = (1U << 9);
    inline constexpr uint32_t APB1LENR_SPI2EN_Pos = 14;
    inline constexpr uint32_t APB1LENR_SPI2EN_Msk = 0x00004000;
    inline constexpr uint32_t APB1LENR_SPI2EN = (1U << 14);
    inline constexpr uint32_t APB1LENR_SPI3EN_Pos = 15;
    inline constexpr uint32_t APB1LENR_SPI3EN_Msk = 0x00008000;
    inline constexpr uint32_t APB1LENR_SPI3EN = (1U << 15);
    inline constexpr uint32_t APB1LENR_SPDIFRXEN_Pos = 16;
    inline constexpr uint32_t APB1LENR_SPDIFRXEN_Msk = 0x00010000;
    inline constexpr uint32_t APB1LENR_SPDIFRXEN = (1U << 16);
    inline constexpr uint32_t APB1LENR_USART2EN_Pos = 17;
    inline constexpr uint32_t APB1LENR_USART2EN_Msk = 0x00020000;
    inline constexpr uint32_t APB1LENR_USART2EN = (1U << 17);
    inline constexpr uint32_t APB1LENR_USART3EN_Pos = 18;
    inline constexpr uint32_t APB1LENR_USART3EN_Msk = 0x00040000;
    inline constexpr uint32_t APB1LENR_USART3EN = (1U << 18);
    inline constexpr uint32_t APB1LENR_UART4EN_Pos = 19;
    inline constexpr uint32_t APB1LENR_UART4EN_Msk = 0x00080000;
    inline constexpr uint32_t APB1LENR_UART4EN = (1U << 19);
    inline constexpr uint32_t APB1LENR_UART5EN_Pos = 20;
    inline constexpr uint32_t APB1LENR_UART5EN_Msk = 0x00100000;
    inline constexpr uint32_t APB1LENR_UART5EN = (1U << 20);
    inline constexpr uint32_t APB1LENR_I2C1EN_Pos = 21;
    inline constexpr uint32_t APB1LENR_I2C1EN_Msk = 0x00200000;
    inline constexpr uint32_t APB1LENR_I2C1EN = (1U << 21);
    inline constexpr uint32_t APB1LENR_I2C2EN_Pos = 22;
    inline constexpr uint32_t APB1LENR_I2C2EN_Msk = 0x00400000;
    inline constexpr uint32_t APB1LENR_I2C2EN = (1U << 22);
    inline constexpr uint32_t APB1LENR_I2C3EN_Pos = 23;
    inline constexpr uint32_t APB1LENR_I2C3EN_Msk = 0x00800000;
    inline constexpr uint32_t APB1LENR_I2C3EN = (1U << 23);
    inline constexpr uint32_t APB1LENR_CECEN_Pos = 27;
    inline constexpr uint32_t APB1LENR_CECEN_Msk = 0x08000000;
    inline constexpr uint32_t APB1LENR_CECEN = (1U << 27);
    inline constexpr uint32_t APB1LENR_DAC12EN_Pos = 29;
    inline constexpr uint32_t APB1LENR_DAC12EN_Msk = 0x20000000;
    inline constexpr uint32_t APB1LENR_DAC12EN = (1U << 29);
    inline constexpr uint32_t APB1LENR_USART7EN_Pos = 30;
    inline constexpr uint32_t APB1LENR_USART7EN_Msk = 0x40000000;
    inline constexpr uint32_t APB1LENR_USART7EN = (1U << 30);
    inline constexpr uint32_t APB1LENR_USART8EN_Pos = 31;
    inline constexpr uint32_t APB1LENR_USART8EN_Msk = 0x80000000;
    inline constexpr uint32_t APB1LENR_USART8EN = (1U << 31);

    // APB1HENR fields
    inline constexpr uint32_t APB1HENR_CRSEN_Pos = 1;
    inline constexpr uint32_t APB1HENR_CRSEN_Msk = 0x00000002;
    inline constexpr uint32_t APB1HENR_CRSEN = (1U << 1);
    inline constexpr uint32_t APB1HENR_SWPEN_Pos = 2;
    inline constexpr uint32_t APB1HENR_SWPEN_Msk = 0x00000004;
    inline constexpr uint32_t APB1HENR_SWPEN = (1U << 2);
    inline constexpr uint32_t APB1HENR_OPAMPEN_Pos = 4;
    inline constexpr uint32_t APB1HENR_OPAMPEN_Msk = 0x00000010;
    inline constexpr uint32_t APB1HENR_OPAMPEN = (1U << 4);
    inline constexpr uint32_t APB1HENR_MDIOSEN_Pos = 5;
    inline constexpr uint32_t APB1HENR_MDIOSEN_Msk = 0x00000020;
    inline constexpr uint32_t APB1HENR_MDIOSEN = (1U << 5);
    inline constexpr uint32_t APB1HENR_FDCANEN_Pos = 8;
    inline constexpr uint32_t APB1HENR_FDCANEN_Msk = 0x00000100;
    inline constexpr uint32_t APB1HENR_FDCANEN = (1U << 8);

    // APB2ENR fields
    inline constexpr uint32_t APB2ENR_TIM1EN_Pos = 0;
    inline constexpr uint32_t APB2ENR_TIM1EN_Msk = 0x00000001;
    inline constexpr uint32_t APB2ENR_TIM1EN = (1U << 0);
    inline constexpr uint32_t APB2ENR_TIM8EN_Pos = 1;
    inline constexpr uint32_t APB2ENR_TIM8EN_Msk = 0x00000002;
    inline constexpr uint32_t APB2ENR_TIM8EN = (1U << 1);
    inline constexpr uint32_t APB2ENR_USART1EN_Pos = 4;
    inline constexpr uint32_t APB2ENR_USART1EN_Msk = 0x00000010;
    inline constexpr uint32_t APB2ENR_USART1EN = (1U << 4);
    inline constexpr uint32_t APB2ENR_USART6EN_Pos = 5;
    inline constexpr uint32_t APB2ENR_USART6EN_Msk = 0x00000020;
    inline constexpr uint32_t APB2ENR_USART6EN = (1U << 5);
    inline constexpr uint32_t APB2ENR_SPI1EN_Pos = 12;
    inline constexpr uint32_t APB2ENR_SPI1EN_Msk = 0x00001000;
    inline constexpr uint32_t APB2ENR_SPI1EN = (1U << 12);
    inline constexpr uint32_t APB2ENR_SPI4EN_Pos = 13;
    inline constexpr uint32_t APB2ENR_SPI4EN_Msk = 0x00002000;
    inline constexpr uint32_t APB2ENR_SPI4EN = (1U << 13);
    inline constexpr uint32_t APB2ENR_TIM15EN_Pos = 16;
    inline constexpr uint32_t APB2ENR_TIM15EN_Msk = 0x00010000;
    inline constexpr uint32_t APB2ENR_TIM15EN = (1U << 16);
    inline constexpr uint32_t APB2ENR_TIM16EN_Pos = 17;
    inline constexpr uint32_t APB2ENR_TIM16EN_Msk = 0x00020000;
    inline constexpr uint32_t APB2ENR_TIM16EN = (1U << 17);
    inline constexpr uint32_t APB2ENR_TIM17EN_Pos = 18;
    inline constexpr uint32_t APB2ENR_TIM17EN_Msk = 0x00040000;
    inline constexpr uint32_t APB2ENR_TIM17EN = (1U << 18);
    inline constexpr uint32_t APB2ENR_SPI5EN_Pos = 20;
    inline constexpr uint32_t APB2ENR_SPI5EN_Msk = 0x00100000;
    inline constexpr uint32_t APB2ENR_SPI5EN = (1U << 20);
    inline constexpr uint32_t APB2ENR_SAI1EN_Pos = 22;
    inline constexpr uint32_t APB2ENR_SAI1EN_Msk = 0x00400000;
    inline constexpr uint32_t APB2ENR_SAI1EN = (1U << 22);
    inline constexpr uint32_t APB2ENR_SAI2EN_Pos = 23;
    inline constexpr uint32_t APB2ENR_SAI2EN_Msk = 0x00800000;
    inline constexpr uint32_t APB2ENR_SAI2EN = (1U << 23);
    inline constexpr uint32_t APB2ENR_SAI3EN_Pos = 24;
    inline constexpr uint32_t APB2ENR_SAI3EN_Msk = 0x01000000;
    inline constexpr uint32_t APB2ENR_SAI3EN = (1U << 24);
    inline constexpr uint32_t APB2ENR_DFSDM1EN_Pos = 28;
    inline constexpr uint32_t APB2ENR_DFSDM1EN_Msk = 0x10000000;
    inline constexpr uint32_t APB2ENR_DFSDM1EN = (1U << 28);
    inline constexpr uint32_t APB2ENR_HRTIMEN_Pos = 29;
    inline constexpr uint32_t APB2ENR_HRTIMEN_Msk = 0x20000000;
    inline constexpr uint32_t APB2ENR_HRTIMEN = (1U << 29);

    // APB4ENR fields
    inline constexpr uint32_t APB4ENR_SYSCFGEN_Pos = 1;
    inline constexpr uint32_t APB4ENR_SYSCFGEN_Msk = 0x00000002;
    inline constexpr uint32_t APB4ENR_SYSCFGEN = (1U << 1);
    inline constexpr uint32_t APB4ENR_LPUART1EN_Pos = 3;
    inline constexpr uint32_t APB4ENR_LPUART1EN_Msk = 0x00000008;
    inline constexpr uint32_t APB4ENR_LPUART1EN = (1U << 3);
    inline constexpr uint32_t APB4ENR_SPI6EN_Pos = 5;
    inline constexpr uint32_t APB4ENR_SPI6EN_Msk = 0x00000020;
    inline constexpr uint32_t APB4ENR_SPI6EN = (1U << 5);
    inline constexpr uint32_t APB4ENR_I2C4EN_Pos = 7;
    inline constexpr uint32_t APB4ENR_I2C4EN_Msk = 0x00000080;
    inline constexpr uint32_t APB4ENR_I2C4EN = (1U << 7);
    inline constexpr uint32_t APB4ENR_LPTIM2EN_Pos = 9;
    inline constexpr uint32_t APB4ENR_LPTIM2EN_Msk = 0x00000200;
    inline constexpr uint32_t APB4ENR_LPTIM2EN = (1U << 9);
    inline constexpr uint32_t APB4ENR_LPTIM3EN_Pos = 10;
    inline constexpr uint32_t APB4ENR_LPTIM3EN_Msk = 0x00000400;
    inline constexpr uint32_t APB4ENR_LPTIM3EN = (1U << 10);
    inline constexpr uint32_t APB4ENR_LPTIM4EN_Pos = 11;
    inline constexpr uint32_t APB4ENR_LPTIM4EN_Msk = 0x00000800;
    inline constexpr uint32_t APB4ENR_LPTIM4EN = (1U << 11);
    inline constexpr uint32_t APB4ENR_LPTIM5EN_Pos = 12;
    inline constexpr uint32_t APB4ENR_LPTIM5EN_Msk = 0x00001000;
    inline constexpr uint32_t APB4ENR_LPTIM5EN = (1U << 12);
    inline constexpr uint32_t APB4ENR_COMP12EN_Pos = 14;
    inline constexpr uint32_t APB4ENR_COMP12EN_Msk = 0x00004000;
    inline constexpr uint32_t APB4ENR_COMP12EN = (1U << 14);
    inline constexpr uint32_t APB4ENR_VREFEN_Pos = 15;
    inline constexpr uint32_t APB4ENR_VREFEN_Msk = 0x00008000;
    inline constexpr uint32_t APB4ENR_VREFEN = (1U << 15);
    inline constexpr uint32_t APB4ENR_RTCAPBEN_Pos = 16;
    inline constexpr uint32_t APB4ENR_RTCAPBEN_Msk = 0x00010000;
    inline constexpr uint32_t APB4ENR_RTCAPBEN = (1U << 16);
    inline constexpr uint32_t APB4ENR_SAI4EN_Pos = 21;
    inline constexpr uint32_t APB4ENR_SAI4EN_Msk = 0x00200000;
    inline constexpr uint32_t APB4ENR_SAI4EN = (1U << 21);

    // AHB3LPENR fields
    inline constexpr uint32_t AHB3LPENR_MDMALPEN_Pos = 0;
    inline constexpr uint32_t AHB3LPENR_MDMALPEN_Msk = 0x00000001;
    inline constexpr uint32_t AHB3LPENR_MDMALPEN = (1U << 0);
    inline constexpr uint32_t AHB3LPENR_DMA2DLPEN_Pos = 4;
    inline constexpr uint32_t AHB3LPENR_DMA2DLPEN_Msk = 0x00000010;
    inline constexpr uint32_t AHB3LPENR_DMA2DLPEN = (1U << 4);
    inline constexpr uint32_t AHB3LPENR_JPGDECLPEN_Pos = 5;
    inline constexpr uint32_t AHB3LPENR_JPGDECLPEN_Msk = 0x00000020;
    inline constexpr uint32_t AHB3LPENR_JPGDECLPEN = (1U << 5);
    inline constexpr uint32_t AHB3LPENR_FLASHLPEN_Pos = 8;
    inline constexpr uint32_t AHB3LPENR_FLASHLPEN_Msk = 0x00000100;
    inline constexpr uint32_t AHB3LPENR_FLASHLPEN = (1U << 8);
    inline constexpr uint32_t AHB3LPENR_FMCLPEN_Pos = 12;
    inline constexpr uint32_t AHB3LPENR_FMCLPEN_Msk = 0x00001000;
    inline constexpr uint32_t AHB3LPENR_FMCLPEN = (1U << 12);
    inline constexpr uint32_t AHB3LPENR_QSPILPEN_Pos = 14;
    inline constexpr uint32_t AHB3LPENR_QSPILPEN_Msk = 0x00004000;
    inline constexpr uint32_t AHB3LPENR_QSPILPEN = (1U << 14);
    inline constexpr uint32_t AHB3LPENR_SDMMC1LPEN_Pos = 16;
    inline constexpr uint32_t AHB3LPENR_SDMMC1LPEN_Msk = 0x00010000;
    inline constexpr uint32_t AHB3LPENR_SDMMC1LPEN = (1U << 16);
    inline constexpr uint32_t AHB3LPENR_D1DTCM1LPEN_Pos = 28;
    inline constexpr uint32_t AHB3LPENR_D1DTCM1LPEN_Msk = 0x10000000;
    inline constexpr uint32_t AHB3LPENR_D1DTCM1LPEN = (1U << 28);
    inline constexpr uint32_t AHB3LPENR_DTCM2LPEN_Pos = 29;
    inline constexpr uint32_t AHB3LPENR_DTCM2LPEN_Msk = 0x20000000;
    inline constexpr uint32_t AHB3LPENR_DTCM2LPEN = (1U << 29);
    inline constexpr uint32_t AHB3LPENR_ITCMLPEN_Pos = 30;
    inline constexpr uint32_t AHB3LPENR_ITCMLPEN_Msk = 0x40000000;
    inline constexpr uint32_t AHB3LPENR_ITCMLPEN = (1U << 30);
    inline constexpr uint32_t AHB3LPENR_AXISRAMLPEN_Pos = 31;
    inline constexpr uint32_t AHB3LPENR_AXISRAMLPEN_Msk = 0x80000000;
    inline constexpr uint32_t AHB3LPENR_AXISRAMLPEN = (1U << 31);

    // AHB1LPENR fields
    inline constexpr uint32_t AHB1LPENR_DMA1LPEN_Pos = 0;
    inline constexpr uint32_t AHB1LPENR_DMA1LPEN_Msk = 0x00000001;
    inline constexpr uint32_t AHB1LPENR_DMA1LPEN = (1U << 0);
    inline constexpr uint32_t AHB1LPENR_DMA2LPEN_Pos = 1;
    inline constexpr uint32_t AHB1LPENR_DMA2LPEN_Msk = 0x00000002;
    inline constexpr uint32_t AHB1LPENR_DMA2LPEN = (1U << 1);
    inline constexpr uint32_t AHB1LPENR_ADC12LPEN_Pos = 5;
    inline constexpr uint32_t AHB1LPENR_ADC12LPEN_Msk = 0x00000020;
    inline constexpr uint32_t AHB1LPENR_ADC12LPEN = (1U << 5);
    inline constexpr uint32_t AHB1LPENR_ETH1MACLPEN_Pos = 15;
    inline constexpr uint32_t AHB1LPENR_ETH1MACLPEN_Msk = 0x00008000;
    inline constexpr uint32_t AHB1LPENR_ETH1MACLPEN = (1U << 15);
    inline constexpr uint32_t AHB1LPENR_ETH1TXLPEN_Pos = 16;
    inline constexpr uint32_t AHB1LPENR_ETH1TXLPEN_Msk = 0x00010000;
    inline constexpr uint32_t AHB1LPENR_ETH1TXLPEN = (1U << 16);
    inline constexpr uint32_t AHB1LPENR_ETH1RXLPEN_Pos = 17;
    inline constexpr uint32_t AHB1LPENR_ETH1RXLPEN_Msk = 0x00020000;
    inline constexpr uint32_t AHB1LPENR_ETH1RXLPEN = (1U << 17);
    inline constexpr uint32_t AHB1LPENR_USB1OTGHSLPEN_Pos = 25;
    inline constexpr uint32_t AHB1LPENR_USB1OTGHSLPEN_Msk = 0x02000000;
    inline constexpr uint32_t AHB1LPENR_USB1OTGHSLPEN = (1U << 25);
    inline constexpr uint32_t AHB1LPENR_USB1OTGHSULPILPEN_Pos = 26;
    inline constexpr uint32_t AHB1LPENR_USB1OTGHSULPILPEN_Msk = 0x04000000;
    inline constexpr uint32_t AHB1LPENR_USB1OTGHSULPILPEN = (1U << 26);
    inline constexpr uint32_t AHB1LPENR_USB2OTGHSLPEN_Pos = 27;
    inline constexpr uint32_t AHB1LPENR_USB2OTGHSLPEN_Msk = 0x08000000;
    inline constexpr uint32_t AHB1LPENR_USB2OTGHSLPEN = (1U << 27);
    inline constexpr uint32_t AHB1LPENR_USB2OTGHSULPILPEN_Pos = 28;
    inline constexpr uint32_t AHB1LPENR_USB2OTGHSULPILPEN_Msk = 0x10000000;
    inline constexpr uint32_t AHB1LPENR_USB2OTGHSULPILPEN = (1U << 28);

    // AHB2LPENR fields
    inline constexpr uint32_t AHB2LPENR_CAMITFLPEN_Pos = 0;
    inline constexpr uint32_t AHB2LPENR_CAMITFLPEN_Msk = 0x00000001;
    inline constexpr uint32_t AHB2LPENR_CAMITFLPEN = (1U << 0);
    inline constexpr uint32_t AHB2LPENR_CRYPTLPEN_Pos = 4;
    inline constexpr uint32_t AHB2LPENR_CRYPTLPEN_Msk = 0x00000010;
    inline constexpr uint32_t AHB2LPENR_CRYPTLPEN = (1U << 4);
    inline constexpr uint32_t AHB2LPENR_HASHLPEN_Pos = 5;
    inline constexpr uint32_t AHB2LPENR_HASHLPEN_Msk = 0x00000020;
    inline constexpr uint32_t AHB2LPENR_HASHLPEN = (1U << 5);
    inline constexpr uint32_t AHB2LPENR_RNGLPEN_Pos = 6;
    inline constexpr uint32_t AHB2LPENR_RNGLPEN_Msk = 0x00000040;
    inline constexpr uint32_t AHB2LPENR_RNGLPEN = (1U << 6);
    inline constexpr uint32_t AHB2LPENR_SDMMC2LPEN_Pos = 9;
    inline constexpr uint32_t AHB2LPENR_SDMMC2LPEN_Msk = 0x00000200;
    inline constexpr uint32_t AHB2LPENR_SDMMC2LPEN = (1U << 9);
    inline constexpr uint32_t AHB2LPENR_SRAM1LPEN_Pos = 29;
    inline constexpr uint32_t AHB2LPENR_SRAM1LPEN_Msk = 0x20000000;
    inline constexpr uint32_t AHB2LPENR_SRAM1LPEN = (1U << 29);
    inline constexpr uint32_t AHB2LPENR_SRAM2LPEN_Pos = 30;
    inline constexpr uint32_t AHB2LPENR_SRAM2LPEN_Msk = 0x40000000;
    inline constexpr uint32_t AHB2LPENR_SRAM2LPEN = (1U << 30);
    inline constexpr uint32_t AHB2LPENR_SRAM3LPEN_Pos = 31;
    inline constexpr uint32_t AHB2LPENR_SRAM3LPEN_Msk = 0x80000000;
    inline constexpr uint32_t AHB2LPENR_SRAM3LPEN = (1U << 31);

    // AHB4LPENR fields
    inline constexpr uint32_t AHB4LPENR_GPIOALPEN_Pos = 0;
    inline constexpr uint32_t AHB4LPENR_GPIOALPEN_Msk = 0x00000001;
    inline constexpr uint32_t AHB4LPENR_GPIOALPEN = (1U << 0);
    inline constexpr uint32_t AHB4LPENR_GPIOBLPEN_Pos = 1;
    inline constexpr uint32_t AHB4LPENR_GPIOBLPEN_Msk = 0x00000002;
    inline constexpr uint32_t AHB4LPENR_GPIOBLPEN = (1U << 1);
    inline constexpr uint32_t AHB4LPENR_GPIOCLPEN_Pos = 2;
    inline constexpr uint32_t AHB4LPENR_GPIOCLPEN_Msk = 0x00000004;
    inline constexpr uint32_t AHB4LPENR_GPIOCLPEN = (1U << 2);
    inline constexpr uint32_t AHB4LPENR_GPIODLPEN_Pos = 3;
    inline constexpr uint32_t AHB4LPENR_GPIODLPEN_Msk = 0x00000008;
    inline constexpr uint32_t AHB4LPENR_GPIODLPEN = (1U << 3);
    inline constexpr uint32_t AHB4LPENR_GPIOELPEN_Pos = 4;
    inline constexpr uint32_t AHB4LPENR_GPIOELPEN_Msk = 0x00000010;
    inline constexpr uint32_t AHB4LPENR_GPIOELPEN = (1U << 4);
    inline constexpr uint32_t AHB4LPENR_GPIOFLPEN_Pos = 5;
    inline constexpr uint32_t AHB4LPENR_GPIOFLPEN_Msk = 0x00000020;
    inline constexpr uint32_t AHB4LPENR_GPIOFLPEN = (1U << 5);
    inline constexpr uint32_t AHB4LPENR_GPIOGLPEN_Pos = 6;
    inline constexpr uint32_t AHB4LPENR_GPIOGLPEN_Msk = 0x00000040;
    inline constexpr uint32_t AHB4LPENR_GPIOGLPEN = (1U << 6);
    inline constexpr uint32_t AHB4LPENR_GPIOHLPEN_Pos = 7;
    inline constexpr uint32_t AHB4LPENR_GPIOHLPEN_Msk = 0x00000080;
    inline constexpr uint32_t AHB4LPENR_GPIOHLPEN = (1U << 7);
    inline constexpr uint32_t AHB4LPENR_GPIOILPEN_Pos = 8;
    inline constexpr uint32_t AHB4LPENR_GPIOILPEN_Msk = 0x00000100;
    inline constexpr uint32_t AHB4LPENR_GPIOILPEN = (1U << 8);
    inline constexpr uint32_t AHB4LPENR_GPIOJLPEN_Pos = 9;
    inline constexpr uint32_t AHB4LPENR_GPIOJLPEN_Msk = 0x00000200;
    inline constexpr uint32_t AHB4LPENR_GPIOJLPEN = (1U << 9);
    inline constexpr uint32_t AHB4LPENR_GPIOKLPEN_Pos = 10;
    inline constexpr uint32_t AHB4LPENR_GPIOKLPEN_Msk = 0x00000400;
    inline constexpr uint32_t AHB4LPENR_GPIOKLPEN = (1U << 10);
    inline constexpr uint32_t AHB4LPENR_CRCLPEN_Pos = 19;
    inline constexpr uint32_t AHB4LPENR_CRCLPEN_Msk = 0x00080000;
    inline constexpr uint32_t AHB4LPENR_CRCLPEN = (1U << 19);
    inline constexpr uint32_t AHB4LPENR_BDMALPEN_Pos = 21;
    inline constexpr uint32_t AHB4LPENR_BDMALPEN_Msk = 0x00200000;
    inline constexpr uint32_t AHB4LPENR_BDMALPEN = (1U << 21);
    inline constexpr uint32_t AHB4LPENR_ADC3LPEN_Pos = 24;
    inline constexpr uint32_t AHB4LPENR_ADC3LPEN_Msk = 0x01000000;
    inline constexpr uint32_t AHB4LPENR_ADC3LPEN = (1U << 24);
    inline constexpr uint32_t AHB4LPENR_BKPRAMLPEN_Pos = 28;
    inline constexpr uint32_t AHB4LPENR_BKPRAMLPEN_Msk = 0x10000000;
    inline constexpr uint32_t AHB4LPENR_BKPRAMLPEN = (1U << 28);
    inline constexpr uint32_t AHB4LPENR_SRAM4LPEN_Pos = 29;
    inline constexpr uint32_t AHB4LPENR_SRAM4LPEN_Msk = 0x20000000;
    inline constexpr uint32_t AHB4LPENR_SRAM4LPEN = (1U << 29);

    // APB3LPENR fields
    inline constexpr uint32_t APB3LPENR_LTDCLPEN_Pos = 3;
    inline constexpr uint32_t APB3LPENR_LTDCLPEN_Msk = 0x00000008;
    inline constexpr uint32_t APB3LPENR_LTDCLPEN = (1U << 3);
    inline constexpr uint32_t APB3LPENR_WWDG1LPEN_Pos = 6;
    inline constexpr uint32_t APB3LPENR_WWDG1LPEN_Msk = 0x00000040;
    inline constexpr uint32_t APB3LPENR_WWDG1LPEN = (1U << 6);

    // APB1LLPENR fields
    inline constexpr uint32_t APB1LLPENR_TIM2LPEN_Pos = 0;
    inline constexpr uint32_t APB1LLPENR_TIM2LPEN_Msk = 0x00000001;
    inline constexpr uint32_t APB1LLPENR_TIM2LPEN = (1U << 0);
    inline constexpr uint32_t APB1LLPENR_TIM3LPEN_Pos = 1;
    inline constexpr uint32_t APB1LLPENR_TIM3LPEN_Msk = 0x00000002;
    inline constexpr uint32_t APB1LLPENR_TIM3LPEN = (1U << 1);
    inline constexpr uint32_t APB1LLPENR_TIM4LPEN_Pos = 2;
    inline constexpr uint32_t APB1LLPENR_TIM4LPEN_Msk = 0x00000004;
    inline constexpr uint32_t APB1LLPENR_TIM4LPEN = (1U << 2);
    inline constexpr uint32_t APB1LLPENR_TIM5LPEN_Pos = 3;
    inline constexpr uint32_t APB1LLPENR_TIM5LPEN_Msk = 0x00000008;
    inline constexpr uint32_t APB1LLPENR_TIM5LPEN = (1U << 3);
    inline constexpr uint32_t APB1LLPENR_TIM6LPEN_Pos = 4;
    inline constexpr uint32_t APB1LLPENR_TIM6LPEN_Msk = 0x00000010;
    inline constexpr uint32_t APB1LLPENR_TIM6LPEN = (1U << 4);
    inline constexpr uint32_t APB1LLPENR_TIM7LPEN_Pos = 5;
    inline constexpr uint32_t APB1LLPENR_TIM7LPEN_Msk = 0x00000020;
    inline constexpr uint32_t APB1LLPENR_TIM7LPEN = (1U << 5);
    inline constexpr uint32_t APB1LLPENR_TIM12LPEN_Pos = 6;
    inline constexpr uint32_t APB1LLPENR_TIM12LPEN_Msk = 0x00000040;
    inline constexpr uint32_t APB1LLPENR_TIM12LPEN = (1U << 6);
    inline constexpr uint32_t APB1LLPENR_TIM13LPEN_Pos = 7;
    inline constexpr uint32_t APB1LLPENR_TIM13LPEN_Msk = 0x00000080;
    inline constexpr uint32_t APB1LLPENR_TIM13LPEN = (1U << 7);
    inline constexpr uint32_t APB1LLPENR_TIM14LPEN_Pos = 8;
    inline constexpr uint32_t APB1LLPENR_TIM14LPEN_Msk = 0x00000100;
    inline constexpr uint32_t APB1LLPENR_TIM14LPEN = (1U << 8);
    inline constexpr uint32_t APB1LLPENR_LPTIM1LPEN_Pos = 9;
    inline constexpr uint32_t APB1LLPENR_LPTIM1LPEN_Msk = 0x00000200;
    inline constexpr uint32_t APB1LLPENR_LPTIM1LPEN = (1U << 9);
    inline constexpr uint32_t APB1LLPENR_SPI2LPEN_Pos = 14;
    inline constexpr uint32_t APB1LLPENR_SPI2LPEN_Msk = 0x00004000;
    inline constexpr uint32_t APB1LLPENR_SPI2LPEN = (1U << 14);
    inline constexpr uint32_t APB1LLPENR_SPI3LPEN_Pos = 15;
    inline constexpr uint32_t APB1LLPENR_SPI3LPEN_Msk = 0x00008000;
    inline constexpr uint32_t APB1LLPENR_SPI3LPEN = (1U << 15);
    inline constexpr uint32_t APB1LLPENR_SPDIFRXLPEN_Pos = 16;
    inline constexpr uint32_t APB1LLPENR_SPDIFRXLPEN_Msk = 0x00010000;
    inline constexpr uint32_t APB1LLPENR_SPDIFRXLPEN = (1U << 16);
    inline constexpr uint32_t APB1LLPENR_USART2LPEN_Pos = 17;
    inline constexpr uint32_t APB1LLPENR_USART2LPEN_Msk = 0x00020000;
    inline constexpr uint32_t APB1LLPENR_USART2LPEN = (1U << 17);
    inline constexpr uint32_t APB1LLPENR_USART3LPEN_Pos = 18;
    inline constexpr uint32_t APB1LLPENR_USART3LPEN_Msk = 0x00040000;
    inline constexpr uint32_t APB1LLPENR_USART3LPEN = (1U << 18);
    inline constexpr uint32_t APB1LLPENR_UART4LPEN_Pos = 19;
    inline constexpr uint32_t APB1LLPENR_UART4LPEN_Msk = 0x00080000;
    inline constexpr uint32_t APB1LLPENR_UART4LPEN = (1U << 19);
    inline constexpr uint32_t APB1LLPENR_UART5LPEN_Pos = 20;
    inline constexpr uint32_t APB1LLPENR_UART5LPEN_Msk = 0x00100000;
    inline constexpr uint32_t APB1LLPENR_UART5LPEN = (1U << 20);
    inline constexpr uint32_t APB1LLPENR_I2C1LPEN_Pos = 21;
    inline constexpr uint32_t APB1LLPENR_I2C1LPEN_Msk = 0x00200000;
    inline constexpr uint32_t APB1LLPENR_I2C1LPEN = (1U << 21);
    inline constexpr uint32_t APB1LLPENR_I2C2LPEN_Pos = 22;
    inline constexpr uint32_t APB1LLPENR_I2C2LPEN_Msk = 0x00400000;
    inline constexpr uint32_t APB1LLPENR_I2C2LPEN = (1U << 22);
    inline constexpr uint32_t APB1LLPENR_I2C3LPEN_Pos = 23;
    inline constexpr uint32_t APB1LLPENR_I2C3LPEN_Msk = 0x00800000;
    inline constexpr uint32_t APB1LLPENR_I2C3LPEN = (1U << 23);
    inline constexpr uint32_t APB1LLPENR_HDMICECLPEN_Pos = 27;
    inline constexpr uint32_t APB1LLPENR_HDMICECLPEN_Msk = 0x08000000;
    inline constexpr uint32_t APB1LLPENR_HDMICECLPEN = (1U << 27);
    inline constexpr uint32_t APB1LLPENR_DAC12LPEN_Pos = 29;
    inline constexpr uint32_t APB1LLPENR_DAC12LPEN_Msk = 0x20000000;
    inline constexpr uint32_t APB1LLPENR_DAC12LPEN = (1U << 29);
    inline constexpr uint32_t APB1LLPENR_USART7LPEN_Pos = 30;
    inline constexpr uint32_t APB1LLPENR_USART7LPEN_Msk = 0x40000000;
    inline constexpr uint32_t APB1LLPENR_USART7LPEN = (1U << 30);
    inline constexpr uint32_t APB1LLPENR_USART8LPEN_Pos = 31;
    inline constexpr uint32_t APB1LLPENR_USART8LPEN_Msk = 0x80000000;
    inline constexpr uint32_t APB1LLPENR_USART8LPEN = (1U << 31);

    // APB1HLPENR fields
    inline constexpr uint32_t APB1HLPENR_CRSLPEN_Pos = 1;
    inline constexpr uint32_t APB1HLPENR_CRSLPEN_Msk = 0x00000002;
    inline constexpr uint32_t APB1HLPENR_CRSLPEN = (1U << 1);
    inline constexpr uint32_t APB1HLPENR_SWPLPEN_Pos = 2;
    inline constexpr uint32_t APB1HLPENR_SWPLPEN_Msk = 0x00000004;
    inline constexpr uint32_t APB1HLPENR_SWPLPEN = (1U << 2);
    inline constexpr uint32_t APB1HLPENR_OPAMPLPEN_Pos = 4;
    inline constexpr uint32_t APB1HLPENR_OPAMPLPEN_Msk = 0x00000010;
    inline constexpr uint32_t APB1HLPENR_OPAMPLPEN = (1U << 4);
    inline constexpr uint32_t APB1HLPENR_MDIOSLPEN_Pos = 5;
    inline constexpr uint32_t APB1HLPENR_MDIOSLPEN_Msk = 0x00000020;
    inline constexpr uint32_t APB1HLPENR_MDIOSLPEN = (1U << 5);
    inline constexpr uint32_t APB1HLPENR_FDCANLPEN_Pos = 8;
    inline constexpr uint32_t APB1HLPENR_FDCANLPEN_Msk = 0x00000100;
    inline constexpr uint32_t APB1HLPENR_FDCANLPEN = (1U << 8);

    // APB2LPENR fields
    inline constexpr uint32_t APB2LPENR_TIM1LPEN_Pos = 0;
    inline constexpr uint32_t APB2LPENR_TIM1LPEN_Msk = 0x00000001;
    inline constexpr uint32_t APB2LPENR_TIM1LPEN = (1U << 0);
    inline constexpr uint32_t APB2LPENR_TIM8LPEN_Pos = 1;
    inline constexpr uint32_t APB2LPENR_TIM8LPEN_Msk = 0x00000002;
    inline constexpr uint32_t APB2LPENR_TIM8LPEN = (1U << 1);
    inline constexpr uint32_t APB2LPENR_USART1LPEN_Pos = 4;
    inline constexpr uint32_t APB2LPENR_USART1LPEN_Msk = 0x00000010;
    inline constexpr uint32_t APB2LPENR_USART1LPEN = (1U << 4);
    inline constexpr uint32_t APB2LPENR_USART6LPEN_Pos = 5;
    inline constexpr uint32_t APB2LPENR_USART6LPEN_Msk = 0x00000020;
    inline constexpr uint32_t APB2LPENR_USART6LPEN = (1U << 5);
    inline constexpr uint32_t APB2LPENR_SPI1LPEN_Pos = 12;
    inline constexpr uint32_t APB2LPENR_SPI1LPEN_Msk = 0x00001000;
    inline constexpr uint32_t APB2LPENR_SPI1LPEN = (1U << 12);
    inline constexpr uint32_t APB2LPENR_SPI4LPEN_Pos = 13;
    inline constexpr uint32_t APB2LPENR_SPI4LPEN_Msk = 0x00002000;
    inline constexpr uint32_t APB2LPENR_SPI4LPEN = (1U << 13);
    inline constexpr uint32_t APB2LPENR_TIM15LPEN_Pos = 16;
    inline constexpr uint32_t APB2LPENR_TIM15LPEN_Msk = 0x00010000;
    inline constexpr uint32_t APB2LPENR_TIM15LPEN = (1U << 16);
    inline constexpr uint32_t APB2LPENR_TIM16LPEN_Pos = 17;
    inline constexpr uint32_t APB2LPENR_TIM16LPEN_Msk = 0x00020000;
    inline constexpr uint32_t APB2LPENR_TIM16LPEN = (1U << 17);
    inline constexpr uint32_t APB2LPENR_TIM17LPEN_Pos = 18;
    inline constexpr uint32_t APB2LPENR_TIM17LPEN_Msk = 0x00040000;
    inline constexpr uint32_t APB2LPENR_TIM17LPEN = (1U << 18);
    inline constexpr uint32_t APB2LPENR_SPI5LPEN_Pos = 20;
    inline constexpr uint32_t APB2LPENR_SPI5LPEN_Msk = 0x00100000;
    inline constexpr uint32_t APB2LPENR_SPI5LPEN = (1U << 20);
    inline constexpr uint32_t APB2LPENR_SAI1LPEN_Pos = 22;
    inline constexpr uint32_t APB2LPENR_SAI1LPEN_Msk = 0x00400000;
    inline constexpr uint32_t APB2LPENR_SAI1LPEN = (1U << 22);
    inline constexpr uint32_t APB2LPENR_SAI2LPEN_Pos = 23;
    inline constexpr uint32_t APB2LPENR_SAI2LPEN_Msk = 0x00800000;
    inline constexpr uint32_t APB2LPENR_SAI2LPEN = (1U << 23);
    inline constexpr uint32_t APB2LPENR_SAI3LPEN_Pos = 24;
    inline constexpr uint32_t APB2LPENR_SAI3LPEN_Msk = 0x01000000;
    inline constexpr uint32_t APB2LPENR_SAI3LPEN = (1U << 24);
    inline constexpr uint32_t APB2LPENR_DFSDM1LPEN_Pos = 28;
    inline constexpr uint32_t APB2LPENR_DFSDM1LPEN_Msk = 0x10000000;
    inline constexpr uint32_t APB2LPENR_DFSDM1LPEN = (1U << 28);
    inline constexpr uint32_t APB2LPENR_HRTIMLPEN_Pos = 29;
    inline constexpr uint32_t APB2LPENR_HRTIMLPEN_Msk = 0x20000000;
    inline constexpr uint32_t APB2LPENR_HRTIMLPEN = (1U << 29);

    // APB4LPENR fields
    inline constexpr uint32_t APB4LPENR_SYSCFGLPEN_Pos = 1;
    inline constexpr uint32_t APB4LPENR_SYSCFGLPEN_Msk = 0x00000002;
    inline constexpr uint32_t APB4LPENR_SYSCFGLPEN = (1U << 1);
    inline constexpr uint32_t APB4LPENR_LPUART1LPEN_Pos = 3;
    inline constexpr uint32_t APB4LPENR_LPUART1LPEN_Msk = 0x00000008;
    inline constexpr uint32_t APB4LPENR_LPUART1LPEN = (1U << 3);
    inline constexpr uint32_t APB4LPENR_SPI6LPEN_Pos = 5;
    inline constexpr uint32_t APB4LPENR_SPI6LPEN_Msk = 0x00000020;
    inline constexpr uint32_t APB4LPENR_SPI6LPEN = (1U << 5);
    inline constexpr uint32_t APB4LPENR_I2C4LPEN_Pos = 7;
    inline constexpr uint32_t APB4LPENR_I2C4LPEN_Msk = 0x00000080;
    inline constexpr uint32_t APB4LPENR_I2C4LPEN = (1U << 7);
    inline constexpr uint32_t APB4LPENR_LPTIM2LPEN_Pos = 9;
    inline constexpr uint32_t APB4LPENR_LPTIM2LPEN_Msk = 0x00000200;
    inline constexpr uint32_t APB4LPENR_LPTIM2LPEN = (1U << 9);
    inline constexpr uint32_t APB4LPENR_LPTIM3LPEN_Pos = 10;
    inline constexpr uint32_t APB4LPENR_LPTIM3LPEN_Msk = 0x00000400;
    inline constexpr uint32_t APB4LPENR_LPTIM3LPEN = (1U << 10);
    inline constexpr uint32_t APB4LPENR_LPTIM4LPEN_Pos = 11;
    inline constexpr uint32_t APB4LPENR_LPTIM4LPEN_Msk = 0x00000800;
    inline constexpr uint32_t APB4LPENR_LPTIM4LPEN = (1U << 11);
    inline constexpr uint32_t APB4LPENR_LPTIM5LPEN_Pos = 12;
    inline constexpr uint32_t APB4LPENR_LPTIM5LPEN_Msk = 0x00001000;
    inline constexpr uint32_t APB4LPENR_LPTIM5LPEN = (1U << 12);
    inline constexpr uint32_t APB4LPENR_COMP12LPEN_Pos = 14;
    inline constexpr uint32_t APB4LPENR_COMP12LPEN_Msk = 0x00004000;
    inline constexpr uint32_t APB4LPENR_COMP12LPEN = (1U << 14);
    inline constexpr uint32_t APB4LPENR_VREFLPEN_Pos = 15;
    inline constexpr uint32_t APB4LPENR_VREFLPEN_Msk = 0x00008000;
    inline constexpr uint32_t APB4LPENR_VREFLPEN = (1U << 15);
    inline constexpr uint32_t APB4LPENR_RTCAPBLPEN_Pos = 16;
    inline constexpr uint32_t APB4LPENR_RTCAPBLPEN_Msk = 0x00010000;
    inline constexpr uint32_t APB4LPENR_RTCAPBLPEN = (1U << 16);
    inline constexpr uint32_t APB4LPENR_SAI4LPEN_Pos = 21;
    inline constexpr uint32_t APB4LPENR_SAI4LPEN_Msk = 0x00200000;
    inline constexpr uint32_t APB4LPENR_SAI4LPEN = (1U << 21);

    // C1_RSR fields
    inline constexpr uint32_t C1_RSR_RMVF_Pos = 16;
    inline constexpr uint32_t C1_RSR_RMVF_Msk = 0x00010000;
    inline constexpr uint32_t C1_RSR_RMVF = (1U << 16);
    inline constexpr uint32_t C1_RSR_CPURSTF_Pos = 17;
    inline constexpr uint32_t C1_RSR_CPURSTF_Msk = 0x00020000;
    inline constexpr uint32_t C1_RSR_CPURSTF = (1U << 17);
    inline constexpr uint32_t C1_RSR_D1RSTF_Pos = 19;
    inline constexpr uint32_t C1_RSR_D1RSTF_Msk = 0x00080000;
    inline constexpr uint32_t C1_RSR_D1RSTF = (1U << 19);
    inline constexpr uint32_t C1_RSR_D2RSTF_Pos = 20;
    inline constexpr uint32_t C1_RSR_D2RSTF_Msk = 0x00100000;
    inline constexpr uint32_t C1_RSR_D2RSTF = (1U << 20);
    inline constexpr uint32_t C1_RSR_BORRSTF_Pos = 21;
    inline constexpr uint32_t C1_RSR_BORRSTF_Msk = 0x00200000;
    inline constexpr uint32_t C1_RSR_BORRSTF = (1U << 21);
    inline constexpr uint32_t C1_RSR_PINRSTF_Pos = 22;
    inline constexpr uint32_t C1_RSR_PINRSTF_Msk = 0x00400000;
    inline constexpr uint32_t C1_RSR_PINRSTF = (1U << 22);
    inline constexpr uint32_t C1_RSR_PORRSTF_Pos = 23;
    inline constexpr uint32_t C1_RSR_PORRSTF_Msk = 0x00800000;
    inline constexpr uint32_t C1_RSR_PORRSTF = (1U << 23);
    inline constexpr uint32_t C1_RSR_SFTRSTF_Pos = 24;
    inline constexpr uint32_t C1_RSR_SFTRSTF_Msk = 0x01000000;
    inline constexpr uint32_t C1_RSR_SFTRSTF = (1U << 24);
    inline constexpr uint32_t C1_RSR_IWDG1RSTF_Pos = 26;
    inline constexpr uint32_t C1_RSR_IWDG1RSTF_Msk = 0x04000000;
    inline constexpr uint32_t C1_RSR_IWDG1RSTF = (1U << 26);
    inline constexpr uint32_t C1_RSR_WWDG1RSTF_Pos = 28;
    inline constexpr uint32_t C1_RSR_WWDG1RSTF_Msk = 0x10000000;
    inline constexpr uint32_t C1_RSR_WWDG1RSTF = (1U << 28);
    inline constexpr uint32_t C1_RSR_LPWRRSTF_Pos = 30;
    inline constexpr uint32_t C1_RSR_LPWRRSTF_Msk = 0x40000000;
    inline constexpr uint32_t C1_RSR_LPWRRSTF = (1U << 30);

    // C1_AHB3ENR fields
    inline constexpr uint32_t C1_AHB3ENR_MDMAEN_Pos = 0;
    inline constexpr uint32_t C1_AHB3ENR_MDMAEN_Msk = 0x00000001;
    inline constexpr uint32_t C1_AHB3ENR_MDMAEN = (1U << 0);
    inline constexpr uint32_t C1_AHB3ENR_DMA2DEN_Pos = 4;
    inline constexpr uint32_t C1_AHB3ENR_DMA2DEN_Msk = 0x00000010;
    inline constexpr uint32_t C1_AHB3ENR_DMA2DEN = (1U << 4);
    inline constexpr uint32_t C1_AHB3ENR_JPGDECEN_Pos = 5;
    inline constexpr uint32_t C1_AHB3ENR_JPGDECEN_Msk = 0x00000020;
    inline constexpr uint32_t C1_AHB3ENR_JPGDECEN = (1U << 5);
    inline constexpr uint32_t C1_AHB3ENR_FMCEN_Pos = 12;
    inline constexpr uint32_t C1_AHB3ENR_FMCEN_Msk = 0x00001000;
    inline constexpr uint32_t C1_AHB3ENR_FMCEN = (1U << 12);
    inline constexpr uint32_t C1_AHB3ENR_QSPIEN_Pos = 14;
    inline constexpr uint32_t C1_AHB3ENR_QSPIEN_Msk = 0x00004000;
    inline constexpr uint32_t C1_AHB3ENR_QSPIEN = (1U << 14);
    inline constexpr uint32_t C1_AHB3ENR_SDMMC1EN_Pos = 16;
    inline constexpr uint32_t C1_AHB3ENR_SDMMC1EN_Msk = 0x00010000;
    inline constexpr uint32_t C1_AHB3ENR_SDMMC1EN = (1U << 16);

    // C1_AHB1ENR fields
    inline constexpr uint32_t C1_AHB1ENR_DMA1EN_Pos = 0;
    inline constexpr uint32_t C1_AHB1ENR_DMA1EN_Msk = 0x00000001;
    inline constexpr uint32_t C1_AHB1ENR_DMA1EN = (1U << 0);
    inline constexpr uint32_t C1_AHB1ENR_DMA2EN_Pos = 1;
    inline constexpr uint32_t C1_AHB1ENR_DMA2EN_Msk = 0x00000002;
    inline constexpr uint32_t C1_AHB1ENR_DMA2EN = (1U << 1);
    inline constexpr uint32_t C1_AHB1ENR_ADC12EN_Pos = 5;
    inline constexpr uint32_t C1_AHB1ENR_ADC12EN_Msk = 0x00000020;
    inline constexpr uint32_t C1_AHB1ENR_ADC12EN = (1U << 5);
    inline constexpr uint32_t C1_AHB1ENR_ETH1MACEN_Pos = 15;
    inline constexpr uint32_t C1_AHB1ENR_ETH1MACEN_Msk = 0x00008000;
    inline constexpr uint32_t C1_AHB1ENR_ETH1MACEN = (1U << 15);
    inline constexpr uint32_t C1_AHB1ENR_ETH1TXEN_Pos = 16;
    inline constexpr uint32_t C1_AHB1ENR_ETH1TXEN_Msk = 0x00010000;
    inline constexpr uint32_t C1_AHB1ENR_ETH1TXEN = (1U << 16);
    inline constexpr uint32_t C1_AHB1ENR_ETH1RXEN_Pos = 17;
    inline constexpr uint32_t C1_AHB1ENR_ETH1RXEN_Msk = 0x00020000;
    inline constexpr uint32_t C1_AHB1ENR_ETH1RXEN = (1U << 17);
    inline constexpr uint32_t C1_AHB1ENR_USB1OTGHSEN_Pos = 25;
    inline constexpr uint32_t C1_AHB1ENR_USB1OTGHSEN_Msk = 0x02000000;
    inline constexpr uint32_t C1_AHB1ENR_USB1OTGHSEN = (1U << 25);
    inline constexpr uint32_t C1_AHB1ENR_USB1OTGHSULPIEN_Pos = 26;
    inline constexpr uint32_t C1_AHB1ENR_USB1OTGHSULPIEN_Msk = 0x04000000;
    inline constexpr uint32_t C1_AHB1ENR_USB1OTGHSULPIEN = (1U << 26);
    inline constexpr uint32_t C1_AHB1ENR_USB2OTGHSEN_Pos = 27;
    inline constexpr uint32_t C1_AHB1ENR_USB2OTGHSEN_Msk = 0x08000000;
    inline constexpr uint32_t C1_AHB1ENR_USB2OTGHSEN = (1U << 27);
    inline constexpr uint32_t C1_AHB1ENR_USB2OTGHSULPIEN_Pos = 28;
    inline constexpr uint32_t C1_AHB1ENR_USB2OTGHSULPIEN_Msk = 0x10000000;
    inline constexpr uint32_t C1_AHB1ENR_USB2OTGHSULPIEN = (1U << 28);

    // C1_AHB2ENR fields
    inline constexpr uint32_t C1_AHB2ENR_DCMIEN_Pos = 0;
    inline constexpr uint32_t C1_AHB2ENR_DCMIEN_Msk = 0x00000001;
    inline constexpr uint32_t C1_AHB2ENR_DCMIEN = (1U << 0);
    inline constexpr uint32_t C1_AHB2ENR_CRYPTEN_Pos = 4;
    inline constexpr uint32_t C1_AHB2ENR_CRYPTEN_Msk = 0x00000010;
    inline constexpr uint32_t C1_AHB2ENR_CRYPTEN = (1U << 4);
    inline constexpr uint32_t C1_AHB2ENR_HASHEN_Pos = 5;
    inline constexpr uint32_t C1_AHB2ENR_HASHEN_Msk = 0x00000020;
    inline constexpr uint32_t C1_AHB2ENR_HASHEN = (1U << 5);
    inline constexpr uint32_t C1_AHB2ENR_RNGEN_Pos = 6;
    inline constexpr uint32_t C1_AHB2ENR_RNGEN_Msk = 0x00000040;
    inline constexpr uint32_t C1_AHB2ENR_RNGEN = (1U << 6);
    inline constexpr uint32_t C1_AHB2ENR_SDMMC2EN_Pos = 9;
    inline constexpr uint32_t C1_AHB2ENR_SDMMC2EN_Msk = 0x00000200;
    inline constexpr uint32_t C1_AHB2ENR_SDMMC2EN = (1U << 9);
    inline constexpr uint32_t C1_AHB2ENR_SRAM1EN_Pos = 29;
    inline constexpr uint32_t C1_AHB2ENR_SRAM1EN_Msk = 0x20000000;
    inline constexpr uint32_t C1_AHB2ENR_SRAM1EN = (1U << 29);
    inline constexpr uint32_t C1_AHB2ENR_SRAM2EN_Pos = 30;
    inline constexpr uint32_t C1_AHB2ENR_SRAM2EN_Msk = 0x40000000;
    inline constexpr uint32_t C1_AHB2ENR_SRAM2EN = (1U << 30);
    inline constexpr uint32_t C1_AHB2ENR_SRAM3EN_Pos = 31;
    inline constexpr uint32_t C1_AHB2ENR_SRAM3EN_Msk = 0x80000000;
    inline constexpr uint32_t C1_AHB2ENR_SRAM3EN = (1U << 31);

    // C1_AHB4ENR fields
    inline constexpr uint32_t C1_AHB4ENR_GPIOAEN_Pos = 0;
    inline constexpr uint32_t C1_AHB4ENR_GPIOAEN_Msk = 0x00000001;
    inline constexpr uint32_t C1_AHB4ENR_GPIOAEN = (1U << 0);
    inline constexpr uint32_t C1_AHB4ENR_GPIOBEN_Pos = 1;
    inline constexpr uint32_t C1_AHB4ENR_GPIOBEN_Msk = 0x00000002;
    inline constexpr uint32_t C1_AHB4ENR_GPIOBEN = (1U << 1);
    inline constexpr uint32_t C1_AHB4ENR_GPIOCEN_Pos = 2;
    inline constexpr uint32_t C1_AHB4ENR_GPIOCEN_Msk = 0x00000004;
    inline constexpr uint32_t C1_AHB4ENR_GPIOCEN = (1U << 2);
    inline constexpr uint32_t C1_AHB4ENR_GPIODEN_Pos = 3;
    inline constexpr uint32_t C1_AHB4ENR_GPIODEN_Msk = 0x00000008;
    inline constexpr uint32_t C1_AHB4ENR_GPIODEN = (1U << 3);
    inline constexpr uint32_t C1_AHB4ENR_GPIOEEN_Pos = 4;
    inline constexpr uint32_t C1_AHB4ENR_GPIOEEN_Msk = 0x00000010;
    inline constexpr uint32_t C1_AHB4ENR_GPIOEEN = (1U << 4);
    inline constexpr uint32_t C1_AHB4ENR_GPIOFEN_Pos = 5;
    inline constexpr uint32_t C1_AHB4ENR_GPIOFEN_Msk = 0x00000020;
    inline constexpr uint32_t C1_AHB4ENR_GPIOFEN = (1U << 5);
    inline constexpr uint32_t C1_AHB4ENR_GPIOGEN_Pos = 6;
    inline constexpr uint32_t C1_AHB4ENR_GPIOGEN_Msk = 0x00000040;
    inline constexpr uint32_t C1_AHB4ENR_GPIOGEN = (1U << 6);
    inline constexpr uint32_t C1_AHB4ENR_GPIOHEN_Pos = 7;
    inline constexpr uint32_t C1_AHB4ENR_GPIOHEN_Msk = 0x00000080;
    inline constexpr uint32_t C1_AHB4ENR_GPIOHEN = (1U << 7);
    inline constexpr uint32_t C1_AHB4ENR_GPIOIEN_Pos = 8;
    inline constexpr uint32_t C1_AHB4ENR_GPIOIEN_Msk = 0x00000100;
    inline constexpr uint32_t C1_AHB4ENR_GPIOIEN = (1U << 8);
    inline constexpr uint32_t C1_AHB4ENR_GPIOJEN_Pos = 9;
    inline constexpr uint32_t C1_AHB4ENR_GPIOJEN_Msk = 0x00000200;
    inline constexpr uint32_t C1_AHB4ENR_GPIOJEN = (1U << 9);
    inline constexpr uint32_t C1_AHB4ENR_GPIOKEN_Pos = 10;
    inline constexpr uint32_t C1_AHB4ENR_GPIOKEN_Msk = 0x00000400;
    inline constexpr uint32_t C1_AHB4ENR_GPIOKEN = (1U << 10);
    inline constexpr uint32_t C1_AHB4ENR_CRCEN_Pos = 19;
    inline constexpr uint32_t C1_AHB4ENR_CRCEN_Msk = 0x00080000;
    inline constexpr uint32_t C1_AHB4ENR_CRCEN = (1U << 19);
    inline constexpr uint32_t C1_AHB4ENR_BDMAEN_Pos = 21;
    inline constexpr uint32_t C1_AHB4ENR_BDMAEN_Msk = 0x00200000;
    inline constexpr uint32_t C1_AHB4ENR_BDMAEN = (1U << 21);
    inline constexpr uint32_t C1_AHB4ENR_ADC3EN_Pos = 24;
    inline constexpr uint32_t C1_AHB4ENR_ADC3EN_Msk = 0x01000000;
    inline constexpr uint32_t C1_AHB4ENR_ADC3EN = (1U << 24);
    inline constexpr uint32_t C1_AHB4ENR_HSEMEN_Pos = 25;
    inline constexpr uint32_t C1_AHB4ENR_HSEMEN_Msk = 0x02000000;
    inline constexpr uint32_t C1_AHB4ENR_HSEMEN = (1U << 25);
    inline constexpr uint32_t C1_AHB4ENR_BKPRAMEN_Pos = 28;
    inline constexpr uint32_t C1_AHB4ENR_BKPRAMEN_Msk = 0x10000000;
    inline constexpr uint32_t C1_AHB4ENR_BKPRAMEN = (1U << 28);

    // C1_APB3ENR fields
    inline constexpr uint32_t C1_APB3ENR_LTDCEN_Pos = 3;
    inline constexpr uint32_t C1_APB3ENR_LTDCEN_Msk = 0x00000008;
    inline constexpr uint32_t C1_APB3ENR_LTDCEN = (1U << 3);
    inline constexpr uint32_t C1_APB3ENR_WWDG1EN_Pos = 6;
    inline constexpr uint32_t C1_APB3ENR_WWDG1EN_Msk = 0x00000040;
    inline constexpr uint32_t C1_APB3ENR_WWDG1EN = (1U << 6);

    // C1_APB1LENR fields
    inline constexpr uint32_t C1_APB1LENR_TIM2EN_Pos = 0;
    inline constexpr uint32_t C1_APB1LENR_TIM2EN_Msk = 0x00000001;
    inline constexpr uint32_t C1_APB1LENR_TIM2EN = (1U << 0);
    inline constexpr uint32_t C1_APB1LENR_TIM3EN_Pos = 1;
    inline constexpr uint32_t C1_APB1LENR_TIM3EN_Msk = 0x00000002;
    inline constexpr uint32_t C1_APB1LENR_TIM3EN = (1U << 1);
    inline constexpr uint32_t C1_APB1LENR_TIM4EN_Pos = 2;
    inline constexpr uint32_t C1_APB1LENR_TIM4EN_Msk = 0x00000004;
    inline constexpr uint32_t C1_APB1LENR_TIM4EN = (1U << 2);
    inline constexpr uint32_t C1_APB1LENR_TIM5EN_Pos = 3;
    inline constexpr uint32_t C1_APB1LENR_TIM5EN_Msk = 0x00000008;
    inline constexpr uint32_t C1_APB1LENR_TIM5EN = (1U << 3);
    inline constexpr uint32_t C1_APB1LENR_TIM6EN_Pos = 4;
    inline constexpr uint32_t C1_APB1LENR_TIM6EN_Msk = 0x00000010;
    inline constexpr uint32_t C1_APB1LENR_TIM6EN = (1U << 4);
    inline constexpr uint32_t C1_APB1LENR_TIM7EN_Pos = 5;
    inline constexpr uint32_t C1_APB1LENR_TIM7EN_Msk = 0x00000020;
    inline constexpr uint32_t C1_APB1LENR_TIM7EN = (1U << 5);
    inline constexpr uint32_t C1_APB1LENR_TIM12EN_Pos = 6;
    inline constexpr uint32_t C1_APB1LENR_TIM12EN_Msk = 0x00000040;
    inline constexpr uint32_t C1_APB1LENR_TIM12EN = (1U << 6);
    inline constexpr uint32_t C1_APB1LENR_TIM13EN_Pos = 7;
    inline constexpr uint32_t C1_APB1LENR_TIM13EN_Msk = 0x00000080;
    inline constexpr uint32_t C1_APB1LENR_TIM13EN = (1U << 7);
    inline constexpr uint32_t C1_APB1LENR_TIM14EN_Pos = 8;
    inline constexpr uint32_t C1_APB1LENR_TIM14EN_Msk = 0x00000100;
    inline constexpr uint32_t C1_APB1LENR_TIM14EN = (1U << 8);
    inline constexpr uint32_t C1_APB1LENR_LPTIM1EN_Pos = 9;
    inline constexpr uint32_t C1_APB1LENR_LPTIM1EN_Msk = 0x00000200;
    inline constexpr uint32_t C1_APB1LENR_LPTIM1EN = (1U << 9);
    inline constexpr uint32_t C1_APB1LENR_SPI2EN_Pos = 14;
    inline constexpr uint32_t C1_APB1LENR_SPI2EN_Msk = 0x00004000;
    inline constexpr uint32_t C1_APB1LENR_SPI2EN = (1U << 14);
    inline constexpr uint32_t C1_APB1LENR_SPI3EN_Pos = 15;
    inline constexpr uint32_t C1_APB1LENR_SPI3EN_Msk = 0x00008000;
    inline constexpr uint32_t C1_APB1LENR_SPI3EN = (1U << 15);
    inline constexpr uint32_t C1_APB1LENR_SPDIFRXEN_Pos = 16;
    inline constexpr uint32_t C1_APB1LENR_SPDIFRXEN_Msk = 0x00010000;
    inline constexpr uint32_t C1_APB1LENR_SPDIFRXEN = (1U << 16);
    inline constexpr uint32_t C1_APB1LENR_USART2EN_Pos = 17;
    inline constexpr uint32_t C1_APB1LENR_USART2EN_Msk = 0x00020000;
    inline constexpr uint32_t C1_APB1LENR_USART2EN = (1U << 17);
    inline constexpr uint32_t C1_APB1LENR_USART3EN_Pos = 18;
    inline constexpr uint32_t C1_APB1LENR_USART3EN_Msk = 0x00040000;
    inline constexpr uint32_t C1_APB1LENR_USART3EN = (1U << 18);
    inline constexpr uint32_t C1_APB1LENR_UART4EN_Pos = 19;
    inline constexpr uint32_t C1_APB1LENR_UART4EN_Msk = 0x00080000;
    inline constexpr uint32_t C1_APB1LENR_UART4EN = (1U << 19);
    inline constexpr uint32_t C1_APB1LENR_UART5EN_Pos = 20;
    inline constexpr uint32_t C1_APB1LENR_UART5EN_Msk = 0x00100000;
    inline constexpr uint32_t C1_APB1LENR_UART5EN = (1U << 20);
    inline constexpr uint32_t C1_APB1LENR_I2C1EN_Pos = 21;
    inline constexpr uint32_t C1_APB1LENR_I2C1EN_Msk = 0x00200000;
    inline constexpr uint32_t C1_APB1LENR_I2C1EN = (1U << 21);
    inline constexpr uint32_t C1_APB1LENR_I2C2EN_Pos = 22;
    inline constexpr uint32_t C1_APB1LENR_I2C2EN_Msk = 0x00400000;
    inline constexpr uint32_t C1_APB1LENR_I2C2EN = (1U << 22);
    inline constexpr uint32_t C1_APB1LENR_I2C3EN_Pos = 23;
    inline constexpr uint32_t C1_APB1LENR_I2C3EN_Msk = 0x00800000;
    inline constexpr uint32_t C1_APB1LENR_I2C3EN = (1U << 23);
    inline constexpr uint32_t C1_APB1LENR_HDMICECEN_Pos = 27;
    inline constexpr uint32_t C1_APB1LENR_HDMICECEN_Msk = 0x08000000;
    inline constexpr uint32_t C1_APB1LENR_HDMICECEN = (1U << 27);
    inline constexpr uint32_t C1_APB1LENR_DAC12EN_Pos = 29;
    inline constexpr uint32_t C1_APB1LENR_DAC12EN_Msk = 0x20000000;
    inline constexpr uint32_t C1_APB1LENR_DAC12EN = (1U << 29);
    inline constexpr uint32_t C1_APB1LENR_USART7EN_Pos = 30;
    inline constexpr uint32_t C1_APB1LENR_USART7EN_Msk = 0x40000000;
    inline constexpr uint32_t C1_APB1LENR_USART7EN = (1U << 30);
    inline constexpr uint32_t C1_APB1LENR_USART8EN_Pos = 31;
    inline constexpr uint32_t C1_APB1LENR_USART8EN_Msk = 0x80000000;
    inline constexpr uint32_t C1_APB1LENR_USART8EN = (1U << 31);

    // C1_APB1HENR fields
    inline constexpr uint32_t C1_APB1HENR_CRSEN_Pos = 1;
    inline constexpr uint32_t C1_APB1HENR_CRSEN_Msk = 0x00000002;
    inline constexpr uint32_t C1_APB1HENR_CRSEN = (1U << 1);
    inline constexpr uint32_t C1_APB1HENR_SWPEN_Pos = 2;
    inline constexpr uint32_t C1_APB1HENR_SWPEN_Msk = 0x00000004;
    inline constexpr uint32_t C1_APB1HENR_SWPEN = (1U << 2);
    inline constexpr uint32_t C1_APB1HENR_OPAMPEN_Pos = 4;
    inline constexpr uint32_t C1_APB1HENR_OPAMPEN_Msk = 0x00000010;
    inline constexpr uint32_t C1_APB1HENR_OPAMPEN = (1U << 4);
    inline constexpr uint32_t C1_APB1HENR_MDIOSEN_Pos = 5;
    inline constexpr uint32_t C1_APB1HENR_MDIOSEN_Msk = 0x00000020;
    inline constexpr uint32_t C1_APB1HENR_MDIOSEN = (1U << 5);
    inline constexpr uint32_t C1_APB1HENR_FDCANEN_Pos = 8;
    inline constexpr uint32_t C1_APB1HENR_FDCANEN_Msk = 0x00000100;
    inline constexpr uint32_t C1_APB1HENR_FDCANEN = (1U << 8);

    // C1_APB2ENR fields
    inline constexpr uint32_t C1_APB2ENR_TIM1EN_Pos = 0;
    inline constexpr uint32_t C1_APB2ENR_TIM1EN_Msk = 0x00000001;
    inline constexpr uint32_t C1_APB2ENR_TIM1EN = (1U << 0);
    inline constexpr uint32_t C1_APB2ENR_TIM8EN_Pos = 1;
    inline constexpr uint32_t C1_APB2ENR_TIM8EN_Msk = 0x00000002;
    inline constexpr uint32_t C1_APB2ENR_TIM8EN = (1U << 1);
    inline constexpr uint32_t C1_APB2ENR_USART1EN_Pos = 4;
    inline constexpr uint32_t C1_APB2ENR_USART1EN_Msk = 0x00000010;
    inline constexpr uint32_t C1_APB2ENR_USART1EN = (1U << 4);
    inline constexpr uint32_t C1_APB2ENR_USART6EN_Pos = 5;
    inline constexpr uint32_t C1_APB2ENR_USART6EN_Msk = 0x00000020;
    inline constexpr uint32_t C1_APB2ENR_USART6EN = (1U << 5);
    inline constexpr uint32_t C1_APB2ENR_SPI1EN_Pos = 12;
    inline constexpr uint32_t C1_APB2ENR_SPI1EN_Msk = 0x00001000;
    inline constexpr uint32_t C1_APB2ENR_SPI1EN = (1U << 12);
    inline constexpr uint32_t C1_APB2ENR_SPI4EN_Pos = 13;
    inline constexpr uint32_t C1_APB2ENR_SPI4EN_Msk = 0x00002000;
    inline constexpr uint32_t C1_APB2ENR_SPI4EN = (1U << 13);
    inline constexpr uint32_t C1_APB2ENR_TIM15EN_Pos = 16;
    inline constexpr uint32_t C1_APB2ENR_TIM15EN_Msk = 0x00010000;
    inline constexpr uint32_t C1_APB2ENR_TIM15EN = (1U << 16);
    inline constexpr uint32_t C1_APB2ENR_TIM16EN_Pos = 17;
    inline constexpr uint32_t C1_APB2ENR_TIM16EN_Msk = 0x00020000;
    inline constexpr uint32_t C1_APB2ENR_TIM16EN = (1U << 17);
    inline constexpr uint32_t C1_APB2ENR_TIM17EN_Pos = 18;
    inline constexpr uint32_t C1_APB2ENR_TIM17EN_Msk = 0x00040000;
    inline constexpr uint32_t C1_APB2ENR_TIM17EN = (1U << 18);
    inline constexpr uint32_t C1_APB2ENR_SPI5EN_Pos = 20;
    inline constexpr uint32_t C1_APB2ENR_SPI5EN_Msk = 0x00100000;
    inline constexpr uint32_t C1_APB2ENR_SPI5EN = (1U << 20);
    inline constexpr uint32_t C1_APB2ENR_SAI1EN_Pos = 22;
    inline constexpr uint32_t C1_APB2ENR_SAI1EN_Msk = 0x00400000;
    inline constexpr uint32_t C1_APB2ENR_SAI1EN = (1U << 22);
    inline constexpr uint32_t C1_APB2ENR_SAI2EN_Pos = 23;
    inline constexpr uint32_t C1_APB2ENR_SAI2EN_Msk = 0x00800000;
    inline constexpr uint32_t C1_APB2ENR_SAI2EN = (1U << 23);
    inline constexpr uint32_t C1_APB2ENR_SAI3EN_Pos = 24;
    inline constexpr uint32_t C1_APB2ENR_SAI3EN_Msk = 0x01000000;
    inline constexpr uint32_t C1_APB2ENR_SAI3EN = (1U << 24);
    inline constexpr uint32_t C1_APB2ENR_DFSDM1EN_Pos = 28;
    inline constexpr uint32_t C1_APB2ENR_DFSDM1EN_Msk = 0x10000000;
    inline constexpr uint32_t C1_APB2ENR_DFSDM1EN = (1U << 28);
    inline constexpr uint32_t C1_APB2ENR_HRTIMEN_Pos = 29;
    inline constexpr uint32_t C1_APB2ENR_HRTIMEN_Msk = 0x20000000;
    inline constexpr uint32_t C1_APB2ENR_HRTIMEN = (1U << 29);

    // C1_APB4ENR fields
    inline constexpr uint32_t C1_APB4ENR_SYSCFGEN_Pos = 1;
    inline constexpr uint32_t C1_APB4ENR_SYSCFGEN_Msk = 0x00000002;
    inline constexpr uint32_t C1_APB4ENR_SYSCFGEN = (1U << 1);
    inline constexpr uint32_t C1_APB4ENR_LPUART1EN_Pos = 3;
    inline constexpr uint32_t C1_APB4ENR_LPUART1EN_Msk = 0x00000008;
    inline constexpr uint32_t C1_APB4ENR_LPUART1EN = (1U << 3);
    inline constexpr uint32_t C1_APB4ENR_SPI6EN_Pos = 5;
    inline constexpr uint32_t C1_APB4ENR_SPI6EN_Msk = 0x00000020;
    inline constexpr uint32_t C1_APB4ENR_SPI6EN = (1U << 5);
    inline constexpr uint32_t C1_APB4ENR_I2C4EN_Pos = 7;
    inline constexpr uint32_t C1_APB4ENR_I2C4EN_Msk = 0x00000080;
    inline constexpr uint32_t C1_APB4ENR_I2C4EN = (1U << 7);
    inline constexpr uint32_t C1_APB4ENR_LPTIM2EN_Pos = 9;
    inline constexpr uint32_t C1_APB4ENR_LPTIM2EN_Msk = 0x00000200;
    inline constexpr uint32_t C1_APB4ENR_LPTIM2EN = (1U << 9);
    inline constexpr uint32_t C1_APB4ENR_LPTIM3EN_Pos = 10;
    inline constexpr uint32_t C1_APB4ENR_LPTIM3EN_Msk = 0x00000400;
    inline constexpr uint32_t C1_APB4ENR_LPTIM3EN = (1U << 10);
    inline constexpr uint32_t C1_APB4ENR_LPTIM4EN_Pos = 11;
    inline constexpr uint32_t C1_APB4ENR_LPTIM4EN_Msk = 0x00000800;
    inline constexpr uint32_t C1_APB4ENR_LPTIM4EN = (1U << 11);
    inline constexpr uint32_t C1_APB4ENR_LPTIM5EN_Pos = 12;
    inline constexpr uint32_t C1_APB4ENR_LPTIM5EN_Msk = 0x00001000;
    inline constexpr uint32_t C1_APB4ENR_LPTIM5EN = (1U << 12);
    inline constexpr uint32_t C1_APB4ENR_COMP12EN_Pos = 14;
    inline constexpr uint32_t C1_APB4ENR_COMP12EN_Msk = 0x00004000;
    inline constexpr uint32_t C1_APB4ENR_COMP12EN = (1U << 14);
    inline constexpr uint32_t C1_APB4ENR_VREFEN_Pos = 15;
    inline constexpr uint32_t C1_APB4ENR_VREFEN_Msk = 0x00008000;
    inline constexpr uint32_t C1_APB4ENR_VREFEN = (1U << 15);
    inline constexpr uint32_t C1_APB4ENR_RTCAPBEN_Pos = 16;
    inline constexpr uint32_t C1_APB4ENR_RTCAPBEN_Msk = 0x00010000;
    inline constexpr uint32_t C1_APB4ENR_RTCAPBEN = (1U << 16);
    inline constexpr uint32_t C1_APB4ENR_SAI4EN_Pos = 21;
    inline constexpr uint32_t C1_APB4ENR_SAI4EN_Msk = 0x00200000;
    inline constexpr uint32_t C1_APB4ENR_SAI4EN = (1U << 21);

    // C1_AHB3LPENR fields
    inline constexpr uint32_t C1_AHB3LPENR_MDMALPEN_Pos = 0;
    inline constexpr uint32_t C1_AHB3LPENR_MDMALPEN_Msk = 0x00000001;
    inline constexpr uint32_t C1_AHB3LPENR_MDMALPEN = (1U << 0);
    inline constexpr uint32_t C1_AHB3LPENR_DMA2DLPEN_Pos = 4;
    inline constexpr uint32_t C1_AHB3LPENR_DMA2DLPEN_Msk = 0x00000010;
    inline constexpr uint32_t C1_AHB3LPENR_DMA2DLPEN = (1U << 4);
    inline constexpr uint32_t C1_AHB3LPENR_JPGDECLPEN_Pos = 5;
    inline constexpr uint32_t C1_AHB3LPENR_JPGDECLPEN_Msk = 0x00000020;
    inline constexpr uint32_t C1_AHB3LPENR_JPGDECLPEN = (1U << 5);
    inline constexpr uint32_t C1_AHB3LPENR_FLITFLPEN_Pos = 8;
    inline constexpr uint32_t C1_AHB3LPENR_FLITFLPEN_Msk = 0x00000100;
    inline constexpr uint32_t C1_AHB3LPENR_FLITFLPEN = (1U << 8);
    inline constexpr uint32_t C1_AHB3LPENR_FMCLPEN_Pos = 12;
    inline constexpr uint32_t C1_AHB3LPENR_FMCLPEN_Msk = 0x00001000;
    inline constexpr uint32_t C1_AHB3LPENR_FMCLPEN = (1U << 12);
    inline constexpr uint32_t C1_AHB3LPENR_QSPILPEN_Pos = 14;
    inline constexpr uint32_t C1_AHB3LPENR_QSPILPEN_Msk = 0x00004000;
    inline constexpr uint32_t C1_AHB3LPENR_QSPILPEN = (1U << 14);
    inline constexpr uint32_t C1_AHB3LPENR_SDMMC1LPEN_Pos = 16;
    inline constexpr uint32_t C1_AHB3LPENR_SDMMC1LPEN_Msk = 0x00010000;
    inline constexpr uint32_t C1_AHB3LPENR_SDMMC1LPEN = (1U << 16);
    inline constexpr uint32_t C1_AHB3LPENR_D1DTCM1LPEN_Pos = 28;
    inline constexpr uint32_t C1_AHB3LPENR_D1DTCM1LPEN_Msk = 0x10000000;
    inline constexpr uint32_t C1_AHB3LPENR_D1DTCM1LPEN = (1U << 28);
    inline constexpr uint32_t C1_AHB3LPENR_DTCM2LPEN_Pos = 29;
    inline constexpr uint32_t C1_AHB3LPENR_DTCM2LPEN_Msk = 0x20000000;
    inline constexpr uint32_t C1_AHB3LPENR_DTCM2LPEN = (1U << 29);
    inline constexpr uint32_t C1_AHB3LPENR_ITCMLPEN_Pos = 30;
    inline constexpr uint32_t C1_AHB3LPENR_ITCMLPEN_Msk = 0x40000000;
    inline constexpr uint32_t C1_AHB3LPENR_ITCMLPEN = (1U << 30);
    inline constexpr uint32_t C1_AHB3LPENR_AXISRAMLPEN_Pos = 31;
    inline constexpr uint32_t C1_AHB3LPENR_AXISRAMLPEN_Msk = 0x80000000;
    inline constexpr uint32_t C1_AHB3LPENR_AXISRAMLPEN = (1U << 31);

    // C1_AHB1LPENR fields
    inline constexpr uint32_t C1_AHB1LPENR_DMA1LPEN_Pos = 0;
    inline constexpr uint32_t C1_AHB1LPENR_DMA1LPEN_Msk = 0x00000001;
    inline constexpr uint32_t C1_AHB1LPENR_DMA1LPEN = (1U << 0);
    inline constexpr uint32_t C1_AHB1LPENR_DMA2LPEN_Pos = 1;
    inline constexpr uint32_t C1_AHB1LPENR_DMA2LPEN_Msk = 0x00000002;
    inline constexpr uint32_t C1_AHB1LPENR_DMA2LPEN = (1U << 1);
    inline constexpr uint32_t C1_AHB1LPENR_ADC12LPEN_Pos = 5;
    inline constexpr uint32_t C1_AHB1LPENR_ADC12LPEN_Msk = 0x00000020;
    inline constexpr uint32_t C1_AHB1LPENR_ADC12LPEN = (1U << 5);
    inline constexpr uint32_t C1_AHB1LPENR_ETH1MACLPEN_Pos = 15;
    inline constexpr uint32_t C1_AHB1LPENR_ETH1MACLPEN_Msk = 0x00008000;
    inline constexpr uint32_t C1_AHB1LPENR_ETH1MACLPEN = (1U << 15);
    inline constexpr uint32_t C1_AHB1LPENR_ETH1TXLPEN_Pos = 16;
    inline constexpr uint32_t C1_AHB1LPENR_ETH1TXLPEN_Msk = 0x00010000;
    inline constexpr uint32_t C1_AHB1LPENR_ETH1TXLPEN = (1U << 16);
    inline constexpr uint32_t C1_AHB1LPENR_ETH1RXLPEN_Pos = 17;
    inline constexpr uint32_t C1_AHB1LPENR_ETH1RXLPEN_Msk = 0x00020000;
    inline constexpr uint32_t C1_AHB1LPENR_ETH1RXLPEN = (1U << 17);
    inline constexpr uint32_t C1_AHB1LPENR_USB1OTGLPEN_Pos = 25;
    inline constexpr uint32_t C1_AHB1LPENR_USB1OTGLPEN_Msk = 0x02000000;
    inline constexpr uint32_t C1_AHB1LPENR_USB1OTGLPEN = (1U << 25);
    inline constexpr uint32_t C1_AHB1LPENR_USB1ULPILPEN_Pos = 26;
    inline constexpr uint32_t C1_AHB1LPENR_USB1ULPILPEN_Msk = 0x04000000;
    inline constexpr uint32_t C1_AHB1LPENR_USB1ULPILPEN = (1U << 26);
    inline constexpr uint32_t C1_AHB1LPENR_USB2OTGLPEN_Pos = 27;
    inline constexpr uint32_t C1_AHB1LPENR_USB2OTGLPEN_Msk = 0x08000000;
    inline constexpr uint32_t C1_AHB1LPENR_USB2OTGLPEN = (1U << 27);
    inline constexpr uint32_t C1_AHB1LPENR_USB2ULPILPEN_Pos = 28;
    inline constexpr uint32_t C1_AHB1LPENR_USB2ULPILPEN_Msk = 0x10000000;
    inline constexpr uint32_t C1_AHB1LPENR_USB2ULPILPEN = (1U << 28);

    // C1_AHB2LPENR fields
    inline constexpr uint32_t C1_AHB2LPENR_CAMITFLPEN_Pos = 0;
    inline constexpr uint32_t C1_AHB2LPENR_CAMITFLPEN_Msk = 0x00000001;
    inline constexpr uint32_t C1_AHB2LPENR_CAMITFLPEN = (1U << 0);
    inline constexpr uint32_t C1_AHB2LPENR_CRYPTLPEN_Pos = 4;
    inline constexpr uint32_t C1_AHB2LPENR_CRYPTLPEN_Msk = 0x00000010;
    inline constexpr uint32_t C1_AHB2LPENR_CRYPTLPEN = (1U << 4);
    inline constexpr uint32_t C1_AHB2LPENR_HASHLPEN_Pos = 5;
    inline constexpr uint32_t C1_AHB2LPENR_HASHLPEN_Msk = 0x00000020;
    inline constexpr uint32_t C1_AHB2LPENR_HASHLPEN = (1U << 5);
    inline constexpr uint32_t C1_AHB2LPENR_RNGLPEN_Pos = 6;
    inline constexpr uint32_t C1_AHB2LPENR_RNGLPEN_Msk = 0x00000040;
    inline constexpr uint32_t C1_AHB2LPENR_RNGLPEN = (1U << 6);
    inline constexpr uint32_t C1_AHB2LPENR_SDMMC2LPEN_Pos = 9;
    inline constexpr uint32_t C1_AHB2LPENR_SDMMC2LPEN_Msk = 0x00000200;
    inline constexpr uint32_t C1_AHB2LPENR_SDMMC2LPEN = (1U << 9);
    inline constexpr uint32_t C1_AHB2LPENR_SRAM1LPEN_Pos = 29;
    inline constexpr uint32_t C1_AHB2LPENR_SRAM1LPEN_Msk = 0x20000000;
    inline constexpr uint32_t C1_AHB2LPENR_SRAM1LPEN = (1U << 29);
    inline constexpr uint32_t C1_AHB2LPENR_SRAM2LPEN_Pos = 30;
    inline constexpr uint32_t C1_AHB2LPENR_SRAM2LPEN_Msk = 0x40000000;
    inline constexpr uint32_t C1_AHB2LPENR_SRAM2LPEN = (1U << 30);
    inline constexpr uint32_t C1_AHB2LPENR_SRAM3LPEN_Pos = 31;
    inline constexpr uint32_t C1_AHB2LPENR_SRAM3LPEN_Msk = 0x80000000;
    inline constexpr uint32_t C1_AHB2LPENR_SRAM3LPEN = (1U << 31);

    // C1_AHB4LPENR fields
    inline constexpr uint32_t C1_AHB4LPENR_GPIOALPEN_Pos = 0;
    inline constexpr uint32_t C1_AHB4LPENR_GPIOALPEN_Msk = 0x00000001;
    inline constexpr uint32_t C1_AHB4LPENR_GPIOALPEN = (1U << 0);
    inline constexpr uint32_t C1_AHB4LPENR_GPIOBLPEN_Pos = 1;
    inline constexpr uint32_t C1_AHB4LPENR_GPIOBLPEN_Msk = 0x00000002;
    inline constexpr uint32_t C1_AHB4LPENR_GPIOBLPEN = (1U << 1);
    inline constexpr uint32_t C1_AHB4LPENR_GPIOCLPEN_Pos = 2;
    inline constexpr uint32_t C1_AHB4LPENR_GPIOCLPEN_Msk = 0x00000004;
    inline constexpr uint32_t C1_AHB4LPENR_GPIOCLPEN = (1U << 2);
    inline constexpr uint32_t C1_AHB4LPENR_GPIODLPEN_Pos = 3;
    inline constexpr uint32_t C1_AHB4LPENR_GPIODLPEN_Msk = 0x00000008;
    inline constexpr uint32_t C1_AHB4LPENR_GPIODLPEN = (1U << 3);
    inline constexpr uint32_t C1_AHB4LPENR_GPIOELPEN_Pos = 4;
    inline constexpr uint32_t C1_AHB4LPENR_GPIOELPEN_Msk = 0x00000010;
    inline constexpr uint32_t C1_AHB4LPENR_GPIOELPEN = (1U << 4);
    inline constexpr uint32_t C1_AHB4LPENR_GPIOFLPEN_Pos = 5;
    inline constexpr uint32_t C1_AHB4LPENR_GPIOFLPEN_Msk = 0x00000020;
    inline constexpr uint32_t C1_AHB4LPENR_GPIOFLPEN = (1U << 5);
    inline constexpr uint32_t C1_AHB4LPENR_GPIOGLPEN_Pos = 6;
    inline constexpr uint32_t C1_AHB4LPENR_GPIOGLPEN_Msk = 0x00000040;
    inline constexpr uint32_t C1_AHB4LPENR_GPIOGLPEN = (1U << 6);
    inline constexpr uint32_t C1_AHB4LPENR_GPIOHLPEN_Pos = 7;
    inline constexpr uint32_t C1_AHB4LPENR_GPIOHLPEN_Msk = 0x00000080;
    inline constexpr uint32_t C1_AHB4LPENR_GPIOHLPEN = (1U << 7);
    inline constexpr uint32_t C1_AHB4LPENR_GPIOILPEN_Pos = 8;
    inline constexpr uint32_t C1_AHB4LPENR_GPIOILPEN_Msk = 0x00000100;
    inline constexpr uint32_t C1_AHB4LPENR_GPIOILPEN = (1U << 8);
    inline constexpr uint32_t C1_AHB4LPENR_GPIOJLPEN_Pos = 9;
    inline constexpr uint32_t C1_AHB4LPENR_GPIOJLPEN_Msk = 0x00000200;
    inline constexpr uint32_t C1_AHB4LPENR_GPIOJLPEN = (1U << 9);
    inline constexpr uint32_t C1_AHB4LPENR_GPIOKLPEN_Pos = 10;
    inline constexpr uint32_t C1_AHB4LPENR_GPIOKLPEN_Msk = 0x00000400;
    inline constexpr uint32_t C1_AHB4LPENR_GPIOKLPEN = (1U << 10);
    inline constexpr uint32_t C1_AHB4LPENR_CRCLPEN_Pos = 19;
    inline constexpr uint32_t C1_AHB4LPENR_CRCLPEN_Msk = 0x00080000;
    inline constexpr uint32_t C1_AHB4LPENR_CRCLPEN = (1U << 19);
    inline constexpr uint32_t C1_AHB4LPENR_BDMALPEN_Pos = 21;
    inline constexpr uint32_t C1_AHB4LPENR_BDMALPEN_Msk = 0x00200000;
    inline constexpr uint32_t C1_AHB4LPENR_BDMALPEN = (1U << 21);
    inline constexpr uint32_t C1_AHB4LPENR_ADC3LPEN_Pos = 24;
    inline constexpr uint32_t C1_AHB4LPENR_ADC3LPEN_Msk = 0x01000000;
    inline constexpr uint32_t C1_AHB4LPENR_ADC3LPEN = (1U << 24);
    inline constexpr uint32_t C1_AHB4LPENR_BKPRAMLPEN_Pos = 28;
    inline constexpr uint32_t C1_AHB4LPENR_BKPRAMLPEN_Msk = 0x10000000;
    inline constexpr uint32_t C1_AHB4LPENR_BKPRAMLPEN = (1U << 28);
    inline constexpr uint32_t C1_AHB4LPENR_SRAM4LPEN_Pos = 29;
    inline constexpr uint32_t C1_AHB4LPENR_SRAM4LPEN_Msk = 0x20000000;
    inline constexpr uint32_t C1_AHB4LPENR_SRAM4LPEN = (1U << 29);

    // C1_APB3LPENR fields
    inline constexpr uint32_t C1_APB3LPENR_LTDCLPEN_Pos = 3;
    inline constexpr uint32_t C1_APB3LPENR_LTDCLPEN_Msk = 0x00000008;
    inline constexpr uint32_t C1_APB3LPENR_LTDCLPEN = (1U << 3);
    inline constexpr uint32_t C1_APB3LPENR_WWDG1LPEN_Pos = 6;
    inline constexpr uint32_t C1_APB3LPENR_WWDG1LPEN_Msk = 0x00000040;
    inline constexpr uint32_t C1_APB3LPENR_WWDG1LPEN = (1U << 6);

    // C1_APB1LLPENR fields
    inline constexpr uint32_t C1_APB1LLPENR_TIM2LPEN_Pos = 0;
    inline constexpr uint32_t C1_APB1LLPENR_TIM2LPEN_Msk = 0x00000001;
    inline constexpr uint32_t C1_APB1LLPENR_TIM2LPEN = (1U << 0);
    inline constexpr uint32_t C1_APB1LLPENR_TIM3LPEN_Pos = 1;
    inline constexpr uint32_t C1_APB1LLPENR_TIM3LPEN_Msk = 0x00000002;
    inline constexpr uint32_t C1_APB1LLPENR_TIM3LPEN = (1U << 1);
    inline constexpr uint32_t C1_APB1LLPENR_TIM4LPEN_Pos = 2;
    inline constexpr uint32_t C1_APB1LLPENR_TIM4LPEN_Msk = 0x00000004;
    inline constexpr uint32_t C1_APB1LLPENR_TIM4LPEN = (1U << 2);
    inline constexpr uint32_t C1_APB1LLPENR_TIM5LPEN_Pos = 3;
    inline constexpr uint32_t C1_APB1LLPENR_TIM5LPEN_Msk = 0x00000008;
    inline constexpr uint32_t C1_APB1LLPENR_TIM5LPEN = (1U << 3);
    inline constexpr uint32_t C1_APB1LLPENR_TIM6LPEN_Pos = 4;
    inline constexpr uint32_t C1_APB1LLPENR_TIM6LPEN_Msk = 0x00000010;
    inline constexpr uint32_t C1_APB1LLPENR_TIM6LPEN = (1U << 4);
    inline constexpr uint32_t C1_APB1LLPENR_TIM7LPEN_Pos = 5;
    inline constexpr uint32_t C1_APB1LLPENR_TIM7LPEN_Msk = 0x00000020;
    inline constexpr uint32_t C1_APB1LLPENR_TIM7LPEN = (1U << 5);
    inline constexpr uint32_t C1_APB1LLPENR_TIM12LPEN_Pos = 6;
    inline constexpr uint32_t C1_APB1LLPENR_TIM12LPEN_Msk = 0x00000040;
    inline constexpr uint32_t C1_APB1LLPENR_TIM12LPEN = (1U << 6);
    inline constexpr uint32_t C1_APB1LLPENR_TIM13LPEN_Pos = 7;
    inline constexpr uint32_t C1_APB1LLPENR_TIM13LPEN_Msk = 0x00000080;
    inline constexpr uint32_t C1_APB1LLPENR_TIM13LPEN = (1U << 7);
    inline constexpr uint32_t C1_APB1LLPENR_TIM14LPEN_Pos = 8;
    inline constexpr uint32_t C1_APB1LLPENR_TIM14LPEN_Msk = 0x00000100;
    inline constexpr uint32_t C1_APB1LLPENR_TIM14LPEN = (1U << 8);
    inline constexpr uint32_t C1_APB1LLPENR_LPTIM1LPEN_Pos = 9;
    inline constexpr uint32_t C1_APB1LLPENR_LPTIM1LPEN_Msk = 0x00000200;
    inline constexpr uint32_t C1_APB1LLPENR_LPTIM1LPEN = (1U << 9);
    inline constexpr uint32_t C1_APB1LLPENR_SPI2LPEN_Pos = 14;
    inline constexpr uint32_t C1_APB1LLPENR_SPI2LPEN_Msk = 0x00004000;
    inline constexpr uint32_t C1_APB1LLPENR_SPI2LPEN = (1U << 14);
    inline constexpr uint32_t C1_APB1LLPENR_SPI3LPEN_Pos = 15;
    inline constexpr uint32_t C1_APB1LLPENR_SPI3LPEN_Msk = 0x00008000;
    inline constexpr uint32_t C1_APB1LLPENR_SPI3LPEN = (1U << 15);
    inline constexpr uint32_t C1_APB1LLPENR_SPDIFRXLPEN_Pos = 16;
    inline constexpr uint32_t C1_APB1LLPENR_SPDIFRXLPEN_Msk = 0x00010000;
    inline constexpr uint32_t C1_APB1LLPENR_SPDIFRXLPEN = (1U << 16);
    inline constexpr uint32_t C1_APB1LLPENR_USART2LPEN_Pos = 17;
    inline constexpr uint32_t C1_APB1LLPENR_USART2LPEN_Msk = 0x00020000;
    inline constexpr uint32_t C1_APB1LLPENR_USART2LPEN = (1U << 17);
    inline constexpr uint32_t C1_APB1LLPENR_USART3LPEN_Pos = 18;
    inline constexpr uint32_t C1_APB1LLPENR_USART3LPEN_Msk = 0x00040000;
    inline constexpr uint32_t C1_APB1LLPENR_USART3LPEN = (1U << 18);
    inline constexpr uint32_t C1_APB1LLPENR_UART4LPEN_Pos = 19;
    inline constexpr uint32_t C1_APB1LLPENR_UART4LPEN_Msk = 0x00080000;
    inline constexpr uint32_t C1_APB1LLPENR_UART4LPEN = (1U << 19);
    inline constexpr uint32_t C1_APB1LLPENR_UART5LPEN_Pos = 20;
    inline constexpr uint32_t C1_APB1LLPENR_UART5LPEN_Msk = 0x00100000;
    inline constexpr uint32_t C1_APB1LLPENR_UART5LPEN = (1U << 20);
    inline constexpr uint32_t C1_APB1LLPENR_I2C1LPEN_Pos = 21;
    inline constexpr uint32_t C1_APB1LLPENR_I2C1LPEN_Msk = 0x00200000;
    inline constexpr uint32_t C1_APB1LLPENR_I2C1LPEN = (1U << 21);
    inline constexpr uint32_t C1_APB1LLPENR_I2C2LPEN_Pos = 22;
    inline constexpr uint32_t C1_APB1LLPENR_I2C2LPEN_Msk = 0x00400000;
    inline constexpr uint32_t C1_APB1LLPENR_I2C2LPEN = (1U << 22);
    inline constexpr uint32_t C1_APB1LLPENR_I2C3LPEN_Pos = 23;
    inline constexpr uint32_t C1_APB1LLPENR_I2C3LPEN_Msk = 0x00800000;
    inline constexpr uint32_t C1_APB1LLPENR_I2C3LPEN = (1U << 23);
    inline constexpr uint32_t C1_APB1LLPENR_HDMICECLPEN_Pos = 27;
    inline constexpr uint32_t C1_APB1LLPENR_HDMICECLPEN_Msk = 0x08000000;
    inline constexpr uint32_t C1_APB1LLPENR_HDMICECLPEN = (1U << 27);
    inline constexpr uint32_t C1_APB1LLPENR_DAC12LPEN_Pos = 29;
    inline constexpr uint32_t C1_APB1LLPENR_DAC12LPEN_Msk = 0x20000000;
    inline constexpr uint32_t C1_APB1LLPENR_DAC12LPEN = (1U << 29);
    inline constexpr uint32_t C1_APB1LLPENR_USART7LPEN_Pos = 30;
    inline constexpr uint32_t C1_APB1LLPENR_USART7LPEN_Msk = 0x40000000;
    inline constexpr uint32_t C1_APB1LLPENR_USART7LPEN = (1U << 30);
    inline constexpr uint32_t C1_APB1LLPENR_USART8LPEN_Pos = 31;
    inline constexpr uint32_t C1_APB1LLPENR_USART8LPEN_Msk = 0x80000000;
    inline constexpr uint32_t C1_APB1LLPENR_USART8LPEN = (1U << 31);

    // C1_APB1HLPENR fields
    inline constexpr uint32_t C1_APB1HLPENR_CRSLPEN_Pos = 1;
    inline constexpr uint32_t C1_APB1HLPENR_CRSLPEN_Msk = 0x00000002;
    inline constexpr uint32_t C1_APB1HLPENR_CRSLPEN = (1U << 1);
    inline constexpr uint32_t C1_APB1HLPENR_SWPLPEN_Pos = 2;
    inline constexpr uint32_t C1_APB1HLPENR_SWPLPEN_Msk = 0x00000004;
    inline constexpr uint32_t C1_APB1HLPENR_SWPLPEN = (1U << 2);
    inline constexpr uint32_t C1_APB1HLPENR_OPAMPLPEN_Pos = 4;
    inline constexpr uint32_t C1_APB1HLPENR_OPAMPLPEN_Msk = 0x00000010;
    inline constexpr uint32_t C1_APB1HLPENR_OPAMPLPEN = (1U << 4);
    inline constexpr uint32_t C1_APB1HLPENR_MDIOSLPEN_Pos = 5;
    inline constexpr uint32_t C1_APB1HLPENR_MDIOSLPEN_Msk = 0x00000020;
    inline constexpr uint32_t C1_APB1HLPENR_MDIOSLPEN = (1U << 5);
    inline constexpr uint32_t C1_APB1HLPENR_FDCANLPEN_Pos = 8;
    inline constexpr uint32_t C1_APB1HLPENR_FDCANLPEN_Msk = 0x00000100;
    inline constexpr uint32_t C1_APB1HLPENR_FDCANLPEN = (1U << 8);

    // C1_APB2LPENR fields
    inline constexpr uint32_t C1_APB2LPENR_TIM1LPEN_Pos = 0;
    inline constexpr uint32_t C1_APB2LPENR_TIM1LPEN_Msk = 0x00000001;
    inline constexpr uint32_t C1_APB2LPENR_TIM1LPEN = (1U << 0);
    inline constexpr uint32_t C1_APB2LPENR_TIM8LPEN_Pos = 1;
    inline constexpr uint32_t C1_APB2LPENR_TIM8LPEN_Msk = 0x00000002;
    inline constexpr uint32_t C1_APB2LPENR_TIM8LPEN = (1U << 1);
    inline constexpr uint32_t C1_APB2LPENR_USART1LPEN_Pos = 4;
    inline constexpr uint32_t C1_APB2LPENR_USART1LPEN_Msk = 0x00000010;
    inline constexpr uint32_t C1_APB2LPENR_USART1LPEN = (1U << 4);
    inline constexpr uint32_t C1_APB2LPENR_USART6LPEN_Pos = 5;
    inline constexpr uint32_t C1_APB2LPENR_USART6LPEN_Msk = 0x00000020;
    inline constexpr uint32_t C1_APB2LPENR_USART6LPEN = (1U << 5);
    inline constexpr uint32_t C1_APB2LPENR_SPI1LPEN_Pos = 12;
    inline constexpr uint32_t C1_APB2LPENR_SPI1LPEN_Msk = 0x00001000;
    inline constexpr uint32_t C1_APB2LPENR_SPI1LPEN = (1U << 12);
    inline constexpr uint32_t C1_APB2LPENR_SPI4LPEN_Pos = 13;
    inline constexpr uint32_t C1_APB2LPENR_SPI4LPEN_Msk = 0x00002000;
    inline constexpr uint32_t C1_APB2LPENR_SPI4LPEN = (1U << 13);
    inline constexpr uint32_t C1_APB2LPENR_TIM15LPEN_Pos = 16;
    inline constexpr uint32_t C1_APB2LPENR_TIM15LPEN_Msk = 0x00010000;
    inline constexpr uint32_t C1_APB2LPENR_TIM15LPEN = (1U << 16);
    inline constexpr uint32_t C1_APB2LPENR_TIM16LPEN_Pos = 17;
    inline constexpr uint32_t C1_APB2LPENR_TIM16LPEN_Msk = 0x00020000;
    inline constexpr uint32_t C1_APB2LPENR_TIM16LPEN = (1U << 17);
    inline constexpr uint32_t C1_APB2LPENR_TIM17LPEN_Pos = 18;
    inline constexpr uint32_t C1_APB2LPENR_TIM17LPEN_Msk = 0x00040000;
    inline constexpr uint32_t C1_APB2LPENR_TIM17LPEN = (1U << 18);
    inline constexpr uint32_t C1_APB2LPENR_SPI5LPEN_Pos = 20;
    inline constexpr uint32_t C1_APB2LPENR_SPI5LPEN_Msk = 0x00100000;
    inline constexpr uint32_t C1_APB2LPENR_SPI5LPEN = (1U << 20);
    inline constexpr uint32_t C1_APB2LPENR_SAI1LPEN_Pos = 22;
    inline constexpr uint32_t C1_APB2LPENR_SAI1LPEN_Msk = 0x00400000;
    inline constexpr uint32_t C1_APB2LPENR_SAI1LPEN = (1U << 22);
    inline constexpr uint32_t C1_APB2LPENR_SAI2LPEN_Pos = 23;
    inline constexpr uint32_t C1_APB2LPENR_SAI2LPEN_Msk = 0x00800000;
    inline constexpr uint32_t C1_APB2LPENR_SAI2LPEN = (1U << 23);
    inline constexpr uint32_t C1_APB2LPENR_SAI3LPEN_Pos = 24;
    inline constexpr uint32_t C1_APB2LPENR_SAI3LPEN_Msk = 0x01000000;
    inline constexpr uint32_t C1_APB2LPENR_SAI3LPEN = (1U << 24);
    inline constexpr uint32_t C1_APB2LPENR_DFSDM1LPEN_Pos = 28;
    inline constexpr uint32_t C1_APB2LPENR_DFSDM1LPEN_Msk = 0x10000000;
    inline constexpr uint32_t C1_APB2LPENR_DFSDM1LPEN = (1U << 28);
    inline constexpr uint32_t C1_APB2LPENR_HRTIMLPEN_Pos = 29;
    inline constexpr uint32_t C1_APB2LPENR_HRTIMLPEN_Msk = 0x20000000;
    inline constexpr uint32_t C1_APB2LPENR_HRTIMLPEN = (1U << 29);

    // C1_APB4LPENR fields
    inline constexpr uint32_t C1_APB4LPENR_SYSCFGLPEN_Pos = 1;
    inline constexpr uint32_t C1_APB4LPENR_SYSCFGLPEN_Msk = 0x00000002;
    inline constexpr uint32_t C1_APB4LPENR_SYSCFGLPEN = (1U << 1);
    inline constexpr uint32_t C1_APB4LPENR_LPUART1LPEN_Pos = 3;
    inline constexpr uint32_t C1_APB4LPENR_LPUART1LPEN_Msk = 0x00000008;
    inline constexpr uint32_t C1_APB4LPENR_LPUART1LPEN = (1U << 3);
    inline constexpr uint32_t C1_APB4LPENR_SPI6LPEN_Pos = 5;
    inline constexpr uint32_t C1_APB4LPENR_SPI6LPEN_Msk = 0x00000020;
    inline constexpr uint32_t C1_APB4LPENR_SPI6LPEN = (1U << 5);
    inline constexpr uint32_t C1_APB4LPENR_I2C4LPEN_Pos = 7;
    inline constexpr uint32_t C1_APB4LPENR_I2C4LPEN_Msk = 0x00000080;
    inline constexpr uint32_t C1_APB4LPENR_I2C4LPEN = (1U << 7);
    inline constexpr uint32_t C1_APB4LPENR_LPTIM2LPEN_Pos = 9;
    inline constexpr uint32_t C1_APB4LPENR_LPTIM2LPEN_Msk = 0x00000200;
    inline constexpr uint32_t C1_APB4LPENR_LPTIM2LPEN = (1U << 9);
    inline constexpr uint32_t C1_APB4LPENR_LPTIM3LPEN_Pos = 10;
    inline constexpr uint32_t C1_APB4LPENR_LPTIM3LPEN_Msk = 0x00000400;
    inline constexpr uint32_t C1_APB4LPENR_LPTIM3LPEN = (1U << 10);
    inline constexpr uint32_t C1_APB4LPENR_LPTIM4LPEN_Pos = 11;
    inline constexpr uint32_t C1_APB4LPENR_LPTIM4LPEN_Msk = 0x00000800;
    inline constexpr uint32_t C1_APB4LPENR_LPTIM4LPEN = (1U << 11);
    inline constexpr uint32_t C1_APB4LPENR_LPTIM5LPEN_Pos = 12;
    inline constexpr uint32_t C1_APB4LPENR_LPTIM5LPEN_Msk = 0x00001000;
    inline constexpr uint32_t C1_APB4LPENR_LPTIM5LPEN = (1U << 12);
    inline constexpr uint32_t C1_APB4LPENR_COMP12LPEN_Pos = 14;
    inline constexpr uint32_t C1_APB4LPENR_COMP12LPEN_Msk = 0x00004000;
    inline constexpr uint32_t C1_APB4LPENR_COMP12LPEN = (1U << 14);
    inline constexpr uint32_t C1_APB4LPENR_VREFLPEN_Pos = 15;
    inline constexpr uint32_t C1_APB4LPENR_VREFLPEN_Msk = 0x00008000;
    inline constexpr uint32_t C1_APB4LPENR_VREFLPEN = (1U << 15);
    inline constexpr uint32_t C1_APB4LPENR_RTCAPBLPEN_Pos = 16;
    inline constexpr uint32_t C1_APB4LPENR_RTCAPBLPEN_Msk = 0x00010000;
    inline constexpr uint32_t C1_APB4LPENR_RTCAPBLPEN = (1U << 16);
    inline constexpr uint32_t C1_APB4LPENR_SAI4LPEN_Pos = 21;
    inline constexpr uint32_t C1_APB4LPENR_SAI4LPEN_Msk = 0x00200000;
    inline constexpr uint32_t C1_APB4LPENR_SAI4LPEN = (1U << 21);

} // namespace RCC

// Peripheral instances (lowercase to avoid namespace collision)
namespace periph {
    inline auto* const rcc = reinterpret_cast<RCC_t*>(0x58024400);
} // namespace periph

} // namespace sbl::hw::reg

#endif // SBL_HW_REG_STM32H750_RCC_HPP
