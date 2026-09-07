/**
 * @file axi.hpp
 * @brief Register definitions for STM32H750 - axi
 *
 * Generated from: stm32h750.svd.patched
 * Generator: cecrops
 * Generated: 2026-09-06T09:18:38.421786
 *
 * DO NOT EDIT - Regenerate with: cecrops generate <mcu-dir>
 */

#ifndef SBL_HW_REG_STM32H750_AXI_HPP
#define SBL_HW_REG_STM32H750_AXI_HPP

#include <cstdint>

namespace sbl::hw::reg {

/** AXI interconnect registers */
struct AXI_t {
    uint8_t _reserved0[8144];
    volatile uint32_t AXI_PERIPH_ID_4;  ///< AXI interconnect - peripheral ID4           register
    uint8_t _reserved1[12];
    volatile uint32_t AXI_PERIPH_ID_0;  ///< AXI interconnect - peripheral ID0           register
    volatile uint32_t AXI_PERIPH_ID_1;  ///< AXI interconnect - peripheral ID1           register
    volatile uint32_t AXI_PERIPH_ID_2;  ///< AXI interconnect - peripheral ID2           register
    volatile uint32_t AXI_PERIPH_ID_3;  ///< AXI interconnect - peripheral ID3           register
    volatile uint32_t AXI_COMP_ID_0;  ///< AXI interconnect - component ID0           register
    volatile uint32_t AXI_COMP_ID_1;  ///< AXI interconnect - component ID1           register
    volatile uint32_t AXI_COMP_ID_2;  ///< AXI interconnect - component ID2           register
    volatile uint32_t AXI_COMP_ID_3;  ///< AXI interconnect - component ID3           register
    uint8_t _reserved2[8];
    volatile uint32_t AXI_TARG1_FN_MOD_ISS_BM;  ///< AXI interconnect - TARG x bus matrix issuing           fu...
    uint8_t _reserved3[24];
    volatile uint32_t AXI_TARG1_FN_MOD2;  ///< AXI interconnect - TARG x bus matrix           functional...
    uint8_t _reserved4[4];
    volatile uint32_t AXI_TARG1_FN_MOD_LB;  ///< AXI interconnect - TARG x long burst           functional...
    uint8_t _reserved5[216];
    volatile uint32_t AXI_TARG1_FN_MOD;  ///< AXI interconnect - TARG x long burst           functional...
    uint8_t _reserved6[3836];
    volatile uint32_t AXI_TARG2_FN_MOD_ISS_BM;  ///< AXI interconnect - TARG x bus matrix issuing           fu...
    uint8_t _reserved7[24];
    volatile uint32_t AXI_TARG2_FN_MOD2;  ///< AXI interconnect - TARG x bus matrix           functional...
    uint8_t _reserved8[4];
    volatile uint32_t AXI_TARG2_FN_MOD_LB;  ///< AXI interconnect - TARG x long burst           functional...
    uint8_t _reserved9[216];
    volatile uint32_t AXI_TARG2_FN_MOD;  ///< AXI interconnect - TARG x long burst           functional...
    uint8_t _reserved10[3836];
    volatile uint32_t AXI_TARG3_FN_MOD_ISS_BM;  ///< AXI interconnect - TARG x bus matrix issuing           fu...
    uint8_t _reserved11[4092];
    volatile uint32_t AXI_TARG4_FN_MOD_ISS_BM;  ///< AXI interconnect - TARG x bus matrix issuing           fu...
    uint8_t _reserved12[4092];
    volatile uint32_t AXI_TARG5_FN_MOD_ISS_BM;  ///< AXI interconnect - TARG x bus matrix issuing           fu...
    uint8_t _reserved13[4092];
    volatile uint32_t AXI_TARG6_FN_MOD_ISS_BM;  ///< AXI interconnect - TARG x bus matrix issuing           fu...
    uint8_t _reserved14[4092];
    volatile uint32_t AXI_TARG7_FN_MOD_ISS_BM;  ///< AXI interconnect - TARG x bus matrix issuing           fu...
    uint8_t _reserved15[24];
    volatile uint32_t AXI_TARG7_FN_MOD2;  ///< AXI interconnect - TARG x bus matrix           functional...
    uint8_t _reserved16[224];
    volatile uint32_t AXI_TARG7_FN_MOD;  ///< AXI interconnect - TARG x long burst           functional...
    uint8_t _reserved17[237336];
    volatile uint32_t AXI_INI1_FN_MOD2;  ///< AXI interconnect - INI x functionality           modifica...
    volatile uint32_t AXI_INI1_FN_MOD_AHB;  ///< AXI interconnect - INI x AHB functionality           modi...
    uint8_t _reserved18[212];
    volatile uint32_t AXI_INI1_READ_QOS;  ///< AXI interconnect - INI x read QoS           register
    volatile uint32_t AXI_INI1_WRITE_QOS;  ///< AXI interconnect - INI x write QoS           register
    volatile uint32_t AXI_INI1_FN_MOD;  ///< AXI interconnect - INI x issuing           functionality ...
    uint8_t _reserved19[4084];
    volatile uint32_t AXI_INI2_READ_QOS;  ///< AXI interconnect - INI x read QoS           register
    volatile uint32_t AXI_INI2_WRITE_QOS;  ///< AXI interconnect - INI x write QoS           register
    volatile uint32_t AXI_INI2_FN_MOD;  ///< AXI interconnect - INI x issuing           functionality ...
    uint8_t _reserved20[3864];
    volatile uint32_t AXI_INI3_FN_MOD2;  ///< AXI interconnect - INI x functionality           modifica...
    volatile uint32_t AXI_INI3_FN_MOD_AHB;  ///< AXI interconnect - INI x AHB functionality           modi...
    uint8_t _reserved21[212];
    volatile uint32_t AXI_INI3_READ_QOS;  ///< AXI interconnect - INI x read QoS           register
    volatile uint32_t AXI_INI3_WRITE_QOS;  ///< AXI interconnect - INI x write QoS           register
    volatile uint32_t AXI_INI3_FN_MOD;  ///< AXI interconnect - INI x issuing           functionality ...
    uint8_t _reserved22[4084];
    volatile uint32_t AXI_INI4_READ_QOS;  ///< AXI interconnect - INI x read QoS           register
    volatile uint32_t AXI_INI4_WRITE_QOS;  ///< AXI interconnect - INI x write QoS           register
    volatile uint32_t AXI_INI4_FN_MOD;  ///< AXI interconnect - INI x issuing           functionality ...
    uint8_t _reserved23[4084];
    volatile uint32_t AXI_INI5_READ_QOS;  ///< AXI interconnect - INI x read QoS           register
    volatile uint32_t AXI_INI5_WRITE_QOS;  ///< AXI interconnect - INI x write QoS           register
    volatile uint32_t AXI_INI5_FN_MOD;  ///< AXI interconnect - INI x issuing           functionality ...
    uint8_t _reserved24[4084];
    volatile uint32_t AXI_INI6_READ_QOS;  ///< AXI interconnect - INI x read QoS           register
    volatile uint32_t AXI_INI6_WRITE_QOS;  ///< AXI interconnect - INI x write QoS           register
    volatile uint32_t AXI_INI6_FN_MOD;  ///< AXI interconnect - INI x issuing           functionality ...
};

namespace AXI {
    // AXI_PERIPH_ID_4 fields
    inline constexpr uint32_t AXI_PERIPH_ID_4_JEP106CON_Pos = 0;
    inline constexpr uint32_t AXI_PERIPH_ID_4_JEP106CON_Msk = 0x0000000F;
    inline constexpr uint32_t AXI_PERIPH_ID_4_KCOUNT4_Pos = 4;
    inline constexpr uint32_t AXI_PERIPH_ID_4_KCOUNT4_Msk = 0x000000F0;

    // AXI_PERIPH_ID_0 fields
    inline constexpr uint32_t AXI_PERIPH_ID_0_PARTNUM_Pos = 0;
    inline constexpr uint32_t AXI_PERIPH_ID_0_PARTNUM_Msk = 0x000000FF;

    // AXI_PERIPH_ID_1 fields
    inline constexpr uint32_t AXI_PERIPH_ID_1_PARTNUM_Pos = 0;
    inline constexpr uint32_t AXI_PERIPH_ID_1_PARTNUM_Msk = 0x0000000F;
    inline constexpr uint32_t AXI_PERIPH_ID_1_JEP106I_Pos = 4;
    inline constexpr uint32_t AXI_PERIPH_ID_1_JEP106I_Msk = 0x000000F0;

    // AXI_PERIPH_ID_2 fields
    inline constexpr uint32_t AXI_PERIPH_ID_2_JEP106ID_Pos = 0;
    inline constexpr uint32_t AXI_PERIPH_ID_2_JEP106ID_Msk = 0x00000007;
    inline constexpr uint32_t AXI_PERIPH_ID_2_JEDEC_Pos = 3;
    inline constexpr uint32_t AXI_PERIPH_ID_2_JEDEC_Msk = 0x00000008;
    inline constexpr uint32_t AXI_PERIPH_ID_2_JEDEC = (1U << 3);
    inline constexpr uint32_t AXI_PERIPH_ID_2_REVISION_Pos = 4;
    inline constexpr uint32_t AXI_PERIPH_ID_2_REVISION_Msk = 0x000000F0;

    // AXI_PERIPH_ID_3 fields
    inline constexpr uint32_t AXI_PERIPH_ID_3_CUST_MOD_NUM_Pos = 0;
    inline constexpr uint32_t AXI_PERIPH_ID_3_CUST_MOD_NUM_Msk = 0x0000000F;
    inline constexpr uint32_t AXI_PERIPH_ID_3_REV_AND_Pos = 4;
    inline constexpr uint32_t AXI_PERIPH_ID_3_REV_AND_Msk = 0x000000F0;

    // AXI_COMP_ID_0 fields
    inline constexpr uint32_t AXI_COMP_ID_0_PREAMBLE_Pos = 0;
    inline constexpr uint32_t AXI_COMP_ID_0_PREAMBLE_Msk = 0x000000FF;

    // AXI_COMP_ID_1 fields
    inline constexpr uint32_t AXI_COMP_ID_1_PREAMBLE_Pos = 0;
    inline constexpr uint32_t AXI_COMP_ID_1_PREAMBLE_Msk = 0x0000000F;
    inline constexpr uint32_t AXI_COMP_ID_1_CLASS_Pos = 4;
    inline constexpr uint32_t AXI_COMP_ID_1_CLASS_Msk = 0x000000F0;

    // AXI_COMP_ID_2 fields
    inline constexpr uint32_t AXI_COMP_ID_2_PREAMBLE_Pos = 0;
    inline constexpr uint32_t AXI_COMP_ID_2_PREAMBLE_Msk = 0x000000FF;

    // AXI_COMP_ID_3 fields
    inline constexpr uint32_t AXI_COMP_ID_3_PREAMBLE_Pos = 0;
    inline constexpr uint32_t AXI_COMP_ID_3_PREAMBLE_Msk = 0x000000FF;

    // AXI_TARG1_FN_MOD_ISS_BM fields
    inline constexpr uint32_t AXI_TARG1_FN_MOD_ISS_BM_READ_ISS_OVERRIDE_Pos = 0;
    inline constexpr uint32_t AXI_TARG1_FN_MOD_ISS_BM_READ_ISS_OVERRIDE_Msk = 0x00000001;
    inline constexpr uint32_t AXI_TARG1_FN_MOD_ISS_BM_READ_ISS_OVERRIDE = (1U << 0);
    inline constexpr uint32_t AXI_TARG1_FN_MOD_ISS_BM_WRITE_ISS_OVERRIDE_Pos = 1;
    inline constexpr uint32_t AXI_TARG1_FN_MOD_ISS_BM_WRITE_ISS_OVERRIDE_Msk = 0x00000002;
    inline constexpr uint32_t AXI_TARG1_FN_MOD_ISS_BM_WRITE_ISS_OVERRIDE = (1U << 1);

    // AXI_TARG1_FN_MOD2 fields
    inline constexpr uint32_t AXI_TARG1_FN_MOD2_BYPASS_MERGE_Pos = 0;
    inline constexpr uint32_t AXI_TARG1_FN_MOD2_BYPASS_MERGE_Msk = 0x00000001;
    inline constexpr uint32_t AXI_TARG1_FN_MOD2_BYPASS_MERGE = (1U << 0);

    // AXI_TARG1_FN_MOD_LB fields
    inline constexpr uint32_t AXI_TARG1_FN_MOD_LB_FN_MOD_LB_Pos = 0;
    inline constexpr uint32_t AXI_TARG1_FN_MOD_LB_FN_MOD_LB_Msk = 0x00000001;
    inline constexpr uint32_t AXI_TARG1_FN_MOD_LB_FN_MOD_LB = (1U << 0);

    // AXI_TARG1_FN_MOD fields
    inline constexpr uint32_t AXI_TARG1_FN_MOD_READ_ISS_OVERRIDE_Pos = 0;
    inline constexpr uint32_t AXI_TARG1_FN_MOD_READ_ISS_OVERRIDE_Msk = 0x00000001;
    inline constexpr uint32_t AXI_TARG1_FN_MOD_READ_ISS_OVERRIDE = (1U << 0);
    inline constexpr uint32_t AXI_TARG1_FN_MOD_WRITE_ISS_OVERRIDE_Pos = 1;
    inline constexpr uint32_t AXI_TARG1_FN_MOD_WRITE_ISS_OVERRIDE_Msk = 0x00000002;
    inline constexpr uint32_t AXI_TARG1_FN_MOD_WRITE_ISS_OVERRIDE = (1U << 1);

    // AXI_TARG2_FN_MOD_ISS_BM fields
    inline constexpr uint32_t AXI_TARG2_FN_MOD_ISS_BM_READ_ISS_OVERRIDE_Pos = 0;
    inline constexpr uint32_t AXI_TARG2_FN_MOD_ISS_BM_READ_ISS_OVERRIDE_Msk = 0x00000001;
    inline constexpr uint32_t AXI_TARG2_FN_MOD_ISS_BM_READ_ISS_OVERRIDE = (1U << 0);
    inline constexpr uint32_t AXI_TARG2_FN_MOD_ISS_BM_WRITE_ISS_OVERRIDE_Pos = 1;
    inline constexpr uint32_t AXI_TARG2_FN_MOD_ISS_BM_WRITE_ISS_OVERRIDE_Msk = 0x00000002;
    inline constexpr uint32_t AXI_TARG2_FN_MOD_ISS_BM_WRITE_ISS_OVERRIDE = (1U << 1);

    // AXI_TARG2_FN_MOD2 fields
    inline constexpr uint32_t AXI_TARG2_FN_MOD2_BYPASS_MERGE_Pos = 0;
    inline constexpr uint32_t AXI_TARG2_FN_MOD2_BYPASS_MERGE_Msk = 0x00000001;
    inline constexpr uint32_t AXI_TARG2_FN_MOD2_BYPASS_MERGE = (1U << 0);

    // AXI_TARG2_FN_MOD_LB fields
    inline constexpr uint32_t AXI_TARG2_FN_MOD_LB_FN_MOD_LB_Pos = 0;
    inline constexpr uint32_t AXI_TARG2_FN_MOD_LB_FN_MOD_LB_Msk = 0x00000001;
    inline constexpr uint32_t AXI_TARG2_FN_MOD_LB_FN_MOD_LB = (1U << 0);

    // AXI_TARG2_FN_MOD fields
    inline constexpr uint32_t AXI_TARG2_FN_MOD_READ_ISS_OVERRIDE_Pos = 0;
    inline constexpr uint32_t AXI_TARG2_FN_MOD_READ_ISS_OVERRIDE_Msk = 0x00000001;
    inline constexpr uint32_t AXI_TARG2_FN_MOD_READ_ISS_OVERRIDE = (1U << 0);
    inline constexpr uint32_t AXI_TARG2_FN_MOD_WRITE_ISS_OVERRIDE_Pos = 1;
    inline constexpr uint32_t AXI_TARG2_FN_MOD_WRITE_ISS_OVERRIDE_Msk = 0x00000002;
    inline constexpr uint32_t AXI_TARG2_FN_MOD_WRITE_ISS_OVERRIDE = (1U << 1);

    // AXI_TARG3_FN_MOD_ISS_BM fields
    inline constexpr uint32_t AXI_TARG3_FN_MOD_ISS_BM_READ_ISS_OVERRIDE_Pos = 0;
    inline constexpr uint32_t AXI_TARG3_FN_MOD_ISS_BM_READ_ISS_OVERRIDE_Msk = 0x00000001;
    inline constexpr uint32_t AXI_TARG3_FN_MOD_ISS_BM_READ_ISS_OVERRIDE = (1U << 0);
    inline constexpr uint32_t AXI_TARG3_FN_MOD_ISS_BM_WRITE_ISS_OVERRIDE_Pos = 1;
    inline constexpr uint32_t AXI_TARG3_FN_MOD_ISS_BM_WRITE_ISS_OVERRIDE_Msk = 0x00000002;
    inline constexpr uint32_t AXI_TARG3_FN_MOD_ISS_BM_WRITE_ISS_OVERRIDE = (1U << 1);

    // AXI_TARG4_FN_MOD_ISS_BM fields
    inline constexpr uint32_t AXI_TARG4_FN_MOD_ISS_BM_READ_ISS_OVERRIDE_Pos = 0;
    inline constexpr uint32_t AXI_TARG4_FN_MOD_ISS_BM_READ_ISS_OVERRIDE_Msk = 0x00000001;
    inline constexpr uint32_t AXI_TARG4_FN_MOD_ISS_BM_READ_ISS_OVERRIDE = (1U << 0);
    inline constexpr uint32_t AXI_TARG4_FN_MOD_ISS_BM_WRITE_ISS_OVERRIDE_Pos = 1;
    inline constexpr uint32_t AXI_TARG4_FN_MOD_ISS_BM_WRITE_ISS_OVERRIDE_Msk = 0x00000002;
    inline constexpr uint32_t AXI_TARG4_FN_MOD_ISS_BM_WRITE_ISS_OVERRIDE = (1U << 1);

    // AXI_TARG5_FN_MOD_ISS_BM fields
    inline constexpr uint32_t AXI_TARG5_FN_MOD_ISS_BM_READ_ISS_OVERRIDE_Pos = 0;
    inline constexpr uint32_t AXI_TARG5_FN_MOD_ISS_BM_READ_ISS_OVERRIDE_Msk = 0x00000001;
    inline constexpr uint32_t AXI_TARG5_FN_MOD_ISS_BM_READ_ISS_OVERRIDE = (1U << 0);
    inline constexpr uint32_t AXI_TARG5_FN_MOD_ISS_BM_WRITE_ISS_OVERRIDE_Pos = 1;
    inline constexpr uint32_t AXI_TARG5_FN_MOD_ISS_BM_WRITE_ISS_OVERRIDE_Msk = 0x00000002;
    inline constexpr uint32_t AXI_TARG5_FN_MOD_ISS_BM_WRITE_ISS_OVERRIDE = (1U << 1);

    // AXI_TARG6_FN_MOD_ISS_BM fields
    inline constexpr uint32_t AXI_TARG6_FN_MOD_ISS_BM_READ_ISS_OVERRIDE_Pos = 0;
    inline constexpr uint32_t AXI_TARG6_FN_MOD_ISS_BM_READ_ISS_OVERRIDE_Msk = 0x00000001;
    inline constexpr uint32_t AXI_TARG6_FN_MOD_ISS_BM_READ_ISS_OVERRIDE = (1U << 0);
    inline constexpr uint32_t AXI_TARG6_FN_MOD_ISS_BM_WRITE_ISS_OVERRIDE_Pos = 1;
    inline constexpr uint32_t AXI_TARG6_FN_MOD_ISS_BM_WRITE_ISS_OVERRIDE_Msk = 0x00000002;
    inline constexpr uint32_t AXI_TARG6_FN_MOD_ISS_BM_WRITE_ISS_OVERRIDE = (1U << 1);

    // AXI_TARG7_FN_MOD_ISS_BM fields
    inline constexpr uint32_t AXI_TARG7_FN_MOD_ISS_BM_READ_ISS_OVERRIDE_Pos = 0;
    inline constexpr uint32_t AXI_TARG7_FN_MOD_ISS_BM_READ_ISS_OVERRIDE_Msk = 0x00000001;
    inline constexpr uint32_t AXI_TARG7_FN_MOD_ISS_BM_READ_ISS_OVERRIDE = (1U << 0);
    inline constexpr uint32_t AXI_TARG7_FN_MOD_ISS_BM_WRITE_ISS_OVERRIDE_Pos = 1;
    inline constexpr uint32_t AXI_TARG7_FN_MOD_ISS_BM_WRITE_ISS_OVERRIDE_Msk = 0x00000002;
    inline constexpr uint32_t AXI_TARG7_FN_MOD_ISS_BM_WRITE_ISS_OVERRIDE = (1U << 1);

    // AXI_TARG7_FN_MOD2 fields
    inline constexpr uint32_t AXI_TARG7_FN_MOD2_BYPASS_MERGE_Pos = 0;
    inline constexpr uint32_t AXI_TARG7_FN_MOD2_BYPASS_MERGE_Msk = 0x00000001;
    inline constexpr uint32_t AXI_TARG7_FN_MOD2_BYPASS_MERGE = (1U << 0);

    // AXI_TARG7_FN_MOD fields
    inline constexpr uint32_t AXI_TARG7_FN_MOD_READ_ISS_OVERRIDE_Pos = 0;
    inline constexpr uint32_t AXI_TARG7_FN_MOD_READ_ISS_OVERRIDE_Msk = 0x00000001;
    inline constexpr uint32_t AXI_TARG7_FN_MOD_READ_ISS_OVERRIDE = (1U << 0);
    inline constexpr uint32_t AXI_TARG7_FN_MOD_WRITE_ISS_OVERRIDE_Pos = 1;
    inline constexpr uint32_t AXI_TARG7_FN_MOD_WRITE_ISS_OVERRIDE_Msk = 0x00000002;
    inline constexpr uint32_t AXI_TARG7_FN_MOD_WRITE_ISS_OVERRIDE = (1U << 1);

    // AXI_INI1_FN_MOD2 fields
    inline constexpr uint32_t AXI_INI1_FN_MOD2_BYPASS_MERGE_Pos = 0;
    inline constexpr uint32_t AXI_INI1_FN_MOD2_BYPASS_MERGE_Msk = 0x00000001;
    inline constexpr uint32_t AXI_INI1_FN_MOD2_BYPASS_MERGE = (1U << 0);

    // AXI_INI1_FN_MOD_AHB fields
    inline constexpr uint32_t AXI_INI1_FN_MOD_AHB_RD_INC_OVERRIDE_Pos = 0;
    inline constexpr uint32_t AXI_INI1_FN_MOD_AHB_RD_INC_OVERRIDE_Msk = 0x00000001;
    inline constexpr uint32_t AXI_INI1_FN_MOD_AHB_RD_INC_OVERRIDE = (1U << 0);
    inline constexpr uint32_t AXI_INI1_FN_MOD_AHB_WR_INC_OVERRIDE_Pos = 1;
    inline constexpr uint32_t AXI_INI1_FN_MOD_AHB_WR_INC_OVERRIDE_Msk = 0x00000002;
    inline constexpr uint32_t AXI_INI1_FN_MOD_AHB_WR_INC_OVERRIDE = (1U << 1);

    // AXI_INI1_READ_QOS fields
    inline constexpr uint32_t AXI_INI1_READ_QOS_AR_QOS_Pos = 0;
    inline constexpr uint32_t AXI_INI1_READ_QOS_AR_QOS_Msk = 0x0000000F;

    // AXI_INI1_WRITE_QOS fields
    inline constexpr uint32_t AXI_INI1_WRITE_QOS_AW_QOS_Pos = 0;
    inline constexpr uint32_t AXI_INI1_WRITE_QOS_AW_QOS_Msk = 0x0000000F;

    // AXI_INI1_FN_MOD fields
    inline constexpr uint32_t AXI_INI1_FN_MOD_READ_ISS_OVERRIDE_Pos = 0;
    inline constexpr uint32_t AXI_INI1_FN_MOD_READ_ISS_OVERRIDE_Msk = 0x00000001;
    inline constexpr uint32_t AXI_INI1_FN_MOD_READ_ISS_OVERRIDE = (1U << 0);
    inline constexpr uint32_t AXI_INI1_FN_MOD_WRITE_ISS_OVERRIDE_Pos = 1;
    inline constexpr uint32_t AXI_INI1_FN_MOD_WRITE_ISS_OVERRIDE_Msk = 0x00000002;
    inline constexpr uint32_t AXI_INI1_FN_MOD_WRITE_ISS_OVERRIDE = (1U << 1);

    // AXI_INI2_READ_QOS fields
    inline constexpr uint32_t AXI_INI2_READ_QOS_AR_QOS_Pos = 0;
    inline constexpr uint32_t AXI_INI2_READ_QOS_AR_QOS_Msk = 0x0000000F;

    // AXI_INI2_WRITE_QOS fields
    inline constexpr uint32_t AXI_INI2_WRITE_QOS_AW_QOS_Pos = 0;
    inline constexpr uint32_t AXI_INI2_WRITE_QOS_AW_QOS_Msk = 0x0000000F;

    // AXI_INI2_FN_MOD fields
    inline constexpr uint32_t AXI_INI2_FN_MOD_READ_ISS_OVERRIDE_Pos = 0;
    inline constexpr uint32_t AXI_INI2_FN_MOD_READ_ISS_OVERRIDE_Msk = 0x00000001;
    inline constexpr uint32_t AXI_INI2_FN_MOD_READ_ISS_OVERRIDE = (1U << 0);
    inline constexpr uint32_t AXI_INI2_FN_MOD_WRITE_ISS_OVERRIDE_Pos = 1;
    inline constexpr uint32_t AXI_INI2_FN_MOD_WRITE_ISS_OVERRIDE_Msk = 0x00000002;
    inline constexpr uint32_t AXI_INI2_FN_MOD_WRITE_ISS_OVERRIDE = (1U << 1);

    // AXI_INI3_FN_MOD2 fields
    inline constexpr uint32_t AXI_INI3_FN_MOD2_BYPASS_MERGE_Pos = 0;
    inline constexpr uint32_t AXI_INI3_FN_MOD2_BYPASS_MERGE_Msk = 0x00000001;
    inline constexpr uint32_t AXI_INI3_FN_MOD2_BYPASS_MERGE = (1U << 0);

    // AXI_INI3_FN_MOD_AHB fields
    inline constexpr uint32_t AXI_INI3_FN_MOD_AHB_RD_INC_OVERRIDE_Pos = 0;
    inline constexpr uint32_t AXI_INI3_FN_MOD_AHB_RD_INC_OVERRIDE_Msk = 0x00000001;
    inline constexpr uint32_t AXI_INI3_FN_MOD_AHB_RD_INC_OVERRIDE = (1U << 0);
    inline constexpr uint32_t AXI_INI3_FN_MOD_AHB_WR_INC_OVERRIDE_Pos = 1;
    inline constexpr uint32_t AXI_INI3_FN_MOD_AHB_WR_INC_OVERRIDE_Msk = 0x00000002;
    inline constexpr uint32_t AXI_INI3_FN_MOD_AHB_WR_INC_OVERRIDE = (1U << 1);

    // AXI_INI3_READ_QOS fields
    inline constexpr uint32_t AXI_INI3_READ_QOS_AR_QOS_Pos = 0;
    inline constexpr uint32_t AXI_INI3_READ_QOS_AR_QOS_Msk = 0x0000000F;

    // AXI_INI3_WRITE_QOS fields
    inline constexpr uint32_t AXI_INI3_WRITE_QOS_AW_QOS_Pos = 0;
    inline constexpr uint32_t AXI_INI3_WRITE_QOS_AW_QOS_Msk = 0x0000000F;

    // AXI_INI3_FN_MOD fields
    inline constexpr uint32_t AXI_INI3_FN_MOD_READ_ISS_OVERRIDE_Pos = 0;
    inline constexpr uint32_t AXI_INI3_FN_MOD_READ_ISS_OVERRIDE_Msk = 0x00000001;
    inline constexpr uint32_t AXI_INI3_FN_MOD_READ_ISS_OVERRIDE = (1U << 0);
    inline constexpr uint32_t AXI_INI3_FN_MOD_WRITE_ISS_OVERRIDE_Pos = 1;
    inline constexpr uint32_t AXI_INI3_FN_MOD_WRITE_ISS_OVERRIDE_Msk = 0x00000002;
    inline constexpr uint32_t AXI_INI3_FN_MOD_WRITE_ISS_OVERRIDE = (1U << 1);

    // AXI_INI4_READ_QOS fields
    inline constexpr uint32_t AXI_INI4_READ_QOS_AR_QOS_Pos = 0;
    inline constexpr uint32_t AXI_INI4_READ_QOS_AR_QOS_Msk = 0x0000000F;

    // AXI_INI4_WRITE_QOS fields
    inline constexpr uint32_t AXI_INI4_WRITE_QOS_AW_QOS_Pos = 0;
    inline constexpr uint32_t AXI_INI4_WRITE_QOS_AW_QOS_Msk = 0x0000000F;

    // AXI_INI4_FN_MOD fields
    inline constexpr uint32_t AXI_INI4_FN_MOD_READ_ISS_OVERRIDE_Pos = 0;
    inline constexpr uint32_t AXI_INI4_FN_MOD_READ_ISS_OVERRIDE_Msk = 0x00000001;
    inline constexpr uint32_t AXI_INI4_FN_MOD_READ_ISS_OVERRIDE = (1U << 0);
    inline constexpr uint32_t AXI_INI4_FN_MOD_WRITE_ISS_OVERRIDE_Pos = 1;
    inline constexpr uint32_t AXI_INI4_FN_MOD_WRITE_ISS_OVERRIDE_Msk = 0x00000002;
    inline constexpr uint32_t AXI_INI4_FN_MOD_WRITE_ISS_OVERRIDE = (1U << 1);

    // AXI_INI5_READ_QOS fields
    inline constexpr uint32_t AXI_INI5_READ_QOS_AR_QOS_Pos = 0;
    inline constexpr uint32_t AXI_INI5_READ_QOS_AR_QOS_Msk = 0x0000000F;

    // AXI_INI5_WRITE_QOS fields
    inline constexpr uint32_t AXI_INI5_WRITE_QOS_AW_QOS_Pos = 0;
    inline constexpr uint32_t AXI_INI5_WRITE_QOS_AW_QOS_Msk = 0x0000000F;

    // AXI_INI5_FN_MOD fields
    inline constexpr uint32_t AXI_INI5_FN_MOD_READ_ISS_OVERRIDE_Pos = 0;
    inline constexpr uint32_t AXI_INI5_FN_MOD_READ_ISS_OVERRIDE_Msk = 0x00000001;
    inline constexpr uint32_t AXI_INI5_FN_MOD_READ_ISS_OVERRIDE = (1U << 0);
    inline constexpr uint32_t AXI_INI5_FN_MOD_WRITE_ISS_OVERRIDE_Pos = 1;
    inline constexpr uint32_t AXI_INI5_FN_MOD_WRITE_ISS_OVERRIDE_Msk = 0x00000002;
    inline constexpr uint32_t AXI_INI5_FN_MOD_WRITE_ISS_OVERRIDE = (1U << 1);

    // AXI_INI6_READ_QOS fields
    inline constexpr uint32_t AXI_INI6_READ_QOS_AR_QOS_Pos = 0;
    inline constexpr uint32_t AXI_INI6_READ_QOS_AR_QOS_Msk = 0x0000000F;

    // AXI_INI6_WRITE_QOS fields
    inline constexpr uint32_t AXI_INI6_WRITE_QOS_AW_QOS_Pos = 0;
    inline constexpr uint32_t AXI_INI6_WRITE_QOS_AW_QOS_Msk = 0x0000000F;

    // AXI_INI6_FN_MOD fields
    inline constexpr uint32_t AXI_INI6_FN_MOD_READ_ISS_OVERRIDE_Pos = 0;
    inline constexpr uint32_t AXI_INI6_FN_MOD_READ_ISS_OVERRIDE_Msk = 0x00000001;
    inline constexpr uint32_t AXI_INI6_FN_MOD_READ_ISS_OVERRIDE = (1U << 0);
    inline constexpr uint32_t AXI_INI6_FN_MOD_WRITE_ISS_OVERRIDE_Pos = 1;
    inline constexpr uint32_t AXI_INI6_FN_MOD_WRITE_ISS_OVERRIDE_Msk = 0x00000002;
    inline constexpr uint32_t AXI_INI6_FN_MOD_WRITE_ISS_OVERRIDE = (1U << 1);

} // namespace AXI

// Peripheral instances (lowercase to avoid namespace collision)
namespace periph {
    inline auto* const axi = reinterpret_cast<AXI_t*>(0x51000000);
} // namespace periph

} // namespace sbl::hw::reg

#endif // SBL_HW_REG_STM32H750_AXI_HPP
