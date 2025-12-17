/**
 * @file sai.hpp
 * @brief Register definitions for STM32H750 - sai
 *
 * Generated from: stm32h750.svd.patched
 * Generator: cecrops
 * Generated: 2025-12-16T17:57:44.097248
 *
 * DO NOT EDIT - Regenerate with: cecrops generate <mcu-dir>
 */

#ifndef SBL_HW_REG_STM32H750_SAI_HPP
#define SBL_HW_REG_STM32H750_SAI_HPP

#include <cstdint>

namespace sbl::hw::reg {

/** SAI */
struct SAI4_t {
    volatile uint32_t SAI_GCR;  ///< Global configuration register
    volatile uint32_t SAI_ACR1;  ///< Configuration register 1
    volatile uint32_t SAI_ACR2;  ///< Configuration register 2
    volatile uint32_t SAI_AFRCR;  ///< This register has no meaning in AC97 and           SPDIF ...
    volatile uint32_t SAI_ASLOTR;  ///< This register has no meaning in AC97 and           SPDIF ...
    volatile uint32_t SAI_AIM;  ///< Interrupt mask register 2
    volatile uint32_t SAI_ASR;  ///< Status register
    volatile uint32_t SAI_ACLRFR;  ///< Clear flag register
    volatile uint32_t SAI_ADR;  ///< Data register
    volatile uint32_t SAI_BCR1;  ///< Configuration register 1
    volatile uint32_t SAI_BCR2;  ///< Configuration register 2
    volatile uint32_t SAI_BFRCR;  ///< This register has no meaning in AC97 and           SPDIF ...
    volatile uint32_t SAI_BSLOTR;  ///< This register has no meaning in AC97 and           SPDIF ...
    volatile uint32_t SAI_BIM;  ///< Interrupt mask register 2
    volatile uint32_t SAI_BSR;  ///< Status register
    volatile uint32_t SAI_BCLRFR;  ///< Clear flag register
    volatile uint32_t SAI_BDR;  ///< Data register
    volatile uint32_t SAI_PDMCR;  ///< PDM control register
    volatile uint32_t SAI_PDMDLY;  ///< PDM delay register
};

/** SAI */
struct SAI1_t {
    volatile uint32_t SAI_GCR;  ///< Global configuration register
    volatile uint32_t SAI_ACR1;  ///< Configuration register 1
    volatile uint32_t SAI_ACR2;  ///< Configuration register 2
    volatile uint32_t SAI_AFRCR;  ///< This register has no meaning in AC97 and           SPDIF ...
    volatile uint32_t SAI_ASLOTR;  ///< This register has no meaning in AC97 and           SPDIF ...
    volatile uint32_t SAI_AIM;  ///< Interrupt mask register 2
    volatile uint32_t SAI_ASR;  ///< Status register
    volatile uint32_t SAI_ACLRFR;  ///< Clear flag register
    volatile uint32_t SAI_ADR;  ///< Data register
    volatile uint32_t SAI_BCR1;  ///< Configuration register 1
    volatile uint32_t SAI_BCR2;  ///< Configuration register 2
    volatile uint32_t SAI_BFRCR;  ///< This register has no meaning in AC97 and           SPDIF ...
    volatile uint32_t SAI_BSLOTR;  ///< This register has no meaning in AC97 and           SPDIF ...
    volatile uint32_t SAI_BIM;  ///< Interrupt mask register 2
    volatile uint32_t SAI_BSR;  ///< Status register
    volatile uint32_t SAI_BCLRFR;  ///< Clear flag register
    volatile uint32_t SAI_BDR;  ///< Data register
    volatile uint32_t SAI_PDMCR;  ///< PDM control register
    volatile uint32_t SAI_PDMDLY;  ///< PDM delay register
};

/** SAI */
struct SAI2_t {
    volatile uint32_t SAI_GCR;  ///< Global configuration register
    volatile uint32_t SAI_ACR1;  ///< Configuration register 1
    volatile uint32_t SAI_ACR2;  ///< Configuration register 2
    volatile uint32_t SAI_AFRCR;  ///< This register has no meaning in AC97 and           SPDIF ...
    volatile uint32_t SAI_ASLOTR;  ///< This register has no meaning in AC97 and           SPDIF ...
    volatile uint32_t SAI_AIM;  ///< Interrupt mask register 2
    volatile uint32_t SAI_ASR;  ///< Status register
    volatile uint32_t SAI_ACLRFR;  ///< Clear flag register
    volatile uint32_t SAI_ADR;  ///< Data register
    volatile uint32_t SAI_BCR1;  ///< Configuration register 1
    volatile uint32_t SAI_BCR2;  ///< Configuration register 2
    volatile uint32_t SAI_BFRCR;  ///< This register has no meaning in AC97 and           SPDIF ...
    volatile uint32_t SAI_BSLOTR;  ///< This register has no meaning in AC97 and           SPDIF ...
    volatile uint32_t SAI_BIM;  ///< Interrupt mask register 2
    volatile uint32_t SAI_BSR;  ///< Status register
    volatile uint32_t SAI_BCLRFR;  ///< Clear flag register
    volatile uint32_t SAI_BDR;  ///< Data register
    volatile uint32_t SAI_PDMCR;  ///< PDM control register
    volatile uint32_t SAI_PDMDLY;  ///< PDM delay register
};

/** SAI */
struct SAI3_t {
    volatile uint32_t SAI_GCR;  ///< Global configuration register
    volatile uint32_t SAI_ACR1;  ///< Configuration register 1
    volatile uint32_t SAI_ACR2;  ///< Configuration register 2
    volatile uint32_t SAI_AFRCR;  ///< This register has no meaning in AC97 and           SPDIF ...
    volatile uint32_t SAI_ASLOTR;  ///< This register has no meaning in AC97 and           SPDIF ...
    volatile uint32_t SAI_AIM;  ///< Interrupt mask register 2
    volatile uint32_t SAI_ASR;  ///< Status register
    volatile uint32_t SAI_ACLRFR;  ///< Clear flag register
    volatile uint32_t SAI_ADR;  ///< Data register
    volatile uint32_t SAI_BCR1;  ///< Configuration register 1
    volatile uint32_t SAI_BCR2;  ///< Configuration register 2
    volatile uint32_t SAI_BFRCR;  ///< This register has no meaning in AC97 and           SPDIF ...
    volatile uint32_t SAI_BSLOTR;  ///< This register has no meaning in AC97 and           SPDIF ...
    volatile uint32_t SAI_BIM;  ///< Interrupt mask register 2
    volatile uint32_t SAI_BSR;  ///< Status register
    volatile uint32_t SAI_BCLRFR;  ///< Clear flag register
    volatile uint32_t SAI_BDR;  ///< Data register
    volatile uint32_t SAI_PDMCR;  ///< PDM control register
    volatile uint32_t SAI_PDMDLY;  ///< PDM delay register
};

namespace SAI4 {
    // SAI_GCR fields
    inline constexpr uint32_t SAI_GCR_SYNCIN_Pos = 0;
    inline constexpr uint32_t SAI_GCR_SYNCIN_Msk = 0x00000003;
    inline constexpr uint32_t SAI_GCR_SYNCOUT_Pos = 4;
    inline constexpr uint32_t SAI_GCR_SYNCOUT_Msk = 0x00000030;

    // SAI_ACR1 fields
    inline constexpr uint32_t SAI_ACR1_MODE_Pos = 0;
    inline constexpr uint32_t SAI_ACR1_MODE_Msk = 0x00000003;
    inline constexpr uint32_t SAI_ACR1_PRTCFG_Pos = 2;
    inline constexpr uint32_t SAI_ACR1_PRTCFG_Msk = 0x0000000C;
    inline constexpr uint32_t SAI_ACR1_DS_Pos = 5;
    inline constexpr uint32_t SAI_ACR1_DS_Msk = 0x000000E0;
    inline constexpr uint32_t SAI_ACR1_LSBFIRST_Pos = 8;
    inline constexpr uint32_t SAI_ACR1_LSBFIRST_Msk = 0x00000100;
    inline constexpr uint32_t SAI_ACR1_LSBFIRST = (1U << 8);
    inline constexpr uint32_t SAI_ACR1_CKSTR_Pos = 9;
    inline constexpr uint32_t SAI_ACR1_CKSTR_Msk = 0x00000200;
    inline constexpr uint32_t SAI_ACR1_CKSTR = (1U << 9);
    inline constexpr uint32_t SAI_ACR1_SYNCEN_Pos = 10;
    inline constexpr uint32_t SAI_ACR1_SYNCEN_Msk = 0x00000C00;
    inline constexpr uint32_t SAI_ACR1_MONO_Pos = 12;
    inline constexpr uint32_t SAI_ACR1_MONO_Msk = 0x00001000;
    inline constexpr uint32_t SAI_ACR1_MONO = (1U << 12);
    inline constexpr uint32_t SAI_ACR1_OUTDRIV_Pos = 13;
    inline constexpr uint32_t SAI_ACR1_OUTDRIV_Msk = 0x00002000;
    inline constexpr uint32_t SAI_ACR1_OUTDRIV = (1U << 13);
    inline constexpr uint32_t SAI_ACR1_SAIXEN_Pos = 16;
    inline constexpr uint32_t SAI_ACR1_SAIXEN_Msk = 0x00010000;
    inline constexpr uint32_t SAI_ACR1_SAIXEN = (1U << 16);
    inline constexpr uint32_t SAI_ACR1_DMAEN_Pos = 17;
    inline constexpr uint32_t SAI_ACR1_DMAEN_Msk = 0x00020000;
    inline constexpr uint32_t SAI_ACR1_DMAEN = (1U << 17);
    inline constexpr uint32_t SAI_ACR1_NOMCK_Pos = 19;
    inline constexpr uint32_t SAI_ACR1_NOMCK_Msk = 0x00080000;
    inline constexpr uint32_t SAI_ACR1_NOMCK = (1U << 19);
    inline constexpr uint32_t SAI_ACR1_MCKDIV_Pos = 20;
    inline constexpr uint32_t SAI_ACR1_MCKDIV_Msk = 0x00F00000;
    inline constexpr uint32_t SAI_ACR1_OSR_Pos = 26;
    inline constexpr uint32_t SAI_ACR1_OSR_Msk = 0x04000000;
    inline constexpr uint32_t SAI_ACR1_OSR = (1U << 26);

    // SAI_ACR2 fields
    inline constexpr uint32_t SAI_ACR2_FTH_Pos = 0;
    inline constexpr uint32_t SAI_ACR2_FTH_Msk = 0x00000007;
    inline constexpr uint32_t SAI_ACR2_FFLUSH_Pos = 3;
    inline constexpr uint32_t SAI_ACR2_FFLUSH_Msk = 0x00000008;
    inline constexpr uint32_t SAI_ACR2_FFLUSH = (1U << 3);
    inline constexpr uint32_t SAI_ACR2_TRIS_Pos = 4;
    inline constexpr uint32_t SAI_ACR2_TRIS_Msk = 0x00000010;
    inline constexpr uint32_t SAI_ACR2_TRIS = (1U << 4);
    inline constexpr uint32_t SAI_ACR2_MUTE_Pos = 5;
    inline constexpr uint32_t SAI_ACR2_MUTE_Msk = 0x00000020;
    inline constexpr uint32_t SAI_ACR2_MUTE = (1U << 5);
    inline constexpr uint32_t SAI_ACR2_MUTEVAL_Pos = 6;
    inline constexpr uint32_t SAI_ACR2_MUTEVAL_Msk = 0x00000040;
    inline constexpr uint32_t SAI_ACR2_MUTEVAL = (1U << 6);
    inline constexpr uint32_t SAI_ACR2_MUTECNT_Pos = 7;
    inline constexpr uint32_t SAI_ACR2_MUTECNT_Msk = 0x00001F80;
    inline constexpr uint32_t SAI_ACR2_CPL_Pos = 13;
    inline constexpr uint32_t SAI_ACR2_CPL_Msk = 0x00002000;
    inline constexpr uint32_t SAI_ACR2_CPL = (1U << 13);
    inline constexpr uint32_t SAI_ACR2_COMP_Pos = 14;
    inline constexpr uint32_t SAI_ACR2_COMP_Msk = 0x0000C000;

    // SAI_AFRCR fields
    inline constexpr uint32_t SAI_AFRCR_FRL_Pos = 0;
    inline constexpr uint32_t SAI_AFRCR_FRL_Msk = 0x000000FF;
    inline constexpr uint32_t SAI_AFRCR_FSALL_Pos = 8;
    inline constexpr uint32_t SAI_AFRCR_FSALL_Msk = 0x00007F00;
    inline constexpr uint32_t SAI_AFRCR_FSDEF_Pos = 16;
    inline constexpr uint32_t SAI_AFRCR_FSDEF_Msk = 0x00010000;
    inline constexpr uint32_t SAI_AFRCR_FSDEF = (1U << 16);
    inline constexpr uint32_t SAI_AFRCR_FSPOL_Pos = 17;
    inline constexpr uint32_t SAI_AFRCR_FSPOL_Msk = 0x00020000;
    inline constexpr uint32_t SAI_AFRCR_FSPOL = (1U << 17);
    inline constexpr uint32_t SAI_AFRCR_FSOFF_Pos = 18;
    inline constexpr uint32_t SAI_AFRCR_FSOFF_Msk = 0x00040000;
    inline constexpr uint32_t SAI_AFRCR_FSOFF = (1U << 18);

    // SAI_ASLOTR fields
    inline constexpr uint32_t SAI_ASLOTR_FBOFF_Pos = 0;
    inline constexpr uint32_t SAI_ASLOTR_FBOFF_Msk = 0x0000001F;
    inline constexpr uint32_t SAI_ASLOTR_SLOTSZ_Pos = 6;
    inline constexpr uint32_t SAI_ASLOTR_SLOTSZ_Msk = 0x000000C0;
    inline constexpr uint32_t SAI_ASLOTR_NBSLOT_Pos = 8;
    inline constexpr uint32_t SAI_ASLOTR_NBSLOT_Msk = 0x00000F00;
    inline constexpr uint32_t SAI_ASLOTR_SLOTEN_Pos = 16;
    inline constexpr uint32_t SAI_ASLOTR_SLOTEN_Msk = 0xFFFF0000;

    // SAI_AIM fields
    inline constexpr uint32_t SAI_AIM_OVRUDRIE_Pos = 0;
    inline constexpr uint32_t SAI_AIM_OVRUDRIE_Msk = 0x00000001;
    inline constexpr uint32_t SAI_AIM_OVRUDRIE = (1U << 0);
    inline constexpr uint32_t SAI_AIM_MUTEDETIE_Pos = 1;
    inline constexpr uint32_t SAI_AIM_MUTEDETIE_Msk = 0x00000002;
    inline constexpr uint32_t SAI_AIM_MUTEDETIE = (1U << 1);
    inline constexpr uint32_t SAI_AIM_WCKCFGIE_Pos = 2;
    inline constexpr uint32_t SAI_AIM_WCKCFGIE_Msk = 0x00000004;
    inline constexpr uint32_t SAI_AIM_WCKCFGIE = (1U << 2);
    inline constexpr uint32_t SAI_AIM_FREQIE_Pos = 3;
    inline constexpr uint32_t SAI_AIM_FREQIE_Msk = 0x00000008;
    inline constexpr uint32_t SAI_AIM_FREQIE = (1U << 3);
    inline constexpr uint32_t SAI_AIM_CNRDYIE_Pos = 4;
    inline constexpr uint32_t SAI_AIM_CNRDYIE_Msk = 0x00000010;
    inline constexpr uint32_t SAI_AIM_CNRDYIE = (1U << 4);
    inline constexpr uint32_t SAI_AIM_AFSDETIE_Pos = 5;
    inline constexpr uint32_t SAI_AIM_AFSDETIE_Msk = 0x00000020;
    inline constexpr uint32_t SAI_AIM_AFSDETIE = (1U << 5);
    inline constexpr uint32_t SAI_AIM_LFSDETIE_Pos = 6;
    inline constexpr uint32_t SAI_AIM_LFSDETIE_Msk = 0x00000040;
    inline constexpr uint32_t SAI_AIM_LFSDETIE = (1U << 6);

    // SAI_ASR fields
    inline constexpr uint32_t SAI_ASR_OVRUDR_Pos = 0;
    inline constexpr uint32_t SAI_ASR_OVRUDR_Msk = 0x00000001;
    inline constexpr uint32_t SAI_ASR_OVRUDR = (1U << 0);
    inline constexpr uint32_t SAI_ASR_MUTEDET_Pos = 1;
    inline constexpr uint32_t SAI_ASR_MUTEDET_Msk = 0x00000002;
    inline constexpr uint32_t SAI_ASR_MUTEDET = (1U << 1);
    inline constexpr uint32_t SAI_ASR_WCKCFG_Pos = 2;
    inline constexpr uint32_t SAI_ASR_WCKCFG_Msk = 0x00000004;
    inline constexpr uint32_t SAI_ASR_WCKCFG = (1U << 2);
    inline constexpr uint32_t SAI_ASR_FREQ_Pos = 3;
    inline constexpr uint32_t SAI_ASR_FREQ_Msk = 0x00000008;
    inline constexpr uint32_t SAI_ASR_FREQ = (1U << 3);
    inline constexpr uint32_t SAI_ASR_CNRDY_Pos = 4;
    inline constexpr uint32_t SAI_ASR_CNRDY_Msk = 0x00000010;
    inline constexpr uint32_t SAI_ASR_CNRDY = (1U << 4);
    inline constexpr uint32_t SAI_ASR_AFSDET_Pos = 5;
    inline constexpr uint32_t SAI_ASR_AFSDET_Msk = 0x00000020;
    inline constexpr uint32_t SAI_ASR_AFSDET = (1U << 5);
    inline constexpr uint32_t SAI_ASR_LFSDET_Pos = 6;
    inline constexpr uint32_t SAI_ASR_LFSDET_Msk = 0x00000040;
    inline constexpr uint32_t SAI_ASR_LFSDET = (1U << 6);
    inline constexpr uint32_t SAI_ASR_FLVL_Pos = 16;
    inline constexpr uint32_t SAI_ASR_FLVL_Msk = 0x00070000;

    // SAI_ACLRFR fields
    inline constexpr uint32_t SAI_ACLRFR_COVRUDR_Pos = 0;
    inline constexpr uint32_t SAI_ACLRFR_COVRUDR_Msk = 0x00000001;
    inline constexpr uint32_t SAI_ACLRFR_COVRUDR = (1U << 0);
    inline constexpr uint32_t SAI_ACLRFR_CMUTEDET_Pos = 1;
    inline constexpr uint32_t SAI_ACLRFR_CMUTEDET_Msk = 0x00000002;
    inline constexpr uint32_t SAI_ACLRFR_CMUTEDET = (1U << 1);
    inline constexpr uint32_t SAI_ACLRFR_CWCKCFG_Pos = 2;
    inline constexpr uint32_t SAI_ACLRFR_CWCKCFG_Msk = 0x00000004;
    inline constexpr uint32_t SAI_ACLRFR_CWCKCFG = (1U << 2);
    inline constexpr uint32_t SAI_ACLRFR_CCNRDY_Pos = 4;
    inline constexpr uint32_t SAI_ACLRFR_CCNRDY_Msk = 0x00000010;
    inline constexpr uint32_t SAI_ACLRFR_CCNRDY = (1U << 4);
    inline constexpr uint32_t SAI_ACLRFR_CAFSDET_Pos = 5;
    inline constexpr uint32_t SAI_ACLRFR_CAFSDET_Msk = 0x00000020;
    inline constexpr uint32_t SAI_ACLRFR_CAFSDET = (1U << 5);
    inline constexpr uint32_t SAI_ACLRFR_CLFSDET_Pos = 6;
    inline constexpr uint32_t SAI_ACLRFR_CLFSDET_Msk = 0x00000040;
    inline constexpr uint32_t SAI_ACLRFR_CLFSDET = (1U << 6);

    // SAI_ADR fields
    inline constexpr uint32_t SAI_ADR_DATA_Pos = 0;
    inline constexpr uint32_t SAI_ADR_DATA_Msk = 0xFFFFFFFF;

    // SAI_BCR1 fields
    inline constexpr uint32_t SAI_BCR1_MODE_Pos = 0;
    inline constexpr uint32_t SAI_BCR1_MODE_Msk = 0x00000003;
    inline constexpr uint32_t SAI_BCR1_PRTCFG_Pos = 2;
    inline constexpr uint32_t SAI_BCR1_PRTCFG_Msk = 0x0000000C;
    inline constexpr uint32_t SAI_BCR1_DS_Pos = 5;
    inline constexpr uint32_t SAI_BCR1_DS_Msk = 0x000000E0;
    inline constexpr uint32_t SAI_BCR1_LSBFIRST_Pos = 8;
    inline constexpr uint32_t SAI_BCR1_LSBFIRST_Msk = 0x00000100;
    inline constexpr uint32_t SAI_BCR1_LSBFIRST = (1U << 8);
    inline constexpr uint32_t SAI_BCR1_CKSTR_Pos = 9;
    inline constexpr uint32_t SAI_BCR1_CKSTR_Msk = 0x00000200;
    inline constexpr uint32_t SAI_BCR1_CKSTR = (1U << 9);
    inline constexpr uint32_t SAI_BCR1_SYNCEN_Pos = 10;
    inline constexpr uint32_t SAI_BCR1_SYNCEN_Msk = 0x00000C00;
    inline constexpr uint32_t SAI_BCR1_MONO_Pos = 12;
    inline constexpr uint32_t SAI_BCR1_MONO_Msk = 0x00001000;
    inline constexpr uint32_t SAI_BCR1_MONO = (1U << 12);
    inline constexpr uint32_t SAI_BCR1_OUTDRIV_Pos = 13;
    inline constexpr uint32_t SAI_BCR1_OUTDRIV_Msk = 0x00002000;
    inline constexpr uint32_t SAI_BCR1_OUTDRIV = (1U << 13);
    inline constexpr uint32_t SAI_BCR1_SAIXEN_Pos = 16;
    inline constexpr uint32_t SAI_BCR1_SAIXEN_Msk = 0x00010000;
    inline constexpr uint32_t SAI_BCR1_SAIXEN = (1U << 16);
    inline constexpr uint32_t SAI_BCR1_DMAEN_Pos = 17;
    inline constexpr uint32_t SAI_BCR1_DMAEN_Msk = 0x00020000;
    inline constexpr uint32_t SAI_BCR1_DMAEN = (1U << 17);
    inline constexpr uint32_t SAI_BCR1_NOMCK_Pos = 19;
    inline constexpr uint32_t SAI_BCR1_NOMCK_Msk = 0x00080000;
    inline constexpr uint32_t SAI_BCR1_NOMCK = (1U << 19);
    inline constexpr uint32_t SAI_BCR1_MCKDIV_Pos = 20;
    inline constexpr uint32_t SAI_BCR1_MCKDIV_Msk = 0x00F00000;
    inline constexpr uint32_t SAI_BCR1_OSR_Pos = 26;
    inline constexpr uint32_t SAI_BCR1_OSR_Msk = 0x04000000;
    inline constexpr uint32_t SAI_BCR1_OSR = (1U << 26);

    // SAI_BCR2 fields
    inline constexpr uint32_t SAI_BCR2_FTH_Pos = 0;
    inline constexpr uint32_t SAI_BCR2_FTH_Msk = 0x00000007;
    inline constexpr uint32_t SAI_BCR2_FFLUSH_Pos = 3;
    inline constexpr uint32_t SAI_BCR2_FFLUSH_Msk = 0x00000008;
    inline constexpr uint32_t SAI_BCR2_FFLUSH = (1U << 3);
    inline constexpr uint32_t SAI_BCR2_TRIS_Pos = 4;
    inline constexpr uint32_t SAI_BCR2_TRIS_Msk = 0x00000010;
    inline constexpr uint32_t SAI_BCR2_TRIS = (1U << 4);
    inline constexpr uint32_t SAI_BCR2_MUTE_Pos = 5;
    inline constexpr uint32_t SAI_BCR2_MUTE_Msk = 0x00000020;
    inline constexpr uint32_t SAI_BCR2_MUTE = (1U << 5);
    inline constexpr uint32_t SAI_BCR2_MUTEVAL_Pos = 6;
    inline constexpr uint32_t SAI_BCR2_MUTEVAL_Msk = 0x00000040;
    inline constexpr uint32_t SAI_BCR2_MUTEVAL = (1U << 6);
    inline constexpr uint32_t SAI_BCR2_MUTECNT_Pos = 7;
    inline constexpr uint32_t SAI_BCR2_MUTECNT_Msk = 0x00001F80;
    inline constexpr uint32_t SAI_BCR2_CPL_Pos = 13;
    inline constexpr uint32_t SAI_BCR2_CPL_Msk = 0x00002000;
    inline constexpr uint32_t SAI_BCR2_CPL = (1U << 13);
    inline constexpr uint32_t SAI_BCR2_COMP_Pos = 14;
    inline constexpr uint32_t SAI_BCR2_COMP_Msk = 0x0000C000;

    // SAI_BFRCR fields
    inline constexpr uint32_t SAI_BFRCR_FRL_Pos = 0;
    inline constexpr uint32_t SAI_BFRCR_FRL_Msk = 0x000000FF;
    inline constexpr uint32_t SAI_BFRCR_FSALL_Pos = 8;
    inline constexpr uint32_t SAI_BFRCR_FSALL_Msk = 0x00007F00;
    inline constexpr uint32_t SAI_BFRCR_FSDEF_Pos = 16;
    inline constexpr uint32_t SAI_BFRCR_FSDEF_Msk = 0x00010000;
    inline constexpr uint32_t SAI_BFRCR_FSDEF = (1U << 16);
    inline constexpr uint32_t SAI_BFRCR_FSPOL_Pos = 17;
    inline constexpr uint32_t SAI_BFRCR_FSPOL_Msk = 0x00020000;
    inline constexpr uint32_t SAI_BFRCR_FSPOL = (1U << 17);
    inline constexpr uint32_t SAI_BFRCR_FSOFF_Pos = 18;
    inline constexpr uint32_t SAI_BFRCR_FSOFF_Msk = 0x00040000;
    inline constexpr uint32_t SAI_BFRCR_FSOFF = (1U << 18);

    // SAI_BSLOTR fields
    inline constexpr uint32_t SAI_BSLOTR_FBOFF_Pos = 0;
    inline constexpr uint32_t SAI_BSLOTR_FBOFF_Msk = 0x0000001F;
    inline constexpr uint32_t SAI_BSLOTR_SLOTSZ_Pos = 6;
    inline constexpr uint32_t SAI_BSLOTR_SLOTSZ_Msk = 0x000000C0;
    inline constexpr uint32_t SAI_BSLOTR_NBSLOT_Pos = 8;
    inline constexpr uint32_t SAI_BSLOTR_NBSLOT_Msk = 0x00000F00;
    inline constexpr uint32_t SAI_BSLOTR_SLOTEN_Pos = 16;
    inline constexpr uint32_t SAI_BSLOTR_SLOTEN_Msk = 0xFFFF0000;

    // SAI_BIM fields
    inline constexpr uint32_t SAI_BIM_OVRUDRIE_Pos = 0;
    inline constexpr uint32_t SAI_BIM_OVRUDRIE_Msk = 0x00000001;
    inline constexpr uint32_t SAI_BIM_OVRUDRIE = (1U << 0);
    inline constexpr uint32_t SAI_BIM_MUTEDETIE_Pos = 1;
    inline constexpr uint32_t SAI_BIM_MUTEDETIE_Msk = 0x00000002;
    inline constexpr uint32_t SAI_BIM_MUTEDETIE = (1U << 1);
    inline constexpr uint32_t SAI_BIM_WCKCFGIE_Pos = 2;
    inline constexpr uint32_t SAI_BIM_WCKCFGIE_Msk = 0x00000004;
    inline constexpr uint32_t SAI_BIM_WCKCFGIE = (1U << 2);
    inline constexpr uint32_t SAI_BIM_FREQIE_Pos = 3;
    inline constexpr uint32_t SAI_BIM_FREQIE_Msk = 0x00000008;
    inline constexpr uint32_t SAI_BIM_FREQIE = (1U << 3);
    inline constexpr uint32_t SAI_BIM_CNRDYIE_Pos = 4;
    inline constexpr uint32_t SAI_BIM_CNRDYIE_Msk = 0x00000010;
    inline constexpr uint32_t SAI_BIM_CNRDYIE = (1U << 4);
    inline constexpr uint32_t SAI_BIM_AFSDETIE_Pos = 5;
    inline constexpr uint32_t SAI_BIM_AFSDETIE_Msk = 0x00000020;
    inline constexpr uint32_t SAI_BIM_AFSDETIE = (1U << 5);
    inline constexpr uint32_t SAI_BIM_LFSDETIE_Pos = 6;
    inline constexpr uint32_t SAI_BIM_LFSDETIE_Msk = 0x00000040;
    inline constexpr uint32_t SAI_BIM_LFSDETIE = (1U << 6);

    // SAI_BSR fields
    inline constexpr uint32_t SAI_BSR_OVRUDR_Pos = 0;
    inline constexpr uint32_t SAI_BSR_OVRUDR_Msk = 0x00000001;
    inline constexpr uint32_t SAI_BSR_OVRUDR = (1U << 0);
    inline constexpr uint32_t SAI_BSR_MUTEDET_Pos = 1;
    inline constexpr uint32_t SAI_BSR_MUTEDET_Msk = 0x00000002;
    inline constexpr uint32_t SAI_BSR_MUTEDET = (1U << 1);
    inline constexpr uint32_t SAI_BSR_WCKCFG_Pos = 2;
    inline constexpr uint32_t SAI_BSR_WCKCFG_Msk = 0x00000004;
    inline constexpr uint32_t SAI_BSR_WCKCFG = (1U << 2);
    inline constexpr uint32_t SAI_BSR_FREQ_Pos = 3;
    inline constexpr uint32_t SAI_BSR_FREQ_Msk = 0x00000008;
    inline constexpr uint32_t SAI_BSR_FREQ = (1U << 3);
    inline constexpr uint32_t SAI_BSR_CNRDY_Pos = 4;
    inline constexpr uint32_t SAI_BSR_CNRDY_Msk = 0x00000010;
    inline constexpr uint32_t SAI_BSR_CNRDY = (1U << 4);
    inline constexpr uint32_t SAI_BSR_AFSDET_Pos = 5;
    inline constexpr uint32_t SAI_BSR_AFSDET_Msk = 0x00000020;
    inline constexpr uint32_t SAI_BSR_AFSDET = (1U << 5);
    inline constexpr uint32_t SAI_BSR_LFSDET_Pos = 6;
    inline constexpr uint32_t SAI_BSR_LFSDET_Msk = 0x00000040;
    inline constexpr uint32_t SAI_BSR_LFSDET = (1U << 6);
    inline constexpr uint32_t SAI_BSR_FLVL_Pos = 16;
    inline constexpr uint32_t SAI_BSR_FLVL_Msk = 0x00070000;

    // SAI_BCLRFR fields
    inline constexpr uint32_t SAI_BCLRFR_COVRUDR_Pos = 0;
    inline constexpr uint32_t SAI_BCLRFR_COVRUDR_Msk = 0x00000001;
    inline constexpr uint32_t SAI_BCLRFR_COVRUDR = (1U << 0);
    inline constexpr uint32_t SAI_BCLRFR_CMUTEDET_Pos = 1;
    inline constexpr uint32_t SAI_BCLRFR_CMUTEDET_Msk = 0x00000002;
    inline constexpr uint32_t SAI_BCLRFR_CMUTEDET = (1U << 1);
    inline constexpr uint32_t SAI_BCLRFR_CWCKCFG_Pos = 2;
    inline constexpr uint32_t SAI_BCLRFR_CWCKCFG_Msk = 0x00000004;
    inline constexpr uint32_t SAI_BCLRFR_CWCKCFG = (1U << 2);
    inline constexpr uint32_t SAI_BCLRFR_CCNRDY_Pos = 4;
    inline constexpr uint32_t SAI_BCLRFR_CCNRDY_Msk = 0x00000010;
    inline constexpr uint32_t SAI_BCLRFR_CCNRDY = (1U << 4);
    inline constexpr uint32_t SAI_BCLRFR_CAFSDET_Pos = 5;
    inline constexpr uint32_t SAI_BCLRFR_CAFSDET_Msk = 0x00000020;
    inline constexpr uint32_t SAI_BCLRFR_CAFSDET = (1U << 5);
    inline constexpr uint32_t SAI_BCLRFR_CLFSDET_Pos = 6;
    inline constexpr uint32_t SAI_BCLRFR_CLFSDET_Msk = 0x00000040;
    inline constexpr uint32_t SAI_BCLRFR_CLFSDET = (1U << 6);

    // SAI_BDR fields
    inline constexpr uint32_t SAI_BDR_DATA_Pos = 0;
    inline constexpr uint32_t SAI_BDR_DATA_Msk = 0xFFFFFFFF;

    // SAI_PDMCR fields
    inline constexpr uint32_t SAI_PDMCR_PDMEN_Pos = 0;
    inline constexpr uint32_t SAI_PDMCR_PDMEN_Msk = 0x00000001;
    inline constexpr uint32_t SAI_PDMCR_PDMEN = (1U << 0);
    inline constexpr uint32_t SAI_PDMCR_MICNBR_Pos = 4;
    inline constexpr uint32_t SAI_PDMCR_MICNBR_Msk = 0x00000030;
    inline constexpr uint32_t SAI_PDMCR_CKEN1_Pos = 8;
    inline constexpr uint32_t SAI_PDMCR_CKEN1_Msk = 0x00000100;
    inline constexpr uint32_t SAI_PDMCR_CKEN1 = (1U << 8);
    inline constexpr uint32_t SAI_PDMCR_CKEN2_Pos = 9;
    inline constexpr uint32_t SAI_PDMCR_CKEN2_Msk = 0x00000200;
    inline constexpr uint32_t SAI_PDMCR_CKEN2 = (1U << 9);
    inline constexpr uint32_t SAI_PDMCR_CKEN3_Pos = 10;
    inline constexpr uint32_t SAI_PDMCR_CKEN3_Msk = 0x00000400;
    inline constexpr uint32_t SAI_PDMCR_CKEN3 = (1U << 10);
    inline constexpr uint32_t SAI_PDMCR_CKEN4_Pos = 11;
    inline constexpr uint32_t SAI_PDMCR_CKEN4_Msk = 0x00000800;
    inline constexpr uint32_t SAI_PDMCR_CKEN4 = (1U << 11);

    // SAI_PDMDLY fields
    inline constexpr uint32_t SAI_PDMDLY_DLYM1L_Pos = 0;
    inline constexpr uint32_t SAI_PDMDLY_DLYM1L_Msk = 0x00000007;
    inline constexpr uint32_t SAI_PDMDLY_DLYM1R_Pos = 4;
    inline constexpr uint32_t SAI_PDMDLY_DLYM1R_Msk = 0x00000070;
    inline constexpr uint32_t SAI_PDMDLY_DLYM2L_Pos = 8;
    inline constexpr uint32_t SAI_PDMDLY_DLYM2L_Msk = 0x00000700;
    inline constexpr uint32_t SAI_PDMDLY_DLYM2R_Pos = 12;
    inline constexpr uint32_t SAI_PDMDLY_DLYM2R_Msk = 0x00007000;
    inline constexpr uint32_t SAI_PDMDLY_DLYM3L_Pos = 16;
    inline constexpr uint32_t SAI_PDMDLY_DLYM3L_Msk = 0x00070000;
    inline constexpr uint32_t SAI_PDMDLY_DLYM3R_Pos = 20;
    inline constexpr uint32_t SAI_PDMDLY_DLYM3R_Msk = 0x00700000;
    inline constexpr uint32_t SAI_PDMDLY_DLYM4L_Pos = 24;
    inline constexpr uint32_t SAI_PDMDLY_DLYM4L_Msk = 0x07000000;
    inline constexpr uint32_t SAI_PDMDLY_DLYM4R_Pos = 28;
    inline constexpr uint32_t SAI_PDMDLY_DLYM4R_Msk = 0x70000000;

} // namespace SAI4

namespace SAI1 {
    // SAI_GCR fields
    inline constexpr uint32_t SAI_GCR_SYNCIN_Pos = 0;
    inline constexpr uint32_t SAI_GCR_SYNCIN_Msk = 0x00000003;
    inline constexpr uint32_t SAI_GCR_SYNCOUT_Pos = 4;
    inline constexpr uint32_t SAI_GCR_SYNCOUT_Msk = 0x00000030;

    // SAI_ACR1 fields
    inline constexpr uint32_t SAI_ACR1_MODE_Pos = 0;
    inline constexpr uint32_t SAI_ACR1_MODE_Msk = 0x00000003;
    inline constexpr uint32_t SAI_ACR1_PRTCFG_Pos = 2;
    inline constexpr uint32_t SAI_ACR1_PRTCFG_Msk = 0x0000000C;
    inline constexpr uint32_t SAI_ACR1_DS_Pos = 5;
    inline constexpr uint32_t SAI_ACR1_DS_Msk = 0x000000E0;
    inline constexpr uint32_t SAI_ACR1_LSBFIRST_Pos = 8;
    inline constexpr uint32_t SAI_ACR1_LSBFIRST_Msk = 0x00000100;
    inline constexpr uint32_t SAI_ACR1_LSBFIRST = (1U << 8);
    inline constexpr uint32_t SAI_ACR1_CKSTR_Pos = 9;
    inline constexpr uint32_t SAI_ACR1_CKSTR_Msk = 0x00000200;
    inline constexpr uint32_t SAI_ACR1_CKSTR = (1U << 9);
    inline constexpr uint32_t SAI_ACR1_SYNCEN_Pos = 10;
    inline constexpr uint32_t SAI_ACR1_SYNCEN_Msk = 0x00000C00;
    inline constexpr uint32_t SAI_ACR1_MONO_Pos = 12;
    inline constexpr uint32_t SAI_ACR1_MONO_Msk = 0x00001000;
    inline constexpr uint32_t SAI_ACR1_MONO = (1U << 12);
    inline constexpr uint32_t SAI_ACR1_OUTDRIV_Pos = 13;
    inline constexpr uint32_t SAI_ACR1_OUTDRIV_Msk = 0x00002000;
    inline constexpr uint32_t SAI_ACR1_OUTDRIV = (1U << 13);
    inline constexpr uint32_t SAI_ACR1_SAIXEN_Pos = 16;
    inline constexpr uint32_t SAI_ACR1_SAIXEN_Msk = 0x00010000;
    inline constexpr uint32_t SAI_ACR1_SAIXEN = (1U << 16);
    inline constexpr uint32_t SAI_ACR1_DMAEN_Pos = 17;
    inline constexpr uint32_t SAI_ACR1_DMAEN_Msk = 0x00020000;
    inline constexpr uint32_t SAI_ACR1_DMAEN = (1U << 17);
    inline constexpr uint32_t SAI_ACR1_NOMCK_Pos = 19;
    inline constexpr uint32_t SAI_ACR1_NOMCK_Msk = 0x00080000;
    inline constexpr uint32_t SAI_ACR1_NOMCK = (1U << 19);
    inline constexpr uint32_t SAI_ACR1_MCKDIV_Pos = 20;
    inline constexpr uint32_t SAI_ACR1_MCKDIV_Msk = 0x00F00000;
    inline constexpr uint32_t SAI_ACR1_OSR_Pos = 26;
    inline constexpr uint32_t SAI_ACR1_OSR_Msk = 0x04000000;
    inline constexpr uint32_t SAI_ACR1_OSR = (1U << 26);

    // SAI_ACR2 fields
    inline constexpr uint32_t SAI_ACR2_FTH_Pos = 0;
    inline constexpr uint32_t SAI_ACR2_FTH_Msk = 0x00000007;
    inline constexpr uint32_t SAI_ACR2_FFLUSH_Pos = 3;
    inline constexpr uint32_t SAI_ACR2_FFLUSH_Msk = 0x00000008;
    inline constexpr uint32_t SAI_ACR2_FFLUSH = (1U << 3);
    inline constexpr uint32_t SAI_ACR2_TRIS_Pos = 4;
    inline constexpr uint32_t SAI_ACR2_TRIS_Msk = 0x00000010;
    inline constexpr uint32_t SAI_ACR2_TRIS = (1U << 4);
    inline constexpr uint32_t SAI_ACR2_MUTE_Pos = 5;
    inline constexpr uint32_t SAI_ACR2_MUTE_Msk = 0x00000020;
    inline constexpr uint32_t SAI_ACR2_MUTE = (1U << 5);
    inline constexpr uint32_t SAI_ACR2_MUTEVAL_Pos = 6;
    inline constexpr uint32_t SAI_ACR2_MUTEVAL_Msk = 0x00000040;
    inline constexpr uint32_t SAI_ACR2_MUTEVAL = (1U << 6);
    inline constexpr uint32_t SAI_ACR2_MUTECNT_Pos = 7;
    inline constexpr uint32_t SAI_ACR2_MUTECNT_Msk = 0x00001F80;
    inline constexpr uint32_t SAI_ACR2_CPL_Pos = 13;
    inline constexpr uint32_t SAI_ACR2_CPL_Msk = 0x00002000;
    inline constexpr uint32_t SAI_ACR2_CPL = (1U << 13);
    inline constexpr uint32_t SAI_ACR2_COMP_Pos = 14;
    inline constexpr uint32_t SAI_ACR2_COMP_Msk = 0x0000C000;

    // SAI_AFRCR fields
    inline constexpr uint32_t SAI_AFRCR_FRL_Pos = 0;
    inline constexpr uint32_t SAI_AFRCR_FRL_Msk = 0x000000FF;
    inline constexpr uint32_t SAI_AFRCR_FSALL_Pos = 8;
    inline constexpr uint32_t SAI_AFRCR_FSALL_Msk = 0x00007F00;
    inline constexpr uint32_t SAI_AFRCR_FSDEF_Pos = 16;
    inline constexpr uint32_t SAI_AFRCR_FSDEF_Msk = 0x00010000;
    inline constexpr uint32_t SAI_AFRCR_FSDEF = (1U << 16);
    inline constexpr uint32_t SAI_AFRCR_FSPOL_Pos = 17;
    inline constexpr uint32_t SAI_AFRCR_FSPOL_Msk = 0x00020000;
    inline constexpr uint32_t SAI_AFRCR_FSPOL = (1U << 17);
    inline constexpr uint32_t SAI_AFRCR_FSOFF_Pos = 18;
    inline constexpr uint32_t SAI_AFRCR_FSOFF_Msk = 0x00040000;
    inline constexpr uint32_t SAI_AFRCR_FSOFF = (1U << 18);

    // SAI_ASLOTR fields
    inline constexpr uint32_t SAI_ASLOTR_FBOFF_Pos = 0;
    inline constexpr uint32_t SAI_ASLOTR_FBOFF_Msk = 0x0000001F;
    inline constexpr uint32_t SAI_ASLOTR_SLOTSZ_Pos = 6;
    inline constexpr uint32_t SAI_ASLOTR_SLOTSZ_Msk = 0x000000C0;
    inline constexpr uint32_t SAI_ASLOTR_NBSLOT_Pos = 8;
    inline constexpr uint32_t SAI_ASLOTR_NBSLOT_Msk = 0x00000F00;
    inline constexpr uint32_t SAI_ASLOTR_SLOTEN_Pos = 16;
    inline constexpr uint32_t SAI_ASLOTR_SLOTEN_Msk = 0xFFFF0000;

    // SAI_AIM fields
    inline constexpr uint32_t SAI_AIM_OVRUDRIE_Pos = 0;
    inline constexpr uint32_t SAI_AIM_OVRUDRIE_Msk = 0x00000001;
    inline constexpr uint32_t SAI_AIM_OVRUDRIE = (1U << 0);
    inline constexpr uint32_t SAI_AIM_MUTEDETIE_Pos = 1;
    inline constexpr uint32_t SAI_AIM_MUTEDETIE_Msk = 0x00000002;
    inline constexpr uint32_t SAI_AIM_MUTEDETIE = (1U << 1);
    inline constexpr uint32_t SAI_AIM_WCKCFGIE_Pos = 2;
    inline constexpr uint32_t SAI_AIM_WCKCFGIE_Msk = 0x00000004;
    inline constexpr uint32_t SAI_AIM_WCKCFGIE = (1U << 2);
    inline constexpr uint32_t SAI_AIM_FREQIE_Pos = 3;
    inline constexpr uint32_t SAI_AIM_FREQIE_Msk = 0x00000008;
    inline constexpr uint32_t SAI_AIM_FREQIE = (1U << 3);
    inline constexpr uint32_t SAI_AIM_CNRDYIE_Pos = 4;
    inline constexpr uint32_t SAI_AIM_CNRDYIE_Msk = 0x00000010;
    inline constexpr uint32_t SAI_AIM_CNRDYIE = (1U << 4);
    inline constexpr uint32_t SAI_AIM_AFSDETIE_Pos = 5;
    inline constexpr uint32_t SAI_AIM_AFSDETIE_Msk = 0x00000020;
    inline constexpr uint32_t SAI_AIM_AFSDETIE = (1U << 5);
    inline constexpr uint32_t SAI_AIM_LFSDETIE_Pos = 6;
    inline constexpr uint32_t SAI_AIM_LFSDETIE_Msk = 0x00000040;
    inline constexpr uint32_t SAI_AIM_LFSDETIE = (1U << 6);

    // SAI_ASR fields
    inline constexpr uint32_t SAI_ASR_OVRUDR_Pos = 0;
    inline constexpr uint32_t SAI_ASR_OVRUDR_Msk = 0x00000001;
    inline constexpr uint32_t SAI_ASR_OVRUDR = (1U << 0);
    inline constexpr uint32_t SAI_ASR_MUTEDET_Pos = 1;
    inline constexpr uint32_t SAI_ASR_MUTEDET_Msk = 0x00000002;
    inline constexpr uint32_t SAI_ASR_MUTEDET = (1U << 1);
    inline constexpr uint32_t SAI_ASR_WCKCFG_Pos = 2;
    inline constexpr uint32_t SAI_ASR_WCKCFG_Msk = 0x00000004;
    inline constexpr uint32_t SAI_ASR_WCKCFG = (1U << 2);
    inline constexpr uint32_t SAI_ASR_FREQ_Pos = 3;
    inline constexpr uint32_t SAI_ASR_FREQ_Msk = 0x00000008;
    inline constexpr uint32_t SAI_ASR_FREQ = (1U << 3);
    inline constexpr uint32_t SAI_ASR_CNRDY_Pos = 4;
    inline constexpr uint32_t SAI_ASR_CNRDY_Msk = 0x00000010;
    inline constexpr uint32_t SAI_ASR_CNRDY = (1U << 4);
    inline constexpr uint32_t SAI_ASR_AFSDET_Pos = 5;
    inline constexpr uint32_t SAI_ASR_AFSDET_Msk = 0x00000020;
    inline constexpr uint32_t SAI_ASR_AFSDET = (1U << 5);
    inline constexpr uint32_t SAI_ASR_LFSDET_Pos = 6;
    inline constexpr uint32_t SAI_ASR_LFSDET_Msk = 0x00000040;
    inline constexpr uint32_t SAI_ASR_LFSDET = (1U << 6);
    inline constexpr uint32_t SAI_ASR_FLVL_Pos = 16;
    inline constexpr uint32_t SAI_ASR_FLVL_Msk = 0x00070000;

    // SAI_ACLRFR fields
    inline constexpr uint32_t SAI_ACLRFR_COVRUDR_Pos = 0;
    inline constexpr uint32_t SAI_ACLRFR_COVRUDR_Msk = 0x00000001;
    inline constexpr uint32_t SAI_ACLRFR_COVRUDR = (1U << 0);
    inline constexpr uint32_t SAI_ACLRFR_CMUTEDET_Pos = 1;
    inline constexpr uint32_t SAI_ACLRFR_CMUTEDET_Msk = 0x00000002;
    inline constexpr uint32_t SAI_ACLRFR_CMUTEDET = (1U << 1);
    inline constexpr uint32_t SAI_ACLRFR_CWCKCFG_Pos = 2;
    inline constexpr uint32_t SAI_ACLRFR_CWCKCFG_Msk = 0x00000004;
    inline constexpr uint32_t SAI_ACLRFR_CWCKCFG = (1U << 2);
    inline constexpr uint32_t SAI_ACLRFR_CCNRDY_Pos = 4;
    inline constexpr uint32_t SAI_ACLRFR_CCNRDY_Msk = 0x00000010;
    inline constexpr uint32_t SAI_ACLRFR_CCNRDY = (1U << 4);
    inline constexpr uint32_t SAI_ACLRFR_CAFSDET_Pos = 5;
    inline constexpr uint32_t SAI_ACLRFR_CAFSDET_Msk = 0x00000020;
    inline constexpr uint32_t SAI_ACLRFR_CAFSDET = (1U << 5);
    inline constexpr uint32_t SAI_ACLRFR_CLFSDET_Pos = 6;
    inline constexpr uint32_t SAI_ACLRFR_CLFSDET_Msk = 0x00000040;
    inline constexpr uint32_t SAI_ACLRFR_CLFSDET = (1U << 6);

    // SAI_ADR fields
    inline constexpr uint32_t SAI_ADR_DATA_Pos = 0;
    inline constexpr uint32_t SAI_ADR_DATA_Msk = 0xFFFFFFFF;

    // SAI_BCR1 fields
    inline constexpr uint32_t SAI_BCR1_MODE_Pos = 0;
    inline constexpr uint32_t SAI_BCR1_MODE_Msk = 0x00000003;
    inline constexpr uint32_t SAI_BCR1_PRTCFG_Pos = 2;
    inline constexpr uint32_t SAI_BCR1_PRTCFG_Msk = 0x0000000C;
    inline constexpr uint32_t SAI_BCR1_DS_Pos = 5;
    inline constexpr uint32_t SAI_BCR1_DS_Msk = 0x000000E0;
    inline constexpr uint32_t SAI_BCR1_LSBFIRST_Pos = 8;
    inline constexpr uint32_t SAI_BCR1_LSBFIRST_Msk = 0x00000100;
    inline constexpr uint32_t SAI_BCR1_LSBFIRST = (1U << 8);
    inline constexpr uint32_t SAI_BCR1_CKSTR_Pos = 9;
    inline constexpr uint32_t SAI_BCR1_CKSTR_Msk = 0x00000200;
    inline constexpr uint32_t SAI_BCR1_CKSTR = (1U << 9);
    inline constexpr uint32_t SAI_BCR1_SYNCEN_Pos = 10;
    inline constexpr uint32_t SAI_BCR1_SYNCEN_Msk = 0x00000C00;
    inline constexpr uint32_t SAI_BCR1_MONO_Pos = 12;
    inline constexpr uint32_t SAI_BCR1_MONO_Msk = 0x00001000;
    inline constexpr uint32_t SAI_BCR1_MONO = (1U << 12);
    inline constexpr uint32_t SAI_BCR1_OUTDRIV_Pos = 13;
    inline constexpr uint32_t SAI_BCR1_OUTDRIV_Msk = 0x00002000;
    inline constexpr uint32_t SAI_BCR1_OUTDRIV = (1U << 13);
    inline constexpr uint32_t SAI_BCR1_SAIXEN_Pos = 16;
    inline constexpr uint32_t SAI_BCR1_SAIXEN_Msk = 0x00010000;
    inline constexpr uint32_t SAI_BCR1_SAIXEN = (1U << 16);
    inline constexpr uint32_t SAI_BCR1_DMAEN_Pos = 17;
    inline constexpr uint32_t SAI_BCR1_DMAEN_Msk = 0x00020000;
    inline constexpr uint32_t SAI_BCR1_DMAEN = (1U << 17);
    inline constexpr uint32_t SAI_BCR1_NOMCK_Pos = 19;
    inline constexpr uint32_t SAI_BCR1_NOMCK_Msk = 0x00080000;
    inline constexpr uint32_t SAI_BCR1_NOMCK = (1U << 19);
    inline constexpr uint32_t SAI_BCR1_MCKDIV_Pos = 20;
    inline constexpr uint32_t SAI_BCR1_MCKDIV_Msk = 0x00F00000;
    inline constexpr uint32_t SAI_BCR1_OSR_Pos = 26;
    inline constexpr uint32_t SAI_BCR1_OSR_Msk = 0x04000000;
    inline constexpr uint32_t SAI_BCR1_OSR = (1U << 26);

    // SAI_BCR2 fields
    inline constexpr uint32_t SAI_BCR2_FTH_Pos = 0;
    inline constexpr uint32_t SAI_BCR2_FTH_Msk = 0x00000007;
    inline constexpr uint32_t SAI_BCR2_FFLUSH_Pos = 3;
    inline constexpr uint32_t SAI_BCR2_FFLUSH_Msk = 0x00000008;
    inline constexpr uint32_t SAI_BCR2_FFLUSH = (1U << 3);
    inline constexpr uint32_t SAI_BCR2_TRIS_Pos = 4;
    inline constexpr uint32_t SAI_BCR2_TRIS_Msk = 0x00000010;
    inline constexpr uint32_t SAI_BCR2_TRIS = (1U << 4);
    inline constexpr uint32_t SAI_BCR2_MUTE_Pos = 5;
    inline constexpr uint32_t SAI_BCR2_MUTE_Msk = 0x00000020;
    inline constexpr uint32_t SAI_BCR2_MUTE = (1U << 5);
    inline constexpr uint32_t SAI_BCR2_MUTEVAL_Pos = 6;
    inline constexpr uint32_t SAI_BCR2_MUTEVAL_Msk = 0x00000040;
    inline constexpr uint32_t SAI_BCR2_MUTEVAL = (1U << 6);
    inline constexpr uint32_t SAI_BCR2_MUTECNT_Pos = 7;
    inline constexpr uint32_t SAI_BCR2_MUTECNT_Msk = 0x00001F80;
    inline constexpr uint32_t SAI_BCR2_CPL_Pos = 13;
    inline constexpr uint32_t SAI_BCR2_CPL_Msk = 0x00002000;
    inline constexpr uint32_t SAI_BCR2_CPL = (1U << 13);
    inline constexpr uint32_t SAI_BCR2_COMP_Pos = 14;
    inline constexpr uint32_t SAI_BCR2_COMP_Msk = 0x0000C000;

    // SAI_BFRCR fields
    inline constexpr uint32_t SAI_BFRCR_FRL_Pos = 0;
    inline constexpr uint32_t SAI_BFRCR_FRL_Msk = 0x000000FF;
    inline constexpr uint32_t SAI_BFRCR_FSALL_Pos = 8;
    inline constexpr uint32_t SAI_BFRCR_FSALL_Msk = 0x00007F00;
    inline constexpr uint32_t SAI_BFRCR_FSDEF_Pos = 16;
    inline constexpr uint32_t SAI_BFRCR_FSDEF_Msk = 0x00010000;
    inline constexpr uint32_t SAI_BFRCR_FSDEF = (1U << 16);
    inline constexpr uint32_t SAI_BFRCR_FSPOL_Pos = 17;
    inline constexpr uint32_t SAI_BFRCR_FSPOL_Msk = 0x00020000;
    inline constexpr uint32_t SAI_BFRCR_FSPOL = (1U << 17);
    inline constexpr uint32_t SAI_BFRCR_FSOFF_Pos = 18;
    inline constexpr uint32_t SAI_BFRCR_FSOFF_Msk = 0x00040000;
    inline constexpr uint32_t SAI_BFRCR_FSOFF = (1U << 18);

    // SAI_BSLOTR fields
    inline constexpr uint32_t SAI_BSLOTR_FBOFF_Pos = 0;
    inline constexpr uint32_t SAI_BSLOTR_FBOFF_Msk = 0x0000001F;
    inline constexpr uint32_t SAI_BSLOTR_SLOTSZ_Pos = 6;
    inline constexpr uint32_t SAI_BSLOTR_SLOTSZ_Msk = 0x000000C0;
    inline constexpr uint32_t SAI_BSLOTR_NBSLOT_Pos = 8;
    inline constexpr uint32_t SAI_BSLOTR_NBSLOT_Msk = 0x00000F00;
    inline constexpr uint32_t SAI_BSLOTR_SLOTEN_Pos = 16;
    inline constexpr uint32_t SAI_BSLOTR_SLOTEN_Msk = 0xFFFF0000;

    // SAI_BIM fields
    inline constexpr uint32_t SAI_BIM_OVRUDRIE_Pos = 0;
    inline constexpr uint32_t SAI_BIM_OVRUDRIE_Msk = 0x00000001;
    inline constexpr uint32_t SAI_BIM_OVRUDRIE = (1U << 0);
    inline constexpr uint32_t SAI_BIM_MUTEDETIE_Pos = 1;
    inline constexpr uint32_t SAI_BIM_MUTEDETIE_Msk = 0x00000002;
    inline constexpr uint32_t SAI_BIM_MUTEDETIE = (1U << 1);
    inline constexpr uint32_t SAI_BIM_WCKCFGIE_Pos = 2;
    inline constexpr uint32_t SAI_BIM_WCKCFGIE_Msk = 0x00000004;
    inline constexpr uint32_t SAI_BIM_WCKCFGIE = (1U << 2);
    inline constexpr uint32_t SAI_BIM_FREQIE_Pos = 3;
    inline constexpr uint32_t SAI_BIM_FREQIE_Msk = 0x00000008;
    inline constexpr uint32_t SAI_BIM_FREQIE = (1U << 3);
    inline constexpr uint32_t SAI_BIM_CNRDYIE_Pos = 4;
    inline constexpr uint32_t SAI_BIM_CNRDYIE_Msk = 0x00000010;
    inline constexpr uint32_t SAI_BIM_CNRDYIE = (1U << 4);
    inline constexpr uint32_t SAI_BIM_AFSDETIE_Pos = 5;
    inline constexpr uint32_t SAI_BIM_AFSDETIE_Msk = 0x00000020;
    inline constexpr uint32_t SAI_BIM_AFSDETIE = (1U << 5);
    inline constexpr uint32_t SAI_BIM_LFSDETIE_Pos = 6;
    inline constexpr uint32_t SAI_BIM_LFSDETIE_Msk = 0x00000040;
    inline constexpr uint32_t SAI_BIM_LFSDETIE = (1U << 6);

    // SAI_BSR fields
    inline constexpr uint32_t SAI_BSR_OVRUDR_Pos = 0;
    inline constexpr uint32_t SAI_BSR_OVRUDR_Msk = 0x00000001;
    inline constexpr uint32_t SAI_BSR_OVRUDR = (1U << 0);
    inline constexpr uint32_t SAI_BSR_MUTEDET_Pos = 1;
    inline constexpr uint32_t SAI_BSR_MUTEDET_Msk = 0x00000002;
    inline constexpr uint32_t SAI_BSR_MUTEDET = (1U << 1);
    inline constexpr uint32_t SAI_BSR_WCKCFG_Pos = 2;
    inline constexpr uint32_t SAI_BSR_WCKCFG_Msk = 0x00000004;
    inline constexpr uint32_t SAI_BSR_WCKCFG = (1U << 2);
    inline constexpr uint32_t SAI_BSR_FREQ_Pos = 3;
    inline constexpr uint32_t SAI_BSR_FREQ_Msk = 0x00000008;
    inline constexpr uint32_t SAI_BSR_FREQ = (1U << 3);
    inline constexpr uint32_t SAI_BSR_CNRDY_Pos = 4;
    inline constexpr uint32_t SAI_BSR_CNRDY_Msk = 0x00000010;
    inline constexpr uint32_t SAI_BSR_CNRDY = (1U << 4);
    inline constexpr uint32_t SAI_BSR_AFSDET_Pos = 5;
    inline constexpr uint32_t SAI_BSR_AFSDET_Msk = 0x00000020;
    inline constexpr uint32_t SAI_BSR_AFSDET = (1U << 5);
    inline constexpr uint32_t SAI_BSR_LFSDET_Pos = 6;
    inline constexpr uint32_t SAI_BSR_LFSDET_Msk = 0x00000040;
    inline constexpr uint32_t SAI_BSR_LFSDET = (1U << 6);
    inline constexpr uint32_t SAI_BSR_FLVL_Pos = 16;
    inline constexpr uint32_t SAI_BSR_FLVL_Msk = 0x00070000;

    // SAI_BCLRFR fields
    inline constexpr uint32_t SAI_BCLRFR_COVRUDR_Pos = 0;
    inline constexpr uint32_t SAI_BCLRFR_COVRUDR_Msk = 0x00000001;
    inline constexpr uint32_t SAI_BCLRFR_COVRUDR = (1U << 0);
    inline constexpr uint32_t SAI_BCLRFR_CMUTEDET_Pos = 1;
    inline constexpr uint32_t SAI_BCLRFR_CMUTEDET_Msk = 0x00000002;
    inline constexpr uint32_t SAI_BCLRFR_CMUTEDET = (1U << 1);
    inline constexpr uint32_t SAI_BCLRFR_CWCKCFG_Pos = 2;
    inline constexpr uint32_t SAI_BCLRFR_CWCKCFG_Msk = 0x00000004;
    inline constexpr uint32_t SAI_BCLRFR_CWCKCFG = (1U << 2);
    inline constexpr uint32_t SAI_BCLRFR_CCNRDY_Pos = 4;
    inline constexpr uint32_t SAI_BCLRFR_CCNRDY_Msk = 0x00000010;
    inline constexpr uint32_t SAI_BCLRFR_CCNRDY = (1U << 4);
    inline constexpr uint32_t SAI_BCLRFR_CAFSDET_Pos = 5;
    inline constexpr uint32_t SAI_BCLRFR_CAFSDET_Msk = 0x00000020;
    inline constexpr uint32_t SAI_BCLRFR_CAFSDET = (1U << 5);
    inline constexpr uint32_t SAI_BCLRFR_CLFSDET_Pos = 6;
    inline constexpr uint32_t SAI_BCLRFR_CLFSDET_Msk = 0x00000040;
    inline constexpr uint32_t SAI_BCLRFR_CLFSDET = (1U << 6);

    // SAI_BDR fields
    inline constexpr uint32_t SAI_BDR_DATA_Pos = 0;
    inline constexpr uint32_t SAI_BDR_DATA_Msk = 0xFFFFFFFF;

    // SAI_PDMCR fields
    inline constexpr uint32_t SAI_PDMCR_PDMEN_Pos = 0;
    inline constexpr uint32_t SAI_PDMCR_PDMEN_Msk = 0x00000001;
    inline constexpr uint32_t SAI_PDMCR_PDMEN = (1U << 0);
    inline constexpr uint32_t SAI_PDMCR_MICNBR_Pos = 4;
    inline constexpr uint32_t SAI_PDMCR_MICNBR_Msk = 0x00000030;
    inline constexpr uint32_t SAI_PDMCR_CKEN1_Pos = 8;
    inline constexpr uint32_t SAI_PDMCR_CKEN1_Msk = 0x00000100;
    inline constexpr uint32_t SAI_PDMCR_CKEN1 = (1U << 8);
    inline constexpr uint32_t SAI_PDMCR_CKEN2_Pos = 9;
    inline constexpr uint32_t SAI_PDMCR_CKEN2_Msk = 0x00000200;
    inline constexpr uint32_t SAI_PDMCR_CKEN2 = (1U << 9);
    inline constexpr uint32_t SAI_PDMCR_CKEN3_Pos = 10;
    inline constexpr uint32_t SAI_PDMCR_CKEN3_Msk = 0x00000400;
    inline constexpr uint32_t SAI_PDMCR_CKEN3 = (1U << 10);
    inline constexpr uint32_t SAI_PDMCR_CKEN4_Pos = 11;
    inline constexpr uint32_t SAI_PDMCR_CKEN4_Msk = 0x00000800;
    inline constexpr uint32_t SAI_PDMCR_CKEN4 = (1U << 11);

    // SAI_PDMDLY fields
    inline constexpr uint32_t SAI_PDMDLY_DLYM1L_Pos = 0;
    inline constexpr uint32_t SAI_PDMDLY_DLYM1L_Msk = 0x00000007;
    inline constexpr uint32_t SAI_PDMDLY_DLYM1R_Pos = 4;
    inline constexpr uint32_t SAI_PDMDLY_DLYM1R_Msk = 0x00000070;
    inline constexpr uint32_t SAI_PDMDLY_DLYM2L_Pos = 8;
    inline constexpr uint32_t SAI_PDMDLY_DLYM2L_Msk = 0x00000700;
    inline constexpr uint32_t SAI_PDMDLY_DLYM2R_Pos = 12;
    inline constexpr uint32_t SAI_PDMDLY_DLYM2R_Msk = 0x00007000;
    inline constexpr uint32_t SAI_PDMDLY_DLYM3L_Pos = 16;
    inline constexpr uint32_t SAI_PDMDLY_DLYM3L_Msk = 0x00070000;
    inline constexpr uint32_t SAI_PDMDLY_DLYM3R_Pos = 20;
    inline constexpr uint32_t SAI_PDMDLY_DLYM3R_Msk = 0x00700000;
    inline constexpr uint32_t SAI_PDMDLY_DLYM4L_Pos = 24;
    inline constexpr uint32_t SAI_PDMDLY_DLYM4L_Msk = 0x07000000;
    inline constexpr uint32_t SAI_PDMDLY_DLYM4R_Pos = 28;
    inline constexpr uint32_t SAI_PDMDLY_DLYM4R_Msk = 0x70000000;

} // namespace SAI1

namespace SAI2 {
    // SAI_GCR fields
    inline constexpr uint32_t SAI_GCR_SYNCIN_Pos = 0;
    inline constexpr uint32_t SAI_GCR_SYNCIN_Msk = 0x00000003;
    inline constexpr uint32_t SAI_GCR_SYNCOUT_Pos = 4;
    inline constexpr uint32_t SAI_GCR_SYNCOUT_Msk = 0x00000030;

    // SAI_ACR1 fields
    inline constexpr uint32_t SAI_ACR1_MODE_Pos = 0;
    inline constexpr uint32_t SAI_ACR1_MODE_Msk = 0x00000003;
    inline constexpr uint32_t SAI_ACR1_PRTCFG_Pos = 2;
    inline constexpr uint32_t SAI_ACR1_PRTCFG_Msk = 0x0000000C;
    inline constexpr uint32_t SAI_ACR1_DS_Pos = 5;
    inline constexpr uint32_t SAI_ACR1_DS_Msk = 0x000000E0;
    inline constexpr uint32_t SAI_ACR1_LSBFIRST_Pos = 8;
    inline constexpr uint32_t SAI_ACR1_LSBFIRST_Msk = 0x00000100;
    inline constexpr uint32_t SAI_ACR1_LSBFIRST = (1U << 8);
    inline constexpr uint32_t SAI_ACR1_CKSTR_Pos = 9;
    inline constexpr uint32_t SAI_ACR1_CKSTR_Msk = 0x00000200;
    inline constexpr uint32_t SAI_ACR1_CKSTR = (1U << 9);
    inline constexpr uint32_t SAI_ACR1_SYNCEN_Pos = 10;
    inline constexpr uint32_t SAI_ACR1_SYNCEN_Msk = 0x00000C00;
    inline constexpr uint32_t SAI_ACR1_MONO_Pos = 12;
    inline constexpr uint32_t SAI_ACR1_MONO_Msk = 0x00001000;
    inline constexpr uint32_t SAI_ACR1_MONO = (1U << 12);
    inline constexpr uint32_t SAI_ACR1_OUTDRIV_Pos = 13;
    inline constexpr uint32_t SAI_ACR1_OUTDRIV_Msk = 0x00002000;
    inline constexpr uint32_t SAI_ACR1_OUTDRIV = (1U << 13);
    inline constexpr uint32_t SAI_ACR1_SAIXEN_Pos = 16;
    inline constexpr uint32_t SAI_ACR1_SAIXEN_Msk = 0x00010000;
    inline constexpr uint32_t SAI_ACR1_SAIXEN = (1U << 16);
    inline constexpr uint32_t SAI_ACR1_DMAEN_Pos = 17;
    inline constexpr uint32_t SAI_ACR1_DMAEN_Msk = 0x00020000;
    inline constexpr uint32_t SAI_ACR1_DMAEN = (1U << 17);
    inline constexpr uint32_t SAI_ACR1_NOMCK_Pos = 19;
    inline constexpr uint32_t SAI_ACR1_NOMCK_Msk = 0x00080000;
    inline constexpr uint32_t SAI_ACR1_NOMCK = (1U << 19);
    inline constexpr uint32_t SAI_ACR1_MCKDIV_Pos = 20;
    inline constexpr uint32_t SAI_ACR1_MCKDIV_Msk = 0x00F00000;
    inline constexpr uint32_t SAI_ACR1_OSR_Pos = 26;
    inline constexpr uint32_t SAI_ACR1_OSR_Msk = 0x04000000;
    inline constexpr uint32_t SAI_ACR1_OSR = (1U << 26);

    // SAI_ACR2 fields
    inline constexpr uint32_t SAI_ACR2_FTH_Pos = 0;
    inline constexpr uint32_t SAI_ACR2_FTH_Msk = 0x00000007;
    inline constexpr uint32_t SAI_ACR2_FFLUSH_Pos = 3;
    inline constexpr uint32_t SAI_ACR2_FFLUSH_Msk = 0x00000008;
    inline constexpr uint32_t SAI_ACR2_FFLUSH = (1U << 3);
    inline constexpr uint32_t SAI_ACR2_TRIS_Pos = 4;
    inline constexpr uint32_t SAI_ACR2_TRIS_Msk = 0x00000010;
    inline constexpr uint32_t SAI_ACR2_TRIS = (1U << 4);
    inline constexpr uint32_t SAI_ACR2_MUTE_Pos = 5;
    inline constexpr uint32_t SAI_ACR2_MUTE_Msk = 0x00000020;
    inline constexpr uint32_t SAI_ACR2_MUTE = (1U << 5);
    inline constexpr uint32_t SAI_ACR2_MUTEVAL_Pos = 6;
    inline constexpr uint32_t SAI_ACR2_MUTEVAL_Msk = 0x00000040;
    inline constexpr uint32_t SAI_ACR2_MUTEVAL = (1U << 6);
    inline constexpr uint32_t SAI_ACR2_MUTECNT_Pos = 7;
    inline constexpr uint32_t SAI_ACR2_MUTECNT_Msk = 0x00001F80;
    inline constexpr uint32_t SAI_ACR2_CPL_Pos = 13;
    inline constexpr uint32_t SAI_ACR2_CPL_Msk = 0x00002000;
    inline constexpr uint32_t SAI_ACR2_CPL = (1U << 13);
    inline constexpr uint32_t SAI_ACR2_COMP_Pos = 14;
    inline constexpr uint32_t SAI_ACR2_COMP_Msk = 0x0000C000;

    // SAI_AFRCR fields
    inline constexpr uint32_t SAI_AFRCR_FRL_Pos = 0;
    inline constexpr uint32_t SAI_AFRCR_FRL_Msk = 0x000000FF;
    inline constexpr uint32_t SAI_AFRCR_FSALL_Pos = 8;
    inline constexpr uint32_t SAI_AFRCR_FSALL_Msk = 0x00007F00;
    inline constexpr uint32_t SAI_AFRCR_FSDEF_Pos = 16;
    inline constexpr uint32_t SAI_AFRCR_FSDEF_Msk = 0x00010000;
    inline constexpr uint32_t SAI_AFRCR_FSDEF = (1U << 16);
    inline constexpr uint32_t SAI_AFRCR_FSPOL_Pos = 17;
    inline constexpr uint32_t SAI_AFRCR_FSPOL_Msk = 0x00020000;
    inline constexpr uint32_t SAI_AFRCR_FSPOL = (1U << 17);
    inline constexpr uint32_t SAI_AFRCR_FSOFF_Pos = 18;
    inline constexpr uint32_t SAI_AFRCR_FSOFF_Msk = 0x00040000;
    inline constexpr uint32_t SAI_AFRCR_FSOFF = (1U << 18);

    // SAI_ASLOTR fields
    inline constexpr uint32_t SAI_ASLOTR_FBOFF_Pos = 0;
    inline constexpr uint32_t SAI_ASLOTR_FBOFF_Msk = 0x0000001F;
    inline constexpr uint32_t SAI_ASLOTR_SLOTSZ_Pos = 6;
    inline constexpr uint32_t SAI_ASLOTR_SLOTSZ_Msk = 0x000000C0;
    inline constexpr uint32_t SAI_ASLOTR_NBSLOT_Pos = 8;
    inline constexpr uint32_t SAI_ASLOTR_NBSLOT_Msk = 0x00000F00;
    inline constexpr uint32_t SAI_ASLOTR_SLOTEN_Pos = 16;
    inline constexpr uint32_t SAI_ASLOTR_SLOTEN_Msk = 0xFFFF0000;

    // SAI_AIM fields
    inline constexpr uint32_t SAI_AIM_OVRUDRIE_Pos = 0;
    inline constexpr uint32_t SAI_AIM_OVRUDRIE_Msk = 0x00000001;
    inline constexpr uint32_t SAI_AIM_OVRUDRIE = (1U << 0);
    inline constexpr uint32_t SAI_AIM_MUTEDETIE_Pos = 1;
    inline constexpr uint32_t SAI_AIM_MUTEDETIE_Msk = 0x00000002;
    inline constexpr uint32_t SAI_AIM_MUTEDETIE = (1U << 1);
    inline constexpr uint32_t SAI_AIM_WCKCFGIE_Pos = 2;
    inline constexpr uint32_t SAI_AIM_WCKCFGIE_Msk = 0x00000004;
    inline constexpr uint32_t SAI_AIM_WCKCFGIE = (1U << 2);
    inline constexpr uint32_t SAI_AIM_FREQIE_Pos = 3;
    inline constexpr uint32_t SAI_AIM_FREQIE_Msk = 0x00000008;
    inline constexpr uint32_t SAI_AIM_FREQIE = (1U << 3);
    inline constexpr uint32_t SAI_AIM_CNRDYIE_Pos = 4;
    inline constexpr uint32_t SAI_AIM_CNRDYIE_Msk = 0x00000010;
    inline constexpr uint32_t SAI_AIM_CNRDYIE = (1U << 4);
    inline constexpr uint32_t SAI_AIM_AFSDETIE_Pos = 5;
    inline constexpr uint32_t SAI_AIM_AFSDETIE_Msk = 0x00000020;
    inline constexpr uint32_t SAI_AIM_AFSDETIE = (1U << 5);
    inline constexpr uint32_t SAI_AIM_LFSDETIE_Pos = 6;
    inline constexpr uint32_t SAI_AIM_LFSDETIE_Msk = 0x00000040;
    inline constexpr uint32_t SAI_AIM_LFSDETIE = (1U << 6);

    // SAI_ASR fields
    inline constexpr uint32_t SAI_ASR_OVRUDR_Pos = 0;
    inline constexpr uint32_t SAI_ASR_OVRUDR_Msk = 0x00000001;
    inline constexpr uint32_t SAI_ASR_OVRUDR = (1U << 0);
    inline constexpr uint32_t SAI_ASR_MUTEDET_Pos = 1;
    inline constexpr uint32_t SAI_ASR_MUTEDET_Msk = 0x00000002;
    inline constexpr uint32_t SAI_ASR_MUTEDET = (1U << 1);
    inline constexpr uint32_t SAI_ASR_WCKCFG_Pos = 2;
    inline constexpr uint32_t SAI_ASR_WCKCFG_Msk = 0x00000004;
    inline constexpr uint32_t SAI_ASR_WCKCFG = (1U << 2);
    inline constexpr uint32_t SAI_ASR_FREQ_Pos = 3;
    inline constexpr uint32_t SAI_ASR_FREQ_Msk = 0x00000008;
    inline constexpr uint32_t SAI_ASR_FREQ = (1U << 3);
    inline constexpr uint32_t SAI_ASR_CNRDY_Pos = 4;
    inline constexpr uint32_t SAI_ASR_CNRDY_Msk = 0x00000010;
    inline constexpr uint32_t SAI_ASR_CNRDY = (1U << 4);
    inline constexpr uint32_t SAI_ASR_AFSDET_Pos = 5;
    inline constexpr uint32_t SAI_ASR_AFSDET_Msk = 0x00000020;
    inline constexpr uint32_t SAI_ASR_AFSDET = (1U << 5);
    inline constexpr uint32_t SAI_ASR_LFSDET_Pos = 6;
    inline constexpr uint32_t SAI_ASR_LFSDET_Msk = 0x00000040;
    inline constexpr uint32_t SAI_ASR_LFSDET = (1U << 6);
    inline constexpr uint32_t SAI_ASR_FLVL_Pos = 16;
    inline constexpr uint32_t SAI_ASR_FLVL_Msk = 0x00070000;

    // SAI_ACLRFR fields
    inline constexpr uint32_t SAI_ACLRFR_COVRUDR_Pos = 0;
    inline constexpr uint32_t SAI_ACLRFR_COVRUDR_Msk = 0x00000001;
    inline constexpr uint32_t SAI_ACLRFR_COVRUDR = (1U << 0);
    inline constexpr uint32_t SAI_ACLRFR_CMUTEDET_Pos = 1;
    inline constexpr uint32_t SAI_ACLRFR_CMUTEDET_Msk = 0x00000002;
    inline constexpr uint32_t SAI_ACLRFR_CMUTEDET = (1U << 1);
    inline constexpr uint32_t SAI_ACLRFR_CWCKCFG_Pos = 2;
    inline constexpr uint32_t SAI_ACLRFR_CWCKCFG_Msk = 0x00000004;
    inline constexpr uint32_t SAI_ACLRFR_CWCKCFG = (1U << 2);
    inline constexpr uint32_t SAI_ACLRFR_CCNRDY_Pos = 4;
    inline constexpr uint32_t SAI_ACLRFR_CCNRDY_Msk = 0x00000010;
    inline constexpr uint32_t SAI_ACLRFR_CCNRDY = (1U << 4);
    inline constexpr uint32_t SAI_ACLRFR_CAFSDET_Pos = 5;
    inline constexpr uint32_t SAI_ACLRFR_CAFSDET_Msk = 0x00000020;
    inline constexpr uint32_t SAI_ACLRFR_CAFSDET = (1U << 5);
    inline constexpr uint32_t SAI_ACLRFR_CLFSDET_Pos = 6;
    inline constexpr uint32_t SAI_ACLRFR_CLFSDET_Msk = 0x00000040;
    inline constexpr uint32_t SAI_ACLRFR_CLFSDET = (1U << 6);

    // SAI_ADR fields
    inline constexpr uint32_t SAI_ADR_DATA_Pos = 0;
    inline constexpr uint32_t SAI_ADR_DATA_Msk = 0xFFFFFFFF;

    // SAI_BCR1 fields
    inline constexpr uint32_t SAI_BCR1_MODE_Pos = 0;
    inline constexpr uint32_t SAI_BCR1_MODE_Msk = 0x00000003;
    inline constexpr uint32_t SAI_BCR1_PRTCFG_Pos = 2;
    inline constexpr uint32_t SAI_BCR1_PRTCFG_Msk = 0x0000000C;
    inline constexpr uint32_t SAI_BCR1_DS_Pos = 5;
    inline constexpr uint32_t SAI_BCR1_DS_Msk = 0x000000E0;
    inline constexpr uint32_t SAI_BCR1_LSBFIRST_Pos = 8;
    inline constexpr uint32_t SAI_BCR1_LSBFIRST_Msk = 0x00000100;
    inline constexpr uint32_t SAI_BCR1_LSBFIRST = (1U << 8);
    inline constexpr uint32_t SAI_BCR1_CKSTR_Pos = 9;
    inline constexpr uint32_t SAI_BCR1_CKSTR_Msk = 0x00000200;
    inline constexpr uint32_t SAI_BCR1_CKSTR = (1U << 9);
    inline constexpr uint32_t SAI_BCR1_SYNCEN_Pos = 10;
    inline constexpr uint32_t SAI_BCR1_SYNCEN_Msk = 0x00000C00;
    inline constexpr uint32_t SAI_BCR1_MONO_Pos = 12;
    inline constexpr uint32_t SAI_BCR1_MONO_Msk = 0x00001000;
    inline constexpr uint32_t SAI_BCR1_MONO = (1U << 12);
    inline constexpr uint32_t SAI_BCR1_OUTDRIV_Pos = 13;
    inline constexpr uint32_t SAI_BCR1_OUTDRIV_Msk = 0x00002000;
    inline constexpr uint32_t SAI_BCR1_OUTDRIV = (1U << 13);
    inline constexpr uint32_t SAI_BCR1_SAIXEN_Pos = 16;
    inline constexpr uint32_t SAI_BCR1_SAIXEN_Msk = 0x00010000;
    inline constexpr uint32_t SAI_BCR1_SAIXEN = (1U << 16);
    inline constexpr uint32_t SAI_BCR1_DMAEN_Pos = 17;
    inline constexpr uint32_t SAI_BCR1_DMAEN_Msk = 0x00020000;
    inline constexpr uint32_t SAI_BCR1_DMAEN = (1U << 17);
    inline constexpr uint32_t SAI_BCR1_NOMCK_Pos = 19;
    inline constexpr uint32_t SAI_BCR1_NOMCK_Msk = 0x00080000;
    inline constexpr uint32_t SAI_BCR1_NOMCK = (1U << 19);
    inline constexpr uint32_t SAI_BCR1_MCKDIV_Pos = 20;
    inline constexpr uint32_t SAI_BCR1_MCKDIV_Msk = 0x00F00000;
    inline constexpr uint32_t SAI_BCR1_OSR_Pos = 26;
    inline constexpr uint32_t SAI_BCR1_OSR_Msk = 0x04000000;
    inline constexpr uint32_t SAI_BCR1_OSR = (1U << 26);

    // SAI_BCR2 fields
    inline constexpr uint32_t SAI_BCR2_FTH_Pos = 0;
    inline constexpr uint32_t SAI_BCR2_FTH_Msk = 0x00000007;
    inline constexpr uint32_t SAI_BCR2_FFLUSH_Pos = 3;
    inline constexpr uint32_t SAI_BCR2_FFLUSH_Msk = 0x00000008;
    inline constexpr uint32_t SAI_BCR2_FFLUSH = (1U << 3);
    inline constexpr uint32_t SAI_BCR2_TRIS_Pos = 4;
    inline constexpr uint32_t SAI_BCR2_TRIS_Msk = 0x00000010;
    inline constexpr uint32_t SAI_BCR2_TRIS = (1U << 4);
    inline constexpr uint32_t SAI_BCR2_MUTE_Pos = 5;
    inline constexpr uint32_t SAI_BCR2_MUTE_Msk = 0x00000020;
    inline constexpr uint32_t SAI_BCR2_MUTE = (1U << 5);
    inline constexpr uint32_t SAI_BCR2_MUTEVAL_Pos = 6;
    inline constexpr uint32_t SAI_BCR2_MUTEVAL_Msk = 0x00000040;
    inline constexpr uint32_t SAI_BCR2_MUTEVAL = (1U << 6);
    inline constexpr uint32_t SAI_BCR2_MUTECNT_Pos = 7;
    inline constexpr uint32_t SAI_BCR2_MUTECNT_Msk = 0x00001F80;
    inline constexpr uint32_t SAI_BCR2_CPL_Pos = 13;
    inline constexpr uint32_t SAI_BCR2_CPL_Msk = 0x00002000;
    inline constexpr uint32_t SAI_BCR2_CPL = (1U << 13);
    inline constexpr uint32_t SAI_BCR2_COMP_Pos = 14;
    inline constexpr uint32_t SAI_BCR2_COMP_Msk = 0x0000C000;

    // SAI_BFRCR fields
    inline constexpr uint32_t SAI_BFRCR_FRL_Pos = 0;
    inline constexpr uint32_t SAI_BFRCR_FRL_Msk = 0x000000FF;
    inline constexpr uint32_t SAI_BFRCR_FSALL_Pos = 8;
    inline constexpr uint32_t SAI_BFRCR_FSALL_Msk = 0x00007F00;
    inline constexpr uint32_t SAI_BFRCR_FSDEF_Pos = 16;
    inline constexpr uint32_t SAI_BFRCR_FSDEF_Msk = 0x00010000;
    inline constexpr uint32_t SAI_BFRCR_FSDEF = (1U << 16);
    inline constexpr uint32_t SAI_BFRCR_FSPOL_Pos = 17;
    inline constexpr uint32_t SAI_BFRCR_FSPOL_Msk = 0x00020000;
    inline constexpr uint32_t SAI_BFRCR_FSPOL = (1U << 17);
    inline constexpr uint32_t SAI_BFRCR_FSOFF_Pos = 18;
    inline constexpr uint32_t SAI_BFRCR_FSOFF_Msk = 0x00040000;
    inline constexpr uint32_t SAI_BFRCR_FSOFF = (1U << 18);

    // SAI_BSLOTR fields
    inline constexpr uint32_t SAI_BSLOTR_FBOFF_Pos = 0;
    inline constexpr uint32_t SAI_BSLOTR_FBOFF_Msk = 0x0000001F;
    inline constexpr uint32_t SAI_BSLOTR_SLOTSZ_Pos = 6;
    inline constexpr uint32_t SAI_BSLOTR_SLOTSZ_Msk = 0x000000C0;
    inline constexpr uint32_t SAI_BSLOTR_NBSLOT_Pos = 8;
    inline constexpr uint32_t SAI_BSLOTR_NBSLOT_Msk = 0x00000F00;
    inline constexpr uint32_t SAI_BSLOTR_SLOTEN_Pos = 16;
    inline constexpr uint32_t SAI_BSLOTR_SLOTEN_Msk = 0xFFFF0000;

    // SAI_BIM fields
    inline constexpr uint32_t SAI_BIM_OVRUDRIE_Pos = 0;
    inline constexpr uint32_t SAI_BIM_OVRUDRIE_Msk = 0x00000001;
    inline constexpr uint32_t SAI_BIM_OVRUDRIE = (1U << 0);
    inline constexpr uint32_t SAI_BIM_MUTEDETIE_Pos = 1;
    inline constexpr uint32_t SAI_BIM_MUTEDETIE_Msk = 0x00000002;
    inline constexpr uint32_t SAI_BIM_MUTEDETIE = (1U << 1);
    inline constexpr uint32_t SAI_BIM_WCKCFGIE_Pos = 2;
    inline constexpr uint32_t SAI_BIM_WCKCFGIE_Msk = 0x00000004;
    inline constexpr uint32_t SAI_BIM_WCKCFGIE = (1U << 2);
    inline constexpr uint32_t SAI_BIM_FREQIE_Pos = 3;
    inline constexpr uint32_t SAI_BIM_FREQIE_Msk = 0x00000008;
    inline constexpr uint32_t SAI_BIM_FREQIE = (1U << 3);
    inline constexpr uint32_t SAI_BIM_CNRDYIE_Pos = 4;
    inline constexpr uint32_t SAI_BIM_CNRDYIE_Msk = 0x00000010;
    inline constexpr uint32_t SAI_BIM_CNRDYIE = (1U << 4);
    inline constexpr uint32_t SAI_BIM_AFSDETIE_Pos = 5;
    inline constexpr uint32_t SAI_BIM_AFSDETIE_Msk = 0x00000020;
    inline constexpr uint32_t SAI_BIM_AFSDETIE = (1U << 5);
    inline constexpr uint32_t SAI_BIM_LFSDETIE_Pos = 6;
    inline constexpr uint32_t SAI_BIM_LFSDETIE_Msk = 0x00000040;
    inline constexpr uint32_t SAI_BIM_LFSDETIE = (1U << 6);

    // SAI_BSR fields
    inline constexpr uint32_t SAI_BSR_OVRUDR_Pos = 0;
    inline constexpr uint32_t SAI_BSR_OVRUDR_Msk = 0x00000001;
    inline constexpr uint32_t SAI_BSR_OVRUDR = (1U << 0);
    inline constexpr uint32_t SAI_BSR_MUTEDET_Pos = 1;
    inline constexpr uint32_t SAI_BSR_MUTEDET_Msk = 0x00000002;
    inline constexpr uint32_t SAI_BSR_MUTEDET = (1U << 1);
    inline constexpr uint32_t SAI_BSR_WCKCFG_Pos = 2;
    inline constexpr uint32_t SAI_BSR_WCKCFG_Msk = 0x00000004;
    inline constexpr uint32_t SAI_BSR_WCKCFG = (1U << 2);
    inline constexpr uint32_t SAI_BSR_FREQ_Pos = 3;
    inline constexpr uint32_t SAI_BSR_FREQ_Msk = 0x00000008;
    inline constexpr uint32_t SAI_BSR_FREQ = (1U << 3);
    inline constexpr uint32_t SAI_BSR_CNRDY_Pos = 4;
    inline constexpr uint32_t SAI_BSR_CNRDY_Msk = 0x00000010;
    inline constexpr uint32_t SAI_BSR_CNRDY = (1U << 4);
    inline constexpr uint32_t SAI_BSR_AFSDET_Pos = 5;
    inline constexpr uint32_t SAI_BSR_AFSDET_Msk = 0x00000020;
    inline constexpr uint32_t SAI_BSR_AFSDET = (1U << 5);
    inline constexpr uint32_t SAI_BSR_LFSDET_Pos = 6;
    inline constexpr uint32_t SAI_BSR_LFSDET_Msk = 0x00000040;
    inline constexpr uint32_t SAI_BSR_LFSDET = (1U << 6);
    inline constexpr uint32_t SAI_BSR_FLVL_Pos = 16;
    inline constexpr uint32_t SAI_BSR_FLVL_Msk = 0x00070000;

    // SAI_BCLRFR fields
    inline constexpr uint32_t SAI_BCLRFR_COVRUDR_Pos = 0;
    inline constexpr uint32_t SAI_BCLRFR_COVRUDR_Msk = 0x00000001;
    inline constexpr uint32_t SAI_BCLRFR_COVRUDR = (1U << 0);
    inline constexpr uint32_t SAI_BCLRFR_CMUTEDET_Pos = 1;
    inline constexpr uint32_t SAI_BCLRFR_CMUTEDET_Msk = 0x00000002;
    inline constexpr uint32_t SAI_BCLRFR_CMUTEDET = (1U << 1);
    inline constexpr uint32_t SAI_BCLRFR_CWCKCFG_Pos = 2;
    inline constexpr uint32_t SAI_BCLRFR_CWCKCFG_Msk = 0x00000004;
    inline constexpr uint32_t SAI_BCLRFR_CWCKCFG = (1U << 2);
    inline constexpr uint32_t SAI_BCLRFR_CCNRDY_Pos = 4;
    inline constexpr uint32_t SAI_BCLRFR_CCNRDY_Msk = 0x00000010;
    inline constexpr uint32_t SAI_BCLRFR_CCNRDY = (1U << 4);
    inline constexpr uint32_t SAI_BCLRFR_CAFSDET_Pos = 5;
    inline constexpr uint32_t SAI_BCLRFR_CAFSDET_Msk = 0x00000020;
    inline constexpr uint32_t SAI_BCLRFR_CAFSDET = (1U << 5);
    inline constexpr uint32_t SAI_BCLRFR_CLFSDET_Pos = 6;
    inline constexpr uint32_t SAI_BCLRFR_CLFSDET_Msk = 0x00000040;
    inline constexpr uint32_t SAI_BCLRFR_CLFSDET = (1U << 6);

    // SAI_BDR fields
    inline constexpr uint32_t SAI_BDR_DATA_Pos = 0;
    inline constexpr uint32_t SAI_BDR_DATA_Msk = 0xFFFFFFFF;

    // SAI_PDMCR fields
    inline constexpr uint32_t SAI_PDMCR_PDMEN_Pos = 0;
    inline constexpr uint32_t SAI_PDMCR_PDMEN_Msk = 0x00000001;
    inline constexpr uint32_t SAI_PDMCR_PDMEN = (1U << 0);
    inline constexpr uint32_t SAI_PDMCR_MICNBR_Pos = 4;
    inline constexpr uint32_t SAI_PDMCR_MICNBR_Msk = 0x00000030;
    inline constexpr uint32_t SAI_PDMCR_CKEN1_Pos = 8;
    inline constexpr uint32_t SAI_PDMCR_CKEN1_Msk = 0x00000100;
    inline constexpr uint32_t SAI_PDMCR_CKEN1 = (1U << 8);
    inline constexpr uint32_t SAI_PDMCR_CKEN2_Pos = 9;
    inline constexpr uint32_t SAI_PDMCR_CKEN2_Msk = 0x00000200;
    inline constexpr uint32_t SAI_PDMCR_CKEN2 = (1U << 9);
    inline constexpr uint32_t SAI_PDMCR_CKEN3_Pos = 10;
    inline constexpr uint32_t SAI_PDMCR_CKEN3_Msk = 0x00000400;
    inline constexpr uint32_t SAI_PDMCR_CKEN3 = (1U << 10);
    inline constexpr uint32_t SAI_PDMCR_CKEN4_Pos = 11;
    inline constexpr uint32_t SAI_PDMCR_CKEN4_Msk = 0x00000800;
    inline constexpr uint32_t SAI_PDMCR_CKEN4 = (1U << 11);

    // SAI_PDMDLY fields
    inline constexpr uint32_t SAI_PDMDLY_DLYM1L_Pos = 0;
    inline constexpr uint32_t SAI_PDMDLY_DLYM1L_Msk = 0x00000007;
    inline constexpr uint32_t SAI_PDMDLY_DLYM1R_Pos = 4;
    inline constexpr uint32_t SAI_PDMDLY_DLYM1R_Msk = 0x00000070;
    inline constexpr uint32_t SAI_PDMDLY_DLYM2L_Pos = 8;
    inline constexpr uint32_t SAI_PDMDLY_DLYM2L_Msk = 0x00000700;
    inline constexpr uint32_t SAI_PDMDLY_DLYM2R_Pos = 12;
    inline constexpr uint32_t SAI_PDMDLY_DLYM2R_Msk = 0x00007000;
    inline constexpr uint32_t SAI_PDMDLY_DLYM3L_Pos = 16;
    inline constexpr uint32_t SAI_PDMDLY_DLYM3L_Msk = 0x00070000;
    inline constexpr uint32_t SAI_PDMDLY_DLYM3R_Pos = 20;
    inline constexpr uint32_t SAI_PDMDLY_DLYM3R_Msk = 0x00700000;
    inline constexpr uint32_t SAI_PDMDLY_DLYM4L_Pos = 24;
    inline constexpr uint32_t SAI_PDMDLY_DLYM4L_Msk = 0x07000000;
    inline constexpr uint32_t SAI_PDMDLY_DLYM4R_Pos = 28;
    inline constexpr uint32_t SAI_PDMDLY_DLYM4R_Msk = 0x70000000;

} // namespace SAI2

namespace SAI3 {
    // SAI_GCR fields
    inline constexpr uint32_t SAI_GCR_SYNCIN_Pos = 0;
    inline constexpr uint32_t SAI_GCR_SYNCIN_Msk = 0x00000003;
    inline constexpr uint32_t SAI_GCR_SYNCOUT_Pos = 4;
    inline constexpr uint32_t SAI_GCR_SYNCOUT_Msk = 0x00000030;

    // SAI_ACR1 fields
    inline constexpr uint32_t SAI_ACR1_MODE_Pos = 0;
    inline constexpr uint32_t SAI_ACR1_MODE_Msk = 0x00000003;
    inline constexpr uint32_t SAI_ACR1_PRTCFG_Pos = 2;
    inline constexpr uint32_t SAI_ACR1_PRTCFG_Msk = 0x0000000C;
    inline constexpr uint32_t SAI_ACR1_DS_Pos = 5;
    inline constexpr uint32_t SAI_ACR1_DS_Msk = 0x000000E0;
    inline constexpr uint32_t SAI_ACR1_LSBFIRST_Pos = 8;
    inline constexpr uint32_t SAI_ACR1_LSBFIRST_Msk = 0x00000100;
    inline constexpr uint32_t SAI_ACR1_LSBFIRST = (1U << 8);
    inline constexpr uint32_t SAI_ACR1_CKSTR_Pos = 9;
    inline constexpr uint32_t SAI_ACR1_CKSTR_Msk = 0x00000200;
    inline constexpr uint32_t SAI_ACR1_CKSTR = (1U << 9);
    inline constexpr uint32_t SAI_ACR1_SYNCEN_Pos = 10;
    inline constexpr uint32_t SAI_ACR1_SYNCEN_Msk = 0x00000C00;
    inline constexpr uint32_t SAI_ACR1_MONO_Pos = 12;
    inline constexpr uint32_t SAI_ACR1_MONO_Msk = 0x00001000;
    inline constexpr uint32_t SAI_ACR1_MONO = (1U << 12);
    inline constexpr uint32_t SAI_ACR1_OUTDRIV_Pos = 13;
    inline constexpr uint32_t SAI_ACR1_OUTDRIV_Msk = 0x00002000;
    inline constexpr uint32_t SAI_ACR1_OUTDRIV = (1U << 13);
    inline constexpr uint32_t SAI_ACR1_SAIXEN_Pos = 16;
    inline constexpr uint32_t SAI_ACR1_SAIXEN_Msk = 0x00010000;
    inline constexpr uint32_t SAI_ACR1_SAIXEN = (1U << 16);
    inline constexpr uint32_t SAI_ACR1_DMAEN_Pos = 17;
    inline constexpr uint32_t SAI_ACR1_DMAEN_Msk = 0x00020000;
    inline constexpr uint32_t SAI_ACR1_DMAEN = (1U << 17);
    inline constexpr uint32_t SAI_ACR1_NOMCK_Pos = 19;
    inline constexpr uint32_t SAI_ACR1_NOMCK_Msk = 0x00080000;
    inline constexpr uint32_t SAI_ACR1_NOMCK = (1U << 19);
    inline constexpr uint32_t SAI_ACR1_MCKDIV_Pos = 20;
    inline constexpr uint32_t SAI_ACR1_MCKDIV_Msk = 0x00F00000;
    inline constexpr uint32_t SAI_ACR1_OSR_Pos = 26;
    inline constexpr uint32_t SAI_ACR1_OSR_Msk = 0x04000000;
    inline constexpr uint32_t SAI_ACR1_OSR = (1U << 26);

    // SAI_ACR2 fields
    inline constexpr uint32_t SAI_ACR2_FTH_Pos = 0;
    inline constexpr uint32_t SAI_ACR2_FTH_Msk = 0x00000007;
    inline constexpr uint32_t SAI_ACR2_FFLUSH_Pos = 3;
    inline constexpr uint32_t SAI_ACR2_FFLUSH_Msk = 0x00000008;
    inline constexpr uint32_t SAI_ACR2_FFLUSH = (1U << 3);
    inline constexpr uint32_t SAI_ACR2_TRIS_Pos = 4;
    inline constexpr uint32_t SAI_ACR2_TRIS_Msk = 0x00000010;
    inline constexpr uint32_t SAI_ACR2_TRIS = (1U << 4);
    inline constexpr uint32_t SAI_ACR2_MUTE_Pos = 5;
    inline constexpr uint32_t SAI_ACR2_MUTE_Msk = 0x00000020;
    inline constexpr uint32_t SAI_ACR2_MUTE = (1U << 5);
    inline constexpr uint32_t SAI_ACR2_MUTEVAL_Pos = 6;
    inline constexpr uint32_t SAI_ACR2_MUTEVAL_Msk = 0x00000040;
    inline constexpr uint32_t SAI_ACR2_MUTEVAL = (1U << 6);
    inline constexpr uint32_t SAI_ACR2_MUTECNT_Pos = 7;
    inline constexpr uint32_t SAI_ACR2_MUTECNT_Msk = 0x00001F80;
    inline constexpr uint32_t SAI_ACR2_CPL_Pos = 13;
    inline constexpr uint32_t SAI_ACR2_CPL_Msk = 0x00002000;
    inline constexpr uint32_t SAI_ACR2_CPL = (1U << 13);
    inline constexpr uint32_t SAI_ACR2_COMP_Pos = 14;
    inline constexpr uint32_t SAI_ACR2_COMP_Msk = 0x0000C000;

    // SAI_AFRCR fields
    inline constexpr uint32_t SAI_AFRCR_FRL_Pos = 0;
    inline constexpr uint32_t SAI_AFRCR_FRL_Msk = 0x000000FF;
    inline constexpr uint32_t SAI_AFRCR_FSALL_Pos = 8;
    inline constexpr uint32_t SAI_AFRCR_FSALL_Msk = 0x00007F00;
    inline constexpr uint32_t SAI_AFRCR_FSDEF_Pos = 16;
    inline constexpr uint32_t SAI_AFRCR_FSDEF_Msk = 0x00010000;
    inline constexpr uint32_t SAI_AFRCR_FSDEF = (1U << 16);
    inline constexpr uint32_t SAI_AFRCR_FSPOL_Pos = 17;
    inline constexpr uint32_t SAI_AFRCR_FSPOL_Msk = 0x00020000;
    inline constexpr uint32_t SAI_AFRCR_FSPOL = (1U << 17);
    inline constexpr uint32_t SAI_AFRCR_FSOFF_Pos = 18;
    inline constexpr uint32_t SAI_AFRCR_FSOFF_Msk = 0x00040000;
    inline constexpr uint32_t SAI_AFRCR_FSOFF = (1U << 18);

    // SAI_ASLOTR fields
    inline constexpr uint32_t SAI_ASLOTR_FBOFF_Pos = 0;
    inline constexpr uint32_t SAI_ASLOTR_FBOFF_Msk = 0x0000001F;
    inline constexpr uint32_t SAI_ASLOTR_SLOTSZ_Pos = 6;
    inline constexpr uint32_t SAI_ASLOTR_SLOTSZ_Msk = 0x000000C0;
    inline constexpr uint32_t SAI_ASLOTR_NBSLOT_Pos = 8;
    inline constexpr uint32_t SAI_ASLOTR_NBSLOT_Msk = 0x00000F00;
    inline constexpr uint32_t SAI_ASLOTR_SLOTEN_Pos = 16;
    inline constexpr uint32_t SAI_ASLOTR_SLOTEN_Msk = 0xFFFF0000;

    // SAI_AIM fields
    inline constexpr uint32_t SAI_AIM_OVRUDRIE_Pos = 0;
    inline constexpr uint32_t SAI_AIM_OVRUDRIE_Msk = 0x00000001;
    inline constexpr uint32_t SAI_AIM_OVRUDRIE = (1U << 0);
    inline constexpr uint32_t SAI_AIM_MUTEDETIE_Pos = 1;
    inline constexpr uint32_t SAI_AIM_MUTEDETIE_Msk = 0x00000002;
    inline constexpr uint32_t SAI_AIM_MUTEDETIE = (1U << 1);
    inline constexpr uint32_t SAI_AIM_WCKCFGIE_Pos = 2;
    inline constexpr uint32_t SAI_AIM_WCKCFGIE_Msk = 0x00000004;
    inline constexpr uint32_t SAI_AIM_WCKCFGIE = (1U << 2);
    inline constexpr uint32_t SAI_AIM_FREQIE_Pos = 3;
    inline constexpr uint32_t SAI_AIM_FREQIE_Msk = 0x00000008;
    inline constexpr uint32_t SAI_AIM_FREQIE = (1U << 3);
    inline constexpr uint32_t SAI_AIM_CNRDYIE_Pos = 4;
    inline constexpr uint32_t SAI_AIM_CNRDYIE_Msk = 0x00000010;
    inline constexpr uint32_t SAI_AIM_CNRDYIE = (1U << 4);
    inline constexpr uint32_t SAI_AIM_AFSDETIE_Pos = 5;
    inline constexpr uint32_t SAI_AIM_AFSDETIE_Msk = 0x00000020;
    inline constexpr uint32_t SAI_AIM_AFSDETIE = (1U << 5);
    inline constexpr uint32_t SAI_AIM_LFSDETIE_Pos = 6;
    inline constexpr uint32_t SAI_AIM_LFSDETIE_Msk = 0x00000040;
    inline constexpr uint32_t SAI_AIM_LFSDETIE = (1U << 6);

    // SAI_ASR fields
    inline constexpr uint32_t SAI_ASR_OVRUDR_Pos = 0;
    inline constexpr uint32_t SAI_ASR_OVRUDR_Msk = 0x00000001;
    inline constexpr uint32_t SAI_ASR_OVRUDR = (1U << 0);
    inline constexpr uint32_t SAI_ASR_MUTEDET_Pos = 1;
    inline constexpr uint32_t SAI_ASR_MUTEDET_Msk = 0x00000002;
    inline constexpr uint32_t SAI_ASR_MUTEDET = (1U << 1);
    inline constexpr uint32_t SAI_ASR_WCKCFG_Pos = 2;
    inline constexpr uint32_t SAI_ASR_WCKCFG_Msk = 0x00000004;
    inline constexpr uint32_t SAI_ASR_WCKCFG = (1U << 2);
    inline constexpr uint32_t SAI_ASR_FREQ_Pos = 3;
    inline constexpr uint32_t SAI_ASR_FREQ_Msk = 0x00000008;
    inline constexpr uint32_t SAI_ASR_FREQ = (1U << 3);
    inline constexpr uint32_t SAI_ASR_CNRDY_Pos = 4;
    inline constexpr uint32_t SAI_ASR_CNRDY_Msk = 0x00000010;
    inline constexpr uint32_t SAI_ASR_CNRDY = (1U << 4);
    inline constexpr uint32_t SAI_ASR_AFSDET_Pos = 5;
    inline constexpr uint32_t SAI_ASR_AFSDET_Msk = 0x00000020;
    inline constexpr uint32_t SAI_ASR_AFSDET = (1U << 5);
    inline constexpr uint32_t SAI_ASR_LFSDET_Pos = 6;
    inline constexpr uint32_t SAI_ASR_LFSDET_Msk = 0x00000040;
    inline constexpr uint32_t SAI_ASR_LFSDET = (1U << 6);
    inline constexpr uint32_t SAI_ASR_FLVL_Pos = 16;
    inline constexpr uint32_t SAI_ASR_FLVL_Msk = 0x00070000;

    // SAI_ACLRFR fields
    inline constexpr uint32_t SAI_ACLRFR_COVRUDR_Pos = 0;
    inline constexpr uint32_t SAI_ACLRFR_COVRUDR_Msk = 0x00000001;
    inline constexpr uint32_t SAI_ACLRFR_COVRUDR = (1U << 0);
    inline constexpr uint32_t SAI_ACLRFR_CMUTEDET_Pos = 1;
    inline constexpr uint32_t SAI_ACLRFR_CMUTEDET_Msk = 0x00000002;
    inline constexpr uint32_t SAI_ACLRFR_CMUTEDET = (1U << 1);
    inline constexpr uint32_t SAI_ACLRFR_CWCKCFG_Pos = 2;
    inline constexpr uint32_t SAI_ACLRFR_CWCKCFG_Msk = 0x00000004;
    inline constexpr uint32_t SAI_ACLRFR_CWCKCFG = (1U << 2);
    inline constexpr uint32_t SAI_ACLRFR_CCNRDY_Pos = 4;
    inline constexpr uint32_t SAI_ACLRFR_CCNRDY_Msk = 0x00000010;
    inline constexpr uint32_t SAI_ACLRFR_CCNRDY = (1U << 4);
    inline constexpr uint32_t SAI_ACLRFR_CAFSDET_Pos = 5;
    inline constexpr uint32_t SAI_ACLRFR_CAFSDET_Msk = 0x00000020;
    inline constexpr uint32_t SAI_ACLRFR_CAFSDET = (1U << 5);
    inline constexpr uint32_t SAI_ACLRFR_CLFSDET_Pos = 6;
    inline constexpr uint32_t SAI_ACLRFR_CLFSDET_Msk = 0x00000040;
    inline constexpr uint32_t SAI_ACLRFR_CLFSDET = (1U << 6);

    // SAI_ADR fields
    inline constexpr uint32_t SAI_ADR_DATA_Pos = 0;
    inline constexpr uint32_t SAI_ADR_DATA_Msk = 0xFFFFFFFF;

    // SAI_BCR1 fields
    inline constexpr uint32_t SAI_BCR1_MODE_Pos = 0;
    inline constexpr uint32_t SAI_BCR1_MODE_Msk = 0x00000003;
    inline constexpr uint32_t SAI_BCR1_PRTCFG_Pos = 2;
    inline constexpr uint32_t SAI_BCR1_PRTCFG_Msk = 0x0000000C;
    inline constexpr uint32_t SAI_BCR1_DS_Pos = 5;
    inline constexpr uint32_t SAI_BCR1_DS_Msk = 0x000000E0;
    inline constexpr uint32_t SAI_BCR1_LSBFIRST_Pos = 8;
    inline constexpr uint32_t SAI_BCR1_LSBFIRST_Msk = 0x00000100;
    inline constexpr uint32_t SAI_BCR1_LSBFIRST = (1U << 8);
    inline constexpr uint32_t SAI_BCR1_CKSTR_Pos = 9;
    inline constexpr uint32_t SAI_BCR1_CKSTR_Msk = 0x00000200;
    inline constexpr uint32_t SAI_BCR1_CKSTR = (1U << 9);
    inline constexpr uint32_t SAI_BCR1_SYNCEN_Pos = 10;
    inline constexpr uint32_t SAI_BCR1_SYNCEN_Msk = 0x00000C00;
    inline constexpr uint32_t SAI_BCR1_MONO_Pos = 12;
    inline constexpr uint32_t SAI_BCR1_MONO_Msk = 0x00001000;
    inline constexpr uint32_t SAI_BCR1_MONO = (1U << 12);
    inline constexpr uint32_t SAI_BCR1_OUTDRIV_Pos = 13;
    inline constexpr uint32_t SAI_BCR1_OUTDRIV_Msk = 0x00002000;
    inline constexpr uint32_t SAI_BCR1_OUTDRIV = (1U << 13);
    inline constexpr uint32_t SAI_BCR1_SAIXEN_Pos = 16;
    inline constexpr uint32_t SAI_BCR1_SAIXEN_Msk = 0x00010000;
    inline constexpr uint32_t SAI_BCR1_SAIXEN = (1U << 16);
    inline constexpr uint32_t SAI_BCR1_DMAEN_Pos = 17;
    inline constexpr uint32_t SAI_BCR1_DMAEN_Msk = 0x00020000;
    inline constexpr uint32_t SAI_BCR1_DMAEN = (1U << 17);
    inline constexpr uint32_t SAI_BCR1_NOMCK_Pos = 19;
    inline constexpr uint32_t SAI_BCR1_NOMCK_Msk = 0x00080000;
    inline constexpr uint32_t SAI_BCR1_NOMCK = (1U << 19);
    inline constexpr uint32_t SAI_BCR1_MCKDIV_Pos = 20;
    inline constexpr uint32_t SAI_BCR1_MCKDIV_Msk = 0x00F00000;
    inline constexpr uint32_t SAI_BCR1_OSR_Pos = 26;
    inline constexpr uint32_t SAI_BCR1_OSR_Msk = 0x04000000;
    inline constexpr uint32_t SAI_BCR1_OSR = (1U << 26);

    // SAI_BCR2 fields
    inline constexpr uint32_t SAI_BCR2_FTH_Pos = 0;
    inline constexpr uint32_t SAI_BCR2_FTH_Msk = 0x00000007;
    inline constexpr uint32_t SAI_BCR2_FFLUSH_Pos = 3;
    inline constexpr uint32_t SAI_BCR2_FFLUSH_Msk = 0x00000008;
    inline constexpr uint32_t SAI_BCR2_FFLUSH = (1U << 3);
    inline constexpr uint32_t SAI_BCR2_TRIS_Pos = 4;
    inline constexpr uint32_t SAI_BCR2_TRIS_Msk = 0x00000010;
    inline constexpr uint32_t SAI_BCR2_TRIS = (1U << 4);
    inline constexpr uint32_t SAI_BCR2_MUTE_Pos = 5;
    inline constexpr uint32_t SAI_BCR2_MUTE_Msk = 0x00000020;
    inline constexpr uint32_t SAI_BCR2_MUTE = (1U << 5);
    inline constexpr uint32_t SAI_BCR2_MUTEVAL_Pos = 6;
    inline constexpr uint32_t SAI_BCR2_MUTEVAL_Msk = 0x00000040;
    inline constexpr uint32_t SAI_BCR2_MUTEVAL = (1U << 6);
    inline constexpr uint32_t SAI_BCR2_MUTECNT_Pos = 7;
    inline constexpr uint32_t SAI_BCR2_MUTECNT_Msk = 0x00001F80;
    inline constexpr uint32_t SAI_BCR2_CPL_Pos = 13;
    inline constexpr uint32_t SAI_BCR2_CPL_Msk = 0x00002000;
    inline constexpr uint32_t SAI_BCR2_CPL = (1U << 13);
    inline constexpr uint32_t SAI_BCR2_COMP_Pos = 14;
    inline constexpr uint32_t SAI_BCR2_COMP_Msk = 0x0000C000;

    // SAI_BFRCR fields
    inline constexpr uint32_t SAI_BFRCR_FRL_Pos = 0;
    inline constexpr uint32_t SAI_BFRCR_FRL_Msk = 0x000000FF;
    inline constexpr uint32_t SAI_BFRCR_FSALL_Pos = 8;
    inline constexpr uint32_t SAI_BFRCR_FSALL_Msk = 0x00007F00;
    inline constexpr uint32_t SAI_BFRCR_FSDEF_Pos = 16;
    inline constexpr uint32_t SAI_BFRCR_FSDEF_Msk = 0x00010000;
    inline constexpr uint32_t SAI_BFRCR_FSDEF = (1U << 16);
    inline constexpr uint32_t SAI_BFRCR_FSPOL_Pos = 17;
    inline constexpr uint32_t SAI_BFRCR_FSPOL_Msk = 0x00020000;
    inline constexpr uint32_t SAI_BFRCR_FSPOL = (1U << 17);
    inline constexpr uint32_t SAI_BFRCR_FSOFF_Pos = 18;
    inline constexpr uint32_t SAI_BFRCR_FSOFF_Msk = 0x00040000;
    inline constexpr uint32_t SAI_BFRCR_FSOFF = (1U << 18);

    // SAI_BSLOTR fields
    inline constexpr uint32_t SAI_BSLOTR_FBOFF_Pos = 0;
    inline constexpr uint32_t SAI_BSLOTR_FBOFF_Msk = 0x0000001F;
    inline constexpr uint32_t SAI_BSLOTR_SLOTSZ_Pos = 6;
    inline constexpr uint32_t SAI_BSLOTR_SLOTSZ_Msk = 0x000000C0;
    inline constexpr uint32_t SAI_BSLOTR_NBSLOT_Pos = 8;
    inline constexpr uint32_t SAI_BSLOTR_NBSLOT_Msk = 0x00000F00;
    inline constexpr uint32_t SAI_BSLOTR_SLOTEN_Pos = 16;
    inline constexpr uint32_t SAI_BSLOTR_SLOTEN_Msk = 0xFFFF0000;

    // SAI_BIM fields
    inline constexpr uint32_t SAI_BIM_OVRUDRIE_Pos = 0;
    inline constexpr uint32_t SAI_BIM_OVRUDRIE_Msk = 0x00000001;
    inline constexpr uint32_t SAI_BIM_OVRUDRIE = (1U << 0);
    inline constexpr uint32_t SAI_BIM_MUTEDETIE_Pos = 1;
    inline constexpr uint32_t SAI_BIM_MUTEDETIE_Msk = 0x00000002;
    inline constexpr uint32_t SAI_BIM_MUTEDETIE = (1U << 1);
    inline constexpr uint32_t SAI_BIM_WCKCFGIE_Pos = 2;
    inline constexpr uint32_t SAI_BIM_WCKCFGIE_Msk = 0x00000004;
    inline constexpr uint32_t SAI_BIM_WCKCFGIE = (1U << 2);
    inline constexpr uint32_t SAI_BIM_FREQIE_Pos = 3;
    inline constexpr uint32_t SAI_BIM_FREQIE_Msk = 0x00000008;
    inline constexpr uint32_t SAI_BIM_FREQIE = (1U << 3);
    inline constexpr uint32_t SAI_BIM_CNRDYIE_Pos = 4;
    inline constexpr uint32_t SAI_BIM_CNRDYIE_Msk = 0x00000010;
    inline constexpr uint32_t SAI_BIM_CNRDYIE = (1U << 4);
    inline constexpr uint32_t SAI_BIM_AFSDETIE_Pos = 5;
    inline constexpr uint32_t SAI_BIM_AFSDETIE_Msk = 0x00000020;
    inline constexpr uint32_t SAI_BIM_AFSDETIE = (1U << 5);
    inline constexpr uint32_t SAI_BIM_LFSDETIE_Pos = 6;
    inline constexpr uint32_t SAI_BIM_LFSDETIE_Msk = 0x00000040;
    inline constexpr uint32_t SAI_BIM_LFSDETIE = (1U << 6);

    // SAI_BSR fields
    inline constexpr uint32_t SAI_BSR_OVRUDR_Pos = 0;
    inline constexpr uint32_t SAI_BSR_OVRUDR_Msk = 0x00000001;
    inline constexpr uint32_t SAI_BSR_OVRUDR = (1U << 0);
    inline constexpr uint32_t SAI_BSR_MUTEDET_Pos = 1;
    inline constexpr uint32_t SAI_BSR_MUTEDET_Msk = 0x00000002;
    inline constexpr uint32_t SAI_BSR_MUTEDET = (1U << 1);
    inline constexpr uint32_t SAI_BSR_WCKCFG_Pos = 2;
    inline constexpr uint32_t SAI_BSR_WCKCFG_Msk = 0x00000004;
    inline constexpr uint32_t SAI_BSR_WCKCFG = (1U << 2);
    inline constexpr uint32_t SAI_BSR_FREQ_Pos = 3;
    inline constexpr uint32_t SAI_BSR_FREQ_Msk = 0x00000008;
    inline constexpr uint32_t SAI_BSR_FREQ = (1U << 3);
    inline constexpr uint32_t SAI_BSR_CNRDY_Pos = 4;
    inline constexpr uint32_t SAI_BSR_CNRDY_Msk = 0x00000010;
    inline constexpr uint32_t SAI_BSR_CNRDY = (1U << 4);
    inline constexpr uint32_t SAI_BSR_AFSDET_Pos = 5;
    inline constexpr uint32_t SAI_BSR_AFSDET_Msk = 0x00000020;
    inline constexpr uint32_t SAI_BSR_AFSDET = (1U << 5);
    inline constexpr uint32_t SAI_BSR_LFSDET_Pos = 6;
    inline constexpr uint32_t SAI_BSR_LFSDET_Msk = 0x00000040;
    inline constexpr uint32_t SAI_BSR_LFSDET = (1U << 6);
    inline constexpr uint32_t SAI_BSR_FLVL_Pos = 16;
    inline constexpr uint32_t SAI_BSR_FLVL_Msk = 0x00070000;

    // SAI_BCLRFR fields
    inline constexpr uint32_t SAI_BCLRFR_COVRUDR_Pos = 0;
    inline constexpr uint32_t SAI_BCLRFR_COVRUDR_Msk = 0x00000001;
    inline constexpr uint32_t SAI_BCLRFR_COVRUDR = (1U << 0);
    inline constexpr uint32_t SAI_BCLRFR_CMUTEDET_Pos = 1;
    inline constexpr uint32_t SAI_BCLRFR_CMUTEDET_Msk = 0x00000002;
    inline constexpr uint32_t SAI_BCLRFR_CMUTEDET = (1U << 1);
    inline constexpr uint32_t SAI_BCLRFR_CWCKCFG_Pos = 2;
    inline constexpr uint32_t SAI_BCLRFR_CWCKCFG_Msk = 0x00000004;
    inline constexpr uint32_t SAI_BCLRFR_CWCKCFG = (1U << 2);
    inline constexpr uint32_t SAI_BCLRFR_CCNRDY_Pos = 4;
    inline constexpr uint32_t SAI_BCLRFR_CCNRDY_Msk = 0x00000010;
    inline constexpr uint32_t SAI_BCLRFR_CCNRDY = (1U << 4);
    inline constexpr uint32_t SAI_BCLRFR_CAFSDET_Pos = 5;
    inline constexpr uint32_t SAI_BCLRFR_CAFSDET_Msk = 0x00000020;
    inline constexpr uint32_t SAI_BCLRFR_CAFSDET = (1U << 5);
    inline constexpr uint32_t SAI_BCLRFR_CLFSDET_Pos = 6;
    inline constexpr uint32_t SAI_BCLRFR_CLFSDET_Msk = 0x00000040;
    inline constexpr uint32_t SAI_BCLRFR_CLFSDET = (1U << 6);

    // SAI_BDR fields
    inline constexpr uint32_t SAI_BDR_DATA_Pos = 0;
    inline constexpr uint32_t SAI_BDR_DATA_Msk = 0xFFFFFFFF;

    // SAI_PDMCR fields
    inline constexpr uint32_t SAI_PDMCR_PDMEN_Pos = 0;
    inline constexpr uint32_t SAI_PDMCR_PDMEN_Msk = 0x00000001;
    inline constexpr uint32_t SAI_PDMCR_PDMEN = (1U << 0);
    inline constexpr uint32_t SAI_PDMCR_MICNBR_Pos = 4;
    inline constexpr uint32_t SAI_PDMCR_MICNBR_Msk = 0x00000030;
    inline constexpr uint32_t SAI_PDMCR_CKEN1_Pos = 8;
    inline constexpr uint32_t SAI_PDMCR_CKEN1_Msk = 0x00000100;
    inline constexpr uint32_t SAI_PDMCR_CKEN1 = (1U << 8);
    inline constexpr uint32_t SAI_PDMCR_CKEN2_Pos = 9;
    inline constexpr uint32_t SAI_PDMCR_CKEN2_Msk = 0x00000200;
    inline constexpr uint32_t SAI_PDMCR_CKEN2 = (1U << 9);
    inline constexpr uint32_t SAI_PDMCR_CKEN3_Pos = 10;
    inline constexpr uint32_t SAI_PDMCR_CKEN3_Msk = 0x00000400;
    inline constexpr uint32_t SAI_PDMCR_CKEN3 = (1U << 10);
    inline constexpr uint32_t SAI_PDMCR_CKEN4_Pos = 11;
    inline constexpr uint32_t SAI_PDMCR_CKEN4_Msk = 0x00000800;
    inline constexpr uint32_t SAI_PDMCR_CKEN4 = (1U << 11);

    // SAI_PDMDLY fields
    inline constexpr uint32_t SAI_PDMDLY_DLYM1L_Pos = 0;
    inline constexpr uint32_t SAI_PDMDLY_DLYM1L_Msk = 0x00000007;
    inline constexpr uint32_t SAI_PDMDLY_DLYM1R_Pos = 4;
    inline constexpr uint32_t SAI_PDMDLY_DLYM1R_Msk = 0x00000070;
    inline constexpr uint32_t SAI_PDMDLY_DLYM2L_Pos = 8;
    inline constexpr uint32_t SAI_PDMDLY_DLYM2L_Msk = 0x00000700;
    inline constexpr uint32_t SAI_PDMDLY_DLYM2R_Pos = 12;
    inline constexpr uint32_t SAI_PDMDLY_DLYM2R_Msk = 0x00007000;
    inline constexpr uint32_t SAI_PDMDLY_DLYM3L_Pos = 16;
    inline constexpr uint32_t SAI_PDMDLY_DLYM3L_Msk = 0x00070000;
    inline constexpr uint32_t SAI_PDMDLY_DLYM3R_Pos = 20;
    inline constexpr uint32_t SAI_PDMDLY_DLYM3R_Msk = 0x00700000;
    inline constexpr uint32_t SAI_PDMDLY_DLYM4L_Pos = 24;
    inline constexpr uint32_t SAI_PDMDLY_DLYM4L_Msk = 0x07000000;
    inline constexpr uint32_t SAI_PDMDLY_DLYM4R_Pos = 28;
    inline constexpr uint32_t SAI_PDMDLY_DLYM4R_Msk = 0x70000000;

} // namespace SAI3

// Peripheral instances (lowercase to avoid namespace collision)
namespace periph {
    inline auto* const sai4 = reinterpret_cast<SAI4_t*>(0x58005400);
    inline auto* const sai1 = reinterpret_cast<SAI4_t*>(0x40015800);
    inline auto* const sai2 = reinterpret_cast<SAI4_t*>(0x40015C00);
    inline auto* const sai3 = reinterpret_cast<SAI4_t*>(0x40016000);
} // namespace periph

} // namespace sbl::hw::reg

#endif // SBL_HW_REG_STM32H750_SAI_HPP
