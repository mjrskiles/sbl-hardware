/**
 * @file fmc.hpp
 * @brief Register definitions for STM32H750 - fmc
 *
 * Generated from: stm32h750.svd.patched
 * Generator: cecrops
 * Generated: 2026-03-09T09:57:25.165402
 *
 * DO NOT EDIT - Regenerate with: cecrops generate <mcu-dir>
 */

#ifndef SBL_HW_REG_STM32H750_FMC_HPP
#define SBL_HW_REG_STM32H750_FMC_HPP

#include <cstdint>

namespace sbl::hw::reg {

/** FMC */
struct FMC_t {
    volatile uint32_t FMC_BCR1;  ///< This register contains the control           information ...
    volatile uint32_t FMC_BTR1;  ///< This register contains the control           information ...
    volatile uint32_t FMC_BCR2;  ///< This register contains the control           information ...
    volatile uint32_t FMC_BTR2;  ///< This register contains the control           information ...
    volatile uint32_t FMC_BCR3;  ///< This register contains the control           information ...
    volatile uint32_t FMC_BTR3;  ///< This register contains the control           information ...
    volatile uint32_t FMC_BCR4;  ///< This register contains the control           information ...
    volatile uint32_t FMC_BTR4;  ///< This register contains the control           information ...
    uint8_t _reserved0[96];
    volatile uint32_t FMC_PCR;  ///< NAND Flash control registers
    volatile uint32_t FMC_SR;  ///< This register contains information about the           FI...
    volatile uint32_t FMC_PMEM;  ///< The FMC_PMEM read/write register contains           the t...
    volatile uint32_t FMC_PATT;  ///< The FMC_PATT read/write register contains           the t...
    uint8_t _reserved1[4];
    volatile uint32_t FMC_ECCR;  ///< This register contain the current error           correct...
    uint8_t _reserved2[108];
    volatile uint32_t FMC_BWTR1;  ///< This register contains the control           information ...
    uint8_t _reserved3[4];
    volatile uint32_t FMC_BWTR2;  ///< This register contains the control           information ...
    uint8_t _reserved4[4];
    volatile uint32_t FMC_BWTR3;  ///< This register contains the control           information ...
    uint8_t _reserved5[4];
    volatile uint32_t FMC_BWTR4;  ///< This register contains the control           information ...
    uint8_t _reserved6[32];
    volatile uint32_t FMC_SDCR1;  ///< This register contains the control           parameters f...
    volatile uint32_t FMC_SDCR2;  ///< This register contains the control           parameters f...
    volatile uint32_t FMC_SDTR1;  ///< This register contains the timing parameters           of...
    volatile uint32_t FMC_SDTR2;  ///< This register contains the timing parameters           of...
    volatile uint32_t FMC_SDCMR;  ///< This register contains the command issued           when ...
    volatile uint32_t FMC_SDRTR;  ///< This register sets the refresh rate in           number o...
    volatile uint32_t FMC_SDSR;  ///< SDRAM Status register
};

namespace FMC {
    // FMC_BCR1 fields
    inline constexpr uint32_t FMC_BCR1_MBKEN_Pos = 0;
    inline constexpr uint32_t FMC_BCR1_MBKEN_Msk = 0x00000001;
    inline constexpr uint32_t FMC_BCR1_MBKEN = (1U << 0);
    inline constexpr uint32_t FMC_BCR1_MUXEN_Pos = 1;
    inline constexpr uint32_t FMC_BCR1_MUXEN_Msk = 0x00000002;
    inline constexpr uint32_t FMC_BCR1_MUXEN = (1U << 1);
    inline constexpr uint32_t FMC_BCR1_MTYP_Pos = 2;
    inline constexpr uint32_t FMC_BCR1_MTYP_Msk = 0x0000000C;
    inline constexpr uint32_t FMC_BCR1_MWID_Pos = 4;
    inline constexpr uint32_t FMC_BCR1_MWID_Msk = 0x00000030;
    inline constexpr uint32_t FMC_BCR1_FACCEN_Pos = 6;
    inline constexpr uint32_t FMC_BCR1_FACCEN_Msk = 0x00000040;
    inline constexpr uint32_t FMC_BCR1_FACCEN = (1U << 6);
    inline constexpr uint32_t FMC_BCR1_BURSTEN_Pos = 8;
    inline constexpr uint32_t FMC_BCR1_BURSTEN_Msk = 0x00000100;
    inline constexpr uint32_t FMC_BCR1_BURSTEN = (1U << 8);
    inline constexpr uint32_t FMC_BCR1_WAITPOL_Pos = 9;
    inline constexpr uint32_t FMC_BCR1_WAITPOL_Msk = 0x00000200;
    inline constexpr uint32_t FMC_BCR1_WAITPOL = (1U << 9);
    inline constexpr uint32_t FMC_BCR1_WAITCFG_Pos = 11;
    inline constexpr uint32_t FMC_BCR1_WAITCFG_Msk = 0x00000800;
    inline constexpr uint32_t FMC_BCR1_WAITCFG = (1U << 11);
    inline constexpr uint32_t FMC_BCR1_WREN_Pos = 12;
    inline constexpr uint32_t FMC_BCR1_WREN_Msk = 0x00001000;
    inline constexpr uint32_t FMC_BCR1_WREN = (1U << 12);
    inline constexpr uint32_t FMC_BCR1_WAITEN_Pos = 13;
    inline constexpr uint32_t FMC_BCR1_WAITEN_Msk = 0x00002000;
    inline constexpr uint32_t FMC_BCR1_WAITEN = (1U << 13);
    inline constexpr uint32_t FMC_BCR1_EXTMOD_Pos = 14;
    inline constexpr uint32_t FMC_BCR1_EXTMOD_Msk = 0x00004000;
    inline constexpr uint32_t FMC_BCR1_EXTMOD = (1U << 14);
    inline constexpr uint32_t FMC_BCR1_ASYNCWAIT_Pos = 15;
    inline constexpr uint32_t FMC_BCR1_ASYNCWAIT_Msk = 0x00008000;
    inline constexpr uint32_t FMC_BCR1_ASYNCWAIT = (1U << 15);
    inline constexpr uint32_t FMC_BCR1_CPSIZE_Pos = 16;
    inline constexpr uint32_t FMC_BCR1_CPSIZE_Msk = 0x00070000;
    inline constexpr uint32_t FMC_BCR1_CBURSTRW_Pos = 19;
    inline constexpr uint32_t FMC_BCR1_CBURSTRW_Msk = 0x00080000;
    inline constexpr uint32_t FMC_BCR1_CBURSTRW = (1U << 19);
    inline constexpr uint32_t FMC_BCR1_CCLKEN_Pos = 20;
    inline constexpr uint32_t FMC_BCR1_CCLKEN_Msk = 0x00100000;
    inline constexpr uint32_t FMC_BCR1_CCLKEN = (1U << 20);
    inline constexpr uint32_t FMC_BCR1_WFDIS_Pos = 21;
    inline constexpr uint32_t FMC_BCR1_WFDIS_Msk = 0x00200000;
    inline constexpr uint32_t FMC_BCR1_WFDIS = (1U << 21);
    inline constexpr uint32_t FMC_BCR1_BMAP_Pos = 24;
    inline constexpr uint32_t FMC_BCR1_BMAP_Msk = 0x03000000;
    inline constexpr uint32_t FMC_BCR1_FMCEN_Pos = 31;
    inline constexpr uint32_t FMC_BCR1_FMCEN_Msk = 0x80000000;
    inline constexpr uint32_t FMC_BCR1_FMCEN = (1U << 31);

    // FMC_BTR1 fields
    inline constexpr uint32_t FMC_BTR1_ADDSET_Pos = 0;
    inline constexpr uint32_t FMC_BTR1_ADDSET_Msk = 0x0000000F;
    inline constexpr uint32_t FMC_BTR1_ADDHLD_Pos = 4;
    inline constexpr uint32_t FMC_BTR1_ADDHLD_Msk = 0x000000F0;
    inline constexpr uint32_t FMC_BTR1_DATAST_Pos = 8;
    inline constexpr uint32_t FMC_BTR1_DATAST_Msk = 0x0000FF00;
    inline constexpr uint32_t FMC_BTR1_BUSTURN_Pos = 16;
    inline constexpr uint32_t FMC_BTR1_BUSTURN_Msk = 0x000F0000;
    inline constexpr uint32_t FMC_BTR1_CLKDIV_Pos = 20;
    inline constexpr uint32_t FMC_BTR1_CLKDIV_Msk = 0x00F00000;
    inline constexpr uint32_t FMC_BTR1_DATLAT_Pos = 24;
    inline constexpr uint32_t FMC_BTR1_DATLAT_Msk = 0x0F000000;
    inline constexpr uint32_t FMC_BTR1_ACCMOD_Pos = 28;
    inline constexpr uint32_t FMC_BTR1_ACCMOD_Msk = 0x30000000;

    // FMC_BCR2 fields
    inline constexpr uint32_t FMC_BCR2_MBKEN_Pos = 0;
    inline constexpr uint32_t FMC_BCR2_MBKEN_Msk = 0x00000001;
    inline constexpr uint32_t FMC_BCR2_MBKEN = (1U << 0);
    inline constexpr uint32_t FMC_BCR2_MUXEN_Pos = 1;
    inline constexpr uint32_t FMC_BCR2_MUXEN_Msk = 0x00000002;
    inline constexpr uint32_t FMC_BCR2_MUXEN = (1U << 1);
    inline constexpr uint32_t FMC_BCR2_MTYP_Pos = 2;
    inline constexpr uint32_t FMC_BCR2_MTYP_Msk = 0x0000000C;
    inline constexpr uint32_t FMC_BCR2_MWID_Pos = 4;
    inline constexpr uint32_t FMC_BCR2_MWID_Msk = 0x00000030;
    inline constexpr uint32_t FMC_BCR2_FACCEN_Pos = 6;
    inline constexpr uint32_t FMC_BCR2_FACCEN_Msk = 0x00000040;
    inline constexpr uint32_t FMC_BCR2_FACCEN = (1U << 6);
    inline constexpr uint32_t FMC_BCR2_BURSTEN_Pos = 8;
    inline constexpr uint32_t FMC_BCR2_BURSTEN_Msk = 0x00000100;
    inline constexpr uint32_t FMC_BCR2_BURSTEN = (1U << 8);
    inline constexpr uint32_t FMC_BCR2_WAITPOL_Pos = 9;
    inline constexpr uint32_t FMC_BCR2_WAITPOL_Msk = 0x00000200;
    inline constexpr uint32_t FMC_BCR2_WAITPOL = (1U << 9);
    inline constexpr uint32_t FMC_BCR2_WAITCFG_Pos = 11;
    inline constexpr uint32_t FMC_BCR2_WAITCFG_Msk = 0x00000800;
    inline constexpr uint32_t FMC_BCR2_WAITCFG = (1U << 11);
    inline constexpr uint32_t FMC_BCR2_WREN_Pos = 12;
    inline constexpr uint32_t FMC_BCR2_WREN_Msk = 0x00001000;
    inline constexpr uint32_t FMC_BCR2_WREN = (1U << 12);
    inline constexpr uint32_t FMC_BCR2_WAITEN_Pos = 13;
    inline constexpr uint32_t FMC_BCR2_WAITEN_Msk = 0x00002000;
    inline constexpr uint32_t FMC_BCR2_WAITEN = (1U << 13);
    inline constexpr uint32_t FMC_BCR2_EXTMOD_Pos = 14;
    inline constexpr uint32_t FMC_BCR2_EXTMOD_Msk = 0x00004000;
    inline constexpr uint32_t FMC_BCR2_EXTMOD = (1U << 14);
    inline constexpr uint32_t FMC_BCR2_ASYNCWAIT_Pos = 15;
    inline constexpr uint32_t FMC_BCR2_ASYNCWAIT_Msk = 0x00008000;
    inline constexpr uint32_t FMC_BCR2_ASYNCWAIT = (1U << 15);
    inline constexpr uint32_t FMC_BCR2_CPSIZE_Pos = 16;
    inline constexpr uint32_t FMC_BCR2_CPSIZE_Msk = 0x00070000;
    inline constexpr uint32_t FMC_BCR2_CBURSTRW_Pos = 19;
    inline constexpr uint32_t FMC_BCR2_CBURSTRW_Msk = 0x00080000;
    inline constexpr uint32_t FMC_BCR2_CBURSTRW = (1U << 19);
    inline constexpr uint32_t FMC_BCR2_CCLKEN_Pos = 20;
    inline constexpr uint32_t FMC_BCR2_CCLKEN_Msk = 0x00100000;
    inline constexpr uint32_t FMC_BCR2_CCLKEN = (1U << 20);
    inline constexpr uint32_t FMC_BCR2_WFDIS_Pos = 21;
    inline constexpr uint32_t FMC_BCR2_WFDIS_Msk = 0x00200000;
    inline constexpr uint32_t FMC_BCR2_WFDIS = (1U << 21);
    inline constexpr uint32_t FMC_BCR2_BMAP_Pos = 24;
    inline constexpr uint32_t FMC_BCR2_BMAP_Msk = 0x03000000;
    inline constexpr uint32_t FMC_BCR2_FMCEN_Pos = 31;
    inline constexpr uint32_t FMC_BCR2_FMCEN_Msk = 0x80000000;
    inline constexpr uint32_t FMC_BCR2_FMCEN = (1U << 31);

    // FMC_BTR2 fields
    inline constexpr uint32_t FMC_BTR2_ADDSET_Pos = 0;
    inline constexpr uint32_t FMC_BTR2_ADDSET_Msk = 0x0000000F;
    inline constexpr uint32_t FMC_BTR2_ADDHLD_Pos = 4;
    inline constexpr uint32_t FMC_BTR2_ADDHLD_Msk = 0x000000F0;
    inline constexpr uint32_t FMC_BTR2_DATAST_Pos = 8;
    inline constexpr uint32_t FMC_BTR2_DATAST_Msk = 0x0000FF00;
    inline constexpr uint32_t FMC_BTR2_BUSTURN_Pos = 16;
    inline constexpr uint32_t FMC_BTR2_BUSTURN_Msk = 0x000F0000;
    inline constexpr uint32_t FMC_BTR2_CLKDIV_Pos = 20;
    inline constexpr uint32_t FMC_BTR2_CLKDIV_Msk = 0x00F00000;
    inline constexpr uint32_t FMC_BTR2_DATLAT_Pos = 24;
    inline constexpr uint32_t FMC_BTR2_DATLAT_Msk = 0x0F000000;
    inline constexpr uint32_t FMC_BTR2_ACCMOD_Pos = 28;
    inline constexpr uint32_t FMC_BTR2_ACCMOD_Msk = 0x30000000;

    // FMC_BCR3 fields
    inline constexpr uint32_t FMC_BCR3_MBKEN_Pos = 0;
    inline constexpr uint32_t FMC_BCR3_MBKEN_Msk = 0x00000001;
    inline constexpr uint32_t FMC_BCR3_MBKEN = (1U << 0);
    inline constexpr uint32_t FMC_BCR3_MUXEN_Pos = 1;
    inline constexpr uint32_t FMC_BCR3_MUXEN_Msk = 0x00000002;
    inline constexpr uint32_t FMC_BCR3_MUXEN = (1U << 1);
    inline constexpr uint32_t FMC_BCR3_MTYP_Pos = 2;
    inline constexpr uint32_t FMC_BCR3_MTYP_Msk = 0x0000000C;
    inline constexpr uint32_t FMC_BCR3_MWID_Pos = 4;
    inline constexpr uint32_t FMC_BCR3_MWID_Msk = 0x00000030;
    inline constexpr uint32_t FMC_BCR3_FACCEN_Pos = 6;
    inline constexpr uint32_t FMC_BCR3_FACCEN_Msk = 0x00000040;
    inline constexpr uint32_t FMC_BCR3_FACCEN = (1U << 6);
    inline constexpr uint32_t FMC_BCR3_BURSTEN_Pos = 8;
    inline constexpr uint32_t FMC_BCR3_BURSTEN_Msk = 0x00000100;
    inline constexpr uint32_t FMC_BCR3_BURSTEN = (1U << 8);
    inline constexpr uint32_t FMC_BCR3_WAITPOL_Pos = 9;
    inline constexpr uint32_t FMC_BCR3_WAITPOL_Msk = 0x00000200;
    inline constexpr uint32_t FMC_BCR3_WAITPOL = (1U << 9);
    inline constexpr uint32_t FMC_BCR3_WAITCFG_Pos = 11;
    inline constexpr uint32_t FMC_BCR3_WAITCFG_Msk = 0x00000800;
    inline constexpr uint32_t FMC_BCR3_WAITCFG = (1U << 11);
    inline constexpr uint32_t FMC_BCR3_WREN_Pos = 12;
    inline constexpr uint32_t FMC_BCR3_WREN_Msk = 0x00001000;
    inline constexpr uint32_t FMC_BCR3_WREN = (1U << 12);
    inline constexpr uint32_t FMC_BCR3_WAITEN_Pos = 13;
    inline constexpr uint32_t FMC_BCR3_WAITEN_Msk = 0x00002000;
    inline constexpr uint32_t FMC_BCR3_WAITEN = (1U << 13);
    inline constexpr uint32_t FMC_BCR3_EXTMOD_Pos = 14;
    inline constexpr uint32_t FMC_BCR3_EXTMOD_Msk = 0x00004000;
    inline constexpr uint32_t FMC_BCR3_EXTMOD = (1U << 14);
    inline constexpr uint32_t FMC_BCR3_ASYNCWAIT_Pos = 15;
    inline constexpr uint32_t FMC_BCR3_ASYNCWAIT_Msk = 0x00008000;
    inline constexpr uint32_t FMC_BCR3_ASYNCWAIT = (1U << 15);
    inline constexpr uint32_t FMC_BCR3_CPSIZE_Pos = 16;
    inline constexpr uint32_t FMC_BCR3_CPSIZE_Msk = 0x00070000;
    inline constexpr uint32_t FMC_BCR3_CBURSTRW_Pos = 19;
    inline constexpr uint32_t FMC_BCR3_CBURSTRW_Msk = 0x00080000;
    inline constexpr uint32_t FMC_BCR3_CBURSTRW = (1U << 19);
    inline constexpr uint32_t FMC_BCR3_CCLKEN_Pos = 20;
    inline constexpr uint32_t FMC_BCR3_CCLKEN_Msk = 0x00100000;
    inline constexpr uint32_t FMC_BCR3_CCLKEN = (1U << 20);
    inline constexpr uint32_t FMC_BCR3_WFDIS_Pos = 21;
    inline constexpr uint32_t FMC_BCR3_WFDIS_Msk = 0x00200000;
    inline constexpr uint32_t FMC_BCR3_WFDIS = (1U << 21);
    inline constexpr uint32_t FMC_BCR3_BMAP_Pos = 24;
    inline constexpr uint32_t FMC_BCR3_BMAP_Msk = 0x03000000;
    inline constexpr uint32_t FMC_BCR3_FMCEN_Pos = 31;
    inline constexpr uint32_t FMC_BCR3_FMCEN_Msk = 0x80000000;
    inline constexpr uint32_t FMC_BCR3_FMCEN = (1U << 31);

    // FMC_BTR3 fields
    inline constexpr uint32_t FMC_BTR3_ADDSET_Pos = 0;
    inline constexpr uint32_t FMC_BTR3_ADDSET_Msk = 0x0000000F;
    inline constexpr uint32_t FMC_BTR3_ADDHLD_Pos = 4;
    inline constexpr uint32_t FMC_BTR3_ADDHLD_Msk = 0x000000F0;
    inline constexpr uint32_t FMC_BTR3_DATAST_Pos = 8;
    inline constexpr uint32_t FMC_BTR3_DATAST_Msk = 0x0000FF00;
    inline constexpr uint32_t FMC_BTR3_BUSTURN_Pos = 16;
    inline constexpr uint32_t FMC_BTR3_BUSTURN_Msk = 0x000F0000;
    inline constexpr uint32_t FMC_BTR3_CLKDIV_Pos = 20;
    inline constexpr uint32_t FMC_BTR3_CLKDIV_Msk = 0x00F00000;
    inline constexpr uint32_t FMC_BTR3_DATLAT_Pos = 24;
    inline constexpr uint32_t FMC_BTR3_DATLAT_Msk = 0x0F000000;
    inline constexpr uint32_t FMC_BTR3_ACCMOD_Pos = 28;
    inline constexpr uint32_t FMC_BTR3_ACCMOD_Msk = 0x30000000;

    // FMC_BCR4 fields
    inline constexpr uint32_t FMC_BCR4_MBKEN_Pos = 0;
    inline constexpr uint32_t FMC_BCR4_MBKEN_Msk = 0x00000001;
    inline constexpr uint32_t FMC_BCR4_MBKEN = (1U << 0);
    inline constexpr uint32_t FMC_BCR4_MUXEN_Pos = 1;
    inline constexpr uint32_t FMC_BCR4_MUXEN_Msk = 0x00000002;
    inline constexpr uint32_t FMC_BCR4_MUXEN = (1U << 1);
    inline constexpr uint32_t FMC_BCR4_MTYP_Pos = 2;
    inline constexpr uint32_t FMC_BCR4_MTYP_Msk = 0x0000000C;
    inline constexpr uint32_t FMC_BCR4_MWID_Pos = 4;
    inline constexpr uint32_t FMC_BCR4_MWID_Msk = 0x00000030;
    inline constexpr uint32_t FMC_BCR4_FACCEN_Pos = 6;
    inline constexpr uint32_t FMC_BCR4_FACCEN_Msk = 0x00000040;
    inline constexpr uint32_t FMC_BCR4_FACCEN = (1U << 6);
    inline constexpr uint32_t FMC_BCR4_BURSTEN_Pos = 8;
    inline constexpr uint32_t FMC_BCR4_BURSTEN_Msk = 0x00000100;
    inline constexpr uint32_t FMC_BCR4_BURSTEN = (1U << 8);
    inline constexpr uint32_t FMC_BCR4_WAITPOL_Pos = 9;
    inline constexpr uint32_t FMC_BCR4_WAITPOL_Msk = 0x00000200;
    inline constexpr uint32_t FMC_BCR4_WAITPOL = (1U << 9);
    inline constexpr uint32_t FMC_BCR4_WAITCFG_Pos = 11;
    inline constexpr uint32_t FMC_BCR4_WAITCFG_Msk = 0x00000800;
    inline constexpr uint32_t FMC_BCR4_WAITCFG = (1U << 11);
    inline constexpr uint32_t FMC_BCR4_WREN_Pos = 12;
    inline constexpr uint32_t FMC_BCR4_WREN_Msk = 0x00001000;
    inline constexpr uint32_t FMC_BCR4_WREN = (1U << 12);
    inline constexpr uint32_t FMC_BCR4_WAITEN_Pos = 13;
    inline constexpr uint32_t FMC_BCR4_WAITEN_Msk = 0x00002000;
    inline constexpr uint32_t FMC_BCR4_WAITEN = (1U << 13);
    inline constexpr uint32_t FMC_BCR4_EXTMOD_Pos = 14;
    inline constexpr uint32_t FMC_BCR4_EXTMOD_Msk = 0x00004000;
    inline constexpr uint32_t FMC_BCR4_EXTMOD = (1U << 14);
    inline constexpr uint32_t FMC_BCR4_ASYNCWAIT_Pos = 15;
    inline constexpr uint32_t FMC_BCR4_ASYNCWAIT_Msk = 0x00008000;
    inline constexpr uint32_t FMC_BCR4_ASYNCWAIT = (1U << 15);
    inline constexpr uint32_t FMC_BCR4_CPSIZE_Pos = 16;
    inline constexpr uint32_t FMC_BCR4_CPSIZE_Msk = 0x00070000;
    inline constexpr uint32_t FMC_BCR4_CBURSTRW_Pos = 19;
    inline constexpr uint32_t FMC_BCR4_CBURSTRW_Msk = 0x00080000;
    inline constexpr uint32_t FMC_BCR4_CBURSTRW = (1U << 19);
    inline constexpr uint32_t FMC_BCR4_CCLKEN_Pos = 20;
    inline constexpr uint32_t FMC_BCR4_CCLKEN_Msk = 0x00100000;
    inline constexpr uint32_t FMC_BCR4_CCLKEN = (1U << 20);
    inline constexpr uint32_t FMC_BCR4_WFDIS_Pos = 21;
    inline constexpr uint32_t FMC_BCR4_WFDIS_Msk = 0x00200000;
    inline constexpr uint32_t FMC_BCR4_WFDIS = (1U << 21);
    inline constexpr uint32_t FMC_BCR4_BMAP_Pos = 24;
    inline constexpr uint32_t FMC_BCR4_BMAP_Msk = 0x03000000;
    inline constexpr uint32_t FMC_BCR4_FMCEN_Pos = 31;
    inline constexpr uint32_t FMC_BCR4_FMCEN_Msk = 0x80000000;
    inline constexpr uint32_t FMC_BCR4_FMCEN = (1U << 31);

    // FMC_BTR4 fields
    inline constexpr uint32_t FMC_BTR4_ADDSET_Pos = 0;
    inline constexpr uint32_t FMC_BTR4_ADDSET_Msk = 0x0000000F;
    inline constexpr uint32_t FMC_BTR4_ADDHLD_Pos = 4;
    inline constexpr uint32_t FMC_BTR4_ADDHLD_Msk = 0x000000F0;
    inline constexpr uint32_t FMC_BTR4_DATAST_Pos = 8;
    inline constexpr uint32_t FMC_BTR4_DATAST_Msk = 0x0000FF00;
    inline constexpr uint32_t FMC_BTR4_BUSTURN_Pos = 16;
    inline constexpr uint32_t FMC_BTR4_BUSTURN_Msk = 0x000F0000;
    inline constexpr uint32_t FMC_BTR4_CLKDIV_Pos = 20;
    inline constexpr uint32_t FMC_BTR4_CLKDIV_Msk = 0x00F00000;
    inline constexpr uint32_t FMC_BTR4_DATLAT_Pos = 24;
    inline constexpr uint32_t FMC_BTR4_DATLAT_Msk = 0x0F000000;
    inline constexpr uint32_t FMC_BTR4_ACCMOD_Pos = 28;
    inline constexpr uint32_t FMC_BTR4_ACCMOD_Msk = 0x30000000;

    // FMC_PCR fields
    inline constexpr uint32_t FMC_PCR_PWAITEN_Pos = 1;
    inline constexpr uint32_t FMC_PCR_PWAITEN_Msk = 0x00000002;
    inline constexpr uint32_t FMC_PCR_PWAITEN = (1U << 1);
    inline constexpr uint32_t FMC_PCR_PBKEN_Pos = 2;
    inline constexpr uint32_t FMC_PCR_PBKEN_Msk = 0x00000004;
    inline constexpr uint32_t FMC_PCR_PBKEN = (1U << 2);
    inline constexpr uint32_t FMC_PCR_PWID_Pos = 4;
    inline constexpr uint32_t FMC_PCR_PWID_Msk = 0x00000030;
    inline constexpr uint32_t FMC_PCR_ECCEN_Pos = 6;
    inline constexpr uint32_t FMC_PCR_ECCEN_Msk = 0x00000040;
    inline constexpr uint32_t FMC_PCR_ECCEN = (1U << 6);
    inline constexpr uint32_t FMC_PCR_TCLR_Pos = 9;
    inline constexpr uint32_t FMC_PCR_TCLR_Msk = 0x00001E00;
    inline constexpr uint32_t FMC_PCR_TAR_Pos = 13;
    inline constexpr uint32_t FMC_PCR_TAR_Msk = 0x0001E000;
    inline constexpr uint32_t FMC_PCR_ECCPS_Pos = 17;
    inline constexpr uint32_t FMC_PCR_ECCPS_Msk = 0x000E0000;

    // FMC_SR fields
    inline constexpr uint32_t FMC_SR_IRS_Pos = 0;
    inline constexpr uint32_t FMC_SR_IRS_Msk = 0x00000001;
    inline constexpr uint32_t FMC_SR_IRS = (1U << 0);
    inline constexpr uint32_t FMC_SR_ILS_Pos = 1;
    inline constexpr uint32_t FMC_SR_ILS_Msk = 0x00000002;
    inline constexpr uint32_t FMC_SR_ILS = (1U << 1);
    inline constexpr uint32_t FMC_SR_IFS_Pos = 2;
    inline constexpr uint32_t FMC_SR_IFS_Msk = 0x00000004;
    inline constexpr uint32_t FMC_SR_IFS = (1U << 2);
    inline constexpr uint32_t FMC_SR_IREN_Pos = 3;
    inline constexpr uint32_t FMC_SR_IREN_Msk = 0x00000008;
    inline constexpr uint32_t FMC_SR_IREN = (1U << 3);
    inline constexpr uint32_t FMC_SR_ILEN_Pos = 4;
    inline constexpr uint32_t FMC_SR_ILEN_Msk = 0x00000010;
    inline constexpr uint32_t FMC_SR_ILEN = (1U << 4);
    inline constexpr uint32_t FMC_SR_IFEN_Pos = 5;
    inline constexpr uint32_t FMC_SR_IFEN_Msk = 0x00000020;
    inline constexpr uint32_t FMC_SR_IFEN = (1U << 5);
    inline constexpr uint32_t FMC_SR_FEMPT_Pos = 6;
    inline constexpr uint32_t FMC_SR_FEMPT_Msk = 0x00000040;
    inline constexpr uint32_t FMC_SR_FEMPT = (1U << 6);

    // FMC_PMEM fields
    inline constexpr uint32_t FMC_PMEM_MEMSET_Pos = 0;
    inline constexpr uint32_t FMC_PMEM_MEMSET_Msk = 0x000000FF;
    inline constexpr uint32_t FMC_PMEM_MEMWAIT_Pos = 8;
    inline constexpr uint32_t FMC_PMEM_MEMWAIT_Msk = 0x0000FF00;
    inline constexpr uint32_t FMC_PMEM_MEMHOLD_Pos = 16;
    inline constexpr uint32_t FMC_PMEM_MEMHOLD_Msk = 0x00FF0000;
    inline constexpr uint32_t FMC_PMEM_MEMHIZ_Pos = 24;
    inline constexpr uint32_t FMC_PMEM_MEMHIZ_Msk = 0xFF000000;

    // FMC_PATT fields
    inline constexpr uint32_t FMC_PATT_ATTSET_Pos = 0;
    inline constexpr uint32_t FMC_PATT_ATTSET_Msk = 0x000000FF;
    inline constexpr uint32_t FMC_PATT_ATTWAIT_Pos = 8;
    inline constexpr uint32_t FMC_PATT_ATTWAIT_Msk = 0x0000FF00;
    inline constexpr uint32_t FMC_PATT_ATTHOLD_Pos = 16;
    inline constexpr uint32_t FMC_PATT_ATTHOLD_Msk = 0x00FF0000;
    inline constexpr uint32_t FMC_PATT_ATTHIZ_Pos = 24;
    inline constexpr uint32_t FMC_PATT_ATTHIZ_Msk = 0xFF000000;

    // FMC_ECCR fields
    inline constexpr uint32_t FMC_ECCR_ECC_Pos = 0;
    inline constexpr uint32_t FMC_ECCR_ECC_Msk = 0xFFFFFFFF;

    // FMC_BWTR1 fields
    inline constexpr uint32_t FMC_BWTR1_ADDSET_Pos = 0;
    inline constexpr uint32_t FMC_BWTR1_ADDSET_Msk = 0x0000000F;
    inline constexpr uint32_t FMC_BWTR1_ADDHLD_Pos = 4;
    inline constexpr uint32_t FMC_BWTR1_ADDHLD_Msk = 0x000000F0;
    inline constexpr uint32_t FMC_BWTR1_DATAST_Pos = 8;
    inline constexpr uint32_t FMC_BWTR1_DATAST_Msk = 0x0000FF00;
    inline constexpr uint32_t FMC_BWTR1_BUSTURN_Pos = 16;
    inline constexpr uint32_t FMC_BWTR1_BUSTURN_Msk = 0x000F0000;
    inline constexpr uint32_t FMC_BWTR1_ACCMOD_Pos = 28;
    inline constexpr uint32_t FMC_BWTR1_ACCMOD_Msk = 0x30000000;

    // FMC_BWTR2 fields
    inline constexpr uint32_t FMC_BWTR2_ADDSET_Pos = 0;
    inline constexpr uint32_t FMC_BWTR2_ADDSET_Msk = 0x0000000F;
    inline constexpr uint32_t FMC_BWTR2_ADDHLD_Pos = 4;
    inline constexpr uint32_t FMC_BWTR2_ADDHLD_Msk = 0x000000F0;
    inline constexpr uint32_t FMC_BWTR2_DATAST_Pos = 8;
    inline constexpr uint32_t FMC_BWTR2_DATAST_Msk = 0x0000FF00;
    inline constexpr uint32_t FMC_BWTR2_BUSTURN_Pos = 16;
    inline constexpr uint32_t FMC_BWTR2_BUSTURN_Msk = 0x000F0000;
    inline constexpr uint32_t FMC_BWTR2_ACCMOD_Pos = 28;
    inline constexpr uint32_t FMC_BWTR2_ACCMOD_Msk = 0x30000000;

    // FMC_BWTR3 fields
    inline constexpr uint32_t FMC_BWTR3_ADDSET_Pos = 0;
    inline constexpr uint32_t FMC_BWTR3_ADDSET_Msk = 0x0000000F;
    inline constexpr uint32_t FMC_BWTR3_ADDHLD_Pos = 4;
    inline constexpr uint32_t FMC_BWTR3_ADDHLD_Msk = 0x000000F0;
    inline constexpr uint32_t FMC_BWTR3_DATAST_Pos = 8;
    inline constexpr uint32_t FMC_BWTR3_DATAST_Msk = 0x0000FF00;
    inline constexpr uint32_t FMC_BWTR3_BUSTURN_Pos = 16;
    inline constexpr uint32_t FMC_BWTR3_BUSTURN_Msk = 0x000F0000;
    inline constexpr uint32_t FMC_BWTR3_ACCMOD_Pos = 28;
    inline constexpr uint32_t FMC_BWTR3_ACCMOD_Msk = 0x30000000;

    // FMC_BWTR4 fields
    inline constexpr uint32_t FMC_BWTR4_ADDSET_Pos = 0;
    inline constexpr uint32_t FMC_BWTR4_ADDSET_Msk = 0x0000000F;
    inline constexpr uint32_t FMC_BWTR4_ADDHLD_Pos = 4;
    inline constexpr uint32_t FMC_BWTR4_ADDHLD_Msk = 0x000000F0;
    inline constexpr uint32_t FMC_BWTR4_DATAST_Pos = 8;
    inline constexpr uint32_t FMC_BWTR4_DATAST_Msk = 0x0000FF00;
    inline constexpr uint32_t FMC_BWTR4_BUSTURN_Pos = 16;
    inline constexpr uint32_t FMC_BWTR4_BUSTURN_Msk = 0x000F0000;
    inline constexpr uint32_t FMC_BWTR4_ACCMOD_Pos = 28;
    inline constexpr uint32_t FMC_BWTR4_ACCMOD_Msk = 0x30000000;

    // FMC_SDCR1 fields
    inline constexpr uint32_t FMC_SDCR1_NC_Pos = 0;
    inline constexpr uint32_t FMC_SDCR1_NC_Msk = 0x00000003;
    inline constexpr uint32_t FMC_SDCR1_NR_Pos = 2;
    inline constexpr uint32_t FMC_SDCR1_NR_Msk = 0x0000000C;
    inline constexpr uint32_t FMC_SDCR1_MWID_Pos = 4;
    inline constexpr uint32_t FMC_SDCR1_MWID_Msk = 0x00000030;
    inline constexpr uint32_t FMC_SDCR1_NB_Pos = 6;
    inline constexpr uint32_t FMC_SDCR1_NB_Msk = 0x00000040;
    inline constexpr uint32_t FMC_SDCR1_NB = (1U << 6);
    inline constexpr uint32_t FMC_SDCR1_CAS_Pos = 7;
    inline constexpr uint32_t FMC_SDCR1_CAS_Msk = 0x00000180;
    inline constexpr uint32_t FMC_SDCR1_WP_Pos = 9;
    inline constexpr uint32_t FMC_SDCR1_WP_Msk = 0x00000200;
    inline constexpr uint32_t FMC_SDCR1_WP = (1U << 9);
    inline constexpr uint32_t FMC_SDCR1_SDCLK_Pos = 10;
    inline constexpr uint32_t FMC_SDCR1_SDCLK_Msk = 0x00000C00;
    inline constexpr uint32_t FMC_SDCR1_RBURST_Pos = 12;
    inline constexpr uint32_t FMC_SDCR1_RBURST_Msk = 0x00001000;
    inline constexpr uint32_t FMC_SDCR1_RBURST = (1U << 12);
    inline constexpr uint32_t FMC_SDCR1_RPIPE_Pos = 13;
    inline constexpr uint32_t FMC_SDCR1_RPIPE_Msk = 0x00006000;

    // FMC_SDCR2 fields
    inline constexpr uint32_t FMC_SDCR2_NC_Pos = 0;
    inline constexpr uint32_t FMC_SDCR2_NC_Msk = 0x00000003;
    inline constexpr uint32_t FMC_SDCR2_NR_Pos = 2;
    inline constexpr uint32_t FMC_SDCR2_NR_Msk = 0x0000000C;
    inline constexpr uint32_t FMC_SDCR2_MWID_Pos = 4;
    inline constexpr uint32_t FMC_SDCR2_MWID_Msk = 0x00000030;
    inline constexpr uint32_t FMC_SDCR2_NB_Pos = 6;
    inline constexpr uint32_t FMC_SDCR2_NB_Msk = 0x00000040;
    inline constexpr uint32_t FMC_SDCR2_NB = (1U << 6);
    inline constexpr uint32_t FMC_SDCR2_CAS_Pos = 7;
    inline constexpr uint32_t FMC_SDCR2_CAS_Msk = 0x00000180;
    inline constexpr uint32_t FMC_SDCR2_WP_Pos = 9;
    inline constexpr uint32_t FMC_SDCR2_WP_Msk = 0x00000200;
    inline constexpr uint32_t FMC_SDCR2_WP = (1U << 9);
    inline constexpr uint32_t FMC_SDCR2_SDCLK_Pos = 10;
    inline constexpr uint32_t FMC_SDCR2_SDCLK_Msk = 0x00000C00;
    inline constexpr uint32_t FMC_SDCR2_RBURST_Pos = 12;
    inline constexpr uint32_t FMC_SDCR2_RBURST_Msk = 0x00001000;
    inline constexpr uint32_t FMC_SDCR2_RBURST = (1U << 12);
    inline constexpr uint32_t FMC_SDCR2_RPIPE_Pos = 13;
    inline constexpr uint32_t FMC_SDCR2_RPIPE_Msk = 0x00006000;

    // FMC_SDTR1 fields
    inline constexpr uint32_t FMC_SDTR1_TMRD_Pos = 0;
    inline constexpr uint32_t FMC_SDTR1_TMRD_Msk = 0x0000000F;
    inline constexpr uint32_t FMC_SDTR1_TXSR_Pos = 4;
    inline constexpr uint32_t FMC_SDTR1_TXSR_Msk = 0x000000F0;
    inline constexpr uint32_t FMC_SDTR1_TRAS_Pos = 8;
    inline constexpr uint32_t FMC_SDTR1_TRAS_Msk = 0x00000F00;
    inline constexpr uint32_t FMC_SDTR1_TRC_Pos = 12;
    inline constexpr uint32_t FMC_SDTR1_TRC_Msk = 0x0000F000;
    inline constexpr uint32_t FMC_SDTR1_TWR_Pos = 16;
    inline constexpr uint32_t FMC_SDTR1_TWR_Msk = 0x000F0000;
    inline constexpr uint32_t FMC_SDTR1_TRP_Pos = 20;
    inline constexpr uint32_t FMC_SDTR1_TRP_Msk = 0x00F00000;
    inline constexpr uint32_t FMC_SDTR1_TRCD_Pos = 24;
    inline constexpr uint32_t FMC_SDTR1_TRCD_Msk = 0x0F000000;

    // FMC_SDTR2 fields
    inline constexpr uint32_t FMC_SDTR2_TMRD_Pos = 0;
    inline constexpr uint32_t FMC_SDTR2_TMRD_Msk = 0x0000000F;
    inline constexpr uint32_t FMC_SDTR2_TXSR_Pos = 4;
    inline constexpr uint32_t FMC_SDTR2_TXSR_Msk = 0x000000F0;
    inline constexpr uint32_t FMC_SDTR2_TRAS_Pos = 8;
    inline constexpr uint32_t FMC_SDTR2_TRAS_Msk = 0x00000F00;
    inline constexpr uint32_t FMC_SDTR2_TRC_Pos = 12;
    inline constexpr uint32_t FMC_SDTR2_TRC_Msk = 0x0000F000;
    inline constexpr uint32_t FMC_SDTR2_TWR_Pos = 16;
    inline constexpr uint32_t FMC_SDTR2_TWR_Msk = 0x000F0000;
    inline constexpr uint32_t FMC_SDTR2_TRP_Pos = 20;
    inline constexpr uint32_t FMC_SDTR2_TRP_Msk = 0x00F00000;
    inline constexpr uint32_t FMC_SDTR2_TRCD_Pos = 24;
    inline constexpr uint32_t FMC_SDTR2_TRCD_Msk = 0x0F000000;

    // FMC_SDCMR fields
    inline constexpr uint32_t FMC_SDCMR_MODE_Pos = 0;
    inline constexpr uint32_t FMC_SDCMR_MODE_Msk = 0x00000007;
    inline constexpr uint32_t FMC_SDCMR_CTB2_Pos = 3;
    inline constexpr uint32_t FMC_SDCMR_CTB2_Msk = 0x00000008;
    inline constexpr uint32_t FMC_SDCMR_CTB2 = (1U << 3);
    inline constexpr uint32_t FMC_SDCMR_CTB1_Pos = 4;
    inline constexpr uint32_t FMC_SDCMR_CTB1_Msk = 0x00000010;
    inline constexpr uint32_t FMC_SDCMR_CTB1 = (1U << 4);
    inline constexpr uint32_t FMC_SDCMR_NRFS_Pos = 5;
    inline constexpr uint32_t FMC_SDCMR_NRFS_Msk = 0x000001E0;
    inline constexpr uint32_t FMC_SDCMR_MRD_Pos = 9;
    inline constexpr uint32_t FMC_SDCMR_MRD_Msk = 0x007FFE00;

    // FMC_SDRTR fields
    inline constexpr uint32_t FMC_SDRTR_CRE_Pos = 0;
    inline constexpr uint32_t FMC_SDRTR_CRE_Msk = 0x00000001;
    inline constexpr uint32_t FMC_SDRTR_CRE = (1U << 0);
    inline constexpr uint32_t FMC_SDRTR_COUNT_Pos = 1;
    inline constexpr uint32_t FMC_SDRTR_COUNT_Msk = 0x00003FFE;
    inline constexpr uint32_t FMC_SDRTR_REIE_Pos = 14;
    inline constexpr uint32_t FMC_SDRTR_REIE_Msk = 0x00004000;
    inline constexpr uint32_t FMC_SDRTR_REIE = (1U << 14);

    // FMC_SDSR fields
    inline constexpr uint32_t FMC_SDSR_RE_Pos = 0;
    inline constexpr uint32_t FMC_SDSR_RE_Msk = 0x00000001;
    inline constexpr uint32_t FMC_SDSR_RE = (1U << 0);
    inline constexpr uint32_t FMC_SDSR_MODES1_Pos = 1;
    inline constexpr uint32_t FMC_SDSR_MODES1_Msk = 0x00000006;
    inline constexpr uint32_t FMC_SDSR_MODES2_Pos = 3;
    inline constexpr uint32_t FMC_SDSR_MODES2_Msk = 0x00000018;

} // namespace FMC

// Peripheral instances (lowercase to avoid namespace collision)
namespace periph {
    inline auto* const fmc = reinterpret_cast<FMC_t*>(0x52004000);
} // namespace periph

} // namespace sbl::hw::reg

#endif // SBL_HW_REG_STM32H750_FMC_HPP
