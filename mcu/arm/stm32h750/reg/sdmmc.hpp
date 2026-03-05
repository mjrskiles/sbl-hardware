/**
 * @file sdmmc.hpp
 * @brief Register definitions for STM32H750 - sdmmc
 *
 * Generated from: stm32h750.svd.patched
 * Generator: cecrops
 * Generated: 2026-03-04T21:18:46.953887
 *
 * DO NOT EDIT - Regenerate with: cecrops generate <mcu-dir>
 */

#ifndef SBL_HW_REG_STM32H750_SDMMC_HPP
#define SBL_HW_REG_STM32H750_SDMMC_HPP

#include <cstdint>

namespace sbl::hw::reg {

/** SDMMC1 */
struct SDMMC1_t {
    volatile uint32_t SDMMC_POWER;  ///< SDMMC power control register
    volatile uint32_t SDMMC_CLKCR;  ///< The SDMMC_CLKCR register controls the           SDMMC_CK ...
    volatile uint32_t SDMMC_ARGR;  ///< The SDMMC_ARGR register contains a 32-bit           comma...
    volatile uint32_t SDMMC_CMDR;  ///< The SDMMC_CMDR register contains the command           in...
    volatile uint32_t SDMMC_RESPCMDR;  ///< SDMMC command response           register
    volatile uint32_t SDMMC_RESP1R;  ///< The SDMMC_RESP1/2/3/4R registers contain the           st...
    volatile uint32_t SDMMC_RESP2R;  ///< The SDMMC_RESP1/2/3/4R registers contain the           st...
    volatile uint32_t SDMMC_RESP3R;  ///< The SDMMC_RESP1/2/3/4R registers contain the           st...
    volatile uint32_t SDMMC_RESP4R;  ///< The SDMMC_RESP1/2/3/4R registers contain the           st...
    volatile uint32_t SDMMC_DTIMER;  ///< The SDMMC_DTIMER register contains the data           tim...
    volatile uint32_t SDMMC_DLENR;  ///< The SDMMC_DLENR register contains the number           of...
    volatile uint32_t SDMMC_DCTRL;  ///< The SDMMC_DCTRL register control the data           path ...
    volatile uint32_t SDMMC_DCNTR;  ///< The SDMMC_DCNTR register loads the value           from t...
    volatile uint32_t SDMMC_STAR;  ///< The SDMMC_STAR register is a read-only           register...
    volatile uint32_t SDMMC_ICR;  ///< The SDMMC_ICR register is a write-only           register...
    volatile uint32_t SDMMC_MASKR;  ///< The interrupt mask register determines which           st...
    volatile uint32_t SDMMC_ACKTIMER;  ///< The SDMMC_ACKTIMER register contains the           acknow...
    uint8_t _reserved0[12];
    volatile uint32_t SDMMC_IDMACTRLR;  ///< The receive and transmit FIFOs can be read           or w...
    volatile uint32_t SDMMC_IDMABSIZER;  ///< The SDMMC_IDMABSIZER register contains the           buff...
    volatile uint32_t SDMMC_IDMABASE0R;  ///< The SDMMC_IDMABASE0R register contains the           memo...
    volatile uint32_t SDMMC_IDMABASE1R;  ///< The SDMMC_IDMABASE1R register contains the           doub...
    uint8_t _reserved1[32];
    volatile uint32_t SDMMC_FIFOR;  ///< The receive and transmit FIFOs can be only           read...
    uint8_t _reserved2[880];
    volatile uint32_t SDMMC_VER;  ///< SDMMC IP version register
    volatile uint32_t SDMMC_ID;  ///< SDMMC IP identification           register
};

/** SDMMC1 */
struct SDMMC2_t {
    volatile uint32_t SDMMC_POWER;  ///< SDMMC power control register
    volatile uint32_t SDMMC_CLKCR;  ///< The SDMMC_CLKCR register controls the           SDMMC_CK ...
    volatile uint32_t SDMMC_ARGR;  ///< The SDMMC_ARGR register contains a 32-bit           comma...
    volatile uint32_t SDMMC_CMDR;  ///< The SDMMC_CMDR register contains the command           in...
    volatile uint32_t SDMMC_RESPCMDR;  ///< SDMMC command response           register
    volatile uint32_t SDMMC_RESP1R;  ///< The SDMMC_RESP1/2/3/4R registers contain the           st...
    volatile uint32_t SDMMC_RESP2R;  ///< The SDMMC_RESP1/2/3/4R registers contain the           st...
    volatile uint32_t SDMMC_RESP3R;  ///< The SDMMC_RESP1/2/3/4R registers contain the           st...
    volatile uint32_t SDMMC_RESP4R;  ///< The SDMMC_RESP1/2/3/4R registers contain the           st...
    volatile uint32_t SDMMC_DTIMER;  ///< The SDMMC_DTIMER register contains the data           tim...
    volatile uint32_t SDMMC_DLENR;  ///< The SDMMC_DLENR register contains the number           of...
    volatile uint32_t SDMMC_DCTRL;  ///< The SDMMC_DCTRL register control the data           path ...
    volatile uint32_t SDMMC_DCNTR;  ///< The SDMMC_DCNTR register loads the value           from t...
    volatile uint32_t SDMMC_STAR;  ///< The SDMMC_STAR register is a read-only           register...
    volatile uint32_t SDMMC_ICR;  ///< The SDMMC_ICR register is a write-only           register...
    volatile uint32_t SDMMC_MASKR;  ///< The interrupt mask register determines which           st...
    volatile uint32_t SDMMC_ACKTIMER;  ///< The SDMMC_ACKTIMER register contains the           acknow...
    uint8_t _reserved0[12];
    volatile uint32_t SDMMC_IDMACTRLR;  ///< The receive and transmit FIFOs can be read           or w...
    volatile uint32_t SDMMC_IDMABSIZER;  ///< The SDMMC_IDMABSIZER register contains the           buff...
    volatile uint32_t SDMMC_IDMABASE0R;  ///< The SDMMC_IDMABASE0R register contains the           memo...
    volatile uint32_t SDMMC_IDMABASE1R;  ///< The SDMMC_IDMABASE1R register contains the           doub...
    uint8_t _reserved1[32];
    volatile uint32_t SDMMC_FIFOR;  ///< The receive and transmit FIFOs can be only           read...
    uint8_t _reserved2[880];
    volatile uint32_t SDMMC_VER;  ///< SDMMC IP version register
    volatile uint32_t SDMMC_ID;  ///< SDMMC IP identification           register
};

namespace SDMMC1 {
    // SDMMC_POWER fields
    inline constexpr uint32_t SDMMC_POWER_PWRCTRL_Pos = 0;
    inline constexpr uint32_t SDMMC_POWER_PWRCTRL_Msk = 0x00000003;
    inline constexpr uint32_t SDMMC_POWER_VSWITCH_Pos = 2;
    inline constexpr uint32_t SDMMC_POWER_VSWITCH_Msk = 0x00000004;
    inline constexpr uint32_t SDMMC_POWER_VSWITCH = (1U << 2);
    inline constexpr uint32_t SDMMC_POWER_VSWITCHEN_Pos = 3;
    inline constexpr uint32_t SDMMC_POWER_VSWITCHEN_Msk = 0x00000008;
    inline constexpr uint32_t SDMMC_POWER_VSWITCHEN = (1U << 3);
    inline constexpr uint32_t SDMMC_POWER_DIRPOL_Pos = 4;
    inline constexpr uint32_t SDMMC_POWER_DIRPOL_Msk = 0x00000010;
    inline constexpr uint32_t SDMMC_POWER_DIRPOL = (1U << 4);

    // SDMMC_CLKCR fields
    inline constexpr uint32_t SDMMC_CLKCR_CLKDIV_Pos = 0;
    inline constexpr uint32_t SDMMC_CLKCR_CLKDIV_Msk = 0x000003FF;
    inline constexpr uint32_t SDMMC_CLKCR_PWRSAV_Pos = 12;
    inline constexpr uint32_t SDMMC_CLKCR_PWRSAV_Msk = 0x00001000;
    inline constexpr uint32_t SDMMC_CLKCR_PWRSAV = (1U << 12);
    inline constexpr uint32_t SDMMC_CLKCR_WIDBUS_Pos = 14;
    inline constexpr uint32_t SDMMC_CLKCR_WIDBUS_Msk = 0x0000C000;
    inline constexpr uint32_t SDMMC_CLKCR_NEGEDGE_Pos = 16;
    inline constexpr uint32_t SDMMC_CLKCR_NEGEDGE_Msk = 0x00010000;
    inline constexpr uint32_t SDMMC_CLKCR_NEGEDGE = (1U << 16);
    inline constexpr uint32_t SDMMC_CLKCR_HWFC_EN_Pos = 17;
    inline constexpr uint32_t SDMMC_CLKCR_HWFC_EN_Msk = 0x00020000;
    inline constexpr uint32_t SDMMC_CLKCR_HWFC_EN = (1U << 17);
    inline constexpr uint32_t SDMMC_CLKCR_DDR_Pos = 18;
    inline constexpr uint32_t SDMMC_CLKCR_DDR_Msk = 0x00040000;
    inline constexpr uint32_t SDMMC_CLKCR_DDR = (1U << 18);
    inline constexpr uint32_t SDMMC_CLKCR_BUSSPEED_Pos = 19;
    inline constexpr uint32_t SDMMC_CLKCR_BUSSPEED_Msk = 0x00080000;
    inline constexpr uint32_t SDMMC_CLKCR_BUSSPEED = (1U << 19);
    inline constexpr uint32_t SDMMC_CLKCR_SELCLKRX_Pos = 20;
    inline constexpr uint32_t SDMMC_CLKCR_SELCLKRX_Msk = 0x00300000;

    // SDMMC_ARGR fields
    inline constexpr uint32_t SDMMC_ARGR_CMDARG_Pos = 0;
    inline constexpr uint32_t SDMMC_ARGR_CMDARG_Msk = 0xFFFFFFFF;

    // SDMMC_CMDR fields
    inline constexpr uint32_t SDMMC_CMDR_CMDINDEX_Pos = 0;
    inline constexpr uint32_t SDMMC_CMDR_CMDINDEX_Msk = 0x0000003F;
    inline constexpr uint32_t SDMMC_CMDR_CMDTRANS_Pos = 6;
    inline constexpr uint32_t SDMMC_CMDR_CMDTRANS_Msk = 0x00000040;
    inline constexpr uint32_t SDMMC_CMDR_CMDTRANS = (1U << 6);
    inline constexpr uint32_t SDMMC_CMDR_CMDSTOP_Pos = 7;
    inline constexpr uint32_t SDMMC_CMDR_CMDSTOP_Msk = 0x00000080;
    inline constexpr uint32_t SDMMC_CMDR_CMDSTOP = (1U << 7);
    inline constexpr uint32_t SDMMC_CMDR_WAITRESP_Pos = 8;
    inline constexpr uint32_t SDMMC_CMDR_WAITRESP_Msk = 0x00000300;
    inline constexpr uint32_t SDMMC_CMDR_WAITINT_Pos = 10;
    inline constexpr uint32_t SDMMC_CMDR_WAITINT_Msk = 0x00000400;
    inline constexpr uint32_t SDMMC_CMDR_WAITINT = (1U << 10);
    inline constexpr uint32_t SDMMC_CMDR_WAITPEND_Pos = 11;
    inline constexpr uint32_t SDMMC_CMDR_WAITPEND_Msk = 0x00000800;
    inline constexpr uint32_t SDMMC_CMDR_WAITPEND = (1U << 11);
    inline constexpr uint32_t SDMMC_CMDR_CPSMEN_Pos = 12;
    inline constexpr uint32_t SDMMC_CMDR_CPSMEN_Msk = 0x00001000;
    inline constexpr uint32_t SDMMC_CMDR_CPSMEN = (1U << 12);
    inline constexpr uint32_t SDMMC_CMDR_DTHOLD_Pos = 13;
    inline constexpr uint32_t SDMMC_CMDR_DTHOLD_Msk = 0x00002000;
    inline constexpr uint32_t SDMMC_CMDR_DTHOLD = (1U << 13);
    inline constexpr uint32_t SDMMC_CMDR_BOOTMODE_Pos = 14;
    inline constexpr uint32_t SDMMC_CMDR_BOOTMODE_Msk = 0x00004000;
    inline constexpr uint32_t SDMMC_CMDR_BOOTMODE = (1U << 14);
    inline constexpr uint32_t SDMMC_CMDR_BOOTEN_Pos = 15;
    inline constexpr uint32_t SDMMC_CMDR_BOOTEN_Msk = 0x00008000;
    inline constexpr uint32_t SDMMC_CMDR_BOOTEN = (1U << 15);
    inline constexpr uint32_t SDMMC_CMDR_CMDSUSPEND_Pos = 16;
    inline constexpr uint32_t SDMMC_CMDR_CMDSUSPEND_Msk = 0x00010000;
    inline constexpr uint32_t SDMMC_CMDR_CMDSUSPEND = (1U << 16);

    // SDMMC_RESPCMDR fields
    inline constexpr uint32_t SDMMC_RESPCMDR_RESPCMD_Pos = 0;
    inline constexpr uint32_t SDMMC_RESPCMDR_RESPCMD_Msk = 0x0000003F;

    // SDMMC_RESP1R fields
    inline constexpr uint32_t SDMMC_RESP1R_CARDSTATUS1_Pos = 0;
    inline constexpr uint32_t SDMMC_RESP1R_CARDSTATUS1_Msk = 0xFFFFFFFF;

    // SDMMC_RESP2R fields
    inline constexpr uint32_t SDMMC_RESP2R_CARDSTATUS2_Pos = 0;
    inline constexpr uint32_t SDMMC_RESP2R_CARDSTATUS2_Msk = 0xFFFFFFFF;

    // SDMMC_RESP3R fields
    inline constexpr uint32_t SDMMC_RESP3R_CARDSTATUS3_Pos = 0;
    inline constexpr uint32_t SDMMC_RESP3R_CARDSTATUS3_Msk = 0xFFFFFFFF;

    // SDMMC_RESP4R fields
    inline constexpr uint32_t SDMMC_RESP4R_CARDSTATUS4_Pos = 0;
    inline constexpr uint32_t SDMMC_RESP4R_CARDSTATUS4_Msk = 0xFFFFFFFF;

    // SDMMC_DTIMER fields
    inline constexpr uint32_t SDMMC_DTIMER_DATATIME_Pos = 0;
    inline constexpr uint32_t SDMMC_DTIMER_DATATIME_Msk = 0xFFFFFFFF;

    // SDMMC_DLENR fields
    inline constexpr uint32_t SDMMC_DLENR_DATALENGTH_Pos = 0;
    inline constexpr uint32_t SDMMC_DLENR_DATALENGTH_Msk = 0x01FFFFFF;

    // SDMMC_DCTRL fields
    inline constexpr uint32_t SDMMC_DCTRL_DTEN_Pos = 0;
    inline constexpr uint32_t SDMMC_DCTRL_DTEN_Msk = 0x00000001;
    inline constexpr uint32_t SDMMC_DCTRL_DTEN = (1U << 0);
    inline constexpr uint32_t SDMMC_DCTRL_DTDIR_Pos = 1;
    inline constexpr uint32_t SDMMC_DCTRL_DTDIR_Msk = 0x00000002;
    inline constexpr uint32_t SDMMC_DCTRL_DTDIR = (1U << 1);
    inline constexpr uint32_t SDMMC_DCTRL_DTMODE_Pos = 2;
    inline constexpr uint32_t SDMMC_DCTRL_DTMODE_Msk = 0x0000000C;
    inline constexpr uint32_t SDMMC_DCTRL_DBLOCKSIZE_Pos = 4;
    inline constexpr uint32_t SDMMC_DCTRL_DBLOCKSIZE_Msk = 0x000000F0;
    inline constexpr uint32_t SDMMC_DCTRL_RWSTART_Pos = 8;
    inline constexpr uint32_t SDMMC_DCTRL_RWSTART_Msk = 0x00000100;
    inline constexpr uint32_t SDMMC_DCTRL_RWSTART = (1U << 8);
    inline constexpr uint32_t SDMMC_DCTRL_RWSTOP_Pos = 9;
    inline constexpr uint32_t SDMMC_DCTRL_RWSTOP_Msk = 0x00000200;
    inline constexpr uint32_t SDMMC_DCTRL_RWSTOP = (1U << 9);
    inline constexpr uint32_t SDMMC_DCTRL_RWMOD_Pos = 10;
    inline constexpr uint32_t SDMMC_DCTRL_RWMOD_Msk = 0x00000400;
    inline constexpr uint32_t SDMMC_DCTRL_RWMOD = (1U << 10);
    inline constexpr uint32_t SDMMC_DCTRL_SDIOEN_Pos = 11;
    inline constexpr uint32_t SDMMC_DCTRL_SDIOEN_Msk = 0x00000800;
    inline constexpr uint32_t SDMMC_DCTRL_SDIOEN = (1U << 11);
    inline constexpr uint32_t SDMMC_DCTRL_BOOTACKEN_Pos = 12;
    inline constexpr uint32_t SDMMC_DCTRL_BOOTACKEN_Msk = 0x00001000;
    inline constexpr uint32_t SDMMC_DCTRL_BOOTACKEN = (1U << 12);
    inline constexpr uint32_t SDMMC_DCTRL_FIFORST_Pos = 13;
    inline constexpr uint32_t SDMMC_DCTRL_FIFORST_Msk = 0x00002000;
    inline constexpr uint32_t SDMMC_DCTRL_FIFORST = (1U << 13);

    // SDMMC_DCNTR fields
    inline constexpr uint32_t SDMMC_DCNTR_DATACOUNT_Pos = 0;
    inline constexpr uint32_t SDMMC_DCNTR_DATACOUNT_Msk = 0x01FFFFFF;

    // SDMMC_STAR fields
    inline constexpr uint32_t SDMMC_STAR_CCRCFAIL_Pos = 0;
    inline constexpr uint32_t SDMMC_STAR_CCRCFAIL_Msk = 0x00000001;
    inline constexpr uint32_t SDMMC_STAR_CCRCFAIL = (1U << 0);
    inline constexpr uint32_t SDMMC_STAR_DCRCFAIL_Pos = 1;
    inline constexpr uint32_t SDMMC_STAR_DCRCFAIL_Msk = 0x00000002;
    inline constexpr uint32_t SDMMC_STAR_DCRCFAIL = (1U << 1);
    inline constexpr uint32_t SDMMC_STAR_CTIMEOUT_Pos = 2;
    inline constexpr uint32_t SDMMC_STAR_CTIMEOUT_Msk = 0x00000004;
    inline constexpr uint32_t SDMMC_STAR_CTIMEOUT = (1U << 2);
    inline constexpr uint32_t SDMMC_STAR_DTIMEOUT_Pos = 3;
    inline constexpr uint32_t SDMMC_STAR_DTIMEOUT_Msk = 0x00000008;
    inline constexpr uint32_t SDMMC_STAR_DTIMEOUT = (1U << 3);
    inline constexpr uint32_t SDMMC_STAR_TXUNDERR_Pos = 4;
    inline constexpr uint32_t SDMMC_STAR_TXUNDERR_Msk = 0x00000010;
    inline constexpr uint32_t SDMMC_STAR_TXUNDERR = (1U << 4);
    inline constexpr uint32_t SDMMC_STAR_RXOVERR_Pos = 5;
    inline constexpr uint32_t SDMMC_STAR_RXOVERR_Msk = 0x00000020;
    inline constexpr uint32_t SDMMC_STAR_RXOVERR = (1U << 5);
    inline constexpr uint32_t SDMMC_STAR_CMDREND_Pos = 6;
    inline constexpr uint32_t SDMMC_STAR_CMDREND_Msk = 0x00000040;
    inline constexpr uint32_t SDMMC_STAR_CMDREND = (1U << 6);
    inline constexpr uint32_t SDMMC_STAR_CMDSENT_Pos = 7;
    inline constexpr uint32_t SDMMC_STAR_CMDSENT_Msk = 0x00000080;
    inline constexpr uint32_t SDMMC_STAR_CMDSENT = (1U << 7);
    inline constexpr uint32_t SDMMC_STAR_DATAEND_Pos = 8;
    inline constexpr uint32_t SDMMC_STAR_DATAEND_Msk = 0x00000100;
    inline constexpr uint32_t SDMMC_STAR_DATAEND = (1U << 8);
    inline constexpr uint32_t SDMMC_STAR_DHOLD_Pos = 9;
    inline constexpr uint32_t SDMMC_STAR_DHOLD_Msk = 0x00000200;
    inline constexpr uint32_t SDMMC_STAR_DHOLD = (1U << 9);
    inline constexpr uint32_t SDMMC_STAR_DBCKEND_Pos = 10;
    inline constexpr uint32_t SDMMC_STAR_DBCKEND_Msk = 0x00000400;
    inline constexpr uint32_t SDMMC_STAR_DBCKEND = (1U << 10);
    inline constexpr uint32_t SDMMC_STAR_DABORT_Pos = 11;
    inline constexpr uint32_t SDMMC_STAR_DABORT_Msk = 0x00000800;
    inline constexpr uint32_t SDMMC_STAR_DABORT = (1U << 11);
    inline constexpr uint32_t SDMMC_STAR_DPSMACT_Pos = 12;
    inline constexpr uint32_t SDMMC_STAR_DPSMACT_Msk = 0x00001000;
    inline constexpr uint32_t SDMMC_STAR_DPSMACT = (1U << 12);
    inline constexpr uint32_t SDMMC_STAR_CPSMACT_Pos = 13;
    inline constexpr uint32_t SDMMC_STAR_CPSMACT_Msk = 0x00002000;
    inline constexpr uint32_t SDMMC_STAR_CPSMACT = (1U << 13);
    inline constexpr uint32_t SDMMC_STAR_TXFIFOHE_Pos = 14;
    inline constexpr uint32_t SDMMC_STAR_TXFIFOHE_Msk = 0x00004000;
    inline constexpr uint32_t SDMMC_STAR_TXFIFOHE = (1U << 14);
    inline constexpr uint32_t SDMMC_STAR_RXFIFOHF_Pos = 15;
    inline constexpr uint32_t SDMMC_STAR_RXFIFOHF_Msk = 0x00008000;
    inline constexpr uint32_t SDMMC_STAR_RXFIFOHF = (1U << 15);
    inline constexpr uint32_t SDMMC_STAR_TXFIFOF_Pos = 16;
    inline constexpr uint32_t SDMMC_STAR_TXFIFOF_Msk = 0x00010000;
    inline constexpr uint32_t SDMMC_STAR_TXFIFOF = (1U << 16);
    inline constexpr uint32_t SDMMC_STAR_RXFIFOF_Pos = 17;
    inline constexpr uint32_t SDMMC_STAR_RXFIFOF_Msk = 0x00020000;
    inline constexpr uint32_t SDMMC_STAR_RXFIFOF = (1U << 17);
    inline constexpr uint32_t SDMMC_STAR_TXFIFOE_Pos = 18;
    inline constexpr uint32_t SDMMC_STAR_TXFIFOE_Msk = 0x00040000;
    inline constexpr uint32_t SDMMC_STAR_TXFIFOE = (1U << 18);
    inline constexpr uint32_t SDMMC_STAR_RXFIFOE_Pos = 19;
    inline constexpr uint32_t SDMMC_STAR_RXFIFOE_Msk = 0x00080000;
    inline constexpr uint32_t SDMMC_STAR_RXFIFOE = (1U << 19);
    inline constexpr uint32_t SDMMC_STAR_BUSYD0_Pos = 20;
    inline constexpr uint32_t SDMMC_STAR_BUSYD0_Msk = 0x00100000;
    inline constexpr uint32_t SDMMC_STAR_BUSYD0 = (1U << 20);
    inline constexpr uint32_t SDMMC_STAR_BUSYD0END_Pos = 21;
    inline constexpr uint32_t SDMMC_STAR_BUSYD0END_Msk = 0x00200000;
    inline constexpr uint32_t SDMMC_STAR_BUSYD0END = (1U << 21);
    inline constexpr uint32_t SDMMC_STAR_SDIOIT_Pos = 22;
    inline constexpr uint32_t SDMMC_STAR_SDIOIT_Msk = 0x00400000;
    inline constexpr uint32_t SDMMC_STAR_SDIOIT = (1U << 22);
    inline constexpr uint32_t SDMMC_STAR_ACKFAIL_Pos = 23;
    inline constexpr uint32_t SDMMC_STAR_ACKFAIL_Msk = 0x00800000;
    inline constexpr uint32_t SDMMC_STAR_ACKFAIL = (1U << 23);
    inline constexpr uint32_t SDMMC_STAR_ACKTIMEOUT_Pos = 24;
    inline constexpr uint32_t SDMMC_STAR_ACKTIMEOUT_Msk = 0x01000000;
    inline constexpr uint32_t SDMMC_STAR_ACKTIMEOUT = (1U << 24);
    inline constexpr uint32_t SDMMC_STAR_VSWEND_Pos = 25;
    inline constexpr uint32_t SDMMC_STAR_VSWEND_Msk = 0x02000000;
    inline constexpr uint32_t SDMMC_STAR_VSWEND = (1U << 25);
    inline constexpr uint32_t SDMMC_STAR_CKSTOP_Pos = 26;
    inline constexpr uint32_t SDMMC_STAR_CKSTOP_Msk = 0x04000000;
    inline constexpr uint32_t SDMMC_STAR_CKSTOP = (1U << 26);
    inline constexpr uint32_t SDMMC_STAR_IDMATE_Pos = 27;
    inline constexpr uint32_t SDMMC_STAR_IDMATE_Msk = 0x08000000;
    inline constexpr uint32_t SDMMC_STAR_IDMATE = (1U << 27);
    inline constexpr uint32_t SDMMC_STAR_IDMABTC_Pos = 28;
    inline constexpr uint32_t SDMMC_STAR_IDMABTC_Msk = 0x10000000;
    inline constexpr uint32_t SDMMC_STAR_IDMABTC = (1U << 28);

    // SDMMC_ICR fields
    inline constexpr uint32_t SDMMC_ICR_CCRCFAILC_Pos = 0;
    inline constexpr uint32_t SDMMC_ICR_CCRCFAILC_Msk = 0x00000001;
    inline constexpr uint32_t SDMMC_ICR_CCRCFAILC = (1U << 0);
    inline constexpr uint32_t SDMMC_ICR_DCRCFAILC_Pos = 1;
    inline constexpr uint32_t SDMMC_ICR_DCRCFAILC_Msk = 0x00000002;
    inline constexpr uint32_t SDMMC_ICR_DCRCFAILC = (1U << 1);
    inline constexpr uint32_t SDMMC_ICR_CTIMEOUTC_Pos = 2;
    inline constexpr uint32_t SDMMC_ICR_CTIMEOUTC_Msk = 0x00000004;
    inline constexpr uint32_t SDMMC_ICR_CTIMEOUTC = (1U << 2);
    inline constexpr uint32_t SDMMC_ICR_DTIMEOUTC_Pos = 3;
    inline constexpr uint32_t SDMMC_ICR_DTIMEOUTC_Msk = 0x00000008;
    inline constexpr uint32_t SDMMC_ICR_DTIMEOUTC = (1U << 3);
    inline constexpr uint32_t SDMMC_ICR_TXUNDERRC_Pos = 4;
    inline constexpr uint32_t SDMMC_ICR_TXUNDERRC_Msk = 0x00000010;
    inline constexpr uint32_t SDMMC_ICR_TXUNDERRC = (1U << 4);
    inline constexpr uint32_t SDMMC_ICR_RXOVERRC_Pos = 5;
    inline constexpr uint32_t SDMMC_ICR_RXOVERRC_Msk = 0x00000020;
    inline constexpr uint32_t SDMMC_ICR_RXOVERRC = (1U << 5);
    inline constexpr uint32_t SDMMC_ICR_CMDRENDC_Pos = 6;
    inline constexpr uint32_t SDMMC_ICR_CMDRENDC_Msk = 0x00000040;
    inline constexpr uint32_t SDMMC_ICR_CMDRENDC = (1U << 6);
    inline constexpr uint32_t SDMMC_ICR_CMDSENTC_Pos = 7;
    inline constexpr uint32_t SDMMC_ICR_CMDSENTC_Msk = 0x00000080;
    inline constexpr uint32_t SDMMC_ICR_CMDSENTC = (1U << 7);
    inline constexpr uint32_t SDMMC_ICR_DATAENDC_Pos = 8;
    inline constexpr uint32_t SDMMC_ICR_DATAENDC_Msk = 0x00000100;
    inline constexpr uint32_t SDMMC_ICR_DATAENDC = (1U << 8);
    inline constexpr uint32_t SDMMC_ICR_DHOLDC_Pos = 9;
    inline constexpr uint32_t SDMMC_ICR_DHOLDC_Msk = 0x00000200;
    inline constexpr uint32_t SDMMC_ICR_DHOLDC = (1U << 9);
    inline constexpr uint32_t SDMMC_ICR_DBCKENDC_Pos = 10;
    inline constexpr uint32_t SDMMC_ICR_DBCKENDC_Msk = 0x00000400;
    inline constexpr uint32_t SDMMC_ICR_DBCKENDC = (1U << 10);
    inline constexpr uint32_t SDMMC_ICR_DABORTC_Pos = 11;
    inline constexpr uint32_t SDMMC_ICR_DABORTC_Msk = 0x00000800;
    inline constexpr uint32_t SDMMC_ICR_DABORTC = (1U << 11);
    inline constexpr uint32_t SDMMC_ICR_BUSYD0ENDC_Pos = 21;
    inline constexpr uint32_t SDMMC_ICR_BUSYD0ENDC_Msk = 0x00200000;
    inline constexpr uint32_t SDMMC_ICR_BUSYD0ENDC = (1U << 21);
    inline constexpr uint32_t SDMMC_ICR_SDIOITC_Pos = 22;
    inline constexpr uint32_t SDMMC_ICR_SDIOITC_Msk = 0x00400000;
    inline constexpr uint32_t SDMMC_ICR_SDIOITC = (1U << 22);
    inline constexpr uint32_t SDMMC_ICR_ACKFAILC_Pos = 23;
    inline constexpr uint32_t SDMMC_ICR_ACKFAILC_Msk = 0x00800000;
    inline constexpr uint32_t SDMMC_ICR_ACKFAILC = (1U << 23);
    inline constexpr uint32_t SDMMC_ICR_ACKTIMEOUTC_Pos = 24;
    inline constexpr uint32_t SDMMC_ICR_ACKTIMEOUTC_Msk = 0x01000000;
    inline constexpr uint32_t SDMMC_ICR_ACKTIMEOUTC = (1U << 24);
    inline constexpr uint32_t SDMMC_ICR_VSWENDC_Pos = 25;
    inline constexpr uint32_t SDMMC_ICR_VSWENDC_Msk = 0x02000000;
    inline constexpr uint32_t SDMMC_ICR_VSWENDC = (1U << 25);
    inline constexpr uint32_t SDMMC_ICR_CKSTOPC_Pos = 26;
    inline constexpr uint32_t SDMMC_ICR_CKSTOPC_Msk = 0x04000000;
    inline constexpr uint32_t SDMMC_ICR_CKSTOPC = (1U << 26);
    inline constexpr uint32_t SDMMC_ICR_IDMATEC_Pos = 27;
    inline constexpr uint32_t SDMMC_ICR_IDMATEC_Msk = 0x08000000;
    inline constexpr uint32_t SDMMC_ICR_IDMATEC = (1U << 27);
    inline constexpr uint32_t SDMMC_ICR_IDMABTCC_Pos = 28;
    inline constexpr uint32_t SDMMC_ICR_IDMABTCC_Msk = 0x10000000;
    inline constexpr uint32_t SDMMC_ICR_IDMABTCC = (1U << 28);

    // SDMMC_MASKR fields
    inline constexpr uint32_t SDMMC_MASKR_CCRCFAILIE_Pos = 0;
    inline constexpr uint32_t SDMMC_MASKR_CCRCFAILIE_Msk = 0x00000001;
    inline constexpr uint32_t SDMMC_MASKR_CCRCFAILIE = (1U << 0);
    inline constexpr uint32_t SDMMC_MASKR_DCRCFAILIE_Pos = 1;
    inline constexpr uint32_t SDMMC_MASKR_DCRCFAILIE_Msk = 0x00000002;
    inline constexpr uint32_t SDMMC_MASKR_DCRCFAILIE = (1U << 1);
    inline constexpr uint32_t SDMMC_MASKR_CTIMEOUTIE_Pos = 2;
    inline constexpr uint32_t SDMMC_MASKR_CTIMEOUTIE_Msk = 0x00000004;
    inline constexpr uint32_t SDMMC_MASKR_CTIMEOUTIE = (1U << 2);
    inline constexpr uint32_t SDMMC_MASKR_DTIMEOUTIE_Pos = 3;
    inline constexpr uint32_t SDMMC_MASKR_DTIMEOUTIE_Msk = 0x00000008;
    inline constexpr uint32_t SDMMC_MASKR_DTIMEOUTIE = (1U << 3);
    inline constexpr uint32_t SDMMC_MASKR_TXUNDERRIE_Pos = 4;
    inline constexpr uint32_t SDMMC_MASKR_TXUNDERRIE_Msk = 0x00000010;
    inline constexpr uint32_t SDMMC_MASKR_TXUNDERRIE = (1U << 4);
    inline constexpr uint32_t SDMMC_MASKR_RXOVERRIE_Pos = 5;
    inline constexpr uint32_t SDMMC_MASKR_RXOVERRIE_Msk = 0x00000020;
    inline constexpr uint32_t SDMMC_MASKR_RXOVERRIE = (1U << 5);
    inline constexpr uint32_t SDMMC_MASKR_CMDRENDIE_Pos = 6;
    inline constexpr uint32_t SDMMC_MASKR_CMDRENDIE_Msk = 0x00000040;
    inline constexpr uint32_t SDMMC_MASKR_CMDRENDIE = (1U << 6);
    inline constexpr uint32_t SDMMC_MASKR_CMDSENTIE_Pos = 7;
    inline constexpr uint32_t SDMMC_MASKR_CMDSENTIE_Msk = 0x00000080;
    inline constexpr uint32_t SDMMC_MASKR_CMDSENTIE = (1U << 7);
    inline constexpr uint32_t SDMMC_MASKR_DATAENDIE_Pos = 8;
    inline constexpr uint32_t SDMMC_MASKR_DATAENDIE_Msk = 0x00000100;
    inline constexpr uint32_t SDMMC_MASKR_DATAENDIE = (1U << 8);
    inline constexpr uint32_t SDMMC_MASKR_DHOLDIE_Pos = 9;
    inline constexpr uint32_t SDMMC_MASKR_DHOLDIE_Msk = 0x00000200;
    inline constexpr uint32_t SDMMC_MASKR_DHOLDIE = (1U << 9);
    inline constexpr uint32_t SDMMC_MASKR_DBCKENDIE_Pos = 10;
    inline constexpr uint32_t SDMMC_MASKR_DBCKENDIE_Msk = 0x00000400;
    inline constexpr uint32_t SDMMC_MASKR_DBCKENDIE = (1U << 10);
    inline constexpr uint32_t SDMMC_MASKR_DABORTIE_Pos = 11;
    inline constexpr uint32_t SDMMC_MASKR_DABORTIE_Msk = 0x00000800;
    inline constexpr uint32_t SDMMC_MASKR_DABORTIE = (1U << 11);
    inline constexpr uint32_t SDMMC_MASKR_TXFIFOHEIE_Pos = 14;
    inline constexpr uint32_t SDMMC_MASKR_TXFIFOHEIE_Msk = 0x00004000;
    inline constexpr uint32_t SDMMC_MASKR_TXFIFOHEIE = (1U << 14);
    inline constexpr uint32_t SDMMC_MASKR_RXFIFOHFIE_Pos = 15;
    inline constexpr uint32_t SDMMC_MASKR_RXFIFOHFIE_Msk = 0x00008000;
    inline constexpr uint32_t SDMMC_MASKR_RXFIFOHFIE = (1U << 15);
    inline constexpr uint32_t SDMMC_MASKR_RXFIFOFIE_Pos = 17;
    inline constexpr uint32_t SDMMC_MASKR_RXFIFOFIE_Msk = 0x00020000;
    inline constexpr uint32_t SDMMC_MASKR_RXFIFOFIE = (1U << 17);
    inline constexpr uint32_t SDMMC_MASKR_TXFIFOEIE_Pos = 18;
    inline constexpr uint32_t SDMMC_MASKR_TXFIFOEIE_Msk = 0x00040000;
    inline constexpr uint32_t SDMMC_MASKR_TXFIFOEIE = (1U << 18);
    inline constexpr uint32_t SDMMC_MASKR_BUSYD0ENDIE_Pos = 21;
    inline constexpr uint32_t SDMMC_MASKR_BUSYD0ENDIE_Msk = 0x00200000;
    inline constexpr uint32_t SDMMC_MASKR_BUSYD0ENDIE = (1U << 21);
    inline constexpr uint32_t SDMMC_MASKR_SDIOITIE_Pos = 22;
    inline constexpr uint32_t SDMMC_MASKR_SDIOITIE_Msk = 0x00400000;
    inline constexpr uint32_t SDMMC_MASKR_SDIOITIE = (1U << 22);
    inline constexpr uint32_t SDMMC_MASKR_ACKFAILIE_Pos = 23;
    inline constexpr uint32_t SDMMC_MASKR_ACKFAILIE_Msk = 0x00800000;
    inline constexpr uint32_t SDMMC_MASKR_ACKFAILIE = (1U << 23);
    inline constexpr uint32_t SDMMC_MASKR_ACKTIMEOUTIE_Pos = 24;
    inline constexpr uint32_t SDMMC_MASKR_ACKTIMEOUTIE_Msk = 0x01000000;
    inline constexpr uint32_t SDMMC_MASKR_ACKTIMEOUTIE = (1U << 24);
    inline constexpr uint32_t SDMMC_MASKR_VSWENDIE_Pos = 25;
    inline constexpr uint32_t SDMMC_MASKR_VSWENDIE_Msk = 0x02000000;
    inline constexpr uint32_t SDMMC_MASKR_VSWENDIE = (1U << 25);
    inline constexpr uint32_t SDMMC_MASKR_CKSTOPIE_Pos = 26;
    inline constexpr uint32_t SDMMC_MASKR_CKSTOPIE_Msk = 0x04000000;
    inline constexpr uint32_t SDMMC_MASKR_CKSTOPIE = (1U << 26);
    inline constexpr uint32_t SDMMC_MASKR_IDMABTCIE_Pos = 28;
    inline constexpr uint32_t SDMMC_MASKR_IDMABTCIE_Msk = 0x10000000;
    inline constexpr uint32_t SDMMC_MASKR_IDMABTCIE = (1U << 28);

    // SDMMC_ACKTIMER fields
    inline constexpr uint32_t SDMMC_ACKTIMER_ACKTIME_Pos = 0;
    inline constexpr uint32_t SDMMC_ACKTIMER_ACKTIME_Msk = 0x01FFFFFF;

    // SDMMC_IDMACTRLR fields
    inline constexpr uint32_t SDMMC_IDMACTRLR_IDMAEN_Pos = 0;
    inline constexpr uint32_t SDMMC_IDMACTRLR_IDMAEN_Msk = 0x00000001;
    inline constexpr uint32_t SDMMC_IDMACTRLR_IDMAEN = (1U << 0);
    inline constexpr uint32_t SDMMC_IDMACTRLR_IDMABMODE_Pos = 1;
    inline constexpr uint32_t SDMMC_IDMACTRLR_IDMABMODE_Msk = 0x00000002;
    inline constexpr uint32_t SDMMC_IDMACTRLR_IDMABMODE = (1U << 1);
    inline constexpr uint32_t SDMMC_IDMACTRLR_IDMABACT_Pos = 2;
    inline constexpr uint32_t SDMMC_IDMACTRLR_IDMABACT_Msk = 0x00000004;
    inline constexpr uint32_t SDMMC_IDMACTRLR_IDMABACT = (1U << 2);

    // SDMMC_IDMABSIZER fields
    inline constexpr uint32_t SDMMC_IDMABSIZER_IDMABNDT_Pos = 5;
    inline constexpr uint32_t SDMMC_IDMABSIZER_IDMABNDT_Msk = 0x00001FE0;

    // SDMMC_IDMABASE0R fields
    inline constexpr uint32_t SDMMC_IDMABASE0R_IDMABASE0_Pos = 0;
    inline constexpr uint32_t SDMMC_IDMABASE0R_IDMABASE0_Msk = 0xFFFFFFFF;

    // SDMMC_IDMABASE1R fields
    inline constexpr uint32_t SDMMC_IDMABASE1R_IDMABASE1_Pos = 0;
    inline constexpr uint32_t SDMMC_IDMABASE1R_IDMABASE1_Msk = 0xFFFFFFFF;

    // SDMMC_FIFOR fields
    inline constexpr uint32_t SDMMC_FIFOR_FIFODATA_Pos = 0;
    inline constexpr uint32_t SDMMC_FIFOR_FIFODATA_Msk = 0xFFFFFFFF;

    // SDMMC_VER fields
    inline constexpr uint32_t SDMMC_VER_MINREV_Pos = 0;
    inline constexpr uint32_t SDMMC_VER_MINREV_Msk = 0x0000000F;
    inline constexpr uint32_t SDMMC_VER_MAJREV_Pos = 4;
    inline constexpr uint32_t SDMMC_VER_MAJREV_Msk = 0x000000F0;

    // SDMMC_ID fields
    inline constexpr uint32_t SDMMC_ID_IP_ID_Pos = 0;
    inline constexpr uint32_t SDMMC_ID_IP_ID_Msk = 0xFFFFFFFF;

} // namespace SDMMC1

namespace SDMMC2 {
    // SDMMC_POWER fields
    inline constexpr uint32_t SDMMC_POWER_PWRCTRL_Pos = 0;
    inline constexpr uint32_t SDMMC_POWER_PWRCTRL_Msk = 0x00000003;
    inline constexpr uint32_t SDMMC_POWER_VSWITCH_Pos = 2;
    inline constexpr uint32_t SDMMC_POWER_VSWITCH_Msk = 0x00000004;
    inline constexpr uint32_t SDMMC_POWER_VSWITCH = (1U << 2);
    inline constexpr uint32_t SDMMC_POWER_VSWITCHEN_Pos = 3;
    inline constexpr uint32_t SDMMC_POWER_VSWITCHEN_Msk = 0x00000008;
    inline constexpr uint32_t SDMMC_POWER_VSWITCHEN = (1U << 3);
    inline constexpr uint32_t SDMMC_POWER_DIRPOL_Pos = 4;
    inline constexpr uint32_t SDMMC_POWER_DIRPOL_Msk = 0x00000010;
    inline constexpr uint32_t SDMMC_POWER_DIRPOL = (1U << 4);

    // SDMMC_CLKCR fields
    inline constexpr uint32_t SDMMC_CLKCR_CLKDIV_Pos = 0;
    inline constexpr uint32_t SDMMC_CLKCR_CLKDIV_Msk = 0x000003FF;
    inline constexpr uint32_t SDMMC_CLKCR_PWRSAV_Pos = 12;
    inline constexpr uint32_t SDMMC_CLKCR_PWRSAV_Msk = 0x00001000;
    inline constexpr uint32_t SDMMC_CLKCR_PWRSAV = (1U << 12);
    inline constexpr uint32_t SDMMC_CLKCR_WIDBUS_Pos = 14;
    inline constexpr uint32_t SDMMC_CLKCR_WIDBUS_Msk = 0x0000C000;
    inline constexpr uint32_t SDMMC_CLKCR_NEGEDGE_Pos = 16;
    inline constexpr uint32_t SDMMC_CLKCR_NEGEDGE_Msk = 0x00010000;
    inline constexpr uint32_t SDMMC_CLKCR_NEGEDGE = (1U << 16);
    inline constexpr uint32_t SDMMC_CLKCR_HWFC_EN_Pos = 17;
    inline constexpr uint32_t SDMMC_CLKCR_HWFC_EN_Msk = 0x00020000;
    inline constexpr uint32_t SDMMC_CLKCR_HWFC_EN = (1U << 17);
    inline constexpr uint32_t SDMMC_CLKCR_DDR_Pos = 18;
    inline constexpr uint32_t SDMMC_CLKCR_DDR_Msk = 0x00040000;
    inline constexpr uint32_t SDMMC_CLKCR_DDR = (1U << 18);
    inline constexpr uint32_t SDMMC_CLKCR_BUSSPEED_Pos = 19;
    inline constexpr uint32_t SDMMC_CLKCR_BUSSPEED_Msk = 0x00080000;
    inline constexpr uint32_t SDMMC_CLKCR_BUSSPEED = (1U << 19);
    inline constexpr uint32_t SDMMC_CLKCR_SELCLKRX_Pos = 20;
    inline constexpr uint32_t SDMMC_CLKCR_SELCLKRX_Msk = 0x00300000;

    // SDMMC_ARGR fields
    inline constexpr uint32_t SDMMC_ARGR_CMDARG_Pos = 0;
    inline constexpr uint32_t SDMMC_ARGR_CMDARG_Msk = 0xFFFFFFFF;

    // SDMMC_CMDR fields
    inline constexpr uint32_t SDMMC_CMDR_CMDINDEX_Pos = 0;
    inline constexpr uint32_t SDMMC_CMDR_CMDINDEX_Msk = 0x0000003F;
    inline constexpr uint32_t SDMMC_CMDR_CMDTRANS_Pos = 6;
    inline constexpr uint32_t SDMMC_CMDR_CMDTRANS_Msk = 0x00000040;
    inline constexpr uint32_t SDMMC_CMDR_CMDTRANS = (1U << 6);
    inline constexpr uint32_t SDMMC_CMDR_CMDSTOP_Pos = 7;
    inline constexpr uint32_t SDMMC_CMDR_CMDSTOP_Msk = 0x00000080;
    inline constexpr uint32_t SDMMC_CMDR_CMDSTOP = (1U << 7);
    inline constexpr uint32_t SDMMC_CMDR_WAITRESP_Pos = 8;
    inline constexpr uint32_t SDMMC_CMDR_WAITRESP_Msk = 0x00000300;
    inline constexpr uint32_t SDMMC_CMDR_WAITINT_Pos = 10;
    inline constexpr uint32_t SDMMC_CMDR_WAITINT_Msk = 0x00000400;
    inline constexpr uint32_t SDMMC_CMDR_WAITINT = (1U << 10);
    inline constexpr uint32_t SDMMC_CMDR_WAITPEND_Pos = 11;
    inline constexpr uint32_t SDMMC_CMDR_WAITPEND_Msk = 0x00000800;
    inline constexpr uint32_t SDMMC_CMDR_WAITPEND = (1U << 11);
    inline constexpr uint32_t SDMMC_CMDR_CPSMEN_Pos = 12;
    inline constexpr uint32_t SDMMC_CMDR_CPSMEN_Msk = 0x00001000;
    inline constexpr uint32_t SDMMC_CMDR_CPSMEN = (1U << 12);
    inline constexpr uint32_t SDMMC_CMDR_DTHOLD_Pos = 13;
    inline constexpr uint32_t SDMMC_CMDR_DTHOLD_Msk = 0x00002000;
    inline constexpr uint32_t SDMMC_CMDR_DTHOLD = (1U << 13);
    inline constexpr uint32_t SDMMC_CMDR_BOOTMODE_Pos = 14;
    inline constexpr uint32_t SDMMC_CMDR_BOOTMODE_Msk = 0x00004000;
    inline constexpr uint32_t SDMMC_CMDR_BOOTMODE = (1U << 14);
    inline constexpr uint32_t SDMMC_CMDR_BOOTEN_Pos = 15;
    inline constexpr uint32_t SDMMC_CMDR_BOOTEN_Msk = 0x00008000;
    inline constexpr uint32_t SDMMC_CMDR_BOOTEN = (1U << 15);
    inline constexpr uint32_t SDMMC_CMDR_CMDSUSPEND_Pos = 16;
    inline constexpr uint32_t SDMMC_CMDR_CMDSUSPEND_Msk = 0x00010000;
    inline constexpr uint32_t SDMMC_CMDR_CMDSUSPEND = (1U << 16);

    // SDMMC_RESPCMDR fields
    inline constexpr uint32_t SDMMC_RESPCMDR_RESPCMD_Pos = 0;
    inline constexpr uint32_t SDMMC_RESPCMDR_RESPCMD_Msk = 0x0000003F;

    // SDMMC_RESP1R fields
    inline constexpr uint32_t SDMMC_RESP1R_CARDSTATUS1_Pos = 0;
    inline constexpr uint32_t SDMMC_RESP1R_CARDSTATUS1_Msk = 0xFFFFFFFF;

    // SDMMC_RESP2R fields
    inline constexpr uint32_t SDMMC_RESP2R_CARDSTATUS2_Pos = 0;
    inline constexpr uint32_t SDMMC_RESP2R_CARDSTATUS2_Msk = 0xFFFFFFFF;

    // SDMMC_RESP3R fields
    inline constexpr uint32_t SDMMC_RESP3R_CARDSTATUS3_Pos = 0;
    inline constexpr uint32_t SDMMC_RESP3R_CARDSTATUS3_Msk = 0xFFFFFFFF;

    // SDMMC_RESP4R fields
    inline constexpr uint32_t SDMMC_RESP4R_CARDSTATUS4_Pos = 0;
    inline constexpr uint32_t SDMMC_RESP4R_CARDSTATUS4_Msk = 0xFFFFFFFF;

    // SDMMC_DTIMER fields
    inline constexpr uint32_t SDMMC_DTIMER_DATATIME_Pos = 0;
    inline constexpr uint32_t SDMMC_DTIMER_DATATIME_Msk = 0xFFFFFFFF;

    // SDMMC_DLENR fields
    inline constexpr uint32_t SDMMC_DLENR_DATALENGTH_Pos = 0;
    inline constexpr uint32_t SDMMC_DLENR_DATALENGTH_Msk = 0x01FFFFFF;

    // SDMMC_DCTRL fields
    inline constexpr uint32_t SDMMC_DCTRL_DTEN_Pos = 0;
    inline constexpr uint32_t SDMMC_DCTRL_DTEN_Msk = 0x00000001;
    inline constexpr uint32_t SDMMC_DCTRL_DTEN = (1U << 0);
    inline constexpr uint32_t SDMMC_DCTRL_DTDIR_Pos = 1;
    inline constexpr uint32_t SDMMC_DCTRL_DTDIR_Msk = 0x00000002;
    inline constexpr uint32_t SDMMC_DCTRL_DTDIR = (1U << 1);
    inline constexpr uint32_t SDMMC_DCTRL_DTMODE_Pos = 2;
    inline constexpr uint32_t SDMMC_DCTRL_DTMODE_Msk = 0x0000000C;
    inline constexpr uint32_t SDMMC_DCTRL_DBLOCKSIZE_Pos = 4;
    inline constexpr uint32_t SDMMC_DCTRL_DBLOCKSIZE_Msk = 0x000000F0;
    inline constexpr uint32_t SDMMC_DCTRL_RWSTART_Pos = 8;
    inline constexpr uint32_t SDMMC_DCTRL_RWSTART_Msk = 0x00000100;
    inline constexpr uint32_t SDMMC_DCTRL_RWSTART = (1U << 8);
    inline constexpr uint32_t SDMMC_DCTRL_RWSTOP_Pos = 9;
    inline constexpr uint32_t SDMMC_DCTRL_RWSTOP_Msk = 0x00000200;
    inline constexpr uint32_t SDMMC_DCTRL_RWSTOP = (1U << 9);
    inline constexpr uint32_t SDMMC_DCTRL_RWMOD_Pos = 10;
    inline constexpr uint32_t SDMMC_DCTRL_RWMOD_Msk = 0x00000400;
    inline constexpr uint32_t SDMMC_DCTRL_RWMOD = (1U << 10);
    inline constexpr uint32_t SDMMC_DCTRL_SDIOEN_Pos = 11;
    inline constexpr uint32_t SDMMC_DCTRL_SDIOEN_Msk = 0x00000800;
    inline constexpr uint32_t SDMMC_DCTRL_SDIOEN = (1U << 11);
    inline constexpr uint32_t SDMMC_DCTRL_BOOTACKEN_Pos = 12;
    inline constexpr uint32_t SDMMC_DCTRL_BOOTACKEN_Msk = 0x00001000;
    inline constexpr uint32_t SDMMC_DCTRL_BOOTACKEN = (1U << 12);
    inline constexpr uint32_t SDMMC_DCTRL_FIFORST_Pos = 13;
    inline constexpr uint32_t SDMMC_DCTRL_FIFORST_Msk = 0x00002000;
    inline constexpr uint32_t SDMMC_DCTRL_FIFORST = (1U << 13);

    // SDMMC_DCNTR fields
    inline constexpr uint32_t SDMMC_DCNTR_DATACOUNT_Pos = 0;
    inline constexpr uint32_t SDMMC_DCNTR_DATACOUNT_Msk = 0x01FFFFFF;

    // SDMMC_STAR fields
    inline constexpr uint32_t SDMMC_STAR_CCRCFAIL_Pos = 0;
    inline constexpr uint32_t SDMMC_STAR_CCRCFAIL_Msk = 0x00000001;
    inline constexpr uint32_t SDMMC_STAR_CCRCFAIL = (1U << 0);
    inline constexpr uint32_t SDMMC_STAR_DCRCFAIL_Pos = 1;
    inline constexpr uint32_t SDMMC_STAR_DCRCFAIL_Msk = 0x00000002;
    inline constexpr uint32_t SDMMC_STAR_DCRCFAIL = (1U << 1);
    inline constexpr uint32_t SDMMC_STAR_CTIMEOUT_Pos = 2;
    inline constexpr uint32_t SDMMC_STAR_CTIMEOUT_Msk = 0x00000004;
    inline constexpr uint32_t SDMMC_STAR_CTIMEOUT = (1U << 2);
    inline constexpr uint32_t SDMMC_STAR_DTIMEOUT_Pos = 3;
    inline constexpr uint32_t SDMMC_STAR_DTIMEOUT_Msk = 0x00000008;
    inline constexpr uint32_t SDMMC_STAR_DTIMEOUT = (1U << 3);
    inline constexpr uint32_t SDMMC_STAR_TXUNDERR_Pos = 4;
    inline constexpr uint32_t SDMMC_STAR_TXUNDERR_Msk = 0x00000010;
    inline constexpr uint32_t SDMMC_STAR_TXUNDERR = (1U << 4);
    inline constexpr uint32_t SDMMC_STAR_RXOVERR_Pos = 5;
    inline constexpr uint32_t SDMMC_STAR_RXOVERR_Msk = 0x00000020;
    inline constexpr uint32_t SDMMC_STAR_RXOVERR = (1U << 5);
    inline constexpr uint32_t SDMMC_STAR_CMDREND_Pos = 6;
    inline constexpr uint32_t SDMMC_STAR_CMDREND_Msk = 0x00000040;
    inline constexpr uint32_t SDMMC_STAR_CMDREND = (1U << 6);
    inline constexpr uint32_t SDMMC_STAR_CMDSENT_Pos = 7;
    inline constexpr uint32_t SDMMC_STAR_CMDSENT_Msk = 0x00000080;
    inline constexpr uint32_t SDMMC_STAR_CMDSENT = (1U << 7);
    inline constexpr uint32_t SDMMC_STAR_DATAEND_Pos = 8;
    inline constexpr uint32_t SDMMC_STAR_DATAEND_Msk = 0x00000100;
    inline constexpr uint32_t SDMMC_STAR_DATAEND = (1U << 8);
    inline constexpr uint32_t SDMMC_STAR_DHOLD_Pos = 9;
    inline constexpr uint32_t SDMMC_STAR_DHOLD_Msk = 0x00000200;
    inline constexpr uint32_t SDMMC_STAR_DHOLD = (1U << 9);
    inline constexpr uint32_t SDMMC_STAR_DBCKEND_Pos = 10;
    inline constexpr uint32_t SDMMC_STAR_DBCKEND_Msk = 0x00000400;
    inline constexpr uint32_t SDMMC_STAR_DBCKEND = (1U << 10);
    inline constexpr uint32_t SDMMC_STAR_DABORT_Pos = 11;
    inline constexpr uint32_t SDMMC_STAR_DABORT_Msk = 0x00000800;
    inline constexpr uint32_t SDMMC_STAR_DABORT = (1U << 11);
    inline constexpr uint32_t SDMMC_STAR_DPSMACT_Pos = 12;
    inline constexpr uint32_t SDMMC_STAR_DPSMACT_Msk = 0x00001000;
    inline constexpr uint32_t SDMMC_STAR_DPSMACT = (1U << 12);
    inline constexpr uint32_t SDMMC_STAR_CPSMACT_Pos = 13;
    inline constexpr uint32_t SDMMC_STAR_CPSMACT_Msk = 0x00002000;
    inline constexpr uint32_t SDMMC_STAR_CPSMACT = (1U << 13);
    inline constexpr uint32_t SDMMC_STAR_TXFIFOHE_Pos = 14;
    inline constexpr uint32_t SDMMC_STAR_TXFIFOHE_Msk = 0x00004000;
    inline constexpr uint32_t SDMMC_STAR_TXFIFOHE = (1U << 14);
    inline constexpr uint32_t SDMMC_STAR_RXFIFOHF_Pos = 15;
    inline constexpr uint32_t SDMMC_STAR_RXFIFOHF_Msk = 0x00008000;
    inline constexpr uint32_t SDMMC_STAR_RXFIFOHF = (1U << 15);
    inline constexpr uint32_t SDMMC_STAR_TXFIFOF_Pos = 16;
    inline constexpr uint32_t SDMMC_STAR_TXFIFOF_Msk = 0x00010000;
    inline constexpr uint32_t SDMMC_STAR_TXFIFOF = (1U << 16);
    inline constexpr uint32_t SDMMC_STAR_RXFIFOF_Pos = 17;
    inline constexpr uint32_t SDMMC_STAR_RXFIFOF_Msk = 0x00020000;
    inline constexpr uint32_t SDMMC_STAR_RXFIFOF = (1U << 17);
    inline constexpr uint32_t SDMMC_STAR_TXFIFOE_Pos = 18;
    inline constexpr uint32_t SDMMC_STAR_TXFIFOE_Msk = 0x00040000;
    inline constexpr uint32_t SDMMC_STAR_TXFIFOE = (1U << 18);
    inline constexpr uint32_t SDMMC_STAR_RXFIFOE_Pos = 19;
    inline constexpr uint32_t SDMMC_STAR_RXFIFOE_Msk = 0x00080000;
    inline constexpr uint32_t SDMMC_STAR_RXFIFOE = (1U << 19);
    inline constexpr uint32_t SDMMC_STAR_BUSYD0_Pos = 20;
    inline constexpr uint32_t SDMMC_STAR_BUSYD0_Msk = 0x00100000;
    inline constexpr uint32_t SDMMC_STAR_BUSYD0 = (1U << 20);
    inline constexpr uint32_t SDMMC_STAR_BUSYD0END_Pos = 21;
    inline constexpr uint32_t SDMMC_STAR_BUSYD0END_Msk = 0x00200000;
    inline constexpr uint32_t SDMMC_STAR_BUSYD0END = (1U << 21);
    inline constexpr uint32_t SDMMC_STAR_SDIOIT_Pos = 22;
    inline constexpr uint32_t SDMMC_STAR_SDIOIT_Msk = 0x00400000;
    inline constexpr uint32_t SDMMC_STAR_SDIOIT = (1U << 22);
    inline constexpr uint32_t SDMMC_STAR_ACKFAIL_Pos = 23;
    inline constexpr uint32_t SDMMC_STAR_ACKFAIL_Msk = 0x00800000;
    inline constexpr uint32_t SDMMC_STAR_ACKFAIL = (1U << 23);
    inline constexpr uint32_t SDMMC_STAR_ACKTIMEOUT_Pos = 24;
    inline constexpr uint32_t SDMMC_STAR_ACKTIMEOUT_Msk = 0x01000000;
    inline constexpr uint32_t SDMMC_STAR_ACKTIMEOUT = (1U << 24);
    inline constexpr uint32_t SDMMC_STAR_VSWEND_Pos = 25;
    inline constexpr uint32_t SDMMC_STAR_VSWEND_Msk = 0x02000000;
    inline constexpr uint32_t SDMMC_STAR_VSWEND = (1U << 25);
    inline constexpr uint32_t SDMMC_STAR_CKSTOP_Pos = 26;
    inline constexpr uint32_t SDMMC_STAR_CKSTOP_Msk = 0x04000000;
    inline constexpr uint32_t SDMMC_STAR_CKSTOP = (1U << 26);
    inline constexpr uint32_t SDMMC_STAR_IDMATE_Pos = 27;
    inline constexpr uint32_t SDMMC_STAR_IDMATE_Msk = 0x08000000;
    inline constexpr uint32_t SDMMC_STAR_IDMATE = (1U << 27);
    inline constexpr uint32_t SDMMC_STAR_IDMABTC_Pos = 28;
    inline constexpr uint32_t SDMMC_STAR_IDMABTC_Msk = 0x10000000;
    inline constexpr uint32_t SDMMC_STAR_IDMABTC = (1U << 28);

    // SDMMC_ICR fields
    inline constexpr uint32_t SDMMC_ICR_CCRCFAILC_Pos = 0;
    inline constexpr uint32_t SDMMC_ICR_CCRCFAILC_Msk = 0x00000001;
    inline constexpr uint32_t SDMMC_ICR_CCRCFAILC = (1U << 0);
    inline constexpr uint32_t SDMMC_ICR_DCRCFAILC_Pos = 1;
    inline constexpr uint32_t SDMMC_ICR_DCRCFAILC_Msk = 0x00000002;
    inline constexpr uint32_t SDMMC_ICR_DCRCFAILC = (1U << 1);
    inline constexpr uint32_t SDMMC_ICR_CTIMEOUTC_Pos = 2;
    inline constexpr uint32_t SDMMC_ICR_CTIMEOUTC_Msk = 0x00000004;
    inline constexpr uint32_t SDMMC_ICR_CTIMEOUTC = (1U << 2);
    inline constexpr uint32_t SDMMC_ICR_DTIMEOUTC_Pos = 3;
    inline constexpr uint32_t SDMMC_ICR_DTIMEOUTC_Msk = 0x00000008;
    inline constexpr uint32_t SDMMC_ICR_DTIMEOUTC = (1U << 3);
    inline constexpr uint32_t SDMMC_ICR_TXUNDERRC_Pos = 4;
    inline constexpr uint32_t SDMMC_ICR_TXUNDERRC_Msk = 0x00000010;
    inline constexpr uint32_t SDMMC_ICR_TXUNDERRC = (1U << 4);
    inline constexpr uint32_t SDMMC_ICR_RXOVERRC_Pos = 5;
    inline constexpr uint32_t SDMMC_ICR_RXOVERRC_Msk = 0x00000020;
    inline constexpr uint32_t SDMMC_ICR_RXOVERRC = (1U << 5);
    inline constexpr uint32_t SDMMC_ICR_CMDRENDC_Pos = 6;
    inline constexpr uint32_t SDMMC_ICR_CMDRENDC_Msk = 0x00000040;
    inline constexpr uint32_t SDMMC_ICR_CMDRENDC = (1U << 6);
    inline constexpr uint32_t SDMMC_ICR_CMDSENTC_Pos = 7;
    inline constexpr uint32_t SDMMC_ICR_CMDSENTC_Msk = 0x00000080;
    inline constexpr uint32_t SDMMC_ICR_CMDSENTC = (1U << 7);
    inline constexpr uint32_t SDMMC_ICR_DATAENDC_Pos = 8;
    inline constexpr uint32_t SDMMC_ICR_DATAENDC_Msk = 0x00000100;
    inline constexpr uint32_t SDMMC_ICR_DATAENDC = (1U << 8);
    inline constexpr uint32_t SDMMC_ICR_DHOLDC_Pos = 9;
    inline constexpr uint32_t SDMMC_ICR_DHOLDC_Msk = 0x00000200;
    inline constexpr uint32_t SDMMC_ICR_DHOLDC = (1U << 9);
    inline constexpr uint32_t SDMMC_ICR_DBCKENDC_Pos = 10;
    inline constexpr uint32_t SDMMC_ICR_DBCKENDC_Msk = 0x00000400;
    inline constexpr uint32_t SDMMC_ICR_DBCKENDC = (1U << 10);
    inline constexpr uint32_t SDMMC_ICR_DABORTC_Pos = 11;
    inline constexpr uint32_t SDMMC_ICR_DABORTC_Msk = 0x00000800;
    inline constexpr uint32_t SDMMC_ICR_DABORTC = (1U << 11);
    inline constexpr uint32_t SDMMC_ICR_BUSYD0ENDC_Pos = 21;
    inline constexpr uint32_t SDMMC_ICR_BUSYD0ENDC_Msk = 0x00200000;
    inline constexpr uint32_t SDMMC_ICR_BUSYD0ENDC = (1U << 21);
    inline constexpr uint32_t SDMMC_ICR_SDIOITC_Pos = 22;
    inline constexpr uint32_t SDMMC_ICR_SDIOITC_Msk = 0x00400000;
    inline constexpr uint32_t SDMMC_ICR_SDIOITC = (1U << 22);
    inline constexpr uint32_t SDMMC_ICR_ACKFAILC_Pos = 23;
    inline constexpr uint32_t SDMMC_ICR_ACKFAILC_Msk = 0x00800000;
    inline constexpr uint32_t SDMMC_ICR_ACKFAILC = (1U << 23);
    inline constexpr uint32_t SDMMC_ICR_ACKTIMEOUTC_Pos = 24;
    inline constexpr uint32_t SDMMC_ICR_ACKTIMEOUTC_Msk = 0x01000000;
    inline constexpr uint32_t SDMMC_ICR_ACKTIMEOUTC = (1U << 24);
    inline constexpr uint32_t SDMMC_ICR_VSWENDC_Pos = 25;
    inline constexpr uint32_t SDMMC_ICR_VSWENDC_Msk = 0x02000000;
    inline constexpr uint32_t SDMMC_ICR_VSWENDC = (1U << 25);
    inline constexpr uint32_t SDMMC_ICR_CKSTOPC_Pos = 26;
    inline constexpr uint32_t SDMMC_ICR_CKSTOPC_Msk = 0x04000000;
    inline constexpr uint32_t SDMMC_ICR_CKSTOPC = (1U << 26);
    inline constexpr uint32_t SDMMC_ICR_IDMATEC_Pos = 27;
    inline constexpr uint32_t SDMMC_ICR_IDMATEC_Msk = 0x08000000;
    inline constexpr uint32_t SDMMC_ICR_IDMATEC = (1U << 27);
    inline constexpr uint32_t SDMMC_ICR_IDMABTCC_Pos = 28;
    inline constexpr uint32_t SDMMC_ICR_IDMABTCC_Msk = 0x10000000;
    inline constexpr uint32_t SDMMC_ICR_IDMABTCC = (1U << 28);

    // SDMMC_MASKR fields
    inline constexpr uint32_t SDMMC_MASKR_CCRCFAILIE_Pos = 0;
    inline constexpr uint32_t SDMMC_MASKR_CCRCFAILIE_Msk = 0x00000001;
    inline constexpr uint32_t SDMMC_MASKR_CCRCFAILIE = (1U << 0);
    inline constexpr uint32_t SDMMC_MASKR_DCRCFAILIE_Pos = 1;
    inline constexpr uint32_t SDMMC_MASKR_DCRCFAILIE_Msk = 0x00000002;
    inline constexpr uint32_t SDMMC_MASKR_DCRCFAILIE = (1U << 1);
    inline constexpr uint32_t SDMMC_MASKR_CTIMEOUTIE_Pos = 2;
    inline constexpr uint32_t SDMMC_MASKR_CTIMEOUTIE_Msk = 0x00000004;
    inline constexpr uint32_t SDMMC_MASKR_CTIMEOUTIE = (1U << 2);
    inline constexpr uint32_t SDMMC_MASKR_DTIMEOUTIE_Pos = 3;
    inline constexpr uint32_t SDMMC_MASKR_DTIMEOUTIE_Msk = 0x00000008;
    inline constexpr uint32_t SDMMC_MASKR_DTIMEOUTIE = (1U << 3);
    inline constexpr uint32_t SDMMC_MASKR_TXUNDERRIE_Pos = 4;
    inline constexpr uint32_t SDMMC_MASKR_TXUNDERRIE_Msk = 0x00000010;
    inline constexpr uint32_t SDMMC_MASKR_TXUNDERRIE = (1U << 4);
    inline constexpr uint32_t SDMMC_MASKR_RXOVERRIE_Pos = 5;
    inline constexpr uint32_t SDMMC_MASKR_RXOVERRIE_Msk = 0x00000020;
    inline constexpr uint32_t SDMMC_MASKR_RXOVERRIE = (1U << 5);
    inline constexpr uint32_t SDMMC_MASKR_CMDRENDIE_Pos = 6;
    inline constexpr uint32_t SDMMC_MASKR_CMDRENDIE_Msk = 0x00000040;
    inline constexpr uint32_t SDMMC_MASKR_CMDRENDIE = (1U << 6);
    inline constexpr uint32_t SDMMC_MASKR_CMDSENTIE_Pos = 7;
    inline constexpr uint32_t SDMMC_MASKR_CMDSENTIE_Msk = 0x00000080;
    inline constexpr uint32_t SDMMC_MASKR_CMDSENTIE = (1U << 7);
    inline constexpr uint32_t SDMMC_MASKR_DATAENDIE_Pos = 8;
    inline constexpr uint32_t SDMMC_MASKR_DATAENDIE_Msk = 0x00000100;
    inline constexpr uint32_t SDMMC_MASKR_DATAENDIE = (1U << 8);
    inline constexpr uint32_t SDMMC_MASKR_DHOLDIE_Pos = 9;
    inline constexpr uint32_t SDMMC_MASKR_DHOLDIE_Msk = 0x00000200;
    inline constexpr uint32_t SDMMC_MASKR_DHOLDIE = (1U << 9);
    inline constexpr uint32_t SDMMC_MASKR_DBCKENDIE_Pos = 10;
    inline constexpr uint32_t SDMMC_MASKR_DBCKENDIE_Msk = 0x00000400;
    inline constexpr uint32_t SDMMC_MASKR_DBCKENDIE = (1U << 10);
    inline constexpr uint32_t SDMMC_MASKR_DABORTIE_Pos = 11;
    inline constexpr uint32_t SDMMC_MASKR_DABORTIE_Msk = 0x00000800;
    inline constexpr uint32_t SDMMC_MASKR_DABORTIE = (1U << 11);
    inline constexpr uint32_t SDMMC_MASKR_TXFIFOHEIE_Pos = 14;
    inline constexpr uint32_t SDMMC_MASKR_TXFIFOHEIE_Msk = 0x00004000;
    inline constexpr uint32_t SDMMC_MASKR_TXFIFOHEIE = (1U << 14);
    inline constexpr uint32_t SDMMC_MASKR_RXFIFOHFIE_Pos = 15;
    inline constexpr uint32_t SDMMC_MASKR_RXFIFOHFIE_Msk = 0x00008000;
    inline constexpr uint32_t SDMMC_MASKR_RXFIFOHFIE = (1U << 15);
    inline constexpr uint32_t SDMMC_MASKR_RXFIFOFIE_Pos = 17;
    inline constexpr uint32_t SDMMC_MASKR_RXFIFOFIE_Msk = 0x00020000;
    inline constexpr uint32_t SDMMC_MASKR_RXFIFOFIE = (1U << 17);
    inline constexpr uint32_t SDMMC_MASKR_TXFIFOEIE_Pos = 18;
    inline constexpr uint32_t SDMMC_MASKR_TXFIFOEIE_Msk = 0x00040000;
    inline constexpr uint32_t SDMMC_MASKR_TXFIFOEIE = (1U << 18);
    inline constexpr uint32_t SDMMC_MASKR_BUSYD0ENDIE_Pos = 21;
    inline constexpr uint32_t SDMMC_MASKR_BUSYD0ENDIE_Msk = 0x00200000;
    inline constexpr uint32_t SDMMC_MASKR_BUSYD0ENDIE = (1U << 21);
    inline constexpr uint32_t SDMMC_MASKR_SDIOITIE_Pos = 22;
    inline constexpr uint32_t SDMMC_MASKR_SDIOITIE_Msk = 0x00400000;
    inline constexpr uint32_t SDMMC_MASKR_SDIOITIE = (1U << 22);
    inline constexpr uint32_t SDMMC_MASKR_ACKFAILIE_Pos = 23;
    inline constexpr uint32_t SDMMC_MASKR_ACKFAILIE_Msk = 0x00800000;
    inline constexpr uint32_t SDMMC_MASKR_ACKFAILIE = (1U << 23);
    inline constexpr uint32_t SDMMC_MASKR_ACKTIMEOUTIE_Pos = 24;
    inline constexpr uint32_t SDMMC_MASKR_ACKTIMEOUTIE_Msk = 0x01000000;
    inline constexpr uint32_t SDMMC_MASKR_ACKTIMEOUTIE = (1U << 24);
    inline constexpr uint32_t SDMMC_MASKR_VSWENDIE_Pos = 25;
    inline constexpr uint32_t SDMMC_MASKR_VSWENDIE_Msk = 0x02000000;
    inline constexpr uint32_t SDMMC_MASKR_VSWENDIE = (1U << 25);
    inline constexpr uint32_t SDMMC_MASKR_CKSTOPIE_Pos = 26;
    inline constexpr uint32_t SDMMC_MASKR_CKSTOPIE_Msk = 0x04000000;
    inline constexpr uint32_t SDMMC_MASKR_CKSTOPIE = (1U << 26);
    inline constexpr uint32_t SDMMC_MASKR_IDMABTCIE_Pos = 28;
    inline constexpr uint32_t SDMMC_MASKR_IDMABTCIE_Msk = 0x10000000;
    inline constexpr uint32_t SDMMC_MASKR_IDMABTCIE = (1U << 28);

    // SDMMC_ACKTIMER fields
    inline constexpr uint32_t SDMMC_ACKTIMER_ACKTIME_Pos = 0;
    inline constexpr uint32_t SDMMC_ACKTIMER_ACKTIME_Msk = 0x01FFFFFF;

    // SDMMC_IDMACTRLR fields
    inline constexpr uint32_t SDMMC_IDMACTRLR_IDMAEN_Pos = 0;
    inline constexpr uint32_t SDMMC_IDMACTRLR_IDMAEN_Msk = 0x00000001;
    inline constexpr uint32_t SDMMC_IDMACTRLR_IDMAEN = (1U << 0);
    inline constexpr uint32_t SDMMC_IDMACTRLR_IDMABMODE_Pos = 1;
    inline constexpr uint32_t SDMMC_IDMACTRLR_IDMABMODE_Msk = 0x00000002;
    inline constexpr uint32_t SDMMC_IDMACTRLR_IDMABMODE = (1U << 1);
    inline constexpr uint32_t SDMMC_IDMACTRLR_IDMABACT_Pos = 2;
    inline constexpr uint32_t SDMMC_IDMACTRLR_IDMABACT_Msk = 0x00000004;
    inline constexpr uint32_t SDMMC_IDMACTRLR_IDMABACT = (1U << 2);

    // SDMMC_IDMABSIZER fields
    inline constexpr uint32_t SDMMC_IDMABSIZER_IDMABNDT_Pos = 5;
    inline constexpr uint32_t SDMMC_IDMABSIZER_IDMABNDT_Msk = 0x00001FE0;

    // SDMMC_IDMABASE0R fields
    inline constexpr uint32_t SDMMC_IDMABASE0R_IDMABASE0_Pos = 0;
    inline constexpr uint32_t SDMMC_IDMABASE0R_IDMABASE0_Msk = 0xFFFFFFFF;

    // SDMMC_IDMABASE1R fields
    inline constexpr uint32_t SDMMC_IDMABASE1R_IDMABASE1_Pos = 0;
    inline constexpr uint32_t SDMMC_IDMABASE1R_IDMABASE1_Msk = 0xFFFFFFFF;

    // SDMMC_FIFOR fields
    inline constexpr uint32_t SDMMC_FIFOR_FIFODATA_Pos = 0;
    inline constexpr uint32_t SDMMC_FIFOR_FIFODATA_Msk = 0xFFFFFFFF;

    // SDMMC_VER fields
    inline constexpr uint32_t SDMMC_VER_MINREV_Pos = 0;
    inline constexpr uint32_t SDMMC_VER_MINREV_Msk = 0x0000000F;
    inline constexpr uint32_t SDMMC_VER_MAJREV_Pos = 4;
    inline constexpr uint32_t SDMMC_VER_MAJREV_Msk = 0x000000F0;

    // SDMMC_ID fields
    inline constexpr uint32_t SDMMC_ID_IP_ID_Pos = 0;
    inline constexpr uint32_t SDMMC_ID_IP_ID_Msk = 0xFFFFFFFF;

} // namespace SDMMC2

// Peripheral instances (lowercase to avoid namespace collision)
namespace periph {
    inline auto* const sdmmc1 = reinterpret_cast<SDMMC1_t*>(0x52007000);
    inline auto* const sdmmc2 = reinterpret_cast<SDMMC1_t*>(0x48022400);
} // namespace periph

} // namespace sbl::hw::reg

#endif // SBL_HW_REG_STM32H750_SDMMC_HPP
