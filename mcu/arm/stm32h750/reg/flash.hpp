/**
 * @file flash.hpp
 * @brief Register definitions for STM32H750 - flash
 *
 * Generated from: stm32h750.svd.patched
 * Generator: cecrops
 * Generated: 2025-12-16T16:03:28.274639
 *
 * DO NOT EDIT - Regenerate with: cecrops generate <mcu-dir>
 */

#ifndef SBL_HW_REG_STM32H750_FLASH_HPP
#define SBL_HW_REG_STM32H750_FLASH_HPP

#include <cstdint>

namespace sbl::hw::reg {

/** Flash */
struct Flash_t {
    volatile uint32_t ACR;  ///< Access control register
    volatile uint32_t KEYR1;  ///< FLASH key register for bank 1
    volatile uint32_t OPTKEYR;  ///< FLASH option key register
    volatile uint32_t CR1;  ///< FLASH control register for bank           1
    volatile uint32_t SR1;  ///< FLASH status register for bank           1
    volatile uint32_t CCR1;  ///< FLASH clear control register for bank           1
    volatile uint32_t OPTCR;  ///< FLASH option control register
    volatile uint32_t OPTSR_CUR;  ///< FLASH option status register
    volatile uint32_t OPTSR_PRG;  ///< FLASH option status register
    volatile uint32_t OPTCCR;  ///< FLASH option clear control           register
    volatile uint32_t PRAR_CUR1;  ///< FLASH protection address for bank           1
    volatile uint32_t PRAR_PRG1;  ///< FLASH protection address for bank           1
    volatile uint32_t SCAR_CUR1;  ///< FLASH secure address for bank           1
    volatile uint32_t SCAR_PRG1;  ///< FLASH secure address for bank           1
    volatile uint32_t WPSN_CUR1R;  ///< FLASH write sector protection for bank           1
    volatile uint32_t WPSN_PRG1R;  ///< FLASH write sector protection for bank           1
    volatile uint32_t BOOT_CURR;  ///< FLASH register with boot           address
    volatile uint32_t BOOT_PRGR;  ///< FLASH register with boot           address
    uint8_t _reserved0[8];
    volatile uint32_t CRCCR1;  ///< FLASH CRC control register for bank           1
    volatile uint32_t CRCSADD1R;  ///< FLASH CRC start address register for bank           1
    volatile uint32_t CRCEADD1R;  ///< FLASH CRC end address register for bank           1
    volatile uint32_t CRCDATAR;  ///< FLASH CRC data register
    volatile uint32_t ECC_FA1R;  ///< FLASH ECC fail address for bank           1
    uint8_t _reserved1[156];
    volatile uint32_t ACR_;  ///< Access control register
    volatile uint32_t KEYR2;  ///< FLASH key register for bank 2
    volatile uint32_t OPTKEYR_;  ///< FLASH option key register
    volatile uint32_t CR2;  ///< FLASH control register for bank           2
    volatile uint32_t SR2;  ///< FLASH status register for bank           2
    volatile uint32_t CCR2;  ///< FLASH clear control register for bank           2
    volatile uint32_t OPTCR_;  ///< FLASH option control register
    volatile uint32_t OPTSR_CUR_;  ///< FLASH option status register
    volatile uint32_t OPTSR_PRG_;  ///< FLASH option status register
    volatile uint32_t OPTCCR_;  ///< FLASH option clear control           register
    volatile uint32_t PRAR_CUR2;  ///< FLASH protection address for bank           1
    volatile uint32_t PRAR_PRG2;  ///< FLASH protection address for bank           2
    volatile uint32_t SCAR_CUR2;  ///< FLASH secure address for bank           2
    volatile uint32_t SCAR_PRG2;  ///< FLASH secure address for bank           2
    volatile uint32_t WPSN_CUR2R;  ///< FLASH write sector protection for bank           2
    volatile uint32_t WPSN_PRG2R;  ///< FLASH write sector protection for bank           2
    volatile uint32_t BOOT_CURR_;  ///< FLASH register with boot           address
    volatile uint32_t BOOT_PRGR_;  ///< FLASH register with boot           address
    uint8_t _reserved2[8];
    volatile uint32_t CRCCR2;  ///< FLASH CRC control register for bank           1
    volatile uint32_t CRCSADD2R;  ///< FLASH CRC start address register for bank           2
    volatile uint32_t CRCEADD2R;  ///< FLASH CRC end address register for bank           2
    volatile uint32_t CRCDATAR_;  ///< FLASH CRC data register
    volatile uint32_t ECC_FA2R;  ///< FLASH ECC fail address for bank           2
};

namespace Flash {
    // ACR fields
    inline constexpr uint32_t ACR_LATENCY_Pos = 0;
    inline constexpr uint32_t ACR_LATENCY_Msk = 0x0000000F;
    inline constexpr uint32_t ACR_WRHIGHFREQ_Pos = 4;
    inline constexpr uint32_t ACR_WRHIGHFREQ_Msk = 0x00000030;

    // KEYR1 fields
    inline constexpr uint32_t KEYR1_KEY1R_Pos = 0;
    inline constexpr uint32_t KEYR1_KEY1R_Msk = 0xFFFFFFFF;

    // OPTKEYR fields
    inline constexpr uint32_t OPTKEYR_OPTKEYR_Pos = 0;
    inline constexpr uint32_t OPTKEYR_OPTKEYR_Msk = 0xFFFFFFFF;

    // CR1 fields
    inline constexpr uint32_t CR1_LOCK1_Pos = 0;
    inline constexpr uint32_t CR1_LOCK1_Msk = 0x00000001;
    inline constexpr uint32_t CR1_LOCK1 = (1U << 0);
    inline constexpr uint32_t CR1_PG1_Pos = 1;
    inline constexpr uint32_t CR1_PG1_Msk = 0x00000002;
    inline constexpr uint32_t CR1_PG1 = (1U << 1);
    inline constexpr uint32_t CR1_SER1_Pos = 2;
    inline constexpr uint32_t CR1_SER1_Msk = 0x00000004;
    inline constexpr uint32_t CR1_SER1 = (1U << 2);
    inline constexpr uint32_t CR1_BER1_Pos = 3;
    inline constexpr uint32_t CR1_BER1_Msk = 0x00000008;
    inline constexpr uint32_t CR1_BER1 = (1U << 3);
    inline constexpr uint32_t CR1_PSIZE1_Pos = 4;
    inline constexpr uint32_t CR1_PSIZE1_Msk = 0x00000030;
    inline constexpr uint32_t CR1_FW1_Pos = 6;
    inline constexpr uint32_t CR1_FW1_Msk = 0x00000040;
    inline constexpr uint32_t CR1_FW1 = (1U << 6);
    inline constexpr uint32_t CR1_START1_Pos = 7;
    inline constexpr uint32_t CR1_START1_Msk = 0x00000080;
    inline constexpr uint32_t CR1_START1 = (1U << 7);
    inline constexpr uint32_t CR1_SNB1_Pos = 8;
    inline constexpr uint32_t CR1_SNB1_Msk = 0x00000700;
    inline constexpr uint32_t CR1_CRC_EN_Pos = 15;
    inline constexpr uint32_t CR1_CRC_EN_Msk = 0x00008000;
    inline constexpr uint32_t CR1_CRC_EN = (1U << 15);
    inline constexpr uint32_t CR1_EOPIE1_Pos = 16;
    inline constexpr uint32_t CR1_EOPIE1_Msk = 0x00010000;
    inline constexpr uint32_t CR1_EOPIE1 = (1U << 16);
    inline constexpr uint32_t CR1_WRPERRIE1_Pos = 17;
    inline constexpr uint32_t CR1_WRPERRIE1_Msk = 0x00020000;
    inline constexpr uint32_t CR1_WRPERRIE1 = (1U << 17);
    inline constexpr uint32_t CR1_PGSERRIE1_Pos = 18;
    inline constexpr uint32_t CR1_PGSERRIE1_Msk = 0x00040000;
    inline constexpr uint32_t CR1_PGSERRIE1 = (1U << 18);
    inline constexpr uint32_t CR1_STRBERRIE1_Pos = 19;
    inline constexpr uint32_t CR1_STRBERRIE1_Msk = 0x00080000;
    inline constexpr uint32_t CR1_STRBERRIE1 = (1U << 19);
    inline constexpr uint32_t CR1_INCERRIE1_Pos = 21;
    inline constexpr uint32_t CR1_INCERRIE1_Msk = 0x00200000;
    inline constexpr uint32_t CR1_INCERRIE1 = (1U << 21);
    inline constexpr uint32_t CR1_OPERRIE1_Pos = 22;
    inline constexpr uint32_t CR1_OPERRIE1_Msk = 0x00400000;
    inline constexpr uint32_t CR1_OPERRIE1 = (1U << 22);
    inline constexpr uint32_t CR1_RDPERRIE1_Pos = 23;
    inline constexpr uint32_t CR1_RDPERRIE1_Msk = 0x00800000;
    inline constexpr uint32_t CR1_RDPERRIE1 = (1U << 23);
    inline constexpr uint32_t CR1_RDSERRIE1_Pos = 24;
    inline constexpr uint32_t CR1_RDSERRIE1_Msk = 0x01000000;
    inline constexpr uint32_t CR1_RDSERRIE1 = (1U << 24);
    inline constexpr uint32_t CR1_SNECCERR1_Pos = 25;
    inline constexpr uint32_t CR1_SNECCERR1_Msk = 0x02000000;
    inline constexpr uint32_t CR1_SNECCERR1 = (1U << 25);
    inline constexpr uint32_t CR1_DBECCERRIE1_Pos = 26;
    inline constexpr uint32_t CR1_DBECCERRIE1_Msk = 0x04000000;
    inline constexpr uint32_t CR1_DBECCERRIE1 = (1U << 26);
    inline constexpr uint32_t CR1_CRCENDIE1_Pos = 27;
    inline constexpr uint32_t CR1_CRCENDIE1_Msk = 0x08000000;
    inline constexpr uint32_t CR1_CRCENDIE1 = (1U << 27);
    inline constexpr uint32_t CR1_CRCRDERRIE1_Pos = 28;
    inline constexpr uint32_t CR1_CRCRDERRIE1_Msk = 0x10000000;
    inline constexpr uint32_t CR1_CRCRDERRIE1 = (1U << 28);

    // SR1 fields
    inline constexpr uint32_t SR1_BSY1_Pos = 0;
    inline constexpr uint32_t SR1_BSY1_Msk = 0x00000001;
    inline constexpr uint32_t SR1_BSY1 = (1U << 0);
    inline constexpr uint32_t SR1_WBNE1_Pos = 1;
    inline constexpr uint32_t SR1_WBNE1_Msk = 0x00000002;
    inline constexpr uint32_t SR1_WBNE1 = (1U << 1);
    inline constexpr uint32_t SR1_QW1_Pos = 2;
    inline constexpr uint32_t SR1_QW1_Msk = 0x00000004;
    inline constexpr uint32_t SR1_QW1 = (1U << 2);
    inline constexpr uint32_t SR1_CRC_BUSY1_Pos = 3;
    inline constexpr uint32_t SR1_CRC_BUSY1_Msk = 0x00000008;
    inline constexpr uint32_t SR1_CRC_BUSY1 = (1U << 3);
    inline constexpr uint32_t SR1_EOP1_Pos = 16;
    inline constexpr uint32_t SR1_EOP1_Msk = 0x00010000;
    inline constexpr uint32_t SR1_EOP1 = (1U << 16);
    inline constexpr uint32_t SR1_WRPERR1_Pos = 17;
    inline constexpr uint32_t SR1_WRPERR1_Msk = 0x00020000;
    inline constexpr uint32_t SR1_WRPERR1 = (1U << 17);
    inline constexpr uint32_t SR1_PGSERR1_Pos = 18;
    inline constexpr uint32_t SR1_PGSERR1_Msk = 0x00040000;
    inline constexpr uint32_t SR1_PGSERR1 = (1U << 18);
    inline constexpr uint32_t SR1_STRBERR1_Pos = 19;
    inline constexpr uint32_t SR1_STRBERR1_Msk = 0x00080000;
    inline constexpr uint32_t SR1_STRBERR1 = (1U << 19);
    inline constexpr uint32_t SR1_INCERR1_Pos = 21;
    inline constexpr uint32_t SR1_INCERR1_Msk = 0x00200000;
    inline constexpr uint32_t SR1_INCERR1 = (1U << 21);
    inline constexpr uint32_t SR1_OPERR1_Pos = 22;
    inline constexpr uint32_t SR1_OPERR1_Msk = 0x00400000;
    inline constexpr uint32_t SR1_OPERR1 = (1U << 22);
    inline constexpr uint32_t SR1_RDPERR1_Pos = 23;
    inline constexpr uint32_t SR1_RDPERR1_Msk = 0x00800000;
    inline constexpr uint32_t SR1_RDPERR1 = (1U << 23);
    inline constexpr uint32_t SR1_RDSERR1_Pos = 24;
    inline constexpr uint32_t SR1_RDSERR1_Msk = 0x01000000;
    inline constexpr uint32_t SR1_RDSERR1 = (1U << 24);
    inline constexpr uint32_t SR1_SNECCERR_Pos = 25;
    inline constexpr uint32_t SR1_SNECCERR_Msk = 0x02000000;
    inline constexpr uint32_t SR1_SNECCERR = (1U << 25);
    inline constexpr uint32_t SR1_DBECCERR1_Pos = 26;
    inline constexpr uint32_t SR1_DBECCERR1_Msk = 0x04000000;
    inline constexpr uint32_t SR1_DBECCERR1 = (1U << 26);
    inline constexpr uint32_t SR1_CRCEND1_Pos = 27;
    inline constexpr uint32_t SR1_CRCEND1_Msk = 0x08000000;
    inline constexpr uint32_t SR1_CRCEND1 = (1U << 27);
    inline constexpr uint32_t SR1_CRCRDERR1_Pos = 28;
    inline constexpr uint32_t SR1_CRCRDERR1_Msk = 0x10000000;
    inline constexpr uint32_t SR1_CRCRDERR1 = (1U << 28);

    // CCR1 fields
    inline constexpr uint32_t CCR1_CLR_EOP1_Pos = 16;
    inline constexpr uint32_t CCR1_CLR_EOP1_Msk = 0x00010000;
    inline constexpr uint32_t CCR1_CLR_EOP1 = (1U << 16);
    inline constexpr uint32_t CCR1_CLR_WRPERR1_Pos = 17;
    inline constexpr uint32_t CCR1_CLR_WRPERR1_Msk = 0x00020000;
    inline constexpr uint32_t CCR1_CLR_WRPERR1 = (1U << 17);
    inline constexpr uint32_t CCR1_CLR_PGSERR1_Pos = 18;
    inline constexpr uint32_t CCR1_CLR_PGSERR1_Msk = 0x00040000;
    inline constexpr uint32_t CCR1_CLR_PGSERR1 = (1U << 18);
    inline constexpr uint32_t CCR1_CLR_STRBERR1_Pos = 19;
    inline constexpr uint32_t CCR1_CLR_STRBERR1_Msk = 0x00080000;
    inline constexpr uint32_t CCR1_CLR_STRBERR1 = (1U << 19);
    inline constexpr uint32_t CCR1_CLR_INCERR1_Pos = 21;
    inline constexpr uint32_t CCR1_CLR_INCERR1_Msk = 0x00200000;
    inline constexpr uint32_t CCR1_CLR_INCERR1 = (1U << 21);
    inline constexpr uint32_t CCR1_CLR_OPERR1_Pos = 22;
    inline constexpr uint32_t CCR1_CLR_OPERR1_Msk = 0x00400000;
    inline constexpr uint32_t CCR1_CLR_OPERR1 = (1U << 22);
    inline constexpr uint32_t CCR1_CLR_RDPERR1_Pos = 23;
    inline constexpr uint32_t CCR1_CLR_RDPERR1_Msk = 0x00800000;
    inline constexpr uint32_t CCR1_CLR_RDPERR1 = (1U << 23);
    inline constexpr uint32_t CCR1_CLR_RDSERR1_Pos = 24;
    inline constexpr uint32_t CCR1_CLR_RDSERR1_Msk = 0x01000000;
    inline constexpr uint32_t CCR1_CLR_RDSERR1 = (1U << 24);
    inline constexpr uint32_t CCR1_CLR_SNECCERR1_Pos = 25;
    inline constexpr uint32_t CCR1_CLR_SNECCERR1_Msk = 0x02000000;
    inline constexpr uint32_t CCR1_CLR_SNECCERR1 = (1U << 25);
    inline constexpr uint32_t CCR1_CLR_DBECCERR1_Pos = 26;
    inline constexpr uint32_t CCR1_CLR_DBECCERR1_Msk = 0x04000000;
    inline constexpr uint32_t CCR1_CLR_DBECCERR1 = (1U << 26);
    inline constexpr uint32_t CCR1_CLR_CRCEND1_Pos = 27;
    inline constexpr uint32_t CCR1_CLR_CRCEND1_Msk = 0x08000000;
    inline constexpr uint32_t CCR1_CLR_CRCEND1 = (1U << 27);
    inline constexpr uint32_t CCR1_CLR_CRCRDERR1_Pos = 28;
    inline constexpr uint32_t CCR1_CLR_CRCRDERR1_Msk = 0x10000000;
    inline constexpr uint32_t CCR1_CLR_CRCRDERR1 = (1U << 28);

    // OPTCR fields
    inline constexpr uint32_t OPTCR_OPTLOCK_Pos = 0;
    inline constexpr uint32_t OPTCR_OPTLOCK_Msk = 0x00000001;
    inline constexpr uint32_t OPTCR_OPTLOCK = (1U << 0);
    inline constexpr uint32_t OPTCR_OPTSTART_Pos = 1;
    inline constexpr uint32_t OPTCR_OPTSTART_Msk = 0x00000002;
    inline constexpr uint32_t OPTCR_OPTSTART = (1U << 1);
    inline constexpr uint32_t OPTCR_MER_Pos = 4;
    inline constexpr uint32_t OPTCR_MER_Msk = 0x00000010;
    inline constexpr uint32_t OPTCR_MER = (1U << 4);
    inline constexpr uint32_t OPTCR_OPTCHANGEERRIE_Pos = 30;
    inline constexpr uint32_t OPTCR_OPTCHANGEERRIE_Msk = 0x40000000;
    inline constexpr uint32_t OPTCR_OPTCHANGEERRIE = (1U << 30);
    inline constexpr uint32_t OPTCR_SWAP_BANK_Pos = 31;
    inline constexpr uint32_t OPTCR_SWAP_BANK_Msk = 0x80000000;
    inline constexpr uint32_t OPTCR_SWAP_BANK = (1U << 31);

    // OPTSR_CUR fields
    inline constexpr uint32_t OPTSR_CUR_OPT_BUSY_Pos = 0;
    inline constexpr uint32_t OPTSR_CUR_OPT_BUSY_Msk = 0x00000001;
    inline constexpr uint32_t OPTSR_CUR_OPT_BUSY = (1U << 0);
    inline constexpr uint32_t OPTSR_CUR_BOR_LEV_Pos = 2;
    inline constexpr uint32_t OPTSR_CUR_BOR_LEV_Msk = 0x0000000C;
    inline constexpr uint32_t OPTSR_CUR_IWDG1_SW_Pos = 4;
    inline constexpr uint32_t OPTSR_CUR_IWDG1_SW_Msk = 0x00000010;
    inline constexpr uint32_t OPTSR_CUR_IWDG1_SW = (1U << 4);
    inline constexpr uint32_t OPTSR_CUR_NRST_STOP_D1_Pos = 6;
    inline constexpr uint32_t OPTSR_CUR_NRST_STOP_D1_Msk = 0x00000040;
    inline constexpr uint32_t OPTSR_CUR_NRST_STOP_D1 = (1U << 6);
    inline constexpr uint32_t OPTSR_CUR_NRST_STBY_D1_Pos = 7;
    inline constexpr uint32_t OPTSR_CUR_NRST_STBY_D1_Msk = 0x00000080;
    inline constexpr uint32_t OPTSR_CUR_NRST_STBY_D1 = (1U << 7);
    inline constexpr uint32_t OPTSR_CUR_RDP_Pos = 8;
    inline constexpr uint32_t OPTSR_CUR_RDP_Msk = 0x0000FF00;
    inline constexpr uint32_t OPTSR_CUR_IWDG_FZ_STOP_Pos = 17;
    inline constexpr uint32_t OPTSR_CUR_IWDG_FZ_STOP_Msk = 0x00020000;
    inline constexpr uint32_t OPTSR_CUR_IWDG_FZ_STOP = (1U << 17);
    inline constexpr uint32_t OPTSR_CUR_IWDG_FZ_SDBY_Pos = 18;
    inline constexpr uint32_t OPTSR_CUR_IWDG_FZ_SDBY_Msk = 0x00040000;
    inline constexpr uint32_t OPTSR_CUR_IWDG_FZ_SDBY = (1U << 18);
    inline constexpr uint32_t OPTSR_CUR_ST_RAM_SIZE_Pos = 19;
    inline constexpr uint32_t OPTSR_CUR_ST_RAM_SIZE_Msk = 0x00180000;
    inline constexpr uint32_t OPTSR_CUR_SECURITY_Pos = 21;
    inline constexpr uint32_t OPTSR_CUR_SECURITY_Msk = 0x00200000;
    inline constexpr uint32_t OPTSR_CUR_SECURITY = (1U << 21);
    inline constexpr uint32_t OPTSR_CUR_IO_HSLV_Pos = 29;
    inline constexpr uint32_t OPTSR_CUR_IO_HSLV_Msk = 0x20000000;
    inline constexpr uint32_t OPTSR_CUR_IO_HSLV = (1U << 29);
    inline constexpr uint32_t OPTSR_CUR_OPTCHANGEERR_Pos = 30;
    inline constexpr uint32_t OPTSR_CUR_OPTCHANGEERR_Msk = 0x40000000;
    inline constexpr uint32_t OPTSR_CUR_OPTCHANGEERR = (1U << 30);
    inline constexpr uint32_t OPTSR_CUR_SWAP_BANK_OPT_Pos = 31;
    inline constexpr uint32_t OPTSR_CUR_SWAP_BANK_OPT_Msk = 0x80000000;
    inline constexpr uint32_t OPTSR_CUR_SWAP_BANK_OPT = (1U << 31);

    // OPTSR_PRG fields
    inline constexpr uint32_t OPTSR_PRG_BOR_LEV_Pos = 2;
    inline constexpr uint32_t OPTSR_PRG_BOR_LEV_Msk = 0x0000000C;
    inline constexpr uint32_t OPTSR_PRG_IWDG1_SW_Pos = 4;
    inline constexpr uint32_t OPTSR_PRG_IWDG1_SW_Msk = 0x00000010;
    inline constexpr uint32_t OPTSR_PRG_IWDG1_SW = (1U << 4);
    inline constexpr uint32_t OPTSR_PRG_NRST_STOP_D1_Pos = 6;
    inline constexpr uint32_t OPTSR_PRG_NRST_STOP_D1_Msk = 0x00000040;
    inline constexpr uint32_t OPTSR_PRG_NRST_STOP_D1 = (1U << 6);
    inline constexpr uint32_t OPTSR_PRG_NRST_STBY_D1_Pos = 7;
    inline constexpr uint32_t OPTSR_PRG_NRST_STBY_D1_Msk = 0x00000080;
    inline constexpr uint32_t OPTSR_PRG_NRST_STBY_D1 = (1U << 7);
    inline constexpr uint32_t OPTSR_PRG_RDP_Pos = 8;
    inline constexpr uint32_t OPTSR_PRG_RDP_Msk = 0x0000FF00;
    inline constexpr uint32_t OPTSR_PRG_IWDG_FZ_STOP_Pos = 17;
    inline constexpr uint32_t OPTSR_PRG_IWDG_FZ_STOP_Msk = 0x00020000;
    inline constexpr uint32_t OPTSR_PRG_IWDG_FZ_STOP = (1U << 17);
    inline constexpr uint32_t OPTSR_PRG_IWDG_FZ_SDBY_Pos = 18;
    inline constexpr uint32_t OPTSR_PRG_IWDG_FZ_SDBY_Msk = 0x00040000;
    inline constexpr uint32_t OPTSR_PRG_IWDG_FZ_SDBY = (1U << 18);
    inline constexpr uint32_t OPTSR_PRG_ST_RAM_SIZE_Pos = 19;
    inline constexpr uint32_t OPTSR_PRG_ST_RAM_SIZE_Msk = 0x00180000;
    inline constexpr uint32_t OPTSR_PRG_SECURITY_Pos = 21;
    inline constexpr uint32_t OPTSR_PRG_SECURITY_Msk = 0x00200000;
    inline constexpr uint32_t OPTSR_PRG_SECURITY = (1U << 21);
    inline constexpr uint32_t OPTSR_PRG_IO_HSLV_Pos = 29;
    inline constexpr uint32_t OPTSR_PRG_IO_HSLV_Msk = 0x20000000;
    inline constexpr uint32_t OPTSR_PRG_IO_HSLV = (1U << 29);
    inline constexpr uint32_t OPTSR_PRG_SWAP_BANK_OPT_Pos = 31;
    inline constexpr uint32_t OPTSR_PRG_SWAP_BANK_OPT_Msk = 0x80000000;
    inline constexpr uint32_t OPTSR_PRG_SWAP_BANK_OPT = (1U << 31);

    // OPTCCR fields
    inline constexpr uint32_t OPTCCR_CLR_OPTCHANGEERR_Pos = 30;
    inline constexpr uint32_t OPTCCR_CLR_OPTCHANGEERR_Msk = 0x40000000;
    inline constexpr uint32_t OPTCCR_CLR_OPTCHANGEERR = (1U << 30);

    // PRAR_CUR1 fields
    inline constexpr uint32_t PRAR_CUR1_PROT_AREA_START1_Pos = 0;
    inline constexpr uint32_t PRAR_CUR1_PROT_AREA_START1_Msk = 0x00000FFF;
    inline constexpr uint32_t PRAR_CUR1_PROT_AREA_END1_Pos = 16;
    inline constexpr uint32_t PRAR_CUR1_PROT_AREA_END1_Msk = 0x0FFF0000;
    inline constexpr uint32_t PRAR_CUR1_DMEP1_Pos = 31;
    inline constexpr uint32_t PRAR_CUR1_DMEP1_Msk = 0x80000000;
    inline constexpr uint32_t PRAR_CUR1_DMEP1 = (1U << 31);

    // PRAR_PRG1 fields
    inline constexpr uint32_t PRAR_PRG1_PROT_AREA_START1_Pos = 0;
    inline constexpr uint32_t PRAR_PRG1_PROT_AREA_START1_Msk = 0x00000FFF;
    inline constexpr uint32_t PRAR_PRG1_PROT_AREA_END1_Pos = 16;
    inline constexpr uint32_t PRAR_PRG1_PROT_AREA_END1_Msk = 0x0FFF0000;
    inline constexpr uint32_t PRAR_PRG1_DMEP1_Pos = 31;
    inline constexpr uint32_t PRAR_PRG1_DMEP1_Msk = 0x80000000;
    inline constexpr uint32_t PRAR_PRG1_DMEP1 = (1U << 31);

    // SCAR_CUR1 fields
    inline constexpr uint32_t SCAR_CUR1_SEC_AREA_START1_Pos = 0;
    inline constexpr uint32_t SCAR_CUR1_SEC_AREA_START1_Msk = 0x00000FFF;
    inline constexpr uint32_t SCAR_CUR1_SEC_AREA_END1_Pos = 16;
    inline constexpr uint32_t SCAR_CUR1_SEC_AREA_END1_Msk = 0x0FFF0000;
    inline constexpr uint32_t SCAR_CUR1_DMES1_Pos = 31;
    inline constexpr uint32_t SCAR_CUR1_DMES1_Msk = 0x80000000;
    inline constexpr uint32_t SCAR_CUR1_DMES1 = (1U << 31);

    // SCAR_PRG1 fields
    inline constexpr uint32_t SCAR_PRG1_SEC_AREA_START1_Pos = 0;
    inline constexpr uint32_t SCAR_PRG1_SEC_AREA_START1_Msk = 0x00000FFF;
    inline constexpr uint32_t SCAR_PRG1_SEC_AREA_END1_Pos = 16;
    inline constexpr uint32_t SCAR_PRG1_SEC_AREA_END1_Msk = 0x0FFF0000;
    inline constexpr uint32_t SCAR_PRG1_DMES1_Pos = 31;
    inline constexpr uint32_t SCAR_PRG1_DMES1_Msk = 0x80000000;
    inline constexpr uint32_t SCAR_PRG1_DMES1 = (1U << 31);

    // WPSN_CUR1R fields
    inline constexpr uint32_t WPSN_CUR1R_WRPSn1_Pos = 0;
    inline constexpr uint32_t WPSN_CUR1R_WRPSn1_Msk = 0x000000FF;

    // WPSN_PRG1R fields
    inline constexpr uint32_t WPSN_PRG1R_WRPSn1_Pos = 0;
    inline constexpr uint32_t WPSN_PRG1R_WRPSn1_Msk = 0x000000FF;

    // BOOT_CURR fields
    inline constexpr uint32_t BOOT_CURR_BOOT_ADD0_Pos = 0;
    inline constexpr uint32_t BOOT_CURR_BOOT_ADD0_Msk = 0x0000FFFF;
    inline constexpr uint32_t BOOT_CURR_BOOT_ADD1_Pos = 16;
    inline constexpr uint32_t BOOT_CURR_BOOT_ADD1_Msk = 0xFFFF0000;

    // BOOT_PRGR fields
    inline constexpr uint32_t BOOT_PRGR_BOOT_ADD0_Pos = 0;
    inline constexpr uint32_t BOOT_PRGR_BOOT_ADD0_Msk = 0x0000FFFF;
    inline constexpr uint32_t BOOT_PRGR_BOOT_ADD1_Pos = 16;
    inline constexpr uint32_t BOOT_PRGR_BOOT_ADD1_Msk = 0xFFFF0000;

    // CRCCR1 fields
    inline constexpr uint32_t CRCCR1_CRC_SECT_Pos = 0;
    inline constexpr uint32_t CRCCR1_CRC_SECT_Msk = 0x00000007;
    inline constexpr uint32_t CRCCR1_ALL_BANK_Pos = 7;
    inline constexpr uint32_t CRCCR1_ALL_BANK_Msk = 0x00000080;
    inline constexpr uint32_t CRCCR1_ALL_BANK = (1U << 7);
    inline constexpr uint32_t CRCCR1_CRC_BY_SECT_Pos = 8;
    inline constexpr uint32_t CRCCR1_CRC_BY_SECT_Msk = 0x00000100;
    inline constexpr uint32_t CRCCR1_CRC_BY_SECT = (1U << 8);
    inline constexpr uint32_t CRCCR1_ADD_SECT_Pos = 9;
    inline constexpr uint32_t CRCCR1_ADD_SECT_Msk = 0x00000200;
    inline constexpr uint32_t CRCCR1_ADD_SECT = (1U << 9);
    inline constexpr uint32_t CRCCR1_CLEAN_SECT_Pos = 10;
    inline constexpr uint32_t CRCCR1_CLEAN_SECT_Msk = 0x00000400;
    inline constexpr uint32_t CRCCR1_CLEAN_SECT = (1U << 10);
    inline constexpr uint32_t CRCCR1_START_CRC_Pos = 16;
    inline constexpr uint32_t CRCCR1_START_CRC_Msk = 0x00010000;
    inline constexpr uint32_t CRCCR1_START_CRC = (1U << 16);
    inline constexpr uint32_t CRCCR1_CLEAN_CRC_Pos = 17;
    inline constexpr uint32_t CRCCR1_CLEAN_CRC_Msk = 0x00020000;
    inline constexpr uint32_t CRCCR1_CLEAN_CRC = (1U << 17);
    inline constexpr uint32_t CRCCR1_CRC_BURST_Pos = 20;
    inline constexpr uint32_t CRCCR1_CRC_BURST_Msk = 0x00300000;

    // CRCSADD1R fields
    inline constexpr uint32_t CRCSADD1R_CRC_START_ADDR_Pos = 2;
    inline constexpr uint32_t CRCSADD1R_CRC_START_ADDR_Msk = 0x000FFFFC;

    // CRCEADD1R fields
    inline constexpr uint32_t CRCEADD1R_CRC_END_ADDR_Pos = 2;
    inline constexpr uint32_t CRCEADD1R_CRC_END_ADDR_Msk = 0x000FFFFC;

    // CRCDATAR fields
    inline constexpr uint32_t CRCDATAR_CRC_DATA_Pos = 0;
    inline constexpr uint32_t CRCDATAR_CRC_DATA_Msk = 0xFFFFFFFF;

    // ECC_FA1R fields
    inline constexpr uint32_t ECC_FA1R_FAIL_ECC_ADDR1_Pos = 0;
    inline constexpr uint32_t ECC_FA1R_FAIL_ECC_ADDR1_Msk = 0x00007FFF;

    // ACR_ fields
    inline constexpr uint32_t ACR__LATENCY_Pos = 0;
    inline constexpr uint32_t ACR__LATENCY_Msk = 0x0000000F;
    inline constexpr uint32_t ACR__WRHIGHFREQ_Pos = 4;
    inline constexpr uint32_t ACR__WRHIGHFREQ_Msk = 0x00000030;

    // KEYR2 fields
    inline constexpr uint32_t KEYR2_KEYR2_Pos = 0;
    inline constexpr uint32_t KEYR2_KEYR2_Msk = 0xFFFFFFFF;

    // OPTKEYR_ fields
    inline constexpr uint32_t OPTKEYR__OPTKEYR_Pos = 0;
    inline constexpr uint32_t OPTKEYR__OPTKEYR_Msk = 0xFFFFFFFF;

    // CR2 fields
    inline constexpr uint32_t CR2_LOCK2_Pos = 0;
    inline constexpr uint32_t CR2_LOCK2_Msk = 0x00000001;
    inline constexpr uint32_t CR2_LOCK2 = (1U << 0);
    inline constexpr uint32_t CR2_PG2_Pos = 1;
    inline constexpr uint32_t CR2_PG2_Msk = 0x00000002;
    inline constexpr uint32_t CR2_PG2 = (1U << 1);
    inline constexpr uint32_t CR2_SER2_Pos = 2;
    inline constexpr uint32_t CR2_SER2_Msk = 0x00000004;
    inline constexpr uint32_t CR2_SER2 = (1U << 2);
    inline constexpr uint32_t CR2_BER2_Pos = 3;
    inline constexpr uint32_t CR2_BER2_Msk = 0x00000008;
    inline constexpr uint32_t CR2_BER2 = (1U << 3);
    inline constexpr uint32_t CR2_PSIZE2_Pos = 4;
    inline constexpr uint32_t CR2_PSIZE2_Msk = 0x00000030;
    inline constexpr uint32_t CR2_FW2_Pos = 6;
    inline constexpr uint32_t CR2_FW2_Msk = 0x00000040;
    inline constexpr uint32_t CR2_FW2 = (1U << 6);
    inline constexpr uint32_t CR2_START2_Pos = 7;
    inline constexpr uint32_t CR2_START2_Msk = 0x00000080;
    inline constexpr uint32_t CR2_START2 = (1U << 7);
    inline constexpr uint32_t CR2_SNB2_Pos = 8;
    inline constexpr uint32_t CR2_SNB2_Msk = 0x00000700;
    inline constexpr uint32_t CR2_SPSS2_Pos = 14;
    inline constexpr uint32_t CR2_SPSS2_Msk = 0x00004000;
    inline constexpr uint32_t CR2_SPSS2 = (1U << 14);
    inline constexpr uint32_t CR2_CRC_EN_Pos = 15;
    inline constexpr uint32_t CR2_CRC_EN_Msk = 0x00008000;
    inline constexpr uint32_t CR2_CRC_EN = (1U << 15);
    inline constexpr uint32_t CR2_EOPIE2_Pos = 16;
    inline constexpr uint32_t CR2_EOPIE2_Msk = 0x00010000;
    inline constexpr uint32_t CR2_EOPIE2 = (1U << 16);
    inline constexpr uint32_t CR2_WRPERRIE2_Pos = 17;
    inline constexpr uint32_t CR2_WRPERRIE2_Msk = 0x00020000;
    inline constexpr uint32_t CR2_WRPERRIE2 = (1U << 17);
    inline constexpr uint32_t CR2_PGSERRIE2_Pos = 18;
    inline constexpr uint32_t CR2_PGSERRIE2_Msk = 0x00040000;
    inline constexpr uint32_t CR2_PGSERRIE2 = (1U << 18);
    inline constexpr uint32_t CR2_STRBERRIE2_Pos = 19;
    inline constexpr uint32_t CR2_STRBERRIE2_Msk = 0x00080000;
    inline constexpr uint32_t CR2_STRBERRIE2 = (1U << 19);
    inline constexpr uint32_t CR2_INCERRIE2_Pos = 21;
    inline constexpr uint32_t CR2_INCERRIE2_Msk = 0x00200000;
    inline constexpr uint32_t CR2_INCERRIE2 = (1U << 21);
    inline constexpr uint32_t CR2_OPERRIE2_Pos = 22;
    inline constexpr uint32_t CR2_OPERRIE2_Msk = 0x00400000;
    inline constexpr uint32_t CR2_OPERRIE2 = (1U << 22);
    inline constexpr uint32_t CR2_RDPERRIE2_Pos = 23;
    inline constexpr uint32_t CR2_RDPERRIE2_Msk = 0x00800000;
    inline constexpr uint32_t CR2_RDPERRIE2 = (1U << 23);
    inline constexpr uint32_t CR2_RDSERRIE2_Pos = 24;
    inline constexpr uint32_t CR2_RDSERRIE2_Msk = 0x01000000;
    inline constexpr uint32_t CR2_RDSERRIE2 = (1U << 24);
    inline constexpr uint32_t CR2_SNECCERRIE2_Pos = 25;
    inline constexpr uint32_t CR2_SNECCERRIE2_Msk = 0x02000000;
    inline constexpr uint32_t CR2_SNECCERRIE2 = (1U << 25);
    inline constexpr uint32_t CR2_DBECCERRIE2_Pos = 26;
    inline constexpr uint32_t CR2_DBECCERRIE2_Msk = 0x04000000;
    inline constexpr uint32_t CR2_DBECCERRIE2 = (1U << 26);
    inline constexpr uint32_t CR2_CRCENDIE2_Pos = 27;
    inline constexpr uint32_t CR2_CRCENDIE2_Msk = 0x08000000;
    inline constexpr uint32_t CR2_CRCENDIE2 = (1U << 27);
    inline constexpr uint32_t CR2_CRCRDERRIE2_Pos = 28;
    inline constexpr uint32_t CR2_CRCRDERRIE2_Msk = 0x10000000;
    inline constexpr uint32_t CR2_CRCRDERRIE2 = (1U << 28);

    // SR2 fields
    inline constexpr uint32_t SR2_BSY2_Pos = 0;
    inline constexpr uint32_t SR2_BSY2_Msk = 0x00000001;
    inline constexpr uint32_t SR2_BSY2 = (1U << 0);
    inline constexpr uint32_t SR2_WBNE2_Pos = 1;
    inline constexpr uint32_t SR2_WBNE2_Msk = 0x00000002;
    inline constexpr uint32_t SR2_WBNE2 = (1U << 1);
    inline constexpr uint32_t SR2_QW2_Pos = 2;
    inline constexpr uint32_t SR2_QW2_Msk = 0x00000004;
    inline constexpr uint32_t SR2_QW2 = (1U << 2);
    inline constexpr uint32_t SR2_CRC_BUSY2_Pos = 3;
    inline constexpr uint32_t SR2_CRC_BUSY2_Msk = 0x00000008;
    inline constexpr uint32_t SR2_CRC_BUSY2 = (1U << 3);
    inline constexpr uint32_t SR2_EOP2_Pos = 16;
    inline constexpr uint32_t SR2_EOP2_Msk = 0x00010000;
    inline constexpr uint32_t SR2_EOP2 = (1U << 16);
    inline constexpr uint32_t SR2_WRPERR2_Pos = 17;
    inline constexpr uint32_t SR2_WRPERR2_Msk = 0x00020000;
    inline constexpr uint32_t SR2_WRPERR2 = (1U << 17);
    inline constexpr uint32_t SR2_PGSERR2_Pos = 18;
    inline constexpr uint32_t SR2_PGSERR2_Msk = 0x00040000;
    inline constexpr uint32_t SR2_PGSERR2 = (1U << 18);
    inline constexpr uint32_t SR2_STRBERR2_Pos = 19;
    inline constexpr uint32_t SR2_STRBERR2_Msk = 0x00080000;
    inline constexpr uint32_t SR2_STRBERR2 = (1U << 19);
    inline constexpr uint32_t SR2_INCERR2_Pos = 21;
    inline constexpr uint32_t SR2_INCERR2_Msk = 0x00200000;
    inline constexpr uint32_t SR2_INCERR2 = (1U << 21);
    inline constexpr uint32_t SR2_OPERR2_Pos = 22;
    inline constexpr uint32_t SR2_OPERR2_Msk = 0x00400000;
    inline constexpr uint32_t SR2_OPERR2 = (1U << 22);
    inline constexpr uint32_t SR2_RDPERR2_Pos = 23;
    inline constexpr uint32_t SR2_RDPERR2_Msk = 0x00800000;
    inline constexpr uint32_t SR2_RDPERR2 = (1U << 23);
    inline constexpr uint32_t SR2_RDSERR2_Pos = 24;
    inline constexpr uint32_t SR2_RDSERR2_Msk = 0x01000000;
    inline constexpr uint32_t SR2_RDSERR2 = (1U << 24);
    inline constexpr uint32_t SR2_SNECCERR2_Pos = 25;
    inline constexpr uint32_t SR2_SNECCERR2_Msk = 0x02000000;
    inline constexpr uint32_t SR2_SNECCERR2 = (1U << 25);
    inline constexpr uint32_t SR2_DBECCERR2_Pos = 26;
    inline constexpr uint32_t SR2_DBECCERR2_Msk = 0x04000000;
    inline constexpr uint32_t SR2_DBECCERR2 = (1U << 26);
    inline constexpr uint32_t SR2_CRCEND2_Pos = 27;
    inline constexpr uint32_t SR2_CRCEND2_Msk = 0x08000000;
    inline constexpr uint32_t SR2_CRCEND2 = (1U << 27);

    // CCR2 fields
    inline constexpr uint32_t CCR2_CLR_EOP2_Pos = 16;
    inline constexpr uint32_t CCR2_CLR_EOP2_Msk = 0x00010000;
    inline constexpr uint32_t CCR2_CLR_EOP2 = (1U << 16);
    inline constexpr uint32_t CCR2_CLR_WRPERR2_Pos = 17;
    inline constexpr uint32_t CCR2_CLR_WRPERR2_Msk = 0x00020000;
    inline constexpr uint32_t CCR2_CLR_WRPERR2 = (1U << 17);
    inline constexpr uint32_t CCR2_CLR_PGSERR2_Pos = 18;
    inline constexpr uint32_t CCR2_CLR_PGSERR2_Msk = 0x00040000;
    inline constexpr uint32_t CCR2_CLR_PGSERR2 = (1U << 18);
    inline constexpr uint32_t CCR2_CLR_STRBERR2_Pos = 19;
    inline constexpr uint32_t CCR2_CLR_STRBERR2_Msk = 0x00080000;
    inline constexpr uint32_t CCR2_CLR_STRBERR2 = (1U << 19);
    inline constexpr uint32_t CCR2_CLR_INCERR2_Pos = 21;
    inline constexpr uint32_t CCR2_CLR_INCERR2_Msk = 0x00200000;
    inline constexpr uint32_t CCR2_CLR_INCERR2 = (1U << 21);
    inline constexpr uint32_t CCR2_CLR_OPERR2_Pos = 22;
    inline constexpr uint32_t CCR2_CLR_OPERR2_Msk = 0x00400000;
    inline constexpr uint32_t CCR2_CLR_OPERR2 = (1U << 22);
    inline constexpr uint32_t CCR2_CLR_RDPERR2_Pos = 23;
    inline constexpr uint32_t CCR2_CLR_RDPERR2_Msk = 0x00800000;
    inline constexpr uint32_t CCR2_CLR_RDPERR2 = (1U << 23);
    inline constexpr uint32_t CCR2_CLR_RDSERR1_Pos = 24;
    inline constexpr uint32_t CCR2_CLR_RDSERR1_Msk = 0x01000000;
    inline constexpr uint32_t CCR2_CLR_RDSERR1 = (1U << 24);
    inline constexpr uint32_t CCR2_CLR_SNECCERR2_Pos = 25;
    inline constexpr uint32_t CCR2_CLR_SNECCERR2_Msk = 0x02000000;
    inline constexpr uint32_t CCR2_CLR_SNECCERR2 = (1U << 25);
    inline constexpr uint32_t CCR2_CLR_DBECCERR1_Pos = 26;
    inline constexpr uint32_t CCR2_CLR_DBECCERR1_Msk = 0x04000000;
    inline constexpr uint32_t CCR2_CLR_DBECCERR1 = (1U << 26);
    inline constexpr uint32_t CCR2_CLR_CRCEND2_Pos = 27;
    inline constexpr uint32_t CCR2_CLR_CRCEND2_Msk = 0x08000000;
    inline constexpr uint32_t CCR2_CLR_CRCEND2 = (1U << 27);

    // OPTCR_ fields
    inline constexpr uint32_t OPTCR__OPTLOCK_Pos = 0;
    inline constexpr uint32_t OPTCR__OPTLOCK_Msk = 0x00000001;
    inline constexpr uint32_t OPTCR__OPTLOCK = (1U << 0);
    inline constexpr uint32_t OPTCR__OPTSTART_Pos = 1;
    inline constexpr uint32_t OPTCR__OPTSTART_Msk = 0x00000002;
    inline constexpr uint32_t OPTCR__OPTSTART = (1U << 1);
    inline constexpr uint32_t OPTCR__MER_Pos = 4;
    inline constexpr uint32_t OPTCR__MER_Msk = 0x00000010;
    inline constexpr uint32_t OPTCR__MER = (1U << 4);
    inline constexpr uint32_t OPTCR__OPTCHANGEERRIE_Pos = 30;
    inline constexpr uint32_t OPTCR__OPTCHANGEERRIE_Msk = 0x40000000;
    inline constexpr uint32_t OPTCR__OPTCHANGEERRIE = (1U << 30);
    inline constexpr uint32_t OPTCR__SWAP_BANK_Pos = 31;
    inline constexpr uint32_t OPTCR__SWAP_BANK_Msk = 0x80000000;
    inline constexpr uint32_t OPTCR__SWAP_BANK = (1U << 31);

    // OPTSR_CUR_ fields
    inline constexpr uint32_t OPTSR_CUR__OPT_BUSY_Pos = 0;
    inline constexpr uint32_t OPTSR_CUR__OPT_BUSY_Msk = 0x00000001;
    inline constexpr uint32_t OPTSR_CUR__OPT_BUSY = (1U << 0);
    inline constexpr uint32_t OPTSR_CUR__BOR_LEV_Pos = 2;
    inline constexpr uint32_t OPTSR_CUR__BOR_LEV_Msk = 0x0000000C;
    inline constexpr uint32_t OPTSR_CUR__IWDG1_SW_Pos = 4;
    inline constexpr uint32_t OPTSR_CUR__IWDG1_SW_Msk = 0x00000010;
    inline constexpr uint32_t OPTSR_CUR__IWDG1_SW = (1U << 4);
    inline constexpr uint32_t OPTSR_CUR__NRST_STOP_D1_Pos = 6;
    inline constexpr uint32_t OPTSR_CUR__NRST_STOP_D1_Msk = 0x00000040;
    inline constexpr uint32_t OPTSR_CUR__NRST_STOP_D1 = (1U << 6);
    inline constexpr uint32_t OPTSR_CUR__NRST_STBY_D1_Pos = 7;
    inline constexpr uint32_t OPTSR_CUR__NRST_STBY_D1_Msk = 0x00000080;
    inline constexpr uint32_t OPTSR_CUR__NRST_STBY_D1 = (1U << 7);
    inline constexpr uint32_t OPTSR_CUR__RDP_Pos = 8;
    inline constexpr uint32_t OPTSR_CUR__RDP_Msk = 0x0000FF00;
    inline constexpr uint32_t OPTSR_CUR__IWDG_FZ_STOP_Pos = 17;
    inline constexpr uint32_t OPTSR_CUR__IWDG_FZ_STOP_Msk = 0x00020000;
    inline constexpr uint32_t OPTSR_CUR__IWDG_FZ_STOP = (1U << 17);
    inline constexpr uint32_t OPTSR_CUR__IWDG_FZ_SDBY_Pos = 18;
    inline constexpr uint32_t OPTSR_CUR__IWDG_FZ_SDBY_Msk = 0x00040000;
    inline constexpr uint32_t OPTSR_CUR__IWDG_FZ_SDBY = (1U << 18);
    inline constexpr uint32_t OPTSR_CUR__ST_RAM_SIZE_Pos = 19;
    inline constexpr uint32_t OPTSR_CUR__ST_RAM_SIZE_Msk = 0x00180000;
    inline constexpr uint32_t OPTSR_CUR__SECURITY_Pos = 21;
    inline constexpr uint32_t OPTSR_CUR__SECURITY_Msk = 0x00200000;
    inline constexpr uint32_t OPTSR_CUR__SECURITY = (1U << 21);
    inline constexpr uint32_t OPTSR_CUR__IO_HSLV_Pos = 29;
    inline constexpr uint32_t OPTSR_CUR__IO_HSLV_Msk = 0x20000000;
    inline constexpr uint32_t OPTSR_CUR__IO_HSLV = (1U << 29);
    inline constexpr uint32_t OPTSR_CUR__OPTCHANGEERR_Pos = 30;
    inline constexpr uint32_t OPTSR_CUR__OPTCHANGEERR_Msk = 0x40000000;
    inline constexpr uint32_t OPTSR_CUR__OPTCHANGEERR = (1U << 30);
    inline constexpr uint32_t OPTSR_CUR__SWAP_BANK_OPT_Pos = 31;
    inline constexpr uint32_t OPTSR_CUR__SWAP_BANK_OPT_Msk = 0x80000000;
    inline constexpr uint32_t OPTSR_CUR__SWAP_BANK_OPT = (1U << 31);

    // OPTSR_PRG_ fields
    inline constexpr uint32_t OPTSR_PRG__BOR_LEV_Pos = 2;
    inline constexpr uint32_t OPTSR_PRG__BOR_LEV_Msk = 0x0000000C;
    inline constexpr uint32_t OPTSR_PRG__IWDG1_SW_Pos = 4;
    inline constexpr uint32_t OPTSR_PRG__IWDG1_SW_Msk = 0x00000010;
    inline constexpr uint32_t OPTSR_PRG__IWDG1_SW = (1U << 4);
    inline constexpr uint32_t OPTSR_PRG__nRST_STOP_Pos = 6;
    inline constexpr uint32_t OPTSR_PRG__nRST_STOP_Msk = 0x00000040;
    inline constexpr uint32_t OPTSR_PRG__nRST_STOP = (1U << 6);
    inline constexpr uint32_t OPTSR_PRG__nRST_STDY_Pos = 7;
    inline constexpr uint32_t OPTSR_PRG__nRST_STDY_Msk = 0x00000080;
    inline constexpr uint32_t OPTSR_PRG__nRST_STDY = (1U << 7);
    inline constexpr uint32_t OPTSR_PRG__RDP_Pos = 8;
    inline constexpr uint32_t OPTSR_PRG__RDP_Msk = 0x0000FF00;
    inline constexpr uint32_t OPTSR_PRG__FZ_IWDG_STOP_Pos = 17;
    inline constexpr uint32_t OPTSR_PRG__FZ_IWDG_STOP_Msk = 0x00020000;
    inline constexpr uint32_t OPTSR_PRG__FZ_IWDG_STOP = (1U << 17);
    inline constexpr uint32_t OPTSR_PRG__FZ_IWDG_SDBY_Pos = 18;
    inline constexpr uint32_t OPTSR_PRG__FZ_IWDG_SDBY_Msk = 0x00040000;
    inline constexpr uint32_t OPTSR_PRG__FZ_IWDG_SDBY = (1U << 18);
    inline constexpr uint32_t OPTSR_PRG__ST_RAM_SIZE_Pos = 19;
    inline constexpr uint32_t OPTSR_PRG__ST_RAM_SIZE_Msk = 0x00180000;
    inline constexpr uint32_t OPTSR_PRG__SECURITY_Pos = 21;
    inline constexpr uint32_t OPTSR_PRG__SECURITY_Msk = 0x00200000;
    inline constexpr uint32_t OPTSR_PRG__SECURITY = (1U << 21);
    inline constexpr uint32_t OPTSR_PRG__IO_HSLV_Pos = 29;
    inline constexpr uint32_t OPTSR_PRG__IO_HSLV_Msk = 0x20000000;
    inline constexpr uint32_t OPTSR_PRG__IO_HSLV = (1U << 29);
    inline constexpr uint32_t OPTSR_PRG__SWAP_BANK_OPT_Pos = 31;
    inline constexpr uint32_t OPTSR_PRG__SWAP_BANK_OPT_Msk = 0x80000000;
    inline constexpr uint32_t OPTSR_PRG__SWAP_BANK_OPT = (1U << 31);

    // OPTCCR_ fields
    inline constexpr uint32_t OPTCCR__CLR_OPTCHANGEERR_Pos = 30;
    inline constexpr uint32_t OPTCCR__CLR_OPTCHANGEERR_Msk = 0x40000000;
    inline constexpr uint32_t OPTCCR__CLR_OPTCHANGEERR = (1U << 30);

    // PRAR_CUR2 fields
    inline constexpr uint32_t PRAR_CUR2_PROT_AREA_START2_Pos = 0;
    inline constexpr uint32_t PRAR_CUR2_PROT_AREA_START2_Msk = 0x00000FFF;
    inline constexpr uint32_t PRAR_CUR2_PROT_AREA_END2_Pos = 16;
    inline constexpr uint32_t PRAR_CUR2_PROT_AREA_END2_Msk = 0x0FFF0000;
    inline constexpr uint32_t PRAR_CUR2_DMEP2_Pos = 31;
    inline constexpr uint32_t PRAR_CUR2_DMEP2_Msk = 0x80000000;
    inline constexpr uint32_t PRAR_CUR2_DMEP2 = (1U << 31);

    // PRAR_PRG2 fields
    inline constexpr uint32_t PRAR_PRG2_PROT_AREA_START2_Pos = 0;
    inline constexpr uint32_t PRAR_PRG2_PROT_AREA_START2_Msk = 0x00000FFF;
    inline constexpr uint32_t PRAR_PRG2_PROT_AREA_END2_Pos = 16;
    inline constexpr uint32_t PRAR_PRG2_PROT_AREA_END2_Msk = 0x0FFF0000;
    inline constexpr uint32_t PRAR_PRG2_DMEP2_Pos = 31;
    inline constexpr uint32_t PRAR_PRG2_DMEP2_Msk = 0x80000000;
    inline constexpr uint32_t PRAR_PRG2_DMEP2 = (1U << 31);

    // SCAR_CUR2 fields
    inline constexpr uint32_t SCAR_CUR2_SEC_AREA_START2_Pos = 0;
    inline constexpr uint32_t SCAR_CUR2_SEC_AREA_START2_Msk = 0x00000FFF;
    inline constexpr uint32_t SCAR_CUR2_SEC_AREA_END2_Pos = 16;
    inline constexpr uint32_t SCAR_CUR2_SEC_AREA_END2_Msk = 0x0FFF0000;
    inline constexpr uint32_t SCAR_CUR2_DMES2_Pos = 31;
    inline constexpr uint32_t SCAR_CUR2_DMES2_Msk = 0x80000000;
    inline constexpr uint32_t SCAR_CUR2_DMES2 = (1U << 31);

    // SCAR_PRG2 fields
    inline constexpr uint32_t SCAR_PRG2_SEC_AREA_START2_Pos = 0;
    inline constexpr uint32_t SCAR_PRG2_SEC_AREA_START2_Msk = 0x00000FFF;
    inline constexpr uint32_t SCAR_PRG2_SEC_AREA_END2_Pos = 16;
    inline constexpr uint32_t SCAR_PRG2_SEC_AREA_END2_Msk = 0x0FFF0000;
    inline constexpr uint32_t SCAR_PRG2_DMES2_Pos = 31;
    inline constexpr uint32_t SCAR_PRG2_DMES2_Msk = 0x80000000;
    inline constexpr uint32_t SCAR_PRG2_DMES2 = (1U << 31);

    // WPSN_CUR2R fields
    inline constexpr uint32_t WPSN_CUR2R_WRPSn2_Pos = 0;
    inline constexpr uint32_t WPSN_CUR2R_WRPSn2_Msk = 0x000000FF;

    // WPSN_PRG2R fields
    inline constexpr uint32_t WPSN_PRG2R_WRPSn2_Pos = 0;
    inline constexpr uint32_t WPSN_PRG2R_WRPSn2_Msk = 0x000000FF;

    // BOOT_CURR_ fields
    inline constexpr uint32_t BOOT_CURR__BOOT_ADD0_Pos = 0;
    inline constexpr uint32_t BOOT_CURR__BOOT_ADD0_Msk = 0x0000FFFF;
    inline constexpr uint32_t BOOT_CURR__BOOT_ADD1_Pos = 16;
    inline constexpr uint32_t BOOT_CURR__BOOT_ADD1_Msk = 0xFFFF0000;

    // BOOT_PRGR_ fields
    inline constexpr uint32_t BOOT_PRGR__BOOT_ADD0_Pos = 0;
    inline constexpr uint32_t BOOT_PRGR__BOOT_ADD0_Msk = 0x0000FFFF;
    inline constexpr uint32_t BOOT_PRGR__BOOT_ADD1_Pos = 16;
    inline constexpr uint32_t BOOT_PRGR__BOOT_ADD1_Msk = 0xFFFF0000;

    // CRCCR2 fields
    inline constexpr uint32_t CRCCR2_CRC_SECT_Pos = 0;
    inline constexpr uint32_t CRCCR2_CRC_SECT_Msk = 0x00000007;
    inline constexpr uint32_t CRCCR2_ALL_BANK_Pos = 7;
    inline constexpr uint32_t CRCCR2_ALL_BANK_Msk = 0x00000080;
    inline constexpr uint32_t CRCCR2_ALL_BANK = (1U << 7);
    inline constexpr uint32_t CRCCR2_CRC_BY_SECT_Pos = 8;
    inline constexpr uint32_t CRCCR2_CRC_BY_SECT_Msk = 0x00000100;
    inline constexpr uint32_t CRCCR2_CRC_BY_SECT = (1U << 8);
    inline constexpr uint32_t CRCCR2_ADD_SECT_Pos = 9;
    inline constexpr uint32_t CRCCR2_ADD_SECT_Msk = 0x00000200;
    inline constexpr uint32_t CRCCR2_ADD_SECT = (1U << 9);
    inline constexpr uint32_t CRCCR2_CLEAN_SECT_Pos = 10;
    inline constexpr uint32_t CRCCR2_CLEAN_SECT_Msk = 0x00000400;
    inline constexpr uint32_t CRCCR2_CLEAN_SECT = (1U << 10);
    inline constexpr uint32_t CRCCR2_START_CRC_Pos = 16;
    inline constexpr uint32_t CRCCR2_START_CRC_Msk = 0x00010000;
    inline constexpr uint32_t CRCCR2_START_CRC = (1U << 16);
    inline constexpr uint32_t CRCCR2_CLEAN_CRC_Pos = 17;
    inline constexpr uint32_t CRCCR2_CLEAN_CRC_Msk = 0x00020000;
    inline constexpr uint32_t CRCCR2_CLEAN_CRC = (1U << 17);
    inline constexpr uint32_t CRCCR2_CRC_BURST_Pos = 20;
    inline constexpr uint32_t CRCCR2_CRC_BURST_Msk = 0x00300000;

    // CRCSADD2R fields
    inline constexpr uint32_t CRCSADD2R_CRC_START_ADDR_Pos = 2;
    inline constexpr uint32_t CRCSADD2R_CRC_START_ADDR_Msk = 0x000FFFFC;

    // CRCEADD2R fields
    inline constexpr uint32_t CRCEADD2R_CRC_END_ADDR_Pos = 2;
    inline constexpr uint32_t CRCEADD2R_CRC_END_ADDR_Msk = 0x000FFFFC;

    // CRCDATAR_ fields
    inline constexpr uint32_t CRCDATAR__CRC_DATA_Pos = 0;
    inline constexpr uint32_t CRCDATAR__CRC_DATA_Msk = 0xFFFFFFFF;

    // ECC_FA2R fields
    inline constexpr uint32_t ECC_FA2R_FAIL_ECC_ADDR2_Pos = 0;
    inline constexpr uint32_t ECC_FA2R_FAIL_ECC_ADDR2_Msk = 0x00007FFF;

} // namespace Flash

// Peripheral instances (lowercase to avoid namespace collision)
namespace periph {
    inline auto* const flash = reinterpret_cast<Flash_t*>(0x52002000);
} // namespace periph

} // namespace sbl::hw::reg

#endif // SBL_HW_REG_STM32H750_FLASH_HPP
