/**
 * @file stm32h750.hpp
 * @brief Register definitions for STM32H750
 *
 * Generated from: stm32h750.svd
 * Generator: sbl-svd-tools
 * Generated: 2025-12-14T22:37:49.440693
 *
 * DO NOT EDIT - Regenerate from SVD source
 */

#ifndef SBL_HW_REG_STM32H750_ADC1_ADC2_ADC3_HPP
#define SBL_HW_REG_STM32H750_ADC1_ADC2_ADC3_HPP

#include <cstdint>

namespace sbl::hw::reg {

/** Analog to Digital Converter */
struct ADC3_t {
    volatile uint32_t ISR;  ///< ADC interrupt and status           register
    volatile uint32_t IER;  ///< ADC interrupt enable register
    volatile uint32_t CR;  ///< ADC control register
    volatile uint32_t CCR;  ///< ADC common control register
    volatile uint32_t CFGR;  ///< ADC configuration register 1
    volatile uint32_t CFGR2;  ///< ADC configuration register 2
    volatile uint32_t SMPR1;  ///< ADC sampling time register 1
    volatile uint32_t SMPR2;  ///< ADC sampling time register 2
    volatile uint32_t PCSEL;  ///< ADC pre channel selection           register
    volatile uint32_t LTR1;  ///< ADC analog watchdog 1 threshold           register
    volatile uint32_t LHTR1;  ///< ADC analog watchdog 2 threshold           register
    uint8_t _reserved0[8];
    volatile uint32_t SQR1;  ///< ADC group regular sequencer ranks register           1
    volatile uint32_t SQR2;  ///< ADC group regular sequencer ranks register           2
    volatile uint32_t SQR3;  ///< ADC group regular sequencer ranks register           3
    volatile uint32_t SQR4;  ///< ADC group regular sequencer ranks register           4
    volatile uint32_t DR;  ///< ADC group regular conversion data           register
    uint8_t _reserved1[8];
    volatile uint32_t JSQR;  ///< ADC group injected sequencer           register
    uint8_t _reserved2[16];
    volatile uint32_t OFR1;  ///< ADC offset number 1 register
    volatile uint32_t OFR2;  ///< ADC offset number 2 register
    volatile uint32_t OFR3;  ///< ADC offset number 3 register
    volatile uint32_t OFR4;  ///< ADC offset number 4 register
    uint8_t _reserved3[16];
    volatile uint32_t JDR1;  ///< ADC group injected sequencer rank 1           register
    volatile uint32_t JDR2;  ///< ADC group injected sequencer rank 2           register
    volatile uint32_t JDR3;  ///< ADC group injected sequencer rank 3           register
    volatile uint32_t JDR4;  ///< ADC group injected sequencer rank 4           register
    uint8_t _reserved4[16];
    volatile uint32_t AWD2CR;  ///< ADC analog watchdog 2 configuration           register
    volatile uint32_t AWD3CR;  ///< ADC analog watchdog 3 configuration           register
    uint8_t _reserved5[8];
    volatile uint32_t LTR2;  ///< ADC watchdog lower threshold register           2
    volatile uint32_t HTR2;  ///< ADC watchdog higher threshold register           2
    volatile uint32_t LTR3;  ///< ADC watchdog lower threshold register           3
    volatile uint32_t HTR3;  ///< ADC watchdog higher threshold register           3
    volatile uint32_t DIFSEL;  ///< ADC channel differential or single-ended           mode s...
    volatile uint32_t CALFACT;  ///< ADC calibration factors           register
    volatile uint32_t CALFACT2;  ///< ADC Calibration Factor register           2
};

/** Analog to Digital Converter */
struct ADC1_t {
    volatile uint32_t ISR;  ///< ADC interrupt and status           register
    volatile uint32_t IER;  ///< ADC interrupt enable register
    volatile uint32_t CR;  ///< ADC control register
    volatile uint32_t CCR;  ///< ADC common control register
    volatile uint32_t CFGR;  ///< ADC configuration register 1
    volatile uint32_t CFGR2;  ///< ADC configuration register 2
    volatile uint32_t SMPR1;  ///< ADC sampling time register 1
    volatile uint32_t SMPR2;  ///< ADC sampling time register 2
    volatile uint32_t PCSEL;  ///< ADC pre channel selection           register
    volatile uint32_t LTR1;  ///< ADC analog watchdog 1 threshold           register
    volatile uint32_t LHTR1;  ///< ADC analog watchdog 2 threshold           register
    uint8_t _reserved0[8];
    volatile uint32_t SQR1;  ///< ADC group regular sequencer ranks register           1
    volatile uint32_t SQR2;  ///< ADC group regular sequencer ranks register           2
    volatile uint32_t SQR3;  ///< ADC group regular sequencer ranks register           3
    volatile uint32_t SQR4;  ///< ADC group regular sequencer ranks register           4
    volatile uint32_t DR;  ///< ADC group regular conversion data           register
    uint8_t _reserved1[8];
    volatile uint32_t JSQR;  ///< ADC group injected sequencer           register
    uint8_t _reserved2[16];
    volatile uint32_t OFR1;  ///< ADC offset number 1 register
    volatile uint32_t OFR2;  ///< ADC offset number 2 register
    volatile uint32_t OFR3;  ///< ADC offset number 3 register
    volatile uint32_t OFR4;  ///< ADC offset number 4 register
    uint8_t _reserved3[16];
    volatile uint32_t JDR1;  ///< ADC group injected sequencer rank 1           register
    volatile uint32_t JDR2;  ///< ADC group injected sequencer rank 2           register
    volatile uint32_t JDR3;  ///< ADC group injected sequencer rank 3           register
    volatile uint32_t JDR4;  ///< ADC group injected sequencer rank 4           register
    uint8_t _reserved4[16];
    volatile uint32_t AWD2CR;  ///< ADC analog watchdog 2 configuration           register
    volatile uint32_t AWD3CR;  ///< ADC analog watchdog 3 configuration           register
    uint8_t _reserved5[8];
    volatile uint32_t LTR2;  ///< ADC watchdog lower threshold register           2
    volatile uint32_t HTR2;  ///< ADC watchdog higher threshold register           2
    volatile uint32_t LTR3;  ///< ADC watchdog lower threshold register           3
    volatile uint32_t HTR3;  ///< ADC watchdog higher threshold register           3
    volatile uint32_t DIFSEL;  ///< ADC channel differential or single-ended           mode s...
    volatile uint32_t CALFACT;  ///< ADC calibration factors           register
    volatile uint32_t CALFACT2;  ///< ADC Calibration Factor register           2
};

/** Analog to Digital Converter */
struct ADC2_t {
    volatile uint32_t ISR;  ///< ADC interrupt and status           register
    volatile uint32_t IER;  ///< ADC interrupt enable register
    volatile uint32_t CR;  ///< ADC control register
    volatile uint32_t CCR;  ///< ADC common control register
    volatile uint32_t CFGR;  ///< ADC configuration register 1
    volatile uint32_t CFGR2;  ///< ADC configuration register 2
    volatile uint32_t SMPR1;  ///< ADC sampling time register 1
    volatile uint32_t SMPR2;  ///< ADC sampling time register 2
    volatile uint32_t PCSEL;  ///< ADC pre channel selection           register
    volatile uint32_t LTR1;  ///< ADC analog watchdog 1 threshold           register
    volatile uint32_t LHTR1;  ///< ADC analog watchdog 2 threshold           register
    uint8_t _reserved0[8];
    volatile uint32_t SQR1;  ///< ADC group regular sequencer ranks register           1
    volatile uint32_t SQR2;  ///< ADC group regular sequencer ranks register           2
    volatile uint32_t SQR3;  ///< ADC group regular sequencer ranks register           3
    volatile uint32_t SQR4;  ///< ADC group regular sequencer ranks register           4
    volatile uint32_t DR;  ///< ADC group regular conversion data           register
    uint8_t _reserved1[8];
    volatile uint32_t JSQR;  ///< ADC group injected sequencer           register
    uint8_t _reserved2[16];
    volatile uint32_t OFR1;  ///< ADC offset number 1 register
    volatile uint32_t OFR2;  ///< ADC offset number 2 register
    volatile uint32_t OFR3;  ///< ADC offset number 3 register
    volatile uint32_t OFR4;  ///< ADC offset number 4 register
    uint8_t _reserved3[16];
    volatile uint32_t JDR1;  ///< ADC group injected sequencer rank 1           register
    volatile uint32_t JDR2;  ///< ADC group injected sequencer rank 2           register
    volatile uint32_t JDR3;  ///< ADC group injected sequencer rank 3           register
    volatile uint32_t JDR4;  ///< ADC group injected sequencer rank 4           register
    uint8_t _reserved4[16];
    volatile uint32_t AWD2CR;  ///< ADC analog watchdog 2 configuration           register
    volatile uint32_t AWD3CR;  ///< ADC analog watchdog 3 configuration           register
    uint8_t _reserved5[8];
    volatile uint32_t LTR2;  ///< ADC watchdog lower threshold register           2
    volatile uint32_t HTR2;  ///< ADC watchdog higher threshold register           2
    volatile uint32_t LTR3;  ///< ADC watchdog lower threshold register           3
    volatile uint32_t HTR3;  ///< ADC watchdog higher threshold register           3
    volatile uint32_t DIFSEL;  ///< ADC channel differential or single-ended           mode s...
    volatile uint32_t CALFACT;  ///< ADC calibration factors           register
    volatile uint32_t CALFACT2;  ///< ADC Calibration Factor register           2
};

/** Analog-to-Digital Converter */
struct ADC3_Common_t {
    volatile uint32_t CSR;  ///< ADC Common status register
    uint8_t _reserved0[4];
    volatile uint32_t CCR;  ///< ADC common control register
    volatile uint32_t CDR;  ///< ADC common regular data register for dual           and t...
};

/** Analog-to-Digital Converter */
struct ADC12_Common_t {
    volatile uint32_t CSR;  ///< ADC Common status register
    uint8_t _reserved0[4];
    volatile uint32_t CCR;  ///< ADC common control register
    volatile uint32_t CDR;  ///< ADC common regular data register for dual           and t...
};

namespace ADC3 {
    // ISR fields
    inline constexpr uint32_t ISR_ADRDY_Pos = 0;
    inline constexpr uint32_t ISR_ADRDY_Msk = 0x00000001;
    inline constexpr uint32_t ISR_ADRDY = (1U << 0);
    inline constexpr uint32_t ISR_EOSMP_Pos = 1;
    inline constexpr uint32_t ISR_EOSMP_Msk = 0x00000002;
    inline constexpr uint32_t ISR_EOSMP = (1U << 1);
    inline constexpr uint32_t ISR_EOC_Pos = 2;
    inline constexpr uint32_t ISR_EOC_Msk = 0x00000004;
    inline constexpr uint32_t ISR_EOC = (1U << 2);
    inline constexpr uint32_t ISR_EOS_Pos = 3;
    inline constexpr uint32_t ISR_EOS_Msk = 0x00000008;
    inline constexpr uint32_t ISR_EOS = (1U << 3);
    inline constexpr uint32_t ISR_OVR_Pos = 4;
    inline constexpr uint32_t ISR_OVR_Msk = 0x00000010;
    inline constexpr uint32_t ISR_OVR = (1U << 4);
    inline constexpr uint32_t ISR_JEOC_Pos = 5;
    inline constexpr uint32_t ISR_JEOC_Msk = 0x00000020;
    inline constexpr uint32_t ISR_JEOC = (1U << 5);
    inline constexpr uint32_t ISR_JEOS_Pos = 6;
    inline constexpr uint32_t ISR_JEOS_Msk = 0x00000040;
    inline constexpr uint32_t ISR_JEOS = (1U << 6);
    inline constexpr uint32_t ISR_AWD1_Pos = 7;
    inline constexpr uint32_t ISR_AWD1_Msk = 0x00000080;
    inline constexpr uint32_t ISR_AWD1 = (1U << 7);
    inline constexpr uint32_t ISR_AWD2_Pos = 8;
    inline constexpr uint32_t ISR_AWD2_Msk = 0x00000100;
    inline constexpr uint32_t ISR_AWD2 = (1U << 8);
    inline constexpr uint32_t ISR_AWD3_Pos = 9;
    inline constexpr uint32_t ISR_AWD3_Msk = 0x00000200;
    inline constexpr uint32_t ISR_AWD3 = (1U << 9);
    inline constexpr uint32_t ISR_JQOVF_Pos = 10;
    inline constexpr uint32_t ISR_JQOVF_Msk = 0x00000400;
    inline constexpr uint32_t ISR_JQOVF = (1U << 10);

    // IER fields
    inline constexpr uint32_t IER_ADRDYIE_Pos = 0;
    inline constexpr uint32_t IER_ADRDYIE_Msk = 0x00000001;
    inline constexpr uint32_t IER_ADRDYIE = (1U << 0);
    inline constexpr uint32_t IER_EOSMPIE_Pos = 1;
    inline constexpr uint32_t IER_EOSMPIE_Msk = 0x00000002;
    inline constexpr uint32_t IER_EOSMPIE = (1U << 1);
    inline constexpr uint32_t IER_EOCIE_Pos = 2;
    inline constexpr uint32_t IER_EOCIE_Msk = 0x00000004;
    inline constexpr uint32_t IER_EOCIE = (1U << 2);
    inline constexpr uint32_t IER_EOSIE_Pos = 3;
    inline constexpr uint32_t IER_EOSIE_Msk = 0x00000008;
    inline constexpr uint32_t IER_EOSIE = (1U << 3);
    inline constexpr uint32_t IER_OVRIE_Pos = 4;
    inline constexpr uint32_t IER_OVRIE_Msk = 0x00000010;
    inline constexpr uint32_t IER_OVRIE = (1U << 4);
    inline constexpr uint32_t IER_JEOCIE_Pos = 5;
    inline constexpr uint32_t IER_JEOCIE_Msk = 0x00000020;
    inline constexpr uint32_t IER_JEOCIE = (1U << 5);
    inline constexpr uint32_t IER_JEOSIE_Pos = 6;
    inline constexpr uint32_t IER_JEOSIE_Msk = 0x00000040;
    inline constexpr uint32_t IER_JEOSIE = (1U << 6);
    inline constexpr uint32_t IER_AWD1IE_Pos = 7;
    inline constexpr uint32_t IER_AWD1IE_Msk = 0x00000080;
    inline constexpr uint32_t IER_AWD1IE = (1U << 7);
    inline constexpr uint32_t IER_AWD2IE_Pos = 8;
    inline constexpr uint32_t IER_AWD2IE_Msk = 0x00000100;
    inline constexpr uint32_t IER_AWD2IE = (1U << 8);
    inline constexpr uint32_t IER_AWD3IE_Pos = 9;
    inline constexpr uint32_t IER_AWD3IE_Msk = 0x00000200;
    inline constexpr uint32_t IER_AWD3IE = (1U << 9);
    inline constexpr uint32_t IER_JQOVFIE_Pos = 10;
    inline constexpr uint32_t IER_JQOVFIE_Msk = 0x00000400;
    inline constexpr uint32_t IER_JQOVFIE = (1U << 10);

    // CR fields
    inline constexpr uint32_t CR_ADEN_Pos = 0;
    inline constexpr uint32_t CR_ADEN_Msk = 0x00000001;
    inline constexpr uint32_t CR_ADEN = (1U << 0);
    inline constexpr uint32_t CR_ADDIS_Pos = 1;
    inline constexpr uint32_t CR_ADDIS_Msk = 0x00000002;
    inline constexpr uint32_t CR_ADDIS = (1U << 1);
    inline constexpr uint32_t CR_ADSTART_Pos = 2;
    inline constexpr uint32_t CR_ADSTART_Msk = 0x00000004;
    inline constexpr uint32_t CR_ADSTART = (1U << 2);
    inline constexpr uint32_t CR_JADSTART_Pos = 3;
    inline constexpr uint32_t CR_JADSTART_Msk = 0x00000008;
    inline constexpr uint32_t CR_JADSTART = (1U << 3);
    inline constexpr uint32_t CR_ADSTP_Pos = 4;
    inline constexpr uint32_t CR_ADSTP_Msk = 0x00000010;
    inline constexpr uint32_t CR_ADSTP = (1U << 4);
    inline constexpr uint32_t CR_JADSTP_Pos = 5;
    inline constexpr uint32_t CR_JADSTP_Msk = 0x00000020;
    inline constexpr uint32_t CR_JADSTP = (1U << 5);
    inline constexpr uint32_t CR_BOOST_Pos = 8;
    inline constexpr uint32_t CR_BOOST_Msk = 0x00000100;
    inline constexpr uint32_t CR_BOOST = (1U << 8);
    inline constexpr uint32_t CR_ADCALLIN_Pos = 16;
    inline constexpr uint32_t CR_ADCALLIN_Msk = 0x00010000;
    inline constexpr uint32_t CR_ADCALLIN = (1U << 16);
    inline constexpr uint32_t CR_LINCALRDYW1_Pos = 22;
    inline constexpr uint32_t CR_LINCALRDYW1_Msk = 0x00400000;
    inline constexpr uint32_t CR_LINCALRDYW1 = (1U << 22);
    inline constexpr uint32_t CR_LINCALRDYW2_Pos = 23;
    inline constexpr uint32_t CR_LINCALRDYW2_Msk = 0x00800000;
    inline constexpr uint32_t CR_LINCALRDYW2 = (1U << 23);
    inline constexpr uint32_t CR_LINCALRDYW3_Pos = 24;
    inline constexpr uint32_t CR_LINCALRDYW3_Msk = 0x01000000;
    inline constexpr uint32_t CR_LINCALRDYW3 = (1U << 24);
    inline constexpr uint32_t CR_LINCALRDYW4_Pos = 25;
    inline constexpr uint32_t CR_LINCALRDYW4_Msk = 0x02000000;
    inline constexpr uint32_t CR_LINCALRDYW4 = (1U << 25);
    inline constexpr uint32_t CR_LINCALRDYW5_Pos = 26;
    inline constexpr uint32_t CR_LINCALRDYW5_Msk = 0x04000000;
    inline constexpr uint32_t CR_LINCALRDYW5 = (1U << 26);
    inline constexpr uint32_t CR_LINCALRDYW6_Pos = 27;
    inline constexpr uint32_t CR_LINCALRDYW6_Msk = 0x08000000;
    inline constexpr uint32_t CR_LINCALRDYW6 = (1U << 27);
    inline constexpr uint32_t CR_ADVREGEN_Pos = 28;
    inline constexpr uint32_t CR_ADVREGEN_Msk = 0x10000000;
    inline constexpr uint32_t CR_ADVREGEN = (1U << 28);
    inline constexpr uint32_t CR_DEEPPWD_Pos = 29;
    inline constexpr uint32_t CR_DEEPPWD_Msk = 0x20000000;
    inline constexpr uint32_t CR_DEEPPWD = (1U << 29);
    inline constexpr uint32_t CR_ADCALDIF_Pos = 30;
    inline constexpr uint32_t CR_ADCALDIF_Msk = 0x40000000;
    inline constexpr uint32_t CR_ADCALDIF = (1U << 30);
    inline constexpr uint32_t CR_ADCAL_Pos = 31;
    inline constexpr uint32_t CR_ADCAL_Msk = 0x80000000;
    inline constexpr uint32_t CR_ADCAL = (1U << 31);

    // CCR fields
    inline constexpr uint32_t CCR_CKMODE_Pos = 16;
    inline constexpr uint32_t CCR_CKMODE_Msk = 0x00030000;
    inline constexpr uint32_t CCR_PRESC_Pos = 18;
    inline constexpr uint32_t CCR_PRESC_Msk = 0x003C0000;
    inline constexpr uint32_t CCR_VREFEN_Pos = 22;
    inline constexpr uint32_t CCR_VREFEN_Msk = 0x00400000;
    inline constexpr uint32_t CCR_VREFEN = (1U << 22);
    inline constexpr uint32_t CCR_VSENSEEN_Pos = 23;
    inline constexpr uint32_t CCR_VSENSEEN_Msk = 0x00800000;
    inline constexpr uint32_t CCR_VSENSEEN = (1U << 23);
    inline constexpr uint32_t CCR_VBATEN_Pos = 24;
    inline constexpr uint32_t CCR_VBATEN_Msk = 0x01000000;
    inline constexpr uint32_t CCR_VBATEN = (1U << 24);

    // CFGR fields
    inline constexpr uint32_t CFGR_DMNGT_Pos = 0;
    inline constexpr uint32_t CFGR_DMNGT_Msk = 0x00000003;
    inline constexpr uint32_t CFGR_RES_Pos = 2;
    inline constexpr uint32_t CFGR_RES_Msk = 0x0000000C;
    inline constexpr uint32_t CFGR_EXTSEL_Pos = 5;
    inline constexpr uint32_t CFGR_EXTSEL_Msk = 0x000003E0;
    inline constexpr uint32_t CFGR_EXTEN_Pos = 10;
    inline constexpr uint32_t CFGR_EXTEN_Msk = 0x00000C00;
    inline constexpr uint32_t CFGR_OVRMOD_Pos = 12;
    inline constexpr uint32_t CFGR_OVRMOD_Msk = 0x00001000;
    inline constexpr uint32_t CFGR_OVRMOD = (1U << 12);
    inline constexpr uint32_t CFGR_CONT_Pos = 13;
    inline constexpr uint32_t CFGR_CONT_Msk = 0x00002000;
    inline constexpr uint32_t CFGR_CONT = (1U << 13);
    inline constexpr uint32_t CFGR_AUTDLY_Pos = 14;
    inline constexpr uint32_t CFGR_AUTDLY_Msk = 0x00004000;
    inline constexpr uint32_t CFGR_AUTDLY = (1U << 14);
    inline constexpr uint32_t CFGR_DISCEN_Pos = 16;
    inline constexpr uint32_t CFGR_DISCEN_Msk = 0x00010000;
    inline constexpr uint32_t CFGR_DISCEN = (1U << 16);
    inline constexpr uint32_t CFGR_DISCNUM_Pos = 17;
    inline constexpr uint32_t CFGR_DISCNUM_Msk = 0x000E0000;
    inline constexpr uint32_t CFGR_JDISCEN_Pos = 20;
    inline constexpr uint32_t CFGR_JDISCEN_Msk = 0x00100000;
    inline constexpr uint32_t CFGR_JDISCEN = (1U << 20);
    inline constexpr uint32_t CFGR_JQM_Pos = 21;
    inline constexpr uint32_t CFGR_JQM_Msk = 0x00200000;
    inline constexpr uint32_t CFGR_JQM = (1U << 21);
    inline constexpr uint32_t CFGR_AWD1SGL_Pos = 22;
    inline constexpr uint32_t CFGR_AWD1SGL_Msk = 0x00400000;
    inline constexpr uint32_t CFGR_AWD1SGL = (1U << 22);
    inline constexpr uint32_t CFGR_AWD1EN_Pos = 23;
    inline constexpr uint32_t CFGR_AWD1EN_Msk = 0x00800000;
    inline constexpr uint32_t CFGR_AWD1EN = (1U << 23);
    inline constexpr uint32_t CFGR_JAWD1EN_Pos = 24;
    inline constexpr uint32_t CFGR_JAWD1EN_Msk = 0x01000000;
    inline constexpr uint32_t CFGR_JAWD1EN = (1U << 24);
    inline constexpr uint32_t CFGR_JAUTO_Pos = 25;
    inline constexpr uint32_t CFGR_JAUTO_Msk = 0x02000000;
    inline constexpr uint32_t CFGR_JAUTO = (1U << 25);
    inline constexpr uint32_t CFGR_AWDCH1CH_Pos = 26;
    inline constexpr uint32_t CFGR_AWDCH1CH_Msk = 0x7C000000;
    inline constexpr uint32_t CFGR_JQDIS_Pos = 31;
    inline constexpr uint32_t CFGR_JQDIS_Msk = 0x80000000;
    inline constexpr uint32_t CFGR_JQDIS = (1U << 31);

    // CFGR2 fields
    inline constexpr uint32_t CFGR2_ROVSE_Pos = 0;
    inline constexpr uint32_t CFGR2_ROVSE_Msk = 0x00000001;
    inline constexpr uint32_t CFGR2_ROVSE = (1U << 0);
    inline constexpr uint32_t CFGR2_JOVSE_Pos = 1;
    inline constexpr uint32_t CFGR2_JOVSE_Msk = 0x00000002;
    inline constexpr uint32_t CFGR2_JOVSE = (1U << 1);
    inline constexpr uint32_t CFGR2_OVSS_Pos = 5;
    inline constexpr uint32_t CFGR2_OVSS_Msk = 0x000001E0;
    inline constexpr uint32_t CFGR2_TROVS_Pos = 9;
    inline constexpr uint32_t CFGR2_TROVS_Msk = 0x00000200;
    inline constexpr uint32_t CFGR2_TROVS = (1U << 9);
    inline constexpr uint32_t CFGR2_ROVSM_Pos = 10;
    inline constexpr uint32_t CFGR2_ROVSM_Msk = 0x00000400;
    inline constexpr uint32_t CFGR2_ROVSM = (1U << 10);
    inline constexpr uint32_t CFGR2_RSHIFT1_Pos = 11;
    inline constexpr uint32_t CFGR2_RSHIFT1_Msk = 0x00000800;
    inline constexpr uint32_t CFGR2_RSHIFT1 = (1U << 11);
    inline constexpr uint32_t CFGR2_RSHIFT2_Pos = 12;
    inline constexpr uint32_t CFGR2_RSHIFT2_Msk = 0x00001000;
    inline constexpr uint32_t CFGR2_RSHIFT2 = (1U << 12);
    inline constexpr uint32_t CFGR2_RSHIFT3_Pos = 13;
    inline constexpr uint32_t CFGR2_RSHIFT3_Msk = 0x00002000;
    inline constexpr uint32_t CFGR2_RSHIFT3 = (1U << 13);
    inline constexpr uint32_t CFGR2_RSHIFT4_Pos = 14;
    inline constexpr uint32_t CFGR2_RSHIFT4_Msk = 0x00004000;
    inline constexpr uint32_t CFGR2_RSHIFT4 = (1U << 14);
    inline constexpr uint32_t CFGR2_OSR_Pos = 16;
    inline constexpr uint32_t CFGR2_OSR_Msk = 0x03FF0000;
    inline constexpr uint32_t CFGR2_LSHIFT_Pos = 28;
    inline constexpr uint32_t CFGR2_LSHIFT_Msk = 0xF0000000;

    // SMPR1 fields
    inline constexpr uint32_t SMPR1_SMP1_Pos = 3;
    inline constexpr uint32_t SMPR1_SMP1_Msk = 0x00000038;
    inline constexpr uint32_t SMPR1_SMP2_Pos = 6;
    inline constexpr uint32_t SMPR1_SMP2_Msk = 0x000001C0;
    inline constexpr uint32_t SMPR1_SMP3_Pos = 9;
    inline constexpr uint32_t SMPR1_SMP3_Msk = 0x00000E00;
    inline constexpr uint32_t SMPR1_SMP4_Pos = 12;
    inline constexpr uint32_t SMPR1_SMP4_Msk = 0x00007000;
    inline constexpr uint32_t SMPR1_SMP5_Pos = 15;
    inline constexpr uint32_t SMPR1_SMP5_Msk = 0x00038000;
    inline constexpr uint32_t SMPR1_SMP6_Pos = 18;
    inline constexpr uint32_t SMPR1_SMP6_Msk = 0x001C0000;
    inline constexpr uint32_t SMPR1_SMP7_Pos = 21;
    inline constexpr uint32_t SMPR1_SMP7_Msk = 0x00E00000;
    inline constexpr uint32_t SMPR1_SMP8_Pos = 24;
    inline constexpr uint32_t SMPR1_SMP8_Msk = 0x07000000;
    inline constexpr uint32_t SMPR1_SMP9_Pos = 27;
    inline constexpr uint32_t SMPR1_SMP9_Msk = 0x38000000;

    // SMPR2 fields
    inline constexpr uint32_t SMPR2_SMP10_Pos = 0;
    inline constexpr uint32_t SMPR2_SMP10_Msk = 0x00000007;
    inline constexpr uint32_t SMPR2_SMP11_Pos = 3;
    inline constexpr uint32_t SMPR2_SMP11_Msk = 0x00000038;
    inline constexpr uint32_t SMPR2_SMP12_Pos = 6;
    inline constexpr uint32_t SMPR2_SMP12_Msk = 0x000001C0;
    inline constexpr uint32_t SMPR2_SMP13_Pos = 9;
    inline constexpr uint32_t SMPR2_SMP13_Msk = 0x00000E00;
    inline constexpr uint32_t SMPR2_SMP14_Pos = 12;
    inline constexpr uint32_t SMPR2_SMP14_Msk = 0x00007000;
    inline constexpr uint32_t SMPR2_SMP15_Pos = 15;
    inline constexpr uint32_t SMPR2_SMP15_Msk = 0x00038000;
    inline constexpr uint32_t SMPR2_SMP16_Pos = 18;
    inline constexpr uint32_t SMPR2_SMP16_Msk = 0x001C0000;
    inline constexpr uint32_t SMPR2_SMP17_Pos = 21;
    inline constexpr uint32_t SMPR2_SMP17_Msk = 0x00E00000;
    inline constexpr uint32_t SMPR2_SMP18_Pos = 24;
    inline constexpr uint32_t SMPR2_SMP18_Msk = 0x07000000;
    inline constexpr uint32_t SMPR2_SMP19_Pos = 27;
    inline constexpr uint32_t SMPR2_SMP19_Msk = 0x38000000;

    // PCSEL fields
    inline constexpr uint32_t PCSEL_PCSEL_Pos = 0;
    inline constexpr uint32_t PCSEL_PCSEL_Msk = 0x000FFFFF;

    // LTR1 fields
    inline constexpr uint32_t LTR1_LTR1_Pos = 0;
    inline constexpr uint32_t LTR1_LTR1_Msk = 0x03FFFFFF;

    // LHTR1 fields
    inline constexpr uint32_t LHTR1_LHTR1_Pos = 0;
    inline constexpr uint32_t LHTR1_LHTR1_Msk = 0x03FFFFFF;

    // SQR1 fields
    inline constexpr uint32_t SQR1_L3_Pos = 0;
    inline constexpr uint32_t SQR1_L3_Msk = 0x0000000F;
    inline constexpr uint32_t SQR1_SQ1_Pos = 6;
    inline constexpr uint32_t SQR1_SQ1_Msk = 0x000007C0;
    inline constexpr uint32_t SQR1_SQ2_Pos = 12;
    inline constexpr uint32_t SQR1_SQ2_Msk = 0x0001F000;
    inline constexpr uint32_t SQR1_SQ3_Pos = 18;
    inline constexpr uint32_t SQR1_SQ3_Msk = 0x007C0000;
    inline constexpr uint32_t SQR1_SQ4_Pos = 24;
    inline constexpr uint32_t SQR1_SQ4_Msk = 0x1F000000;

    // SQR2 fields
    inline constexpr uint32_t SQR2_SQ5_Pos = 0;
    inline constexpr uint32_t SQR2_SQ5_Msk = 0x0000001F;
    inline constexpr uint32_t SQR2_SQ6_Pos = 6;
    inline constexpr uint32_t SQR2_SQ6_Msk = 0x000007C0;
    inline constexpr uint32_t SQR2_SQ7_Pos = 12;
    inline constexpr uint32_t SQR2_SQ7_Msk = 0x0001F000;
    inline constexpr uint32_t SQR2_SQ8_Pos = 18;
    inline constexpr uint32_t SQR2_SQ8_Msk = 0x007C0000;
    inline constexpr uint32_t SQR2_SQ9_Pos = 24;
    inline constexpr uint32_t SQR2_SQ9_Msk = 0x1F000000;

    // SQR3 fields
    inline constexpr uint32_t SQR3_SQ10_Pos = 0;
    inline constexpr uint32_t SQR3_SQ10_Msk = 0x0000001F;
    inline constexpr uint32_t SQR3_SQ11_Pos = 6;
    inline constexpr uint32_t SQR3_SQ11_Msk = 0x000007C0;
    inline constexpr uint32_t SQR3_SQ12_Pos = 12;
    inline constexpr uint32_t SQR3_SQ12_Msk = 0x0001F000;
    inline constexpr uint32_t SQR3_SQ13_Pos = 18;
    inline constexpr uint32_t SQR3_SQ13_Msk = 0x007C0000;
    inline constexpr uint32_t SQR3_SQ14_Pos = 24;
    inline constexpr uint32_t SQR3_SQ14_Msk = 0x1F000000;

    // SQR4 fields
    inline constexpr uint32_t SQR4_SQ15_Pos = 0;
    inline constexpr uint32_t SQR4_SQ15_Msk = 0x0000001F;
    inline constexpr uint32_t SQR4_SQ16_Pos = 6;
    inline constexpr uint32_t SQR4_SQ16_Msk = 0x000007C0;

    // DR fields
    inline constexpr uint32_t DR_RDATA_Pos = 0;
    inline constexpr uint32_t DR_RDATA_Msk = 0x0000FFFF;

    // JSQR fields
    inline constexpr uint32_t JSQR_JL_Pos = 0;
    inline constexpr uint32_t JSQR_JL_Msk = 0x00000003;
    inline constexpr uint32_t JSQR_JEXTSEL_Pos = 2;
    inline constexpr uint32_t JSQR_JEXTSEL_Msk = 0x0000007C;
    inline constexpr uint32_t JSQR_JEXTEN_Pos = 7;
    inline constexpr uint32_t JSQR_JEXTEN_Msk = 0x00000180;
    inline constexpr uint32_t JSQR_JSQ1_Pos = 9;
    inline constexpr uint32_t JSQR_JSQ1_Msk = 0x00003E00;
    inline constexpr uint32_t JSQR_JSQ2_Pos = 15;
    inline constexpr uint32_t JSQR_JSQ2_Msk = 0x000F8000;
    inline constexpr uint32_t JSQR_JSQ3_Pos = 21;
    inline constexpr uint32_t JSQR_JSQ3_Msk = 0x03E00000;
    inline constexpr uint32_t JSQR_JSQ4_Pos = 27;
    inline constexpr uint32_t JSQR_JSQ4_Msk = 0xF8000000;

    // OFR1 fields
    inline constexpr uint32_t OFR1_OFFSET1_Pos = 0;
    inline constexpr uint32_t OFR1_OFFSET1_Msk = 0x03FFFFFF;
    inline constexpr uint32_t OFR1_OFFSET1_CH_Pos = 26;
    inline constexpr uint32_t OFR1_OFFSET1_CH_Msk = 0x7C000000;
    inline constexpr uint32_t OFR1_SSATE_Pos = 31;
    inline constexpr uint32_t OFR1_SSATE_Msk = 0x80000000;
    inline constexpr uint32_t OFR1_SSATE = (1U << 31);

    // OFR2 fields
    inline constexpr uint32_t OFR2_OFFSET1_Pos = 0;
    inline constexpr uint32_t OFR2_OFFSET1_Msk = 0x03FFFFFF;
    inline constexpr uint32_t OFR2_OFFSET1_CH_Pos = 26;
    inline constexpr uint32_t OFR2_OFFSET1_CH_Msk = 0x7C000000;
    inline constexpr uint32_t OFR2_SSATE_Pos = 31;
    inline constexpr uint32_t OFR2_SSATE_Msk = 0x80000000;
    inline constexpr uint32_t OFR2_SSATE = (1U << 31);

    // OFR3 fields
    inline constexpr uint32_t OFR3_OFFSET1_Pos = 0;
    inline constexpr uint32_t OFR3_OFFSET1_Msk = 0x03FFFFFF;
    inline constexpr uint32_t OFR3_OFFSET1_CH_Pos = 26;
    inline constexpr uint32_t OFR3_OFFSET1_CH_Msk = 0x7C000000;
    inline constexpr uint32_t OFR3_SSATE_Pos = 31;
    inline constexpr uint32_t OFR3_SSATE_Msk = 0x80000000;
    inline constexpr uint32_t OFR3_SSATE = (1U << 31);

    // OFR4 fields
    inline constexpr uint32_t OFR4_OFFSET1_Pos = 0;
    inline constexpr uint32_t OFR4_OFFSET1_Msk = 0x03FFFFFF;
    inline constexpr uint32_t OFR4_OFFSET1_CH_Pos = 26;
    inline constexpr uint32_t OFR4_OFFSET1_CH_Msk = 0x7C000000;
    inline constexpr uint32_t OFR4_SSATE_Pos = 31;
    inline constexpr uint32_t OFR4_SSATE_Msk = 0x80000000;
    inline constexpr uint32_t OFR4_SSATE = (1U << 31);

    // JDR1 fields
    inline constexpr uint32_t JDR1_JDATA1_Pos = 0;
    inline constexpr uint32_t JDR1_JDATA1_Msk = 0xFFFFFFFF;

    // JDR2 fields
    inline constexpr uint32_t JDR2_JDATA2_Pos = 0;
    inline constexpr uint32_t JDR2_JDATA2_Msk = 0xFFFFFFFF;

    // JDR3 fields
    inline constexpr uint32_t JDR3_JDATA3_Pos = 0;
    inline constexpr uint32_t JDR3_JDATA3_Msk = 0xFFFFFFFF;

    // JDR4 fields
    inline constexpr uint32_t JDR4_JDATA4_Pos = 0;
    inline constexpr uint32_t JDR4_JDATA4_Msk = 0xFFFFFFFF;

    // AWD2CR fields
    inline constexpr uint32_t AWD2CR_AWD2CH_Pos = 0;
    inline constexpr uint32_t AWD2CR_AWD2CH_Msk = 0x000FFFFF;

    // AWD3CR fields
    inline constexpr uint32_t AWD3CR_AWD3CH_Pos = 1;
    inline constexpr uint32_t AWD3CR_AWD3CH_Msk = 0x001FFFFE;

    // LTR2 fields
    inline constexpr uint32_t LTR2_LTR2_Pos = 0;
    inline constexpr uint32_t LTR2_LTR2_Msk = 0x03FFFFFF;

    // HTR2 fields
    inline constexpr uint32_t HTR2_HTR2_Pos = 0;
    inline constexpr uint32_t HTR2_HTR2_Msk = 0x03FFFFFF;

    // LTR3 fields
    inline constexpr uint32_t LTR3_LTR3_Pos = 0;
    inline constexpr uint32_t LTR3_LTR3_Msk = 0x03FFFFFF;

    // HTR3 fields
    inline constexpr uint32_t HTR3_HTR3_Pos = 0;
    inline constexpr uint32_t HTR3_HTR3_Msk = 0x03FFFFFF;

    // DIFSEL fields
    inline constexpr uint32_t DIFSEL_DIFSEL_Pos = 0;
    inline constexpr uint32_t DIFSEL_DIFSEL_Msk = 0x000FFFFF;

    // CALFACT fields
    inline constexpr uint32_t CALFACT_CALFACT_S_Pos = 0;
    inline constexpr uint32_t CALFACT_CALFACT_S_Msk = 0x000007FF;
    inline constexpr uint32_t CALFACT_CALFACT_D_Pos = 16;
    inline constexpr uint32_t CALFACT_CALFACT_D_Msk = 0x07FF0000;

    // CALFACT2 fields
    inline constexpr uint32_t CALFACT2_LINCALFACT_Pos = 0;
    inline constexpr uint32_t CALFACT2_LINCALFACT_Msk = 0x3FFFFFFF;

} // namespace ADC3

namespace ADC1 {
    // ISR fields
    inline constexpr uint32_t ISR_ADRDY_Pos = 0;
    inline constexpr uint32_t ISR_ADRDY_Msk = 0x00000001;
    inline constexpr uint32_t ISR_ADRDY = (1U << 0);
    inline constexpr uint32_t ISR_EOSMP_Pos = 1;
    inline constexpr uint32_t ISR_EOSMP_Msk = 0x00000002;
    inline constexpr uint32_t ISR_EOSMP = (1U << 1);
    inline constexpr uint32_t ISR_EOC_Pos = 2;
    inline constexpr uint32_t ISR_EOC_Msk = 0x00000004;
    inline constexpr uint32_t ISR_EOC = (1U << 2);
    inline constexpr uint32_t ISR_EOS_Pos = 3;
    inline constexpr uint32_t ISR_EOS_Msk = 0x00000008;
    inline constexpr uint32_t ISR_EOS = (1U << 3);
    inline constexpr uint32_t ISR_OVR_Pos = 4;
    inline constexpr uint32_t ISR_OVR_Msk = 0x00000010;
    inline constexpr uint32_t ISR_OVR = (1U << 4);
    inline constexpr uint32_t ISR_JEOC_Pos = 5;
    inline constexpr uint32_t ISR_JEOC_Msk = 0x00000020;
    inline constexpr uint32_t ISR_JEOC = (1U << 5);
    inline constexpr uint32_t ISR_JEOS_Pos = 6;
    inline constexpr uint32_t ISR_JEOS_Msk = 0x00000040;
    inline constexpr uint32_t ISR_JEOS = (1U << 6);
    inline constexpr uint32_t ISR_AWD1_Pos = 7;
    inline constexpr uint32_t ISR_AWD1_Msk = 0x00000080;
    inline constexpr uint32_t ISR_AWD1 = (1U << 7);
    inline constexpr uint32_t ISR_AWD2_Pos = 8;
    inline constexpr uint32_t ISR_AWD2_Msk = 0x00000100;
    inline constexpr uint32_t ISR_AWD2 = (1U << 8);
    inline constexpr uint32_t ISR_AWD3_Pos = 9;
    inline constexpr uint32_t ISR_AWD3_Msk = 0x00000200;
    inline constexpr uint32_t ISR_AWD3 = (1U << 9);
    inline constexpr uint32_t ISR_JQOVF_Pos = 10;
    inline constexpr uint32_t ISR_JQOVF_Msk = 0x00000400;
    inline constexpr uint32_t ISR_JQOVF = (1U << 10);

    // IER fields
    inline constexpr uint32_t IER_ADRDYIE_Pos = 0;
    inline constexpr uint32_t IER_ADRDYIE_Msk = 0x00000001;
    inline constexpr uint32_t IER_ADRDYIE = (1U << 0);
    inline constexpr uint32_t IER_EOSMPIE_Pos = 1;
    inline constexpr uint32_t IER_EOSMPIE_Msk = 0x00000002;
    inline constexpr uint32_t IER_EOSMPIE = (1U << 1);
    inline constexpr uint32_t IER_EOCIE_Pos = 2;
    inline constexpr uint32_t IER_EOCIE_Msk = 0x00000004;
    inline constexpr uint32_t IER_EOCIE = (1U << 2);
    inline constexpr uint32_t IER_EOSIE_Pos = 3;
    inline constexpr uint32_t IER_EOSIE_Msk = 0x00000008;
    inline constexpr uint32_t IER_EOSIE = (1U << 3);
    inline constexpr uint32_t IER_OVRIE_Pos = 4;
    inline constexpr uint32_t IER_OVRIE_Msk = 0x00000010;
    inline constexpr uint32_t IER_OVRIE = (1U << 4);
    inline constexpr uint32_t IER_JEOCIE_Pos = 5;
    inline constexpr uint32_t IER_JEOCIE_Msk = 0x00000020;
    inline constexpr uint32_t IER_JEOCIE = (1U << 5);
    inline constexpr uint32_t IER_JEOSIE_Pos = 6;
    inline constexpr uint32_t IER_JEOSIE_Msk = 0x00000040;
    inline constexpr uint32_t IER_JEOSIE = (1U << 6);
    inline constexpr uint32_t IER_AWD1IE_Pos = 7;
    inline constexpr uint32_t IER_AWD1IE_Msk = 0x00000080;
    inline constexpr uint32_t IER_AWD1IE = (1U << 7);
    inline constexpr uint32_t IER_AWD2IE_Pos = 8;
    inline constexpr uint32_t IER_AWD2IE_Msk = 0x00000100;
    inline constexpr uint32_t IER_AWD2IE = (1U << 8);
    inline constexpr uint32_t IER_AWD3IE_Pos = 9;
    inline constexpr uint32_t IER_AWD3IE_Msk = 0x00000200;
    inline constexpr uint32_t IER_AWD3IE = (1U << 9);
    inline constexpr uint32_t IER_JQOVFIE_Pos = 10;
    inline constexpr uint32_t IER_JQOVFIE_Msk = 0x00000400;
    inline constexpr uint32_t IER_JQOVFIE = (1U << 10);

    // CR fields
    inline constexpr uint32_t CR_ADEN_Pos = 0;
    inline constexpr uint32_t CR_ADEN_Msk = 0x00000001;
    inline constexpr uint32_t CR_ADEN = (1U << 0);
    inline constexpr uint32_t CR_ADDIS_Pos = 1;
    inline constexpr uint32_t CR_ADDIS_Msk = 0x00000002;
    inline constexpr uint32_t CR_ADDIS = (1U << 1);
    inline constexpr uint32_t CR_ADSTART_Pos = 2;
    inline constexpr uint32_t CR_ADSTART_Msk = 0x00000004;
    inline constexpr uint32_t CR_ADSTART = (1U << 2);
    inline constexpr uint32_t CR_JADSTART_Pos = 3;
    inline constexpr uint32_t CR_JADSTART_Msk = 0x00000008;
    inline constexpr uint32_t CR_JADSTART = (1U << 3);
    inline constexpr uint32_t CR_ADSTP_Pos = 4;
    inline constexpr uint32_t CR_ADSTP_Msk = 0x00000010;
    inline constexpr uint32_t CR_ADSTP = (1U << 4);
    inline constexpr uint32_t CR_JADSTP_Pos = 5;
    inline constexpr uint32_t CR_JADSTP_Msk = 0x00000020;
    inline constexpr uint32_t CR_JADSTP = (1U << 5);
    inline constexpr uint32_t CR_BOOST_Pos = 8;
    inline constexpr uint32_t CR_BOOST_Msk = 0x00000100;
    inline constexpr uint32_t CR_BOOST = (1U << 8);
    inline constexpr uint32_t CR_ADCALLIN_Pos = 16;
    inline constexpr uint32_t CR_ADCALLIN_Msk = 0x00010000;
    inline constexpr uint32_t CR_ADCALLIN = (1U << 16);
    inline constexpr uint32_t CR_LINCALRDYW1_Pos = 22;
    inline constexpr uint32_t CR_LINCALRDYW1_Msk = 0x00400000;
    inline constexpr uint32_t CR_LINCALRDYW1 = (1U << 22);
    inline constexpr uint32_t CR_LINCALRDYW2_Pos = 23;
    inline constexpr uint32_t CR_LINCALRDYW2_Msk = 0x00800000;
    inline constexpr uint32_t CR_LINCALRDYW2 = (1U << 23);
    inline constexpr uint32_t CR_LINCALRDYW3_Pos = 24;
    inline constexpr uint32_t CR_LINCALRDYW3_Msk = 0x01000000;
    inline constexpr uint32_t CR_LINCALRDYW3 = (1U << 24);
    inline constexpr uint32_t CR_LINCALRDYW4_Pos = 25;
    inline constexpr uint32_t CR_LINCALRDYW4_Msk = 0x02000000;
    inline constexpr uint32_t CR_LINCALRDYW4 = (1U << 25);
    inline constexpr uint32_t CR_LINCALRDYW5_Pos = 26;
    inline constexpr uint32_t CR_LINCALRDYW5_Msk = 0x04000000;
    inline constexpr uint32_t CR_LINCALRDYW5 = (1U << 26);
    inline constexpr uint32_t CR_LINCALRDYW6_Pos = 27;
    inline constexpr uint32_t CR_LINCALRDYW6_Msk = 0x08000000;
    inline constexpr uint32_t CR_LINCALRDYW6 = (1U << 27);
    inline constexpr uint32_t CR_ADVREGEN_Pos = 28;
    inline constexpr uint32_t CR_ADVREGEN_Msk = 0x10000000;
    inline constexpr uint32_t CR_ADVREGEN = (1U << 28);
    inline constexpr uint32_t CR_DEEPPWD_Pos = 29;
    inline constexpr uint32_t CR_DEEPPWD_Msk = 0x20000000;
    inline constexpr uint32_t CR_DEEPPWD = (1U << 29);
    inline constexpr uint32_t CR_ADCALDIF_Pos = 30;
    inline constexpr uint32_t CR_ADCALDIF_Msk = 0x40000000;
    inline constexpr uint32_t CR_ADCALDIF = (1U << 30);
    inline constexpr uint32_t CR_ADCAL_Pos = 31;
    inline constexpr uint32_t CR_ADCAL_Msk = 0x80000000;
    inline constexpr uint32_t CR_ADCAL = (1U << 31);

    // CCR fields
    inline constexpr uint32_t CCR_CKMODE_Pos = 16;
    inline constexpr uint32_t CCR_CKMODE_Msk = 0x00030000;
    inline constexpr uint32_t CCR_PRESC_Pos = 18;
    inline constexpr uint32_t CCR_PRESC_Msk = 0x003C0000;
    inline constexpr uint32_t CCR_VREFEN_Pos = 22;
    inline constexpr uint32_t CCR_VREFEN_Msk = 0x00400000;
    inline constexpr uint32_t CCR_VREFEN = (1U << 22);
    inline constexpr uint32_t CCR_VSENSEEN_Pos = 23;
    inline constexpr uint32_t CCR_VSENSEEN_Msk = 0x00800000;
    inline constexpr uint32_t CCR_VSENSEEN = (1U << 23);
    inline constexpr uint32_t CCR_VBATEN_Pos = 24;
    inline constexpr uint32_t CCR_VBATEN_Msk = 0x01000000;
    inline constexpr uint32_t CCR_VBATEN = (1U << 24);

    // CFGR fields
    inline constexpr uint32_t CFGR_DMNGT_Pos = 0;
    inline constexpr uint32_t CFGR_DMNGT_Msk = 0x00000003;
    inline constexpr uint32_t CFGR_RES_Pos = 2;
    inline constexpr uint32_t CFGR_RES_Msk = 0x0000000C;
    inline constexpr uint32_t CFGR_EXTSEL_Pos = 5;
    inline constexpr uint32_t CFGR_EXTSEL_Msk = 0x000003E0;
    inline constexpr uint32_t CFGR_EXTEN_Pos = 10;
    inline constexpr uint32_t CFGR_EXTEN_Msk = 0x00000C00;
    inline constexpr uint32_t CFGR_OVRMOD_Pos = 12;
    inline constexpr uint32_t CFGR_OVRMOD_Msk = 0x00001000;
    inline constexpr uint32_t CFGR_OVRMOD = (1U << 12);
    inline constexpr uint32_t CFGR_CONT_Pos = 13;
    inline constexpr uint32_t CFGR_CONT_Msk = 0x00002000;
    inline constexpr uint32_t CFGR_CONT = (1U << 13);
    inline constexpr uint32_t CFGR_AUTDLY_Pos = 14;
    inline constexpr uint32_t CFGR_AUTDLY_Msk = 0x00004000;
    inline constexpr uint32_t CFGR_AUTDLY = (1U << 14);
    inline constexpr uint32_t CFGR_DISCEN_Pos = 16;
    inline constexpr uint32_t CFGR_DISCEN_Msk = 0x00010000;
    inline constexpr uint32_t CFGR_DISCEN = (1U << 16);
    inline constexpr uint32_t CFGR_DISCNUM_Pos = 17;
    inline constexpr uint32_t CFGR_DISCNUM_Msk = 0x000E0000;
    inline constexpr uint32_t CFGR_JDISCEN_Pos = 20;
    inline constexpr uint32_t CFGR_JDISCEN_Msk = 0x00100000;
    inline constexpr uint32_t CFGR_JDISCEN = (1U << 20);
    inline constexpr uint32_t CFGR_JQM_Pos = 21;
    inline constexpr uint32_t CFGR_JQM_Msk = 0x00200000;
    inline constexpr uint32_t CFGR_JQM = (1U << 21);
    inline constexpr uint32_t CFGR_AWD1SGL_Pos = 22;
    inline constexpr uint32_t CFGR_AWD1SGL_Msk = 0x00400000;
    inline constexpr uint32_t CFGR_AWD1SGL = (1U << 22);
    inline constexpr uint32_t CFGR_AWD1EN_Pos = 23;
    inline constexpr uint32_t CFGR_AWD1EN_Msk = 0x00800000;
    inline constexpr uint32_t CFGR_AWD1EN = (1U << 23);
    inline constexpr uint32_t CFGR_JAWD1EN_Pos = 24;
    inline constexpr uint32_t CFGR_JAWD1EN_Msk = 0x01000000;
    inline constexpr uint32_t CFGR_JAWD1EN = (1U << 24);
    inline constexpr uint32_t CFGR_JAUTO_Pos = 25;
    inline constexpr uint32_t CFGR_JAUTO_Msk = 0x02000000;
    inline constexpr uint32_t CFGR_JAUTO = (1U << 25);
    inline constexpr uint32_t CFGR_AWDCH1CH_Pos = 26;
    inline constexpr uint32_t CFGR_AWDCH1CH_Msk = 0x7C000000;
    inline constexpr uint32_t CFGR_JQDIS_Pos = 31;
    inline constexpr uint32_t CFGR_JQDIS_Msk = 0x80000000;
    inline constexpr uint32_t CFGR_JQDIS = (1U << 31);

    // CFGR2 fields
    inline constexpr uint32_t CFGR2_ROVSE_Pos = 0;
    inline constexpr uint32_t CFGR2_ROVSE_Msk = 0x00000001;
    inline constexpr uint32_t CFGR2_ROVSE = (1U << 0);
    inline constexpr uint32_t CFGR2_JOVSE_Pos = 1;
    inline constexpr uint32_t CFGR2_JOVSE_Msk = 0x00000002;
    inline constexpr uint32_t CFGR2_JOVSE = (1U << 1);
    inline constexpr uint32_t CFGR2_OVSS_Pos = 5;
    inline constexpr uint32_t CFGR2_OVSS_Msk = 0x000001E0;
    inline constexpr uint32_t CFGR2_TROVS_Pos = 9;
    inline constexpr uint32_t CFGR2_TROVS_Msk = 0x00000200;
    inline constexpr uint32_t CFGR2_TROVS = (1U << 9);
    inline constexpr uint32_t CFGR2_ROVSM_Pos = 10;
    inline constexpr uint32_t CFGR2_ROVSM_Msk = 0x00000400;
    inline constexpr uint32_t CFGR2_ROVSM = (1U << 10);
    inline constexpr uint32_t CFGR2_RSHIFT1_Pos = 11;
    inline constexpr uint32_t CFGR2_RSHIFT1_Msk = 0x00000800;
    inline constexpr uint32_t CFGR2_RSHIFT1 = (1U << 11);
    inline constexpr uint32_t CFGR2_RSHIFT2_Pos = 12;
    inline constexpr uint32_t CFGR2_RSHIFT2_Msk = 0x00001000;
    inline constexpr uint32_t CFGR2_RSHIFT2 = (1U << 12);
    inline constexpr uint32_t CFGR2_RSHIFT3_Pos = 13;
    inline constexpr uint32_t CFGR2_RSHIFT3_Msk = 0x00002000;
    inline constexpr uint32_t CFGR2_RSHIFT3 = (1U << 13);
    inline constexpr uint32_t CFGR2_RSHIFT4_Pos = 14;
    inline constexpr uint32_t CFGR2_RSHIFT4_Msk = 0x00004000;
    inline constexpr uint32_t CFGR2_RSHIFT4 = (1U << 14);
    inline constexpr uint32_t CFGR2_OSR_Pos = 16;
    inline constexpr uint32_t CFGR2_OSR_Msk = 0x03FF0000;
    inline constexpr uint32_t CFGR2_LSHIFT_Pos = 28;
    inline constexpr uint32_t CFGR2_LSHIFT_Msk = 0xF0000000;

    // SMPR1 fields
    inline constexpr uint32_t SMPR1_SMP1_Pos = 3;
    inline constexpr uint32_t SMPR1_SMP1_Msk = 0x00000038;
    inline constexpr uint32_t SMPR1_SMP2_Pos = 6;
    inline constexpr uint32_t SMPR1_SMP2_Msk = 0x000001C0;
    inline constexpr uint32_t SMPR1_SMP3_Pos = 9;
    inline constexpr uint32_t SMPR1_SMP3_Msk = 0x00000E00;
    inline constexpr uint32_t SMPR1_SMP4_Pos = 12;
    inline constexpr uint32_t SMPR1_SMP4_Msk = 0x00007000;
    inline constexpr uint32_t SMPR1_SMP5_Pos = 15;
    inline constexpr uint32_t SMPR1_SMP5_Msk = 0x00038000;
    inline constexpr uint32_t SMPR1_SMP6_Pos = 18;
    inline constexpr uint32_t SMPR1_SMP6_Msk = 0x001C0000;
    inline constexpr uint32_t SMPR1_SMP7_Pos = 21;
    inline constexpr uint32_t SMPR1_SMP7_Msk = 0x00E00000;
    inline constexpr uint32_t SMPR1_SMP8_Pos = 24;
    inline constexpr uint32_t SMPR1_SMP8_Msk = 0x07000000;
    inline constexpr uint32_t SMPR1_SMP9_Pos = 27;
    inline constexpr uint32_t SMPR1_SMP9_Msk = 0x38000000;

    // SMPR2 fields
    inline constexpr uint32_t SMPR2_SMP10_Pos = 0;
    inline constexpr uint32_t SMPR2_SMP10_Msk = 0x00000007;
    inline constexpr uint32_t SMPR2_SMP11_Pos = 3;
    inline constexpr uint32_t SMPR2_SMP11_Msk = 0x00000038;
    inline constexpr uint32_t SMPR2_SMP12_Pos = 6;
    inline constexpr uint32_t SMPR2_SMP12_Msk = 0x000001C0;
    inline constexpr uint32_t SMPR2_SMP13_Pos = 9;
    inline constexpr uint32_t SMPR2_SMP13_Msk = 0x00000E00;
    inline constexpr uint32_t SMPR2_SMP14_Pos = 12;
    inline constexpr uint32_t SMPR2_SMP14_Msk = 0x00007000;
    inline constexpr uint32_t SMPR2_SMP15_Pos = 15;
    inline constexpr uint32_t SMPR2_SMP15_Msk = 0x00038000;
    inline constexpr uint32_t SMPR2_SMP16_Pos = 18;
    inline constexpr uint32_t SMPR2_SMP16_Msk = 0x001C0000;
    inline constexpr uint32_t SMPR2_SMP17_Pos = 21;
    inline constexpr uint32_t SMPR2_SMP17_Msk = 0x00E00000;
    inline constexpr uint32_t SMPR2_SMP18_Pos = 24;
    inline constexpr uint32_t SMPR2_SMP18_Msk = 0x07000000;
    inline constexpr uint32_t SMPR2_SMP19_Pos = 27;
    inline constexpr uint32_t SMPR2_SMP19_Msk = 0x38000000;

    // PCSEL fields
    inline constexpr uint32_t PCSEL_PCSEL_Pos = 0;
    inline constexpr uint32_t PCSEL_PCSEL_Msk = 0x000FFFFF;

    // LTR1 fields
    inline constexpr uint32_t LTR1_LTR1_Pos = 0;
    inline constexpr uint32_t LTR1_LTR1_Msk = 0x03FFFFFF;

    // LHTR1 fields
    inline constexpr uint32_t LHTR1_LHTR1_Pos = 0;
    inline constexpr uint32_t LHTR1_LHTR1_Msk = 0x03FFFFFF;

    // SQR1 fields
    inline constexpr uint32_t SQR1_L3_Pos = 0;
    inline constexpr uint32_t SQR1_L3_Msk = 0x0000000F;
    inline constexpr uint32_t SQR1_SQ1_Pos = 6;
    inline constexpr uint32_t SQR1_SQ1_Msk = 0x000007C0;
    inline constexpr uint32_t SQR1_SQ2_Pos = 12;
    inline constexpr uint32_t SQR1_SQ2_Msk = 0x0001F000;
    inline constexpr uint32_t SQR1_SQ3_Pos = 18;
    inline constexpr uint32_t SQR1_SQ3_Msk = 0x007C0000;
    inline constexpr uint32_t SQR1_SQ4_Pos = 24;
    inline constexpr uint32_t SQR1_SQ4_Msk = 0x1F000000;

    // SQR2 fields
    inline constexpr uint32_t SQR2_SQ5_Pos = 0;
    inline constexpr uint32_t SQR2_SQ5_Msk = 0x0000001F;
    inline constexpr uint32_t SQR2_SQ6_Pos = 6;
    inline constexpr uint32_t SQR2_SQ6_Msk = 0x000007C0;
    inline constexpr uint32_t SQR2_SQ7_Pos = 12;
    inline constexpr uint32_t SQR2_SQ7_Msk = 0x0001F000;
    inline constexpr uint32_t SQR2_SQ8_Pos = 18;
    inline constexpr uint32_t SQR2_SQ8_Msk = 0x007C0000;
    inline constexpr uint32_t SQR2_SQ9_Pos = 24;
    inline constexpr uint32_t SQR2_SQ9_Msk = 0x1F000000;

    // SQR3 fields
    inline constexpr uint32_t SQR3_SQ10_Pos = 0;
    inline constexpr uint32_t SQR3_SQ10_Msk = 0x0000001F;
    inline constexpr uint32_t SQR3_SQ11_Pos = 6;
    inline constexpr uint32_t SQR3_SQ11_Msk = 0x000007C0;
    inline constexpr uint32_t SQR3_SQ12_Pos = 12;
    inline constexpr uint32_t SQR3_SQ12_Msk = 0x0001F000;
    inline constexpr uint32_t SQR3_SQ13_Pos = 18;
    inline constexpr uint32_t SQR3_SQ13_Msk = 0x007C0000;
    inline constexpr uint32_t SQR3_SQ14_Pos = 24;
    inline constexpr uint32_t SQR3_SQ14_Msk = 0x1F000000;

    // SQR4 fields
    inline constexpr uint32_t SQR4_SQ15_Pos = 0;
    inline constexpr uint32_t SQR4_SQ15_Msk = 0x0000001F;
    inline constexpr uint32_t SQR4_SQ16_Pos = 6;
    inline constexpr uint32_t SQR4_SQ16_Msk = 0x000007C0;

    // DR fields
    inline constexpr uint32_t DR_RDATA_Pos = 0;
    inline constexpr uint32_t DR_RDATA_Msk = 0x0000FFFF;

    // JSQR fields
    inline constexpr uint32_t JSQR_JL_Pos = 0;
    inline constexpr uint32_t JSQR_JL_Msk = 0x00000003;
    inline constexpr uint32_t JSQR_JEXTSEL_Pos = 2;
    inline constexpr uint32_t JSQR_JEXTSEL_Msk = 0x0000007C;
    inline constexpr uint32_t JSQR_JEXTEN_Pos = 7;
    inline constexpr uint32_t JSQR_JEXTEN_Msk = 0x00000180;
    inline constexpr uint32_t JSQR_JSQ1_Pos = 9;
    inline constexpr uint32_t JSQR_JSQ1_Msk = 0x00003E00;
    inline constexpr uint32_t JSQR_JSQ2_Pos = 15;
    inline constexpr uint32_t JSQR_JSQ2_Msk = 0x000F8000;
    inline constexpr uint32_t JSQR_JSQ3_Pos = 21;
    inline constexpr uint32_t JSQR_JSQ3_Msk = 0x03E00000;
    inline constexpr uint32_t JSQR_JSQ4_Pos = 27;
    inline constexpr uint32_t JSQR_JSQ4_Msk = 0xF8000000;

    // OFR1 fields
    inline constexpr uint32_t OFR1_OFFSET1_Pos = 0;
    inline constexpr uint32_t OFR1_OFFSET1_Msk = 0x03FFFFFF;
    inline constexpr uint32_t OFR1_OFFSET1_CH_Pos = 26;
    inline constexpr uint32_t OFR1_OFFSET1_CH_Msk = 0x7C000000;
    inline constexpr uint32_t OFR1_SSATE_Pos = 31;
    inline constexpr uint32_t OFR1_SSATE_Msk = 0x80000000;
    inline constexpr uint32_t OFR1_SSATE = (1U << 31);

    // OFR2 fields
    inline constexpr uint32_t OFR2_OFFSET1_Pos = 0;
    inline constexpr uint32_t OFR2_OFFSET1_Msk = 0x03FFFFFF;
    inline constexpr uint32_t OFR2_OFFSET1_CH_Pos = 26;
    inline constexpr uint32_t OFR2_OFFSET1_CH_Msk = 0x7C000000;
    inline constexpr uint32_t OFR2_SSATE_Pos = 31;
    inline constexpr uint32_t OFR2_SSATE_Msk = 0x80000000;
    inline constexpr uint32_t OFR2_SSATE = (1U << 31);

    // OFR3 fields
    inline constexpr uint32_t OFR3_OFFSET1_Pos = 0;
    inline constexpr uint32_t OFR3_OFFSET1_Msk = 0x03FFFFFF;
    inline constexpr uint32_t OFR3_OFFSET1_CH_Pos = 26;
    inline constexpr uint32_t OFR3_OFFSET1_CH_Msk = 0x7C000000;
    inline constexpr uint32_t OFR3_SSATE_Pos = 31;
    inline constexpr uint32_t OFR3_SSATE_Msk = 0x80000000;
    inline constexpr uint32_t OFR3_SSATE = (1U << 31);

    // OFR4 fields
    inline constexpr uint32_t OFR4_OFFSET1_Pos = 0;
    inline constexpr uint32_t OFR4_OFFSET1_Msk = 0x03FFFFFF;
    inline constexpr uint32_t OFR4_OFFSET1_CH_Pos = 26;
    inline constexpr uint32_t OFR4_OFFSET1_CH_Msk = 0x7C000000;
    inline constexpr uint32_t OFR4_SSATE_Pos = 31;
    inline constexpr uint32_t OFR4_SSATE_Msk = 0x80000000;
    inline constexpr uint32_t OFR4_SSATE = (1U << 31);

    // JDR1 fields
    inline constexpr uint32_t JDR1_JDATA1_Pos = 0;
    inline constexpr uint32_t JDR1_JDATA1_Msk = 0xFFFFFFFF;

    // JDR2 fields
    inline constexpr uint32_t JDR2_JDATA2_Pos = 0;
    inline constexpr uint32_t JDR2_JDATA2_Msk = 0xFFFFFFFF;

    // JDR3 fields
    inline constexpr uint32_t JDR3_JDATA3_Pos = 0;
    inline constexpr uint32_t JDR3_JDATA3_Msk = 0xFFFFFFFF;

    // JDR4 fields
    inline constexpr uint32_t JDR4_JDATA4_Pos = 0;
    inline constexpr uint32_t JDR4_JDATA4_Msk = 0xFFFFFFFF;

    // AWD2CR fields
    inline constexpr uint32_t AWD2CR_AWD2CH_Pos = 0;
    inline constexpr uint32_t AWD2CR_AWD2CH_Msk = 0x000FFFFF;

    // AWD3CR fields
    inline constexpr uint32_t AWD3CR_AWD3CH_Pos = 1;
    inline constexpr uint32_t AWD3CR_AWD3CH_Msk = 0x001FFFFE;

    // LTR2 fields
    inline constexpr uint32_t LTR2_LTR2_Pos = 0;
    inline constexpr uint32_t LTR2_LTR2_Msk = 0x03FFFFFF;

    // HTR2 fields
    inline constexpr uint32_t HTR2_HTR2_Pos = 0;
    inline constexpr uint32_t HTR2_HTR2_Msk = 0x03FFFFFF;

    // LTR3 fields
    inline constexpr uint32_t LTR3_LTR3_Pos = 0;
    inline constexpr uint32_t LTR3_LTR3_Msk = 0x03FFFFFF;

    // HTR3 fields
    inline constexpr uint32_t HTR3_HTR3_Pos = 0;
    inline constexpr uint32_t HTR3_HTR3_Msk = 0x03FFFFFF;

    // DIFSEL fields
    inline constexpr uint32_t DIFSEL_DIFSEL_Pos = 0;
    inline constexpr uint32_t DIFSEL_DIFSEL_Msk = 0x000FFFFF;

    // CALFACT fields
    inline constexpr uint32_t CALFACT_CALFACT_S_Pos = 0;
    inline constexpr uint32_t CALFACT_CALFACT_S_Msk = 0x000007FF;
    inline constexpr uint32_t CALFACT_CALFACT_D_Pos = 16;
    inline constexpr uint32_t CALFACT_CALFACT_D_Msk = 0x07FF0000;

    // CALFACT2 fields
    inline constexpr uint32_t CALFACT2_LINCALFACT_Pos = 0;
    inline constexpr uint32_t CALFACT2_LINCALFACT_Msk = 0x3FFFFFFF;

} // namespace ADC1

namespace ADC2 {
    // ISR fields
    inline constexpr uint32_t ISR_ADRDY_Pos = 0;
    inline constexpr uint32_t ISR_ADRDY_Msk = 0x00000001;
    inline constexpr uint32_t ISR_ADRDY = (1U << 0);
    inline constexpr uint32_t ISR_EOSMP_Pos = 1;
    inline constexpr uint32_t ISR_EOSMP_Msk = 0x00000002;
    inline constexpr uint32_t ISR_EOSMP = (1U << 1);
    inline constexpr uint32_t ISR_EOC_Pos = 2;
    inline constexpr uint32_t ISR_EOC_Msk = 0x00000004;
    inline constexpr uint32_t ISR_EOC = (1U << 2);
    inline constexpr uint32_t ISR_EOS_Pos = 3;
    inline constexpr uint32_t ISR_EOS_Msk = 0x00000008;
    inline constexpr uint32_t ISR_EOS = (1U << 3);
    inline constexpr uint32_t ISR_OVR_Pos = 4;
    inline constexpr uint32_t ISR_OVR_Msk = 0x00000010;
    inline constexpr uint32_t ISR_OVR = (1U << 4);
    inline constexpr uint32_t ISR_JEOC_Pos = 5;
    inline constexpr uint32_t ISR_JEOC_Msk = 0x00000020;
    inline constexpr uint32_t ISR_JEOC = (1U << 5);
    inline constexpr uint32_t ISR_JEOS_Pos = 6;
    inline constexpr uint32_t ISR_JEOS_Msk = 0x00000040;
    inline constexpr uint32_t ISR_JEOS = (1U << 6);
    inline constexpr uint32_t ISR_AWD1_Pos = 7;
    inline constexpr uint32_t ISR_AWD1_Msk = 0x00000080;
    inline constexpr uint32_t ISR_AWD1 = (1U << 7);
    inline constexpr uint32_t ISR_AWD2_Pos = 8;
    inline constexpr uint32_t ISR_AWD2_Msk = 0x00000100;
    inline constexpr uint32_t ISR_AWD2 = (1U << 8);
    inline constexpr uint32_t ISR_AWD3_Pos = 9;
    inline constexpr uint32_t ISR_AWD3_Msk = 0x00000200;
    inline constexpr uint32_t ISR_AWD3 = (1U << 9);
    inline constexpr uint32_t ISR_JQOVF_Pos = 10;
    inline constexpr uint32_t ISR_JQOVF_Msk = 0x00000400;
    inline constexpr uint32_t ISR_JQOVF = (1U << 10);

    // IER fields
    inline constexpr uint32_t IER_ADRDYIE_Pos = 0;
    inline constexpr uint32_t IER_ADRDYIE_Msk = 0x00000001;
    inline constexpr uint32_t IER_ADRDYIE = (1U << 0);
    inline constexpr uint32_t IER_EOSMPIE_Pos = 1;
    inline constexpr uint32_t IER_EOSMPIE_Msk = 0x00000002;
    inline constexpr uint32_t IER_EOSMPIE = (1U << 1);
    inline constexpr uint32_t IER_EOCIE_Pos = 2;
    inline constexpr uint32_t IER_EOCIE_Msk = 0x00000004;
    inline constexpr uint32_t IER_EOCIE = (1U << 2);
    inline constexpr uint32_t IER_EOSIE_Pos = 3;
    inline constexpr uint32_t IER_EOSIE_Msk = 0x00000008;
    inline constexpr uint32_t IER_EOSIE = (1U << 3);
    inline constexpr uint32_t IER_OVRIE_Pos = 4;
    inline constexpr uint32_t IER_OVRIE_Msk = 0x00000010;
    inline constexpr uint32_t IER_OVRIE = (1U << 4);
    inline constexpr uint32_t IER_JEOCIE_Pos = 5;
    inline constexpr uint32_t IER_JEOCIE_Msk = 0x00000020;
    inline constexpr uint32_t IER_JEOCIE = (1U << 5);
    inline constexpr uint32_t IER_JEOSIE_Pos = 6;
    inline constexpr uint32_t IER_JEOSIE_Msk = 0x00000040;
    inline constexpr uint32_t IER_JEOSIE = (1U << 6);
    inline constexpr uint32_t IER_AWD1IE_Pos = 7;
    inline constexpr uint32_t IER_AWD1IE_Msk = 0x00000080;
    inline constexpr uint32_t IER_AWD1IE = (1U << 7);
    inline constexpr uint32_t IER_AWD2IE_Pos = 8;
    inline constexpr uint32_t IER_AWD2IE_Msk = 0x00000100;
    inline constexpr uint32_t IER_AWD2IE = (1U << 8);
    inline constexpr uint32_t IER_AWD3IE_Pos = 9;
    inline constexpr uint32_t IER_AWD3IE_Msk = 0x00000200;
    inline constexpr uint32_t IER_AWD3IE = (1U << 9);
    inline constexpr uint32_t IER_JQOVFIE_Pos = 10;
    inline constexpr uint32_t IER_JQOVFIE_Msk = 0x00000400;
    inline constexpr uint32_t IER_JQOVFIE = (1U << 10);

    // CR fields
    inline constexpr uint32_t CR_ADEN_Pos = 0;
    inline constexpr uint32_t CR_ADEN_Msk = 0x00000001;
    inline constexpr uint32_t CR_ADEN = (1U << 0);
    inline constexpr uint32_t CR_ADDIS_Pos = 1;
    inline constexpr uint32_t CR_ADDIS_Msk = 0x00000002;
    inline constexpr uint32_t CR_ADDIS = (1U << 1);
    inline constexpr uint32_t CR_ADSTART_Pos = 2;
    inline constexpr uint32_t CR_ADSTART_Msk = 0x00000004;
    inline constexpr uint32_t CR_ADSTART = (1U << 2);
    inline constexpr uint32_t CR_JADSTART_Pos = 3;
    inline constexpr uint32_t CR_JADSTART_Msk = 0x00000008;
    inline constexpr uint32_t CR_JADSTART = (1U << 3);
    inline constexpr uint32_t CR_ADSTP_Pos = 4;
    inline constexpr uint32_t CR_ADSTP_Msk = 0x00000010;
    inline constexpr uint32_t CR_ADSTP = (1U << 4);
    inline constexpr uint32_t CR_JADSTP_Pos = 5;
    inline constexpr uint32_t CR_JADSTP_Msk = 0x00000020;
    inline constexpr uint32_t CR_JADSTP = (1U << 5);
    inline constexpr uint32_t CR_BOOST_Pos = 8;
    inline constexpr uint32_t CR_BOOST_Msk = 0x00000100;
    inline constexpr uint32_t CR_BOOST = (1U << 8);
    inline constexpr uint32_t CR_ADCALLIN_Pos = 16;
    inline constexpr uint32_t CR_ADCALLIN_Msk = 0x00010000;
    inline constexpr uint32_t CR_ADCALLIN = (1U << 16);
    inline constexpr uint32_t CR_LINCALRDYW1_Pos = 22;
    inline constexpr uint32_t CR_LINCALRDYW1_Msk = 0x00400000;
    inline constexpr uint32_t CR_LINCALRDYW1 = (1U << 22);
    inline constexpr uint32_t CR_LINCALRDYW2_Pos = 23;
    inline constexpr uint32_t CR_LINCALRDYW2_Msk = 0x00800000;
    inline constexpr uint32_t CR_LINCALRDYW2 = (1U << 23);
    inline constexpr uint32_t CR_LINCALRDYW3_Pos = 24;
    inline constexpr uint32_t CR_LINCALRDYW3_Msk = 0x01000000;
    inline constexpr uint32_t CR_LINCALRDYW3 = (1U << 24);
    inline constexpr uint32_t CR_LINCALRDYW4_Pos = 25;
    inline constexpr uint32_t CR_LINCALRDYW4_Msk = 0x02000000;
    inline constexpr uint32_t CR_LINCALRDYW4 = (1U << 25);
    inline constexpr uint32_t CR_LINCALRDYW5_Pos = 26;
    inline constexpr uint32_t CR_LINCALRDYW5_Msk = 0x04000000;
    inline constexpr uint32_t CR_LINCALRDYW5 = (1U << 26);
    inline constexpr uint32_t CR_LINCALRDYW6_Pos = 27;
    inline constexpr uint32_t CR_LINCALRDYW6_Msk = 0x08000000;
    inline constexpr uint32_t CR_LINCALRDYW6 = (1U << 27);
    inline constexpr uint32_t CR_ADVREGEN_Pos = 28;
    inline constexpr uint32_t CR_ADVREGEN_Msk = 0x10000000;
    inline constexpr uint32_t CR_ADVREGEN = (1U << 28);
    inline constexpr uint32_t CR_DEEPPWD_Pos = 29;
    inline constexpr uint32_t CR_DEEPPWD_Msk = 0x20000000;
    inline constexpr uint32_t CR_DEEPPWD = (1U << 29);
    inline constexpr uint32_t CR_ADCALDIF_Pos = 30;
    inline constexpr uint32_t CR_ADCALDIF_Msk = 0x40000000;
    inline constexpr uint32_t CR_ADCALDIF = (1U << 30);
    inline constexpr uint32_t CR_ADCAL_Pos = 31;
    inline constexpr uint32_t CR_ADCAL_Msk = 0x80000000;
    inline constexpr uint32_t CR_ADCAL = (1U << 31);

    // CCR fields
    inline constexpr uint32_t CCR_CKMODE_Pos = 16;
    inline constexpr uint32_t CCR_CKMODE_Msk = 0x00030000;
    inline constexpr uint32_t CCR_PRESC_Pos = 18;
    inline constexpr uint32_t CCR_PRESC_Msk = 0x003C0000;
    inline constexpr uint32_t CCR_VREFEN_Pos = 22;
    inline constexpr uint32_t CCR_VREFEN_Msk = 0x00400000;
    inline constexpr uint32_t CCR_VREFEN = (1U << 22);
    inline constexpr uint32_t CCR_VSENSEEN_Pos = 23;
    inline constexpr uint32_t CCR_VSENSEEN_Msk = 0x00800000;
    inline constexpr uint32_t CCR_VSENSEEN = (1U << 23);
    inline constexpr uint32_t CCR_VBATEN_Pos = 24;
    inline constexpr uint32_t CCR_VBATEN_Msk = 0x01000000;
    inline constexpr uint32_t CCR_VBATEN = (1U << 24);

    // CFGR fields
    inline constexpr uint32_t CFGR_DMNGT_Pos = 0;
    inline constexpr uint32_t CFGR_DMNGT_Msk = 0x00000003;
    inline constexpr uint32_t CFGR_RES_Pos = 2;
    inline constexpr uint32_t CFGR_RES_Msk = 0x0000000C;
    inline constexpr uint32_t CFGR_EXTSEL_Pos = 5;
    inline constexpr uint32_t CFGR_EXTSEL_Msk = 0x000003E0;
    inline constexpr uint32_t CFGR_EXTEN_Pos = 10;
    inline constexpr uint32_t CFGR_EXTEN_Msk = 0x00000C00;
    inline constexpr uint32_t CFGR_OVRMOD_Pos = 12;
    inline constexpr uint32_t CFGR_OVRMOD_Msk = 0x00001000;
    inline constexpr uint32_t CFGR_OVRMOD = (1U << 12);
    inline constexpr uint32_t CFGR_CONT_Pos = 13;
    inline constexpr uint32_t CFGR_CONT_Msk = 0x00002000;
    inline constexpr uint32_t CFGR_CONT = (1U << 13);
    inline constexpr uint32_t CFGR_AUTDLY_Pos = 14;
    inline constexpr uint32_t CFGR_AUTDLY_Msk = 0x00004000;
    inline constexpr uint32_t CFGR_AUTDLY = (1U << 14);
    inline constexpr uint32_t CFGR_DISCEN_Pos = 16;
    inline constexpr uint32_t CFGR_DISCEN_Msk = 0x00010000;
    inline constexpr uint32_t CFGR_DISCEN = (1U << 16);
    inline constexpr uint32_t CFGR_DISCNUM_Pos = 17;
    inline constexpr uint32_t CFGR_DISCNUM_Msk = 0x000E0000;
    inline constexpr uint32_t CFGR_JDISCEN_Pos = 20;
    inline constexpr uint32_t CFGR_JDISCEN_Msk = 0x00100000;
    inline constexpr uint32_t CFGR_JDISCEN = (1U << 20);
    inline constexpr uint32_t CFGR_JQM_Pos = 21;
    inline constexpr uint32_t CFGR_JQM_Msk = 0x00200000;
    inline constexpr uint32_t CFGR_JQM = (1U << 21);
    inline constexpr uint32_t CFGR_AWD1SGL_Pos = 22;
    inline constexpr uint32_t CFGR_AWD1SGL_Msk = 0x00400000;
    inline constexpr uint32_t CFGR_AWD1SGL = (1U << 22);
    inline constexpr uint32_t CFGR_AWD1EN_Pos = 23;
    inline constexpr uint32_t CFGR_AWD1EN_Msk = 0x00800000;
    inline constexpr uint32_t CFGR_AWD1EN = (1U << 23);
    inline constexpr uint32_t CFGR_JAWD1EN_Pos = 24;
    inline constexpr uint32_t CFGR_JAWD1EN_Msk = 0x01000000;
    inline constexpr uint32_t CFGR_JAWD1EN = (1U << 24);
    inline constexpr uint32_t CFGR_JAUTO_Pos = 25;
    inline constexpr uint32_t CFGR_JAUTO_Msk = 0x02000000;
    inline constexpr uint32_t CFGR_JAUTO = (1U << 25);
    inline constexpr uint32_t CFGR_AWDCH1CH_Pos = 26;
    inline constexpr uint32_t CFGR_AWDCH1CH_Msk = 0x7C000000;
    inline constexpr uint32_t CFGR_JQDIS_Pos = 31;
    inline constexpr uint32_t CFGR_JQDIS_Msk = 0x80000000;
    inline constexpr uint32_t CFGR_JQDIS = (1U << 31);

    // CFGR2 fields
    inline constexpr uint32_t CFGR2_ROVSE_Pos = 0;
    inline constexpr uint32_t CFGR2_ROVSE_Msk = 0x00000001;
    inline constexpr uint32_t CFGR2_ROVSE = (1U << 0);
    inline constexpr uint32_t CFGR2_JOVSE_Pos = 1;
    inline constexpr uint32_t CFGR2_JOVSE_Msk = 0x00000002;
    inline constexpr uint32_t CFGR2_JOVSE = (1U << 1);
    inline constexpr uint32_t CFGR2_OVSS_Pos = 5;
    inline constexpr uint32_t CFGR2_OVSS_Msk = 0x000001E0;
    inline constexpr uint32_t CFGR2_TROVS_Pos = 9;
    inline constexpr uint32_t CFGR2_TROVS_Msk = 0x00000200;
    inline constexpr uint32_t CFGR2_TROVS = (1U << 9);
    inline constexpr uint32_t CFGR2_ROVSM_Pos = 10;
    inline constexpr uint32_t CFGR2_ROVSM_Msk = 0x00000400;
    inline constexpr uint32_t CFGR2_ROVSM = (1U << 10);
    inline constexpr uint32_t CFGR2_RSHIFT1_Pos = 11;
    inline constexpr uint32_t CFGR2_RSHIFT1_Msk = 0x00000800;
    inline constexpr uint32_t CFGR2_RSHIFT1 = (1U << 11);
    inline constexpr uint32_t CFGR2_RSHIFT2_Pos = 12;
    inline constexpr uint32_t CFGR2_RSHIFT2_Msk = 0x00001000;
    inline constexpr uint32_t CFGR2_RSHIFT2 = (1U << 12);
    inline constexpr uint32_t CFGR2_RSHIFT3_Pos = 13;
    inline constexpr uint32_t CFGR2_RSHIFT3_Msk = 0x00002000;
    inline constexpr uint32_t CFGR2_RSHIFT3 = (1U << 13);
    inline constexpr uint32_t CFGR2_RSHIFT4_Pos = 14;
    inline constexpr uint32_t CFGR2_RSHIFT4_Msk = 0x00004000;
    inline constexpr uint32_t CFGR2_RSHIFT4 = (1U << 14);
    inline constexpr uint32_t CFGR2_OSR_Pos = 16;
    inline constexpr uint32_t CFGR2_OSR_Msk = 0x03FF0000;
    inline constexpr uint32_t CFGR2_LSHIFT_Pos = 28;
    inline constexpr uint32_t CFGR2_LSHIFT_Msk = 0xF0000000;

    // SMPR1 fields
    inline constexpr uint32_t SMPR1_SMP1_Pos = 3;
    inline constexpr uint32_t SMPR1_SMP1_Msk = 0x00000038;
    inline constexpr uint32_t SMPR1_SMP2_Pos = 6;
    inline constexpr uint32_t SMPR1_SMP2_Msk = 0x000001C0;
    inline constexpr uint32_t SMPR1_SMP3_Pos = 9;
    inline constexpr uint32_t SMPR1_SMP3_Msk = 0x00000E00;
    inline constexpr uint32_t SMPR1_SMP4_Pos = 12;
    inline constexpr uint32_t SMPR1_SMP4_Msk = 0x00007000;
    inline constexpr uint32_t SMPR1_SMP5_Pos = 15;
    inline constexpr uint32_t SMPR1_SMP5_Msk = 0x00038000;
    inline constexpr uint32_t SMPR1_SMP6_Pos = 18;
    inline constexpr uint32_t SMPR1_SMP6_Msk = 0x001C0000;
    inline constexpr uint32_t SMPR1_SMP7_Pos = 21;
    inline constexpr uint32_t SMPR1_SMP7_Msk = 0x00E00000;
    inline constexpr uint32_t SMPR1_SMP8_Pos = 24;
    inline constexpr uint32_t SMPR1_SMP8_Msk = 0x07000000;
    inline constexpr uint32_t SMPR1_SMP9_Pos = 27;
    inline constexpr uint32_t SMPR1_SMP9_Msk = 0x38000000;

    // SMPR2 fields
    inline constexpr uint32_t SMPR2_SMP10_Pos = 0;
    inline constexpr uint32_t SMPR2_SMP10_Msk = 0x00000007;
    inline constexpr uint32_t SMPR2_SMP11_Pos = 3;
    inline constexpr uint32_t SMPR2_SMP11_Msk = 0x00000038;
    inline constexpr uint32_t SMPR2_SMP12_Pos = 6;
    inline constexpr uint32_t SMPR2_SMP12_Msk = 0x000001C0;
    inline constexpr uint32_t SMPR2_SMP13_Pos = 9;
    inline constexpr uint32_t SMPR2_SMP13_Msk = 0x00000E00;
    inline constexpr uint32_t SMPR2_SMP14_Pos = 12;
    inline constexpr uint32_t SMPR2_SMP14_Msk = 0x00007000;
    inline constexpr uint32_t SMPR2_SMP15_Pos = 15;
    inline constexpr uint32_t SMPR2_SMP15_Msk = 0x00038000;
    inline constexpr uint32_t SMPR2_SMP16_Pos = 18;
    inline constexpr uint32_t SMPR2_SMP16_Msk = 0x001C0000;
    inline constexpr uint32_t SMPR2_SMP17_Pos = 21;
    inline constexpr uint32_t SMPR2_SMP17_Msk = 0x00E00000;
    inline constexpr uint32_t SMPR2_SMP18_Pos = 24;
    inline constexpr uint32_t SMPR2_SMP18_Msk = 0x07000000;
    inline constexpr uint32_t SMPR2_SMP19_Pos = 27;
    inline constexpr uint32_t SMPR2_SMP19_Msk = 0x38000000;

    // PCSEL fields
    inline constexpr uint32_t PCSEL_PCSEL_Pos = 0;
    inline constexpr uint32_t PCSEL_PCSEL_Msk = 0x000FFFFF;

    // LTR1 fields
    inline constexpr uint32_t LTR1_LTR1_Pos = 0;
    inline constexpr uint32_t LTR1_LTR1_Msk = 0x03FFFFFF;

    // LHTR1 fields
    inline constexpr uint32_t LHTR1_LHTR1_Pos = 0;
    inline constexpr uint32_t LHTR1_LHTR1_Msk = 0x03FFFFFF;

    // SQR1 fields
    inline constexpr uint32_t SQR1_L3_Pos = 0;
    inline constexpr uint32_t SQR1_L3_Msk = 0x0000000F;
    inline constexpr uint32_t SQR1_SQ1_Pos = 6;
    inline constexpr uint32_t SQR1_SQ1_Msk = 0x000007C0;
    inline constexpr uint32_t SQR1_SQ2_Pos = 12;
    inline constexpr uint32_t SQR1_SQ2_Msk = 0x0001F000;
    inline constexpr uint32_t SQR1_SQ3_Pos = 18;
    inline constexpr uint32_t SQR1_SQ3_Msk = 0x007C0000;
    inline constexpr uint32_t SQR1_SQ4_Pos = 24;
    inline constexpr uint32_t SQR1_SQ4_Msk = 0x1F000000;

    // SQR2 fields
    inline constexpr uint32_t SQR2_SQ5_Pos = 0;
    inline constexpr uint32_t SQR2_SQ5_Msk = 0x0000001F;
    inline constexpr uint32_t SQR2_SQ6_Pos = 6;
    inline constexpr uint32_t SQR2_SQ6_Msk = 0x000007C0;
    inline constexpr uint32_t SQR2_SQ7_Pos = 12;
    inline constexpr uint32_t SQR2_SQ7_Msk = 0x0001F000;
    inline constexpr uint32_t SQR2_SQ8_Pos = 18;
    inline constexpr uint32_t SQR2_SQ8_Msk = 0x007C0000;
    inline constexpr uint32_t SQR2_SQ9_Pos = 24;
    inline constexpr uint32_t SQR2_SQ9_Msk = 0x1F000000;

    // SQR3 fields
    inline constexpr uint32_t SQR3_SQ10_Pos = 0;
    inline constexpr uint32_t SQR3_SQ10_Msk = 0x0000001F;
    inline constexpr uint32_t SQR3_SQ11_Pos = 6;
    inline constexpr uint32_t SQR3_SQ11_Msk = 0x000007C0;
    inline constexpr uint32_t SQR3_SQ12_Pos = 12;
    inline constexpr uint32_t SQR3_SQ12_Msk = 0x0001F000;
    inline constexpr uint32_t SQR3_SQ13_Pos = 18;
    inline constexpr uint32_t SQR3_SQ13_Msk = 0x007C0000;
    inline constexpr uint32_t SQR3_SQ14_Pos = 24;
    inline constexpr uint32_t SQR3_SQ14_Msk = 0x1F000000;

    // SQR4 fields
    inline constexpr uint32_t SQR4_SQ15_Pos = 0;
    inline constexpr uint32_t SQR4_SQ15_Msk = 0x0000001F;
    inline constexpr uint32_t SQR4_SQ16_Pos = 6;
    inline constexpr uint32_t SQR4_SQ16_Msk = 0x000007C0;

    // DR fields
    inline constexpr uint32_t DR_RDATA_Pos = 0;
    inline constexpr uint32_t DR_RDATA_Msk = 0x0000FFFF;

    // JSQR fields
    inline constexpr uint32_t JSQR_JL_Pos = 0;
    inline constexpr uint32_t JSQR_JL_Msk = 0x00000003;
    inline constexpr uint32_t JSQR_JEXTSEL_Pos = 2;
    inline constexpr uint32_t JSQR_JEXTSEL_Msk = 0x0000007C;
    inline constexpr uint32_t JSQR_JEXTEN_Pos = 7;
    inline constexpr uint32_t JSQR_JEXTEN_Msk = 0x00000180;
    inline constexpr uint32_t JSQR_JSQ1_Pos = 9;
    inline constexpr uint32_t JSQR_JSQ1_Msk = 0x00003E00;
    inline constexpr uint32_t JSQR_JSQ2_Pos = 15;
    inline constexpr uint32_t JSQR_JSQ2_Msk = 0x000F8000;
    inline constexpr uint32_t JSQR_JSQ3_Pos = 21;
    inline constexpr uint32_t JSQR_JSQ3_Msk = 0x03E00000;
    inline constexpr uint32_t JSQR_JSQ4_Pos = 27;
    inline constexpr uint32_t JSQR_JSQ4_Msk = 0xF8000000;

    // OFR1 fields
    inline constexpr uint32_t OFR1_OFFSET1_Pos = 0;
    inline constexpr uint32_t OFR1_OFFSET1_Msk = 0x03FFFFFF;
    inline constexpr uint32_t OFR1_OFFSET1_CH_Pos = 26;
    inline constexpr uint32_t OFR1_OFFSET1_CH_Msk = 0x7C000000;
    inline constexpr uint32_t OFR1_SSATE_Pos = 31;
    inline constexpr uint32_t OFR1_SSATE_Msk = 0x80000000;
    inline constexpr uint32_t OFR1_SSATE = (1U << 31);

    // OFR2 fields
    inline constexpr uint32_t OFR2_OFFSET1_Pos = 0;
    inline constexpr uint32_t OFR2_OFFSET1_Msk = 0x03FFFFFF;
    inline constexpr uint32_t OFR2_OFFSET1_CH_Pos = 26;
    inline constexpr uint32_t OFR2_OFFSET1_CH_Msk = 0x7C000000;
    inline constexpr uint32_t OFR2_SSATE_Pos = 31;
    inline constexpr uint32_t OFR2_SSATE_Msk = 0x80000000;
    inline constexpr uint32_t OFR2_SSATE = (1U << 31);

    // OFR3 fields
    inline constexpr uint32_t OFR3_OFFSET1_Pos = 0;
    inline constexpr uint32_t OFR3_OFFSET1_Msk = 0x03FFFFFF;
    inline constexpr uint32_t OFR3_OFFSET1_CH_Pos = 26;
    inline constexpr uint32_t OFR3_OFFSET1_CH_Msk = 0x7C000000;
    inline constexpr uint32_t OFR3_SSATE_Pos = 31;
    inline constexpr uint32_t OFR3_SSATE_Msk = 0x80000000;
    inline constexpr uint32_t OFR3_SSATE = (1U << 31);

    // OFR4 fields
    inline constexpr uint32_t OFR4_OFFSET1_Pos = 0;
    inline constexpr uint32_t OFR4_OFFSET1_Msk = 0x03FFFFFF;
    inline constexpr uint32_t OFR4_OFFSET1_CH_Pos = 26;
    inline constexpr uint32_t OFR4_OFFSET1_CH_Msk = 0x7C000000;
    inline constexpr uint32_t OFR4_SSATE_Pos = 31;
    inline constexpr uint32_t OFR4_SSATE_Msk = 0x80000000;
    inline constexpr uint32_t OFR4_SSATE = (1U << 31);

    // JDR1 fields
    inline constexpr uint32_t JDR1_JDATA1_Pos = 0;
    inline constexpr uint32_t JDR1_JDATA1_Msk = 0xFFFFFFFF;

    // JDR2 fields
    inline constexpr uint32_t JDR2_JDATA2_Pos = 0;
    inline constexpr uint32_t JDR2_JDATA2_Msk = 0xFFFFFFFF;

    // JDR3 fields
    inline constexpr uint32_t JDR3_JDATA3_Pos = 0;
    inline constexpr uint32_t JDR3_JDATA3_Msk = 0xFFFFFFFF;

    // JDR4 fields
    inline constexpr uint32_t JDR4_JDATA4_Pos = 0;
    inline constexpr uint32_t JDR4_JDATA4_Msk = 0xFFFFFFFF;

    // AWD2CR fields
    inline constexpr uint32_t AWD2CR_AWD2CH_Pos = 0;
    inline constexpr uint32_t AWD2CR_AWD2CH_Msk = 0x000FFFFF;

    // AWD3CR fields
    inline constexpr uint32_t AWD3CR_AWD3CH_Pos = 1;
    inline constexpr uint32_t AWD3CR_AWD3CH_Msk = 0x001FFFFE;

    // LTR2 fields
    inline constexpr uint32_t LTR2_LTR2_Pos = 0;
    inline constexpr uint32_t LTR2_LTR2_Msk = 0x03FFFFFF;

    // HTR2 fields
    inline constexpr uint32_t HTR2_HTR2_Pos = 0;
    inline constexpr uint32_t HTR2_HTR2_Msk = 0x03FFFFFF;

    // LTR3 fields
    inline constexpr uint32_t LTR3_LTR3_Pos = 0;
    inline constexpr uint32_t LTR3_LTR3_Msk = 0x03FFFFFF;

    // HTR3 fields
    inline constexpr uint32_t HTR3_HTR3_Pos = 0;
    inline constexpr uint32_t HTR3_HTR3_Msk = 0x03FFFFFF;

    // DIFSEL fields
    inline constexpr uint32_t DIFSEL_DIFSEL_Pos = 0;
    inline constexpr uint32_t DIFSEL_DIFSEL_Msk = 0x000FFFFF;

    // CALFACT fields
    inline constexpr uint32_t CALFACT_CALFACT_S_Pos = 0;
    inline constexpr uint32_t CALFACT_CALFACT_S_Msk = 0x000007FF;
    inline constexpr uint32_t CALFACT_CALFACT_D_Pos = 16;
    inline constexpr uint32_t CALFACT_CALFACT_D_Msk = 0x07FF0000;

    // CALFACT2 fields
    inline constexpr uint32_t CALFACT2_LINCALFACT_Pos = 0;
    inline constexpr uint32_t CALFACT2_LINCALFACT_Msk = 0x3FFFFFFF;

} // namespace ADC2

namespace ADC3_Common {
    // CSR fields
    inline constexpr uint32_t CSR_ADRDY_MST_Pos = 0;
    inline constexpr uint32_t CSR_ADRDY_MST_Msk = 0x00000001;
    inline constexpr uint32_t CSR_ADRDY_MST = (1U << 0);
    inline constexpr uint32_t CSR_EOSMP_MST_Pos = 1;
    inline constexpr uint32_t CSR_EOSMP_MST_Msk = 0x00000002;
    inline constexpr uint32_t CSR_EOSMP_MST = (1U << 1);
    inline constexpr uint32_t CSR_EOC_MST_Pos = 2;
    inline constexpr uint32_t CSR_EOC_MST_Msk = 0x00000004;
    inline constexpr uint32_t CSR_EOC_MST = (1U << 2);
    inline constexpr uint32_t CSR_EOS_MST_Pos = 3;
    inline constexpr uint32_t CSR_EOS_MST_Msk = 0x00000008;
    inline constexpr uint32_t CSR_EOS_MST = (1U << 3);
    inline constexpr uint32_t CSR_OVR_MST_Pos = 4;
    inline constexpr uint32_t CSR_OVR_MST_Msk = 0x00000010;
    inline constexpr uint32_t CSR_OVR_MST = (1U << 4);
    inline constexpr uint32_t CSR_JEOC_MST_Pos = 5;
    inline constexpr uint32_t CSR_JEOC_MST_Msk = 0x00000020;
    inline constexpr uint32_t CSR_JEOC_MST = (1U << 5);
    inline constexpr uint32_t CSR_JEOS_MST_Pos = 6;
    inline constexpr uint32_t CSR_JEOS_MST_Msk = 0x00000040;
    inline constexpr uint32_t CSR_JEOS_MST = (1U << 6);
    inline constexpr uint32_t CSR_AWD1_MST_Pos = 7;
    inline constexpr uint32_t CSR_AWD1_MST_Msk = 0x00000080;
    inline constexpr uint32_t CSR_AWD1_MST = (1U << 7);
    inline constexpr uint32_t CSR_AWD2_MST_Pos = 8;
    inline constexpr uint32_t CSR_AWD2_MST_Msk = 0x00000100;
    inline constexpr uint32_t CSR_AWD2_MST = (1U << 8);
    inline constexpr uint32_t CSR_AWD3_MST_Pos = 9;
    inline constexpr uint32_t CSR_AWD3_MST_Msk = 0x00000200;
    inline constexpr uint32_t CSR_AWD3_MST = (1U << 9);
    inline constexpr uint32_t CSR_JQOVF_MST_Pos = 10;
    inline constexpr uint32_t CSR_JQOVF_MST_Msk = 0x00000400;
    inline constexpr uint32_t CSR_JQOVF_MST = (1U << 10);
    inline constexpr uint32_t CSR_ADRDY_SLV_Pos = 16;
    inline constexpr uint32_t CSR_ADRDY_SLV_Msk = 0x00010000;
    inline constexpr uint32_t CSR_ADRDY_SLV = (1U << 16);
    inline constexpr uint32_t CSR_EOSMP_SLV_Pos = 17;
    inline constexpr uint32_t CSR_EOSMP_SLV_Msk = 0x00020000;
    inline constexpr uint32_t CSR_EOSMP_SLV = (1U << 17);
    inline constexpr uint32_t CSR_EOC_SLV_Pos = 18;
    inline constexpr uint32_t CSR_EOC_SLV_Msk = 0x00040000;
    inline constexpr uint32_t CSR_EOC_SLV = (1U << 18);
    inline constexpr uint32_t CSR_EOS_SLV_Pos = 19;
    inline constexpr uint32_t CSR_EOS_SLV_Msk = 0x00080000;
    inline constexpr uint32_t CSR_EOS_SLV = (1U << 19);
    inline constexpr uint32_t CSR_OVR_SLV_Pos = 20;
    inline constexpr uint32_t CSR_OVR_SLV_Msk = 0x00100000;
    inline constexpr uint32_t CSR_OVR_SLV = (1U << 20);
    inline constexpr uint32_t CSR_JEOC_SLV_Pos = 21;
    inline constexpr uint32_t CSR_JEOC_SLV_Msk = 0x00200000;
    inline constexpr uint32_t CSR_JEOC_SLV = (1U << 21);
    inline constexpr uint32_t CSR_JEOS_SLV_Pos = 22;
    inline constexpr uint32_t CSR_JEOS_SLV_Msk = 0x00400000;
    inline constexpr uint32_t CSR_JEOS_SLV = (1U << 22);
    inline constexpr uint32_t CSR_AWD1_SLV_Pos = 23;
    inline constexpr uint32_t CSR_AWD1_SLV_Msk = 0x00800000;
    inline constexpr uint32_t CSR_AWD1_SLV = (1U << 23);
    inline constexpr uint32_t CSR_AWD2_SLV_Pos = 24;
    inline constexpr uint32_t CSR_AWD2_SLV_Msk = 0x01000000;
    inline constexpr uint32_t CSR_AWD2_SLV = (1U << 24);
    inline constexpr uint32_t CSR_AWD3_SLV_Pos = 25;
    inline constexpr uint32_t CSR_AWD3_SLV_Msk = 0x02000000;
    inline constexpr uint32_t CSR_AWD3_SLV = (1U << 25);
    inline constexpr uint32_t CSR_JQOVF_SLV_Pos = 26;
    inline constexpr uint32_t CSR_JQOVF_SLV_Msk = 0x04000000;
    inline constexpr uint32_t CSR_JQOVF_SLV = (1U << 26);

    // CCR fields
    inline constexpr uint32_t CCR_DUAL_Pos = 0;
    inline constexpr uint32_t CCR_DUAL_Msk = 0x0000001F;
    inline constexpr uint32_t CCR_DELAY_Pos = 8;
    inline constexpr uint32_t CCR_DELAY_Msk = 0x00000F00;
    inline constexpr uint32_t CCR_DAMDF_Pos = 14;
    inline constexpr uint32_t CCR_DAMDF_Msk = 0x0000C000;
    inline constexpr uint32_t CCR_CKMODE_Pos = 16;
    inline constexpr uint32_t CCR_CKMODE_Msk = 0x00030000;
    inline constexpr uint32_t CCR_PRESC_Pos = 18;
    inline constexpr uint32_t CCR_PRESC_Msk = 0x003C0000;
    inline constexpr uint32_t CCR_VREFEN_Pos = 22;
    inline constexpr uint32_t CCR_VREFEN_Msk = 0x00400000;
    inline constexpr uint32_t CCR_VREFEN = (1U << 22);
    inline constexpr uint32_t CCR_VSENSEEN_Pos = 23;
    inline constexpr uint32_t CCR_VSENSEEN_Msk = 0x00800000;
    inline constexpr uint32_t CCR_VSENSEEN = (1U << 23);
    inline constexpr uint32_t CCR_VBATEN_Pos = 24;
    inline constexpr uint32_t CCR_VBATEN_Msk = 0x01000000;
    inline constexpr uint32_t CCR_VBATEN = (1U << 24);

    // CDR fields
    inline constexpr uint32_t CDR_RDATA_MST_Pos = 0;
    inline constexpr uint32_t CDR_RDATA_MST_Msk = 0x0000FFFF;
    inline constexpr uint32_t CDR_RDATA_SLV_Pos = 16;
    inline constexpr uint32_t CDR_RDATA_SLV_Msk = 0xFFFF0000;

} // namespace ADC3_Common

namespace ADC12_Common {
    // CSR fields
    inline constexpr uint32_t CSR_ADRDY_MST_Pos = 0;
    inline constexpr uint32_t CSR_ADRDY_MST_Msk = 0x00000001;
    inline constexpr uint32_t CSR_ADRDY_MST = (1U << 0);
    inline constexpr uint32_t CSR_EOSMP_MST_Pos = 1;
    inline constexpr uint32_t CSR_EOSMP_MST_Msk = 0x00000002;
    inline constexpr uint32_t CSR_EOSMP_MST = (1U << 1);
    inline constexpr uint32_t CSR_EOC_MST_Pos = 2;
    inline constexpr uint32_t CSR_EOC_MST_Msk = 0x00000004;
    inline constexpr uint32_t CSR_EOC_MST = (1U << 2);
    inline constexpr uint32_t CSR_EOS_MST_Pos = 3;
    inline constexpr uint32_t CSR_EOS_MST_Msk = 0x00000008;
    inline constexpr uint32_t CSR_EOS_MST = (1U << 3);
    inline constexpr uint32_t CSR_OVR_MST_Pos = 4;
    inline constexpr uint32_t CSR_OVR_MST_Msk = 0x00000010;
    inline constexpr uint32_t CSR_OVR_MST = (1U << 4);
    inline constexpr uint32_t CSR_JEOC_MST_Pos = 5;
    inline constexpr uint32_t CSR_JEOC_MST_Msk = 0x00000020;
    inline constexpr uint32_t CSR_JEOC_MST = (1U << 5);
    inline constexpr uint32_t CSR_JEOS_MST_Pos = 6;
    inline constexpr uint32_t CSR_JEOS_MST_Msk = 0x00000040;
    inline constexpr uint32_t CSR_JEOS_MST = (1U << 6);
    inline constexpr uint32_t CSR_AWD1_MST_Pos = 7;
    inline constexpr uint32_t CSR_AWD1_MST_Msk = 0x00000080;
    inline constexpr uint32_t CSR_AWD1_MST = (1U << 7);
    inline constexpr uint32_t CSR_AWD2_MST_Pos = 8;
    inline constexpr uint32_t CSR_AWD2_MST_Msk = 0x00000100;
    inline constexpr uint32_t CSR_AWD2_MST = (1U << 8);
    inline constexpr uint32_t CSR_AWD3_MST_Pos = 9;
    inline constexpr uint32_t CSR_AWD3_MST_Msk = 0x00000200;
    inline constexpr uint32_t CSR_AWD3_MST = (1U << 9);
    inline constexpr uint32_t CSR_JQOVF_MST_Pos = 10;
    inline constexpr uint32_t CSR_JQOVF_MST_Msk = 0x00000400;
    inline constexpr uint32_t CSR_JQOVF_MST = (1U << 10);
    inline constexpr uint32_t CSR_ADRDY_SLV_Pos = 16;
    inline constexpr uint32_t CSR_ADRDY_SLV_Msk = 0x00010000;
    inline constexpr uint32_t CSR_ADRDY_SLV = (1U << 16);
    inline constexpr uint32_t CSR_EOSMP_SLV_Pos = 17;
    inline constexpr uint32_t CSR_EOSMP_SLV_Msk = 0x00020000;
    inline constexpr uint32_t CSR_EOSMP_SLV = (1U << 17);
    inline constexpr uint32_t CSR_EOC_SLV_Pos = 18;
    inline constexpr uint32_t CSR_EOC_SLV_Msk = 0x00040000;
    inline constexpr uint32_t CSR_EOC_SLV = (1U << 18);
    inline constexpr uint32_t CSR_EOS_SLV_Pos = 19;
    inline constexpr uint32_t CSR_EOS_SLV_Msk = 0x00080000;
    inline constexpr uint32_t CSR_EOS_SLV = (1U << 19);
    inline constexpr uint32_t CSR_OVR_SLV_Pos = 20;
    inline constexpr uint32_t CSR_OVR_SLV_Msk = 0x00100000;
    inline constexpr uint32_t CSR_OVR_SLV = (1U << 20);
    inline constexpr uint32_t CSR_JEOC_SLV_Pos = 21;
    inline constexpr uint32_t CSR_JEOC_SLV_Msk = 0x00200000;
    inline constexpr uint32_t CSR_JEOC_SLV = (1U << 21);
    inline constexpr uint32_t CSR_JEOS_SLV_Pos = 22;
    inline constexpr uint32_t CSR_JEOS_SLV_Msk = 0x00400000;
    inline constexpr uint32_t CSR_JEOS_SLV = (1U << 22);
    inline constexpr uint32_t CSR_AWD1_SLV_Pos = 23;
    inline constexpr uint32_t CSR_AWD1_SLV_Msk = 0x00800000;
    inline constexpr uint32_t CSR_AWD1_SLV = (1U << 23);
    inline constexpr uint32_t CSR_AWD2_SLV_Pos = 24;
    inline constexpr uint32_t CSR_AWD2_SLV_Msk = 0x01000000;
    inline constexpr uint32_t CSR_AWD2_SLV = (1U << 24);
    inline constexpr uint32_t CSR_AWD3_SLV_Pos = 25;
    inline constexpr uint32_t CSR_AWD3_SLV_Msk = 0x02000000;
    inline constexpr uint32_t CSR_AWD3_SLV = (1U << 25);
    inline constexpr uint32_t CSR_JQOVF_SLV_Pos = 26;
    inline constexpr uint32_t CSR_JQOVF_SLV_Msk = 0x04000000;
    inline constexpr uint32_t CSR_JQOVF_SLV = (1U << 26);

    // CCR fields
    inline constexpr uint32_t CCR_DUAL_Pos = 0;
    inline constexpr uint32_t CCR_DUAL_Msk = 0x0000001F;
    inline constexpr uint32_t CCR_DELAY_Pos = 8;
    inline constexpr uint32_t CCR_DELAY_Msk = 0x00000F00;
    inline constexpr uint32_t CCR_DAMDF_Pos = 14;
    inline constexpr uint32_t CCR_DAMDF_Msk = 0x0000C000;
    inline constexpr uint32_t CCR_CKMODE_Pos = 16;
    inline constexpr uint32_t CCR_CKMODE_Msk = 0x00030000;
    inline constexpr uint32_t CCR_PRESC_Pos = 18;
    inline constexpr uint32_t CCR_PRESC_Msk = 0x003C0000;
    inline constexpr uint32_t CCR_VREFEN_Pos = 22;
    inline constexpr uint32_t CCR_VREFEN_Msk = 0x00400000;
    inline constexpr uint32_t CCR_VREFEN = (1U << 22);
    inline constexpr uint32_t CCR_VSENSEEN_Pos = 23;
    inline constexpr uint32_t CCR_VSENSEEN_Msk = 0x00800000;
    inline constexpr uint32_t CCR_VSENSEEN = (1U << 23);
    inline constexpr uint32_t CCR_VBATEN_Pos = 24;
    inline constexpr uint32_t CCR_VBATEN_Msk = 0x01000000;
    inline constexpr uint32_t CCR_VBATEN = (1U << 24);

    // CDR fields
    inline constexpr uint32_t CDR_RDATA_MST_Pos = 0;
    inline constexpr uint32_t CDR_RDATA_MST_Msk = 0x0000FFFF;
    inline constexpr uint32_t CDR_RDATA_SLV_Pos = 16;
    inline constexpr uint32_t CDR_RDATA_SLV_Msk = 0xFFFF0000;

} // namespace ADC12_Common

// Peripheral instances (lowercase to avoid namespace collision)
namespace periph {
    inline auto* const adc3 = reinterpret_cast<ADC3_t*>(0x58026000);
    inline auto* const adc1 = reinterpret_cast<ADC3_t*>(0x40022000);
    inline auto* const adc2 = reinterpret_cast<ADC3_t*>(0x40022100);
    inline auto* const adc3_common = reinterpret_cast<ADC3_Common_t*>(0x58026300);
    inline auto* const adc12_common = reinterpret_cast<ADC3_Common_t*>(0x40022300);
} // namespace periph

} // namespace sbl::hw::reg

#endif // SBL_HW_REG_STM32H750_ADC1_ADC2_ADC3_HPP
