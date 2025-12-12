/**
 * @file stm32h750.hpp
 * @brief Register definitions for STM32H750
 *
 * Generated from: stm32h750.svd
 * Generator: sbl-svd-tools
 * Generated: 2025-12-11T23:12:55.630102
 *
 * DO NOT EDIT - Regenerate from SVD source
 */

#ifndef SBL_HW_REG_STM32H750_PWR_HPP
#define SBL_HW_REG_STM32H750_PWR_HPP

#include <cstdint>

namespace sbl::hw::reg {

/** PWR */
struct PWR_t {
    volatile uint32_t PWR_CR1;  ///< PWR control register 1
    volatile uint32_t PWR_CSR1;  ///< PWR control status register 1
    volatile uint32_t PWR_CR2;  ///< This register is not reset by wakeup from           Stand...
    volatile uint32_t PWR_CR3;  ///< Reset only by POR only, not reset by wakeup           fro...
    volatile uint32_t PWR_CPUCR;  ///< This register allows controlling CPU1           power.
    uint8_t _reserved0[4];
    volatile uint32_t PWR_D3CR;  ///< This register allows controlling D3 domain           powe...
    uint8_t _reserved1[4];
    volatile uint32_t PWR_WKUPCR;  ///< reset only by system reset, not reset by           wakeup...
    volatile uint32_t PWR_WKUPFR;  ///< reset only by system reset, not reset by           wakeup...
    volatile uint32_t PWR_WKUPEPR;  ///< Reset only by system reset, not reset by           wakeup...
};

namespace PWR {
    // PWR_CR1 fields
    inline constexpr uint32_t PWR_CR1_LPDS_Pos = 0;
    inline constexpr uint32_t PWR_CR1_LPDS_Msk = 0x00000001;
    inline constexpr uint32_t PWR_CR1_LPDS = (1U << 0);
    inline constexpr uint32_t PWR_CR1_PVDE_Pos = 4;
    inline constexpr uint32_t PWR_CR1_PVDE_Msk = 0x00000010;
    inline constexpr uint32_t PWR_CR1_PVDE = (1U << 4);
    inline constexpr uint32_t PWR_CR1_PLS_Pos = 5;
    inline constexpr uint32_t PWR_CR1_PLS_Msk = 0x000000E0;
    inline constexpr uint32_t PWR_CR1_DBP_Pos = 8;
    inline constexpr uint32_t PWR_CR1_DBP_Msk = 0x00000100;
    inline constexpr uint32_t PWR_CR1_DBP = (1U << 8);
    inline constexpr uint32_t PWR_CR1_FLPS_Pos = 9;
    inline constexpr uint32_t PWR_CR1_FLPS_Msk = 0x00000200;
    inline constexpr uint32_t PWR_CR1_FLPS = (1U << 9);
    inline constexpr uint32_t PWR_CR1_SVOS_Pos = 14;
    inline constexpr uint32_t PWR_CR1_SVOS_Msk = 0x0000C000;
    inline constexpr uint32_t PWR_CR1_AVDEN_Pos = 16;
    inline constexpr uint32_t PWR_CR1_AVDEN_Msk = 0x00010000;
    inline constexpr uint32_t PWR_CR1_AVDEN = (1U << 16);
    inline constexpr uint32_t PWR_CR1_ALS_Pos = 17;
    inline constexpr uint32_t PWR_CR1_ALS_Msk = 0x00060000;

    // PWR_CSR1 fields
    inline constexpr uint32_t PWR_CSR1_PVDO_Pos = 4;
    inline constexpr uint32_t PWR_CSR1_PVDO_Msk = 0x00000010;
    inline constexpr uint32_t PWR_CSR1_PVDO = (1U << 4);
    inline constexpr uint32_t PWR_CSR1_ACTVOSRDY_Pos = 13;
    inline constexpr uint32_t PWR_CSR1_ACTVOSRDY_Msk = 0x00002000;
    inline constexpr uint32_t PWR_CSR1_ACTVOSRDY = (1U << 13);
    inline constexpr uint32_t PWR_CSR1_ACTVOS_Pos = 14;
    inline constexpr uint32_t PWR_CSR1_ACTVOS_Msk = 0x0000C000;
    inline constexpr uint32_t PWR_CSR1_AVDO_Pos = 16;
    inline constexpr uint32_t PWR_CSR1_AVDO_Msk = 0x00010000;
    inline constexpr uint32_t PWR_CSR1_AVDO = (1U << 16);

    // PWR_CR2 fields
    inline constexpr uint32_t PWR_CR2_BREN_Pos = 0;
    inline constexpr uint32_t PWR_CR2_BREN_Msk = 0x00000001;
    inline constexpr uint32_t PWR_CR2_BREN = (1U << 0);
    inline constexpr uint32_t PWR_CR2_MONEN_Pos = 4;
    inline constexpr uint32_t PWR_CR2_MONEN_Msk = 0x00000010;
    inline constexpr uint32_t PWR_CR2_MONEN = (1U << 4);
    inline constexpr uint32_t PWR_CR2_BRRDY_Pos = 16;
    inline constexpr uint32_t PWR_CR2_BRRDY_Msk = 0x00010000;
    inline constexpr uint32_t PWR_CR2_BRRDY = (1U << 16);
    inline constexpr uint32_t PWR_CR2_VBATL_Pos = 20;
    inline constexpr uint32_t PWR_CR2_VBATL_Msk = 0x00100000;
    inline constexpr uint32_t PWR_CR2_VBATL = (1U << 20);
    inline constexpr uint32_t PWR_CR2_VBATH_Pos = 21;
    inline constexpr uint32_t PWR_CR2_VBATH_Msk = 0x00200000;
    inline constexpr uint32_t PWR_CR2_VBATH = (1U << 21);
    inline constexpr uint32_t PWR_CR2_TEMPL_Pos = 22;
    inline constexpr uint32_t PWR_CR2_TEMPL_Msk = 0x00400000;
    inline constexpr uint32_t PWR_CR2_TEMPL = (1U << 22);
    inline constexpr uint32_t PWR_CR2_TEMPH_Pos = 23;
    inline constexpr uint32_t PWR_CR2_TEMPH_Msk = 0x00800000;
    inline constexpr uint32_t PWR_CR2_TEMPH = (1U << 23);

    // PWR_CR3 fields
    inline constexpr uint32_t PWR_CR3_BYPASS_Pos = 0;
    inline constexpr uint32_t PWR_CR3_BYPASS_Msk = 0x00000001;
    inline constexpr uint32_t PWR_CR3_BYPASS = (1U << 0);
    inline constexpr uint32_t PWR_CR3_LDOEN_Pos = 1;
    inline constexpr uint32_t PWR_CR3_LDOEN_Msk = 0x00000002;
    inline constexpr uint32_t PWR_CR3_LDOEN = (1U << 1);
    inline constexpr uint32_t PWR_CR3_SDEN_Pos = 2;
    inline constexpr uint32_t PWR_CR3_SDEN_Msk = 0x00000004;
    inline constexpr uint32_t PWR_CR3_SDEN = (1U << 2);
    inline constexpr uint32_t PWR_CR3_VBE_Pos = 8;
    inline constexpr uint32_t PWR_CR3_VBE_Msk = 0x00000100;
    inline constexpr uint32_t PWR_CR3_VBE = (1U << 8);
    inline constexpr uint32_t PWR_CR3_VBRS_Pos = 9;
    inline constexpr uint32_t PWR_CR3_VBRS_Msk = 0x00000200;
    inline constexpr uint32_t PWR_CR3_VBRS = (1U << 9);
    inline constexpr uint32_t PWR_CR3_USB33DEN_Pos = 24;
    inline constexpr uint32_t PWR_CR3_USB33DEN_Msk = 0x01000000;
    inline constexpr uint32_t PWR_CR3_USB33DEN = (1U << 24);
    inline constexpr uint32_t PWR_CR3_USBREGEN_Pos = 25;
    inline constexpr uint32_t PWR_CR3_USBREGEN_Msk = 0x02000000;
    inline constexpr uint32_t PWR_CR3_USBREGEN = (1U << 25);
    inline constexpr uint32_t PWR_CR3_USB33RDY_Pos = 26;
    inline constexpr uint32_t PWR_CR3_USB33RDY_Msk = 0x04000000;
    inline constexpr uint32_t PWR_CR3_USB33RDY = (1U << 26);

    // PWR_CPUCR fields
    inline constexpr uint32_t PWR_CPUCR_PDDS_D1_Pos = 0;
    inline constexpr uint32_t PWR_CPUCR_PDDS_D1_Msk = 0x00000001;
    inline constexpr uint32_t PWR_CPUCR_PDDS_D1 = (1U << 0);
    inline constexpr uint32_t PWR_CPUCR_PDDS_D2_Pos = 1;
    inline constexpr uint32_t PWR_CPUCR_PDDS_D2_Msk = 0x00000002;
    inline constexpr uint32_t PWR_CPUCR_PDDS_D2 = (1U << 1);
    inline constexpr uint32_t PWR_CPUCR_PDDS_D3_Pos = 2;
    inline constexpr uint32_t PWR_CPUCR_PDDS_D3_Msk = 0x00000004;
    inline constexpr uint32_t PWR_CPUCR_PDDS_D3 = (1U << 2);
    inline constexpr uint32_t PWR_CPUCR_STOPF_Pos = 5;
    inline constexpr uint32_t PWR_CPUCR_STOPF_Msk = 0x00000020;
    inline constexpr uint32_t PWR_CPUCR_STOPF = (1U << 5);
    inline constexpr uint32_t PWR_CPUCR_SBF_Pos = 6;
    inline constexpr uint32_t PWR_CPUCR_SBF_Msk = 0x00000040;
    inline constexpr uint32_t PWR_CPUCR_SBF = (1U << 6);
    inline constexpr uint32_t PWR_CPUCR_SBF_D1_Pos = 7;
    inline constexpr uint32_t PWR_CPUCR_SBF_D1_Msk = 0x00000080;
    inline constexpr uint32_t PWR_CPUCR_SBF_D1 = (1U << 7);
    inline constexpr uint32_t PWR_CPUCR_SBF_D2_Pos = 8;
    inline constexpr uint32_t PWR_CPUCR_SBF_D2_Msk = 0x00000100;
    inline constexpr uint32_t PWR_CPUCR_SBF_D2 = (1U << 8);
    inline constexpr uint32_t PWR_CPUCR_CSSF_Pos = 9;
    inline constexpr uint32_t PWR_CPUCR_CSSF_Msk = 0x00000200;
    inline constexpr uint32_t PWR_CPUCR_CSSF = (1U << 9);
    inline constexpr uint32_t PWR_CPUCR_RUN_D3_Pos = 11;
    inline constexpr uint32_t PWR_CPUCR_RUN_D3_Msk = 0x00000800;
    inline constexpr uint32_t PWR_CPUCR_RUN_D3 = (1U << 11);

    // PWR_D3CR fields
    inline constexpr uint32_t PWR_D3CR_VOSRDY_Pos = 13;
    inline constexpr uint32_t PWR_D3CR_VOSRDY_Msk = 0x00002000;
    inline constexpr uint32_t PWR_D3CR_VOSRDY = (1U << 13);
    inline constexpr uint32_t PWR_D3CR_VOS_Pos = 14;
    inline constexpr uint32_t PWR_D3CR_VOS_Msk = 0x0000C000;

    // PWR_WKUPCR fields
    inline constexpr uint32_t PWR_WKUPCR_WKUPC_Pos = 0;
    inline constexpr uint32_t PWR_WKUPCR_WKUPC_Msk = 0x0000003F;

    // PWR_WKUPFR fields
    inline constexpr uint32_t PWR_WKUPFR_WKUPF1_Pos = 0;
    inline constexpr uint32_t PWR_WKUPFR_WKUPF1_Msk = 0x00000001;
    inline constexpr uint32_t PWR_WKUPFR_WKUPF1 = (1U << 0);
    inline constexpr uint32_t PWR_WKUPFR_WKUPF2_Pos = 1;
    inline constexpr uint32_t PWR_WKUPFR_WKUPF2_Msk = 0x00000002;
    inline constexpr uint32_t PWR_WKUPFR_WKUPF2 = (1U << 1);
    inline constexpr uint32_t PWR_WKUPFR_WKUPF3_Pos = 2;
    inline constexpr uint32_t PWR_WKUPFR_WKUPF3_Msk = 0x00000004;
    inline constexpr uint32_t PWR_WKUPFR_WKUPF3 = (1U << 2);
    inline constexpr uint32_t PWR_WKUPFR_WKUPF4_Pos = 3;
    inline constexpr uint32_t PWR_WKUPFR_WKUPF4_Msk = 0x00000008;
    inline constexpr uint32_t PWR_WKUPFR_WKUPF4 = (1U << 3);
    inline constexpr uint32_t PWR_WKUPFR_WKUPF5_Pos = 4;
    inline constexpr uint32_t PWR_WKUPFR_WKUPF5_Msk = 0x00000010;
    inline constexpr uint32_t PWR_WKUPFR_WKUPF5 = (1U << 4);
    inline constexpr uint32_t PWR_WKUPFR_WKUPF6_Pos = 5;
    inline constexpr uint32_t PWR_WKUPFR_WKUPF6_Msk = 0x00000020;
    inline constexpr uint32_t PWR_WKUPFR_WKUPF6 = (1U << 5);

    // PWR_WKUPEPR fields
    inline constexpr uint32_t PWR_WKUPEPR_WKUPEN1_Pos = 0;
    inline constexpr uint32_t PWR_WKUPEPR_WKUPEN1_Msk = 0x00000001;
    inline constexpr uint32_t PWR_WKUPEPR_WKUPEN1 = (1U << 0);
    inline constexpr uint32_t PWR_WKUPEPR_WKUPEN2_Pos = 1;
    inline constexpr uint32_t PWR_WKUPEPR_WKUPEN2_Msk = 0x00000002;
    inline constexpr uint32_t PWR_WKUPEPR_WKUPEN2 = (1U << 1);
    inline constexpr uint32_t PWR_WKUPEPR_WKUPEN3_Pos = 2;
    inline constexpr uint32_t PWR_WKUPEPR_WKUPEN3_Msk = 0x00000004;
    inline constexpr uint32_t PWR_WKUPEPR_WKUPEN3 = (1U << 2);
    inline constexpr uint32_t PWR_WKUPEPR_WKUPEN4_Pos = 3;
    inline constexpr uint32_t PWR_WKUPEPR_WKUPEN4_Msk = 0x00000008;
    inline constexpr uint32_t PWR_WKUPEPR_WKUPEN4 = (1U << 3);
    inline constexpr uint32_t PWR_WKUPEPR_WKUPEN5_Pos = 4;
    inline constexpr uint32_t PWR_WKUPEPR_WKUPEN5_Msk = 0x00000010;
    inline constexpr uint32_t PWR_WKUPEPR_WKUPEN5 = (1U << 4);
    inline constexpr uint32_t PWR_WKUPEPR_WKUPEN6_Pos = 5;
    inline constexpr uint32_t PWR_WKUPEPR_WKUPEN6_Msk = 0x00000020;
    inline constexpr uint32_t PWR_WKUPEPR_WKUPEN6 = (1U << 5);
    inline constexpr uint32_t PWR_WKUPEPR_WKUPP1_Pos = 8;
    inline constexpr uint32_t PWR_WKUPEPR_WKUPP1_Msk = 0x00000100;
    inline constexpr uint32_t PWR_WKUPEPR_WKUPP1 = (1U << 8);
    inline constexpr uint32_t PWR_WKUPEPR_WKUPP2_Pos = 9;
    inline constexpr uint32_t PWR_WKUPEPR_WKUPP2_Msk = 0x00000200;
    inline constexpr uint32_t PWR_WKUPEPR_WKUPP2 = (1U << 9);
    inline constexpr uint32_t PWR_WKUPEPR_WKUPP3_Pos = 10;
    inline constexpr uint32_t PWR_WKUPEPR_WKUPP3_Msk = 0x00000400;
    inline constexpr uint32_t PWR_WKUPEPR_WKUPP3 = (1U << 10);
    inline constexpr uint32_t PWR_WKUPEPR_WKUPP4_Pos = 11;
    inline constexpr uint32_t PWR_WKUPEPR_WKUPP4_Msk = 0x00000800;
    inline constexpr uint32_t PWR_WKUPEPR_WKUPP4 = (1U << 11);
    inline constexpr uint32_t PWR_WKUPEPR_WKUPP5_Pos = 12;
    inline constexpr uint32_t PWR_WKUPEPR_WKUPP5_Msk = 0x00001000;
    inline constexpr uint32_t PWR_WKUPEPR_WKUPP5 = (1U << 12);
    inline constexpr uint32_t PWR_WKUPEPR_WKUPP6_Pos = 13;
    inline constexpr uint32_t PWR_WKUPEPR_WKUPP6_Msk = 0x00002000;
    inline constexpr uint32_t PWR_WKUPEPR_WKUPP6 = (1U << 13);
    inline constexpr uint32_t PWR_WKUPEPR_WKUPPUPD1_Pos = 16;
    inline constexpr uint32_t PWR_WKUPEPR_WKUPPUPD1_Msk = 0x00030000;
    inline constexpr uint32_t PWR_WKUPEPR_WKUPPUPD2_Pos = 18;
    inline constexpr uint32_t PWR_WKUPEPR_WKUPPUPD2_Msk = 0x000C0000;
    inline constexpr uint32_t PWR_WKUPEPR_WKUPPUPD3_Pos = 20;
    inline constexpr uint32_t PWR_WKUPEPR_WKUPPUPD3_Msk = 0x00300000;
    inline constexpr uint32_t PWR_WKUPEPR_WKUPPUPD4_Pos = 22;
    inline constexpr uint32_t PWR_WKUPEPR_WKUPPUPD4_Msk = 0x00C00000;
    inline constexpr uint32_t PWR_WKUPEPR_WKUPPUPD5_Pos = 24;
    inline constexpr uint32_t PWR_WKUPEPR_WKUPPUPD5_Msk = 0x03000000;
    inline constexpr uint32_t PWR_WKUPEPR_WKUPPUPD6_Pos = 26;
    inline constexpr uint32_t PWR_WKUPEPR_WKUPPUPD6_Msk = 0x0C000000;

} // namespace PWR

// Peripheral instances (lowercase to avoid namespace collision)
namespace periph {
    inline auto* const pwr = reinterpret_cast<PWR_t*>(0x58024800);
} // namespace periph

} // namespace sbl::hw::reg

#endif // SBL_HW_REG_STM32H750_PWR_HPP
