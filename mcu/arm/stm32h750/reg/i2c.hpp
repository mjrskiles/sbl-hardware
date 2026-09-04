/**
 * @file i2c.hpp
 * @brief Register definitions for STM32H750 - i2c
 *
 * Generated from: stm32h750.svd.patched
 * Generator: cecrops
 * Generated: 2026-09-03T15:06:16.435833
 *
 * DO NOT EDIT - Regenerate with: cecrops generate <mcu-dir>
 */

#ifndef SBL_HW_REG_STM32H750_I2C_HPP
#define SBL_HW_REG_STM32H750_I2C_HPP

#include <cstdint>

namespace sbl::hw::reg {

/** I2C */
struct I2C1_t {
    volatile uint32_t I2C_CR1;  ///< Access: No wait states, except if a write           acces...
    volatile uint32_t I2C_CR2;  ///< Access: No wait states, except if a write           acces...
    volatile uint32_t I2C_OAR1;  ///< Access: No wait states, except if a write           acces...
    volatile uint32_t I2C_OAR2;  ///< Access: No wait states, except if a write           acces...
    volatile uint32_t I2C_TIMINGR;  ///< Access: No wait states
    volatile uint32_t I2C_TIMEOUTR;  ///< Access: No wait states, except if a write           acces...
    volatile uint32_t I2C_ISR;  ///< Access: No wait states
    volatile uint32_t I2C_ICR;  ///< Access: No wait states
    volatile uint32_t I2C_PECR;  ///< Access: No wait states
    volatile uint32_t I2C_RXDR;  ///< Access: No wait states
    volatile uint32_t I2C_TXDR;  ///< Access: No wait states
};

/** I2C */
struct I2C2_t {
    volatile uint32_t I2C_CR1;  ///< Access: No wait states, except if a write           acces...
    volatile uint32_t I2C_CR2;  ///< Access: No wait states, except if a write           acces...
    volatile uint32_t I2C_OAR1;  ///< Access: No wait states, except if a write           acces...
    volatile uint32_t I2C_OAR2;  ///< Access: No wait states, except if a write           acces...
    volatile uint32_t I2C_TIMINGR;  ///< Access: No wait states
    volatile uint32_t I2C_TIMEOUTR;  ///< Access: No wait states, except if a write           acces...
    volatile uint32_t I2C_ISR;  ///< Access: No wait states
    volatile uint32_t I2C_ICR;  ///< Access: No wait states
    volatile uint32_t I2C_PECR;  ///< Access: No wait states
    volatile uint32_t I2C_RXDR;  ///< Access: No wait states
    volatile uint32_t I2C_TXDR;  ///< Access: No wait states
};

/** I2C */
struct I2C3_t {
    volatile uint32_t I2C_CR1;  ///< Access: No wait states, except if a write           acces...
    volatile uint32_t I2C_CR2;  ///< Access: No wait states, except if a write           acces...
    volatile uint32_t I2C_OAR1;  ///< Access: No wait states, except if a write           acces...
    volatile uint32_t I2C_OAR2;  ///< Access: No wait states, except if a write           acces...
    volatile uint32_t I2C_TIMINGR;  ///< Access: No wait states
    volatile uint32_t I2C_TIMEOUTR;  ///< Access: No wait states, except if a write           acces...
    volatile uint32_t I2C_ISR;  ///< Access: No wait states
    volatile uint32_t I2C_ICR;  ///< Access: No wait states
    volatile uint32_t I2C_PECR;  ///< Access: No wait states
    volatile uint32_t I2C_RXDR;  ///< Access: No wait states
    volatile uint32_t I2C_TXDR;  ///< Access: No wait states
};

/** I2C */
struct I2C4_t {
    volatile uint32_t I2C_CR1;  ///< Access: No wait states, except if a write           acces...
    volatile uint32_t I2C_CR2;  ///< Access: No wait states, except if a write           acces...
    volatile uint32_t I2C_OAR1;  ///< Access: No wait states, except if a write           acces...
    volatile uint32_t I2C_OAR2;  ///< Access: No wait states, except if a write           acces...
    volatile uint32_t I2C_TIMINGR;  ///< Access: No wait states
    volatile uint32_t I2C_TIMEOUTR;  ///< Access: No wait states, except if a write           acces...
    volatile uint32_t I2C_ISR;  ///< Access: No wait states
    volatile uint32_t I2C_ICR;  ///< Access: No wait states
    volatile uint32_t I2C_PECR;  ///< Access: No wait states
    volatile uint32_t I2C_RXDR;  ///< Access: No wait states
    volatile uint32_t I2C_TXDR;  ///< Access: No wait states
};

namespace I2C1 {
    // I2C_CR1 fields
    inline constexpr uint32_t I2C_CR1_PE_Pos = 0;
    inline constexpr uint32_t I2C_CR1_PE_Msk = 0x00000001;
    inline constexpr uint32_t I2C_CR1_PE = (1U << 0);
    inline constexpr uint32_t I2C_CR1_TXIE_Pos = 1;
    inline constexpr uint32_t I2C_CR1_TXIE_Msk = 0x00000002;
    inline constexpr uint32_t I2C_CR1_TXIE = (1U << 1);
    inline constexpr uint32_t I2C_CR1_RXIE_Pos = 2;
    inline constexpr uint32_t I2C_CR1_RXIE_Msk = 0x00000004;
    inline constexpr uint32_t I2C_CR1_RXIE = (1U << 2);
    inline constexpr uint32_t I2C_CR1_ADDRIE_Pos = 3;
    inline constexpr uint32_t I2C_CR1_ADDRIE_Msk = 0x00000008;
    inline constexpr uint32_t I2C_CR1_ADDRIE = (1U << 3);
    inline constexpr uint32_t I2C_CR1_NACKIE_Pos = 4;
    inline constexpr uint32_t I2C_CR1_NACKIE_Msk = 0x00000010;
    inline constexpr uint32_t I2C_CR1_NACKIE = (1U << 4);
    inline constexpr uint32_t I2C_CR1_STOPIE_Pos = 5;
    inline constexpr uint32_t I2C_CR1_STOPIE_Msk = 0x00000020;
    inline constexpr uint32_t I2C_CR1_STOPIE = (1U << 5);
    inline constexpr uint32_t I2C_CR1_TCIE_Pos = 6;
    inline constexpr uint32_t I2C_CR1_TCIE_Msk = 0x00000040;
    inline constexpr uint32_t I2C_CR1_TCIE = (1U << 6);
    inline constexpr uint32_t I2C_CR1_ERRIE_Pos = 7;
    inline constexpr uint32_t I2C_CR1_ERRIE_Msk = 0x00000080;
    inline constexpr uint32_t I2C_CR1_ERRIE = (1U << 7);
    inline constexpr uint32_t I2C_CR1_DNF_Pos = 8;
    inline constexpr uint32_t I2C_CR1_DNF_Msk = 0x00000F00;
    inline constexpr uint32_t I2C_CR1_ANFOFF_Pos = 12;
    inline constexpr uint32_t I2C_CR1_ANFOFF_Msk = 0x00001000;
    inline constexpr uint32_t I2C_CR1_ANFOFF = (1U << 12);
    inline constexpr uint32_t I2C_CR1_TXDMAEN_Pos = 14;
    inline constexpr uint32_t I2C_CR1_TXDMAEN_Msk = 0x00004000;
    inline constexpr uint32_t I2C_CR1_TXDMAEN = (1U << 14);
    inline constexpr uint32_t I2C_CR1_RXDMAEN_Pos = 15;
    inline constexpr uint32_t I2C_CR1_RXDMAEN_Msk = 0x00008000;
    inline constexpr uint32_t I2C_CR1_RXDMAEN = (1U << 15);
    inline constexpr uint32_t I2C_CR1_SBC_Pos = 16;
    inline constexpr uint32_t I2C_CR1_SBC_Msk = 0x00010000;
    inline constexpr uint32_t I2C_CR1_SBC = (1U << 16);
    inline constexpr uint32_t I2C_CR1_NOSTRETCH_Pos = 17;
    inline constexpr uint32_t I2C_CR1_NOSTRETCH_Msk = 0x00020000;
    inline constexpr uint32_t I2C_CR1_NOSTRETCH = (1U << 17);
    inline constexpr uint32_t I2C_CR1_WUPEN_Pos = 18;
    inline constexpr uint32_t I2C_CR1_WUPEN_Msk = 0x00040000;
    inline constexpr uint32_t I2C_CR1_WUPEN = (1U << 18);
    inline constexpr uint32_t I2C_CR1_GCEN_Pos = 19;
    inline constexpr uint32_t I2C_CR1_GCEN_Msk = 0x00080000;
    inline constexpr uint32_t I2C_CR1_GCEN = (1U << 19);
    inline constexpr uint32_t I2C_CR1_SMBHEN_Pos = 20;
    inline constexpr uint32_t I2C_CR1_SMBHEN_Msk = 0x00100000;
    inline constexpr uint32_t I2C_CR1_SMBHEN = (1U << 20);
    inline constexpr uint32_t I2C_CR1_SMBDEN_Pos = 21;
    inline constexpr uint32_t I2C_CR1_SMBDEN_Msk = 0x00200000;
    inline constexpr uint32_t I2C_CR1_SMBDEN = (1U << 21);
    inline constexpr uint32_t I2C_CR1_ALERTEN_Pos = 22;
    inline constexpr uint32_t I2C_CR1_ALERTEN_Msk = 0x00400000;
    inline constexpr uint32_t I2C_CR1_ALERTEN = (1U << 22);
    inline constexpr uint32_t I2C_CR1_PECEN_Pos = 23;
    inline constexpr uint32_t I2C_CR1_PECEN_Msk = 0x00800000;
    inline constexpr uint32_t I2C_CR1_PECEN = (1U << 23);

    // I2C_CR2 fields
    inline constexpr uint32_t I2C_CR2_SADD0_Pos = 0;
    inline constexpr uint32_t I2C_CR2_SADD0_Msk = 0x00000001;
    inline constexpr uint32_t I2C_CR2_SADD0 = (1U << 0);
    inline constexpr uint32_t I2C_CR2_SADD1_Pos = 1;
    inline constexpr uint32_t I2C_CR2_SADD1_Msk = 0x00000002;
    inline constexpr uint32_t I2C_CR2_SADD1 = (1U << 1);
    inline constexpr uint32_t I2C_CR2_SADD2_Pos = 2;
    inline constexpr uint32_t I2C_CR2_SADD2_Msk = 0x00000004;
    inline constexpr uint32_t I2C_CR2_SADD2 = (1U << 2);
    inline constexpr uint32_t I2C_CR2_SADD3_Pos = 3;
    inline constexpr uint32_t I2C_CR2_SADD3_Msk = 0x00000008;
    inline constexpr uint32_t I2C_CR2_SADD3 = (1U << 3);
    inline constexpr uint32_t I2C_CR2_SADD4_Pos = 4;
    inline constexpr uint32_t I2C_CR2_SADD4_Msk = 0x00000010;
    inline constexpr uint32_t I2C_CR2_SADD4 = (1U << 4);
    inline constexpr uint32_t I2C_CR2_SADD5_Pos = 5;
    inline constexpr uint32_t I2C_CR2_SADD5_Msk = 0x00000020;
    inline constexpr uint32_t I2C_CR2_SADD5 = (1U << 5);
    inline constexpr uint32_t I2C_CR2_SADD6_Pos = 6;
    inline constexpr uint32_t I2C_CR2_SADD6_Msk = 0x00000040;
    inline constexpr uint32_t I2C_CR2_SADD6 = (1U << 6);
    inline constexpr uint32_t I2C_CR2_SADD7_Pos = 7;
    inline constexpr uint32_t I2C_CR2_SADD7_Msk = 0x00000080;
    inline constexpr uint32_t I2C_CR2_SADD7 = (1U << 7);
    inline constexpr uint32_t I2C_CR2_SADD8_Pos = 8;
    inline constexpr uint32_t I2C_CR2_SADD8_Msk = 0x00000100;
    inline constexpr uint32_t I2C_CR2_SADD8 = (1U << 8);
    inline constexpr uint32_t I2C_CR2_SADD9_Pos = 9;
    inline constexpr uint32_t I2C_CR2_SADD9_Msk = 0x00000200;
    inline constexpr uint32_t I2C_CR2_SADD9 = (1U << 9);
    inline constexpr uint32_t I2C_CR2_RD_WRN_Pos = 10;
    inline constexpr uint32_t I2C_CR2_RD_WRN_Msk = 0x00000400;
    inline constexpr uint32_t I2C_CR2_RD_WRN = (1U << 10);
    inline constexpr uint32_t I2C_CR2_ADD10_Pos = 11;
    inline constexpr uint32_t I2C_CR2_ADD10_Msk = 0x00000800;
    inline constexpr uint32_t I2C_CR2_ADD10 = (1U << 11);
    inline constexpr uint32_t I2C_CR2_HEAD10R_Pos = 12;
    inline constexpr uint32_t I2C_CR2_HEAD10R_Msk = 0x00001000;
    inline constexpr uint32_t I2C_CR2_HEAD10R = (1U << 12);
    inline constexpr uint32_t I2C_CR2_START_Pos = 13;
    inline constexpr uint32_t I2C_CR2_START_Msk = 0x00002000;
    inline constexpr uint32_t I2C_CR2_START = (1U << 13);
    inline constexpr uint32_t I2C_CR2_STOP_Pos = 14;
    inline constexpr uint32_t I2C_CR2_STOP_Msk = 0x00004000;
    inline constexpr uint32_t I2C_CR2_STOP = (1U << 14);
    inline constexpr uint32_t I2C_CR2_NACK_Pos = 15;
    inline constexpr uint32_t I2C_CR2_NACK_Msk = 0x00008000;
    inline constexpr uint32_t I2C_CR2_NACK = (1U << 15);
    inline constexpr uint32_t I2C_CR2_NBYTES_Pos = 16;
    inline constexpr uint32_t I2C_CR2_NBYTES_Msk = 0x00FF0000;
    inline constexpr uint32_t I2C_CR2_RELOAD_Pos = 24;
    inline constexpr uint32_t I2C_CR2_RELOAD_Msk = 0x01000000;
    inline constexpr uint32_t I2C_CR2_RELOAD = (1U << 24);
    inline constexpr uint32_t I2C_CR2_AUTOEND_Pos = 25;
    inline constexpr uint32_t I2C_CR2_AUTOEND_Msk = 0x02000000;
    inline constexpr uint32_t I2C_CR2_AUTOEND = (1U << 25);
    inline constexpr uint32_t I2C_CR2_PECBYTE_Pos = 26;
    inline constexpr uint32_t I2C_CR2_PECBYTE_Msk = 0x04000000;
    inline constexpr uint32_t I2C_CR2_PECBYTE = (1U << 26);

    // I2C_OAR1 fields
    inline constexpr uint32_t I2C_OAR1_OA1_Pos = 0;
    inline constexpr uint32_t I2C_OAR1_OA1_Msk = 0x000003FF;
    inline constexpr uint32_t I2C_OAR1_OA1MODE_Pos = 10;
    inline constexpr uint32_t I2C_OAR1_OA1MODE_Msk = 0x00000400;
    inline constexpr uint32_t I2C_OAR1_OA1MODE = (1U << 10);
    inline constexpr uint32_t I2C_OAR1_OA1EN_Pos = 15;
    inline constexpr uint32_t I2C_OAR1_OA1EN_Msk = 0x00008000;
    inline constexpr uint32_t I2C_OAR1_OA1EN = (1U << 15);

    // I2C_OAR2 fields
    inline constexpr uint32_t I2C_OAR2_OA2_Pos = 1;
    inline constexpr uint32_t I2C_OAR2_OA2_Msk = 0x000000FE;
    inline constexpr uint32_t I2C_OAR2_OA2MSK_Pos = 8;
    inline constexpr uint32_t I2C_OAR2_OA2MSK_Msk = 0x00000700;
    inline constexpr uint32_t I2C_OAR2_OA2EN_Pos = 15;
    inline constexpr uint32_t I2C_OAR2_OA2EN_Msk = 0x00008000;
    inline constexpr uint32_t I2C_OAR2_OA2EN = (1U << 15);

    // I2C_TIMINGR fields
    inline constexpr uint32_t I2C_TIMINGR_SCLL_Pos = 0;
    inline constexpr uint32_t I2C_TIMINGR_SCLL_Msk = 0x000000FF;
    inline constexpr uint32_t I2C_TIMINGR_SCLH_Pos = 8;
    inline constexpr uint32_t I2C_TIMINGR_SCLH_Msk = 0x0000FF00;
    inline constexpr uint32_t I2C_TIMINGR_SDADEL_Pos = 16;
    inline constexpr uint32_t I2C_TIMINGR_SDADEL_Msk = 0x000F0000;
    inline constexpr uint32_t I2C_TIMINGR_SCLDEL_Pos = 20;
    inline constexpr uint32_t I2C_TIMINGR_SCLDEL_Msk = 0x00F00000;
    inline constexpr uint32_t I2C_TIMINGR_PRESC_Pos = 28;
    inline constexpr uint32_t I2C_TIMINGR_PRESC_Msk = 0xF0000000;

    // I2C_TIMEOUTR fields
    inline constexpr uint32_t I2C_TIMEOUTR_TIMEOUTA_Pos = 0;
    inline constexpr uint32_t I2C_TIMEOUTR_TIMEOUTA_Msk = 0x00000FFF;
    inline constexpr uint32_t I2C_TIMEOUTR_TIDLE_Pos = 12;
    inline constexpr uint32_t I2C_TIMEOUTR_TIDLE_Msk = 0x00001000;
    inline constexpr uint32_t I2C_TIMEOUTR_TIDLE = (1U << 12);
    inline constexpr uint32_t I2C_TIMEOUTR_TIMOUTEN_Pos = 15;
    inline constexpr uint32_t I2C_TIMEOUTR_TIMOUTEN_Msk = 0x00008000;
    inline constexpr uint32_t I2C_TIMEOUTR_TIMOUTEN = (1U << 15);
    inline constexpr uint32_t I2C_TIMEOUTR_TIMEOUTB_Pos = 16;
    inline constexpr uint32_t I2C_TIMEOUTR_TIMEOUTB_Msk = 0x0FFF0000;
    inline constexpr uint32_t I2C_TIMEOUTR_TEXTEN_Pos = 31;
    inline constexpr uint32_t I2C_TIMEOUTR_TEXTEN_Msk = 0x80000000;
    inline constexpr uint32_t I2C_TIMEOUTR_TEXTEN = (1U << 31);

    // I2C_ISR fields
    inline constexpr uint32_t I2C_ISR_TXE_Pos = 0;
    inline constexpr uint32_t I2C_ISR_TXE_Msk = 0x00000001;
    inline constexpr uint32_t I2C_ISR_TXE = (1U << 0);
    inline constexpr uint32_t I2C_ISR_TXIS_Pos = 1;
    inline constexpr uint32_t I2C_ISR_TXIS_Msk = 0x00000002;
    inline constexpr uint32_t I2C_ISR_TXIS = (1U << 1);
    inline constexpr uint32_t I2C_ISR_RXNE_Pos = 2;
    inline constexpr uint32_t I2C_ISR_RXNE_Msk = 0x00000004;
    inline constexpr uint32_t I2C_ISR_RXNE = (1U << 2);
    inline constexpr uint32_t I2C_ISR_ADDR_Pos = 3;
    inline constexpr uint32_t I2C_ISR_ADDR_Msk = 0x00000008;
    inline constexpr uint32_t I2C_ISR_ADDR = (1U << 3);
    inline constexpr uint32_t I2C_ISR_NACKF_Pos = 4;
    inline constexpr uint32_t I2C_ISR_NACKF_Msk = 0x00000010;
    inline constexpr uint32_t I2C_ISR_NACKF = (1U << 4);
    inline constexpr uint32_t I2C_ISR_STOPF_Pos = 5;
    inline constexpr uint32_t I2C_ISR_STOPF_Msk = 0x00000020;
    inline constexpr uint32_t I2C_ISR_STOPF = (1U << 5);
    inline constexpr uint32_t I2C_ISR_TC_Pos = 6;
    inline constexpr uint32_t I2C_ISR_TC_Msk = 0x00000040;
    inline constexpr uint32_t I2C_ISR_TC = (1U << 6);
    inline constexpr uint32_t I2C_ISR_TCR_Pos = 7;
    inline constexpr uint32_t I2C_ISR_TCR_Msk = 0x00000080;
    inline constexpr uint32_t I2C_ISR_TCR = (1U << 7);
    inline constexpr uint32_t I2C_ISR_BERR_Pos = 8;
    inline constexpr uint32_t I2C_ISR_BERR_Msk = 0x00000100;
    inline constexpr uint32_t I2C_ISR_BERR = (1U << 8);
    inline constexpr uint32_t I2C_ISR_ARLO_Pos = 9;
    inline constexpr uint32_t I2C_ISR_ARLO_Msk = 0x00000200;
    inline constexpr uint32_t I2C_ISR_ARLO = (1U << 9);
    inline constexpr uint32_t I2C_ISR_OVR_Pos = 10;
    inline constexpr uint32_t I2C_ISR_OVR_Msk = 0x00000400;
    inline constexpr uint32_t I2C_ISR_OVR = (1U << 10);
    inline constexpr uint32_t I2C_ISR_PECERR_Pos = 11;
    inline constexpr uint32_t I2C_ISR_PECERR_Msk = 0x00000800;
    inline constexpr uint32_t I2C_ISR_PECERR = (1U << 11);
    inline constexpr uint32_t I2C_ISR_TIMEOUT_Pos = 12;
    inline constexpr uint32_t I2C_ISR_TIMEOUT_Msk = 0x00001000;
    inline constexpr uint32_t I2C_ISR_TIMEOUT = (1U << 12);
    inline constexpr uint32_t I2C_ISR_ALERT_Pos = 13;
    inline constexpr uint32_t I2C_ISR_ALERT_Msk = 0x00002000;
    inline constexpr uint32_t I2C_ISR_ALERT = (1U << 13);
    inline constexpr uint32_t I2C_ISR_BUSY_Pos = 15;
    inline constexpr uint32_t I2C_ISR_BUSY_Msk = 0x00008000;
    inline constexpr uint32_t I2C_ISR_BUSY = (1U << 15);
    inline constexpr uint32_t I2C_ISR_DIR_Pos = 16;
    inline constexpr uint32_t I2C_ISR_DIR_Msk = 0x00010000;
    inline constexpr uint32_t I2C_ISR_DIR = (1U << 16);
    inline constexpr uint32_t I2C_ISR_ADDCODE_Pos = 17;
    inline constexpr uint32_t I2C_ISR_ADDCODE_Msk = 0x00FE0000;

    // I2C_ICR fields
    inline constexpr uint32_t I2C_ICR_ADDRCF_Pos = 3;
    inline constexpr uint32_t I2C_ICR_ADDRCF_Msk = 0x00000008;
    inline constexpr uint32_t I2C_ICR_ADDRCF = (1U << 3);
    inline constexpr uint32_t I2C_ICR_NACKCF_Pos = 4;
    inline constexpr uint32_t I2C_ICR_NACKCF_Msk = 0x00000010;
    inline constexpr uint32_t I2C_ICR_NACKCF = (1U << 4);
    inline constexpr uint32_t I2C_ICR_STOPCF_Pos = 5;
    inline constexpr uint32_t I2C_ICR_STOPCF_Msk = 0x00000020;
    inline constexpr uint32_t I2C_ICR_STOPCF = (1U << 5);
    inline constexpr uint32_t I2C_ICR_BERRCF_Pos = 8;
    inline constexpr uint32_t I2C_ICR_BERRCF_Msk = 0x00000100;
    inline constexpr uint32_t I2C_ICR_BERRCF = (1U << 8);
    inline constexpr uint32_t I2C_ICR_ARLOCF_Pos = 9;
    inline constexpr uint32_t I2C_ICR_ARLOCF_Msk = 0x00000200;
    inline constexpr uint32_t I2C_ICR_ARLOCF = (1U << 9);
    inline constexpr uint32_t I2C_ICR_OVRCF_Pos = 10;
    inline constexpr uint32_t I2C_ICR_OVRCF_Msk = 0x00000400;
    inline constexpr uint32_t I2C_ICR_OVRCF = (1U << 10);
    inline constexpr uint32_t I2C_ICR_PECCF_Pos = 11;
    inline constexpr uint32_t I2C_ICR_PECCF_Msk = 0x00000800;
    inline constexpr uint32_t I2C_ICR_PECCF = (1U << 11);
    inline constexpr uint32_t I2C_ICR_TIMOUTCF_Pos = 12;
    inline constexpr uint32_t I2C_ICR_TIMOUTCF_Msk = 0x00001000;
    inline constexpr uint32_t I2C_ICR_TIMOUTCF = (1U << 12);
    inline constexpr uint32_t I2C_ICR_ALERTCF_Pos = 13;
    inline constexpr uint32_t I2C_ICR_ALERTCF_Msk = 0x00002000;
    inline constexpr uint32_t I2C_ICR_ALERTCF = (1U << 13);

    // I2C_PECR fields
    inline constexpr uint32_t I2C_PECR_PEC_Pos = 0;
    inline constexpr uint32_t I2C_PECR_PEC_Msk = 0x000000FF;

    // I2C_RXDR fields
    inline constexpr uint32_t I2C_RXDR_RXDATA_Pos = 0;
    inline constexpr uint32_t I2C_RXDR_RXDATA_Msk = 0x000000FF;

    // I2C_TXDR fields
    inline constexpr uint32_t I2C_TXDR_TXDATA_Pos = 0;
    inline constexpr uint32_t I2C_TXDR_TXDATA_Msk = 0x000000FF;

} // namespace I2C1

namespace I2C2 {
    // I2C_CR1 fields
    inline constexpr uint32_t I2C_CR1_PE_Pos = 0;
    inline constexpr uint32_t I2C_CR1_PE_Msk = 0x00000001;
    inline constexpr uint32_t I2C_CR1_PE = (1U << 0);
    inline constexpr uint32_t I2C_CR1_TXIE_Pos = 1;
    inline constexpr uint32_t I2C_CR1_TXIE_Msk = 0x00000002;
    inline constexpr uint32_t I2C_CR1_TXIE = (1U << 1);
    inline constexpr uint32_t I2C_CR1_RXIE_Pos = 2;
    inline constexpr uint32_t I2C_CR1_RXIE_Msk = 0x00000004;
    inline constexpr uint32_t I2C_CR1_RXIE = (1U << 2);
    inline constexpr uint32_t I2C_CR1_ADDRIE_Pos = 3;
    inline constexpr uint32_t I2C_CR1_ADDRIE_Msk = 0x00000008;
    inline constexpr uint32_t I2C_CR1_ADDRIE = (1U << 3);
    inline constexpr uint32_t I2C_CR1_NACKIE_Pos = 4;
    inline constexpr uint32_t I2C_CR1_NACKIE_Msk = 0x00000010;
    inline constexpr uint32_t I2C_CR1_NACKIE = (1U << 4);
    inline constexpr uint32_t I2C_CR1_STOPIE_Pos = 5;
    inline constexpr uint32_t I2C_CR1_STOPIE_Msk = 0x00000020;
    inline constexpr uint32_t I2C_CR1_STOPIE = (1U << 5);
    inline constexpr uint32_t I2C_CR1_TCIE_Pos = 6;
    inline constexpr uint32_t I2C_CR1_TCIE_Msk = 0x00000040;
    inline constexpr uint32_t I2C_CR1_TCIE = (1U << 6);
    inline constexpr uint32_t I2C_CR1_ERRIE_Pos = 7;
    inline constexpr uint32_t I2C_CR1_ERRIE_Msk = 0x00000080;
    inline constexpr uint32_t I2C_CR1_ERRIE = (1U << 7);
    inline constexpr uint32_t I2C_CR1_DNF_Pos = 8;
    inline constexpr uint32_t I2C_CR1_DNF_Msk = 0x00000F00;
    inline constexpr uint32_t I2C_CR1_ANFOFF_Pos = 12;
    inline constexpr uint32_t I2C_CR1_ANFOFF_Msk = 0x00001000;
    inline constexpr uint32_t I2C_CR1_ANFOFF = (1U << 12);
    inline constexpr uint32_t I2C_CR1_TXDMAEN_Pos = 14;
    inline constexpr uint32_t I2C_CR1_TXDMAEN_Msk = 0x00004000;
    inline constexpr uint32_t I2C_CR1_TXDMAEN = (1U << 14);
    inline constexpr uint32_t I2C_CR1_RXDMAEN_Pos = 15;
    inline constexpr uint32_t I2C_CR1_RXDMAEN_Msk = 0x00008000;
    inline constexpr uint32_t I2C_CR1_RXDMAEN = (1U << 15);
    inline constexpr uint32_t I2C_CR1_SBC_Pos = 16;
    inline constexpr uint32_t I2C_CR1_SBC_Msk = 0x00010000;
    inline constexpr uint32_t I2C_CR1_SBC = (1U << 16);
    inline constexpr uint32_t I2C_CR1_NOSTRETCH_Pos = 17;
    inline constexpr uint32_t I2C_CR1_NOSTRETCH_Msk = 0x00020000;
    inline constexpr uint32_t I2C_CR1_NOSTRETCH = (1U << 17);
    inline constexpr uint32_t I2C_CR1_WUPEN_Pos = 18;
    inline constexpr uint32_t I2C_CR1_WUPEN_Msk = 0x00040000;
    inline constexpr uint32_t I2C_CR1_WUPEN = (1U << 18);
    inline constexpr uint32_t I2C_CR1_GCEN_Pos = 19;
    inline constexpr uint32_t I2C_CR1_GCEN_Msk = 0x00080000;
    inline constexpr uint32_t I2C_CR1_GCEN = (1U << 19);
    inline constexpr uint32_t I2C_CR1_SMBHEN_Pos = 20;
    inline constexpr uint32_t I2C_CR1_SMBHEN_Msk = 0x00100000;
    inline constexpr uint32_t I2C_CR1_SMBHEN = (1U << 20);
    inline constexpr uint32_t I2C_CR1_SMBDEN_Pos = 21;
    inline constexpr uint32_t I2C_CR1_SMBDEN_Msk = 0x00200000;
    inline constexpr uint32_t I2C_CR1_SMBDEN = (1U << 21);
    inline constexpr uint32_t I2C_CR1_ALERTEN_Pos = 22;
    inline constexpr uint32_t I2C_CR1_ALERTEN_Msk = 0x00400000;
    inline constexpr uint32_t I2C_CR1_ALERTEN = (1U << 22);
    inline constexpr uint32_t I2C_CR1_PECEN_Pos = 23;
    inline constexpr uint32_t I2C_CR1_PECEN_Msk = 0x00800000;
    inline constexpr uint32_t I2C_CR1_PECEN = (1U << 23);

    // I2C_CR2 fields
    inline constexpr uint32_t I2C_CR2_SADD0_Pos = 0;
    inline constexpr uint32_t I2C_CR2_SADD0_Msk = 0x00000001;
    inline constexpr uint32_t I2C_CR2_SADD0 = (1U << 0);
    inline constexpr uint32_t I2C_CR2_SADD1_Pos = 1;
    inline constexpr uint32_t I2C_CR2_SADD1_Msk = 0x00000002;
    inline constexpr uint32_t I2C_CR2_SADD1 = (1U << 1);
    inline constexpr uint32_t I2C_CR2_SADD2_Pos = 2;
    inline constexpr uint32_t I2C_CR2_SADD2_Msk = 0x00000004;
    inline constexpr uint32_t I2C_CR2_SADD2 = (1U << 2);
    inline constexpr uint32_t I2C_CR2_SADD3_Pos = 3;
    inline constexpr uint32_t I2C_CR2_SADD3_Msk = 0x00000008;
    inline constexpr uint32_t I2C_CR2_SADD3 = (1U << 3);
    inline constexpr uint32_t I2C_CR2_SADD4_Pos = 4;
    inline constexpr uint32_t I2C_CR2_SADD4_Msk = 0x00000010;
    inline constexpr uint32_t I2C_CR2_SADD4 = (1U << 4);
    inline constexpr uint32_t I2C_CR2_SADD5_Pos = 5;
    inline constexpr uint32_t I2C_CR2_SADD5_Msk = 0x00000020;
    inline constexpr uint32_t I2C_CR2_SADD5 = (1U << 5);
    inline constexpr uint32_t I2C_CR2_SADD6_Pos = 6;
    inline constexpr uint32_t I2C_CR2_SADD6_Msk = 0x00000040;
    inline constexpr uint32_t I2C_CR2_SADD6 = (1U << 6);
    inline constexpr uint32_t I2C_CR2_SADD7_Pos = 7;
    inline constexpr uint32_t I2C_CR2_SADD7_Msk = 0x00000080;
    inline constexpr uint32_t I2C_CR2_SADD7 = (1U << 7);
    inline constexpr uint32_t I2C_CR2_SADD8_Pos = 8;
    inline constexpr uint32_t I2C_CR2_SADD8_Msk = 0x00000100;
    inline constexpr uint32_t I2C_CR2_SADD8 = (1U << 8);
    inline constexpr uint32_t I2C_CR2_SADD9_Pos = 9;
    inline constexpr uint32_t I2C_CR2_SADD9_Msk = 0x00000200;
    inline constexpr uint32_t I2C_CR2_SADD9 = (1U << 9);
    inline constexpr uint32_t I2C_CR2_RD_WRN_Pos = 10;
    inline constexpr uint32_t I2C_CR2_RD_WRN_Msk = 0x00000400;
    inline constexpr uint32_t I2C_CR2_RD_WRN = (1U << 10);
    inline constexpr uint32_t I2C_CR2_ADD10_Pos = 11;
    inline constexpr uint32_t I2C_CR2_ADD10_Msk = 0x00000800;
    inline constexpr uint32_t I2C_CR2_ADD10 = (1U << 11);
    inline constexpr uint32_t I2C_CR2_HEAD10R_Pos = 12;
    inline constexpr uint32_t I2C_CR2_HEAD10R_Msk = 0x00001000;
    inline constexpr uint32_t I2C_CR2_HEAD10R = (1U << 12);
    inline constexpr uint32_t I2C_CR2_START_Pos = 13;
    inline constexpr uint32_t I2C_CR2_START_Msk = 0x00002000;
    inline constexpr uint32_t I2C_CR2_START = (1U << 13);
    inline constexpr uint32_t I2C_CR2_STOP_Pos = 14;
    inline constexpr uint32_t I2C_CR2_STOP_Msk = 0x00004000;
    inline constexpr uint32_t I2C_CR2_STOP = (1U << 14);
    inline constexpr uint32_t I2C_CR2_NACK_Pos = 15;
    inline constexpr uint32_t I2C_CR2_NACK_Msk = 0x00008000;
    inline constexpr uint32_t I2C_CR2_NACK = (1U << 15);
    inline constexpr uint32_t I2C_CR2_NBYTES_Pos = 16;
    inline constexpr uint32_t I2C_CR2_NBYTES_Msk = 0x00FF0000;
    inline constexpr uint32_t I2C_CR2_RELOAD_Pos = 24;
    inline constexpr uint32_t I2C_CR2_RELOAD_Msk = 0x01000000;
    inline constexpr uint32_t I2C_CR2_RELOAD = (1U << 24);
    inline constexpr uint32_t I2C_CR2_AUTOEND_Pos = 25;
    inline constexpr uint32_t I2C_CR2_AUTOEND_Msk = 0x02000000;
    inline constexpr uint32_t I2C_CR2_AUTOEND = (1U << 25);
    inline constexpr uint32_t I2C_CR2_PECBYTE_Pos = 26;
    inline constexpr uint32_t I2C_CR2_PECBYTE_Msk = 0x04000000;
    inline constexpr uint32_t I2C_CR2_PECBYTE = (1U << 26);

    // I2C_OAR1 fields
    inline constexpr uint32_t I2C_OAR1_OA1_Pos = 0;
    inline constexpr uint32_t I2C_OAR1_OA1_Msk = 0x000003FF;
    inline constexpr uint32_t I2C_OAR1_OA1MODE_Pos = 10;
    inline constexpr uint32_t I2C_OAR1_OA1MODE_Msk = 0x00000400;
    inline constexpr uint32_t I2C_OAR1_OA1MODE = (1U << 10);
    inline constexpr uint32_t I2C_OAR1_OA1EN_Pos = 15;
    inline constexpr uint32_t I2C_OAR1_OA1EN_Msk = 0x00008000;
    inline constexpr uint32_t I2C_OAR1_OA1EN = (1U << 15);

    // I2C_OAR2 fields
    inline constexpr uint32_t I2C_OAR2_OA2_Pos = 1;
    inline constexpr uint32_t I2C_OAR2_OA2_Msk = 0x000000FE;
    inline constexpr uint32_t I2C_OAR2_OA2MSK_Pos = 8;
    inline constexpr uint32_t I2C_OAR2_OA2MSK_Msk = 0x00000700;
    inline constexpr uint32_t I2C_OAR2_OA2EN_Pos = 15;
    inline constexpr uint32_t I2C_OAR2_OA2EN_Msk = 0x00008000;
    inline constexpr uint32_t I2C_OAR2_OA2EN = (1U << 15);

    // I2C_TIMINGR fields
    inline constexpr uint32_t I2C_TIMINGR_SCLL_Pos = 0;
    inline constexpr uint32_t I2C_TIMINGR_SCLL_Msk = 0x000000FF;
    inline constexpr uint32_t I2C_TIMINGR_SCLH_Pos = 8;
    inline constexpr uint32_t I2C_TIMINGR_SCLH_Msk = 0x0000FF00;
    inline constexpr uint32_t I2C_TIMINGR_SDADEL_Pos = 16;
    inline constexpr uint32_t I2C_TIMINGR_SDADEL_Msk = 0x000F0000;
    inline constexpr uint32_t I2C_TIMINGR_SCLDEL_Pos = 20;
    inline constexpr uint32_t I2C_TIMINGR_SCLDEL_Msk = 0x00F00000;
    inline constexpr uint32_t I2C_TIMINGR_PRESC_Pos = 28;
    inline constexpr uint32_t I2C_TIMINGR_PRESC_Msk = 0xF0000000;

    // I2C_TIMEOUTR fields
    inline constexpr uint32_t I2C_TIMEOUTR_TIMEOUTA_Pos = 0;
    inline constexpr uint32_t I2C_TIMEOUTR_TIMEOUTA_Msk = 0x00000FFF;
    inline constexpr uint32_t I2C_TIMEOUTR_TIDLE_Pos = 12;
    inline constexpr uint32_t I2C_TIMEOUTR_TIDLE_Msk = 0x00001000;
    inline constexpr uint32_t I2C_TIMEOUTR_TIDLE = (1U << 12);
    inline constexpr uint32_t I2C_TIMEOUTR_TIMOUTEN_Pos = 15;
    inline constexpr uint32_t I2C_TIMEOUTR_TIMOUTEN_Msk = 0x00008000;
    inline constexpr uint32_t I2C_TIMEOUTR_TIMOUTEN = (1U << 15);
    inline constexpr uint32_t I2C_TIMEOUTR_TIMEOUTB_Pos = 16;
    inline constexpr uint32_t I2C_TIMEOUTR_TIMEOUTB_Msk = 0x0FFF0000;
    inline constexpr uint32_t I2C_TIMEOUTR_TEXTEN_Pos = 31;
    inline constexpr uint32_t I2C_TIMEOUTR_TEXTEN_Msk = 0x80000000;
    inline constexpr uint32_t I2C_TIMEOUTR_TEXTEN = (1U << 31);

    // I2C_ISR fields
    inline constexpr uint32_t I2C_ISR_TXE_Pos = 0;
    inline constexpr uint32_t I2C_ISR_TXE_Msk = 0x00000001;
    inline constexpr uint32_t I2C_ISR_TXE = (1U << 0);
    inline constexpr uint32_t I2C_ISR_TXIS_Pos = 1;
    inline constexpr uint32_t I2C_ISR_TXIS_Msk = 0x00000002;
    inline constexpr uint32_t I2C_ISR_TXIS = (1U << 1);
    inline constexpr uint32_t I2C_ISR_RXNE_Pos = 2;
    inline constexpr uint32_t I2C_ISR_RXNE_Msk = 0x00000004;
    inline constexpr uint32_t I2C_ISR_RXNE = (1U << 2);
    inline constexpr uint32_t I2C_ISR_ADDR_Pos = 3;
    inline constexpr uint32_t I2C_ISR_ADDR_Msk = 0x00000008;
    inline constexpr uint32_t I2C_ISR_ADDR = (1U << 3);
    inline constexpr uint32_t I2C_ISR_NACKF_Pos = 4;
    inline constexpr uint32_t I2C_ISR_NACKF_Msk = 0x00000010;
    inline constexpr uint32_t I2C_ISR_NACKF = (1U << 4);
    inline constexpr uint32_t I2C_ISR_STOPF_Pos = 5;
    inline constexpr uint32_t I2C_ISR_STOPF_Msk = 0x00000020;
    inline constexpr uint32_t I2C_ISR_STOPF = (1U << 5);
    inline constexpr uint32_t I2C_ISR_TC_Pos = 6;
    inline constexpr uint32_t I2C_ISR_TC_Msk = 0x00000040;
    inline constexpr uint32_t I2C_ISR_TC = (1U << 6);
    inline constexpr uint32_t I2C_ISR_TCR_Pos = 7;
    inline constexpr uint32_t I2C_ISR_TCR_Msk = 0x00000080;
    inline constexpr uint32_t I2C_ISR_TCR = (1U << 7);
    inline constexpr uint32_t I2C_ISR_BERR_Pos = 8;
    inline constexpr uint32_t I2C_ISR_BERR_Msk = 0x00000100;
    inline constexpr uint32_t I2C_ISR_BERR = (1U << 8);
    inline constexpr uint32_t I2C_ISR_ARLO_Pos = 9;
    inline constexpr uint32_t I2C_ISR_ARLO_Msk = 0x00000200;
    inline constexpr uint32_t I2C_ISR_ARLO = (1U << 9);
    inline constexpr uint32_t I2C_ISR_OVR_Pos = 10;
    inline constexpr uint32_t I2C_ISR_OVR_Msk = 0x00000400;
    inline constexpr uint32_t I2C_ISR_OVR = (1U << 10);
    inline constexpr uint32_t I2C_ISR_PECERR_Pos = 11;
    inline constexpr uint32_t I2C_ISR_PECERR_Msk = 0x00000800;
    inline constexpr uint32_t I2C_ISR_PECERR = (1U << 11);
    inline constexpr uint32_t I2C_ISR_TIMEOUT_Pos = 12;
    inline constexpr uint32_t I2C_ISR_TIMEOUT_Msk = 0x00001000;
    inline constexpr uint32_t I2C_ISR_TIMEOUT = (1U << 12);
    inline constexpr uint32_t I2C_ISR_ALERT_Pos = 13;
    inline constexpr uint32_t I2C_ISR_ALERT_Msk = 0x00002000;
    inline constexpr uint32_t I2C_ISR_ALERT = (1U << 13);
    inline constexpr uint32_t I2C_ISR_BUSY_Pos = 15;
    inline constexpr uint32_t I2C_ISR_BUSY_Msk = 0x00008000;
    inline constexpr uint32_t I2C_ISR_BUSY = (1U << 15);
    inline constexpr uint32_t I2C_ISR_DIR_Pos = 16;
    inline constexpr uint32_t I2C_ISR_DIR_Msk = 0x00010000;
    inline constexpr uint32_t I2C_ISR_DIR = (1U << 16);
    inline constexpr uint32_t I2C_ISR_ADDCODE_Pos = 17;
    inline constexpr uint32_t I2C_ISR_ADDCODE_Msk = 0x00FE0000;

    // I2C_ICR fields
    inline constexpr uint32_t I2C_ICR_ADDRCF_Pos = 3;
    inline constexpr uint32_t I2C_ICR_ADDRCF_Msk = 0x00000008;
    inline constexpr uint32_t I2C_ICR_ADDRCF = (1U << 3);
    inline constexpr uint32_t I2C_ICR_NACKCF_Pos = 4;
    inline constexpr uint32_t I2C_ICR_NACKCF_Msk = 0x00000010;
    inline constexpr uint32_t I2C_ICR_NACKCF = (1U << 4);
    inline constexpr uint32_t I2C_ICR_STOPCF_Pos = 5;
    inline constexpr uint32_t I2C_ICR_STOPCF_Msk = 0x00000020;
    inline constexpr uint32_t I2C_ICR_STOPCF = (1U << 5);
    inline constexpr uint32_t I2C_ICR_BERRCF_Pos = 8;
    inline constexpr uint32_t I2C_ICR_BERRCF_Msk = 0x00000100;
    inline constexpr uint32_t I2C_ICR_BERRCF = (1U << 8);
    inline constexpr uint32_t I2C_ICR_ARLOCF_Pos = 9;
    inline constexpr uint32_t I2C_ICR_ARLOCF_Msk = 0x00000200;
    inline constexpr uint32_t I2C_ICR_ARLOCF = (1U << 9);
    inline constexpr uint32_t I2C_ICR_OVRCF_Pos = 10;
    inline constexpr uint32_t I2C_ICR_OVRCF_Msk = 0x00000400;
    inline constexpr uint32_t I2C_ICR_OVRCF = (1U << 10);
    inline constexpr uint32_t I2C_ICR_PECCF_Pos = 11;
    inline constexpr uint32_t I2C_ICR_PECCF_Msk = 0x00000800;
    inline constexpr uint32_t I2C_ICR_PECCF = (1U << 11);
    inline constexpr uint32_t I2C_ICR_TIMOUTCF_Pos = 12;
    inline constexpr uint32_t I2C_ICR_TIMOUTCF_Msk = 0x00001000;
    inline constexpr uint32_t I2C_ICR_TIMOUTCF = (1U << 12);
    inline constexpr uint32_t I2C_ICR_ALERTCF_Pos = 13;
    inline constexpr uint32_t I2C_ICR_ALERTCF_Msk = 0x00002000;
    inline constexpr uint32_t I2C_ICR_ALERTCF = (1U << 13);

    // I2C_PECR fields
    inline constexpr uint32_t I2C_PECR_PEC_Pos = 0;
    inline constexpr uint32_t I2C_PECR_PEC_Msk = 0x000000FF;

    // I2C_RXDR fields
    inline constexpr uint32_t I2C_RXDR_RXDATA_Pos = 0;
    inline constexpr uint32_t I2C_RXDR_RXDATA_Msk = 0x000000FF;

    // I2C_TXDR fields
    inline constexpr uint32_t I2C_TXDR_TXDATA_Pos = 0;
    inline constexpr uint32_t I2C_TXDR_TXDATA_Msk = 0x000000FF;

} // namespace I2C2

namespace I2C3 {
    // I2C_CR1 fields
    inline constexpr uint32_t I2C_CR1_PE_Pos = 0;
    inline constexpr uint32_t I2C_CR1_PE_Msk = 0x00000001;
    inline constexpr uint32_t I2C_CR1_PE = (1U << 0);
    inline constexpr uint32_t I2C_CR1_TXIE_Pos = 1;
    inline constexpr uint32_t I2C_CR1_TXIE_Msk = 0x00000002;
    inline constexpr uint32_t I2C_CR1_TXIE = (1U << 1);
    inline constexpr uint32_t I2C_CR1_RXIE_Pos = 2;
    inline constexpr uint32_t I2C_CR1_RXIE_Msk = 0x00000004;
    inline constexpr uint32_t I2C_CR1_RXIE = (1U << 2);
    inline constexpr uint32_t I2C_CR1_ADDRIE_Pos = 3;
    inline constexpr uint32_t I2C_CR1_ADDRIE_Msk = 0x00000008;
    inline constexpr uint32_t I2C_CR1_ADDRIE = (1U << 3);
    inline constexpr uint32_t I2C_CR1_NACKIE_Pos = 4;
    inline constexpr uint32_t I2C_CR1_NACKIE_Msk = 0x00000010;
    inline constexpr uint32_t I2C_CR1_NACKIE = (1U << 4);
    inline constexpr uint32_t I2C_CR1_STOPIE_Pos = 5;
    inline constexpr uint32_t I2C_CR1_STOPIE_Msk = 0x00000020;
    inline constexpr uint32_t I2C_CR1_STOPIE = (1U << 5);
    inline constexpr uint32_t I2C_CR1_TCIE_Pos = 6;
    inline constexpr uint32_t I2C_CR1_TCIE_Msk = 0x00000040;
    inline constexpr uint32_t I2C_CR1_TCIE = (1U << 6);
    inline constexpr uint32_t I2C_CR1_ERRIE_Pos = 7;
    inline constexpr uint32_t I2C_CR1_ERRIE_Msk = 0x00000080;
    inline constexpr uint32_t I2C_CR1_ERRIE = (1U << 7);
    inline constexpr uint32_t I2C_CR1_DNF_Pos = 8;
    inline constexpr uint32_t I2C_CR1_DNF_Msk = 0x00000F00;
    inline constexpr uint32_t I2C_CR1_ANFOFF_Pos = 12;
    inline constexpr uint32_t I2C_CR1_ANFOFF_Msk = 0x00001000;
    inline constexpr uint32_t I2C_CR1_ANFOFF = (1U << 12);
    inline constexpr uint32_t I2C_CR1_TXDMAEN_Pos = 14;
    inline constexpr uint32_t I2C_CR1_TXDMAEN_Msk = 0x00004000;
    inline constexpr uint32_t I2C_CR1_TXDMAEN = (1U << 14);
    inline constexpr uint32_t I2C_CR1_RXDMAEN_Pos = 15;
    inline constexpr uint32_t I2C_CR1_RXDMAEN_Msk = 0x00008000;
    inline constexpr uint32_t I2C_CR1_RXDMAEN = (1U << 15);
    inline constexpr uint32_t I2C_CR1_SBC_Pos = 16;
    inline constexpr uint32_t I2C_CR1_SBC_Msk = 0x00010000;
    inline constexpr uint32_t I2C_CR1_SBC = (1U << 16);
    inline constexpr uint32_t I2C_CR1_NOSTRETCH_Pos = 17;
    inline constexpr uint32_t I2C_CR1_NOSTRETCH_Msk = 0x00020000;
    inline constexpr uint32_t I2C_CR1_NOSTRETCH = (1U << 17);
    inline constexpr uint32_t I2C_CR1_WUPEN_Pos = 18;
    inline constexpr uint32_t I2C_CR1_WUPEN_Msk = 0x00040000;
    inline constexpr uint32_t I2C_CR1_WUPEN = (1U << 18);
    inline constexpr uint32_t I2C_CR1_GCEN_Pos = 19;
    inline constexpr uint32_t I2C_CR1_GCEN_Msk = 0x00080000;
    inline constexpr uint32_t I2C_CR1_GCEN = (1U << 19);
    inline constexpr uint32_t I2C_CR1_SMBHEN_Pos = 20;
    inline constexpr uint32_t I2C_CR1_SMBHEN_Msk = 0x00100000;
    inline constexpr uint32_t I2C_CR1_SMBHEN = (1U << 20);
    inline constexpr uint32_t I2C_CR1_SMBDEN_Pos = 21;
    inline constexpr uint32_t I2C_CR1_SMBDEN_Msk = 0x00200000;
    inline constexpr uint32_t I2C_CR1_SMBDEN = (1U << 21);
    inline constexpr uint32_t I2C_CR1_ALERTEN_Pos = 22;
    inline constexpr uint32_t I2C_CR1_ALERTEN_Msk = 0x00400000;
    inline constexpr uint32_t I2C_CR1_ALERTEN = (1U << 22);
    inline constexpr uint32_t I2C_CR1_PECEN_Pos = 23;
    inline constexpr uint32_t I2C_CR1_PECEN_Msk = 0x00800000;
    inline constexpr uint32_t I2C_CR1_PECEN = (1U << 23);

    // I2C_CR2 fields
    inline constexpr uint32_t I2C_CR2_SADD0_Pos = 0;
    inline constexpr uint32_t I2C_CR2_SADD0_Msk = 0x00000001;
    inline constexpr uint32_t I2C_CR2_SADD0 = (1U << 0);
    inline constexpr uint32_t I2C_CR2_SADD1_Pos = 1;
    inline constexpr uint32_t I2C_CR2_SADD1_Msk = 0x00000002;
    inline constexpr uint32_t I2C_CR2_SADD1 = (1U << 1);
    inline constexpr uint32_t I2C_CR2_SADD2_Pos = 2;
    inline constexpr uint32_t I2C_CR2_SADD2_Msk = 0x00000004;
    inline constexpr uint32_t I2C_CR2_SADD2 = (1U << 2);
    inline constexpr uint32_t I2C_CR2_SADD3_Pos = 3;
    inline constexpr uint32_t I2C_CR2_SADD3_Msk = 0x00000008;
    inline constexpr uint32_t I2C_CR2_SADD3 = (1U << 3);
    inline constexpr uint32_t I2C_CR2_SADD4_Pos = 4;
    inline constexpr uint32_t I2C_CR2_SADD4_Msk = 0x00000010;
    inline constexpr uint32_t I2C_CR2_SADD4 = (1U << 4);
    inline constexpr uint32_t I2C_CR2_SADD5_Pos = 5;
    inline constexpr uint32_t I2C_CR2_SADD5_Msk = 0x00000020;
    inline constexpr uint32_t I2C_CR2_SADD5 = (1U << 5);
    inline constexpr uint32_t I2C_CR2_SADD6_Pos = 6;
    inline constexpr uint32_t I2C_CR2_SADD6_Msk = 0x00000040;
    inline constexpr uint32_t I2C_CR2_SADD6 = (1U << 6);
    inline constexpr uint32_t I2C_CR2_SADD7_Pos = 7;
    inline constexpr uint32_t I2C_CR2_SADD7_Msk = 0x00000080;
    inline constexpr uint32_t I2C_CR2_SADD7 = (1U << 7);
    inline constexpr uint32_t I2C_CR2_SADD8_Pos = 8;
    inline constexpr uint32_t I2C_CR2_SADD8_Msk = 0x00000100;
    inline constexpr uint32_t I2C_CR2_SADD8 = (1U << 8);
    inline constexpr uint32_t I2C_CR2_SADD9_Pos = 9;
    inline constexpr uint32_t I2C_CR2_SADD9_Msk = 0x00000200;
    inline constexpr uint32_t I2C_CR2_SADD9 = (1U << 9);
    inline constexpr uint32_t I2C_CR2_RD_WRN_Pos = 10;
    inline constexpr uint32_t I2C_CR2_RD_WRN_Msk = 0x00000400;
    inline constexpr uint32_t I2C_CR2_RD_WRN = (1U << 10);
    inline constexpr uint32_t I2C_CR2_ADD10_Pos = 11;
    inline constexpr uint32_t I2C_CR2_ADD10_Msk = 0x00000800;
    inline constexpr uint32_t I2C_CR2_ADD10 = (1U << 11);
    inline constexpr uint32_t I2C_CR2_HEAD10R_Pos = 12;
    inline constexpr uint32_t I2C_CR2_HEAD10R_Msk = 0x00001000;
    inline constexpr uint32_t I2C_CR2_HEAD10R = (1U << 12);
    inline constexpr uint32_t I2C_CR2_START_Pos = 13;
    inline constexpr uint32_t I2C_CR2_START_Msk = 0x00002000;
    inline constexpr uint32_t I2C_CR2_START = (1U << 13);
    inline constexpr uint32_t I2C_CR2_STOP_Pos = 14;
    inline constexpr uint32_t I2C_CR2_STOP_Msk = 0x00004000;
    inline constexpr uint32_t I2C_CR2_STOP = (1U << 14);
    inline constexpr uint32_t I2C_CR2_NACK_Pos = 15;
    inline constexpr uint32_t I2C_CR2_NACK_Msk = 0x00008000;
    inline constexpr uint32_t I2C_CR2_NACK = (1U << 15);
    inline constexpr uint32_t I2C_CR2_NBYTES_Pos = 16;
    inline constexpr uint32_t I2C_CR2_NBYTES_Msk = 0x00FF0000;
    inline constexpr uint32_t I2C_CR2_RELOAD_Pos = 24;
    inline constexpr uint32_t I2C_CR2_RELOAD_Msk = 0x01000000;
    inline constexpr uint32_t I2C_CR2_RELOAD = (1U << 24);
    inline constexpr uint32_t I2C_CR2_AUTOEND_Pos = 25;
    inline constexpr uint32_t I2C_CR2_AUTOEND_Msk = 0x02000000;
    inline constexpr uint32_t I2C_CR2_AUTOEND = (1U << 25);
    inline constexpr uint32_t I2C_CR2_PECBYTE_Pos = 26;
    inline constexpr uint32_t I2C_CR2_PECBYTE_Msk = 0x04000000;
    inline constexpr uint32_t I2C_CR2_PECBYTE = (1U << 26);

    // I2C_OAR1 fields
    inline constexpr uint32_t I2C_OAR1_OA1_Pos = 0;
    inline constexpr uint32_t I2C_OAR1_OA1_Msk = 0x000003FF;
    inline constexpr uint32_t I2C_OAR1_OA1MODE_Pos = 10;
    inline constexpr uint32_t I2C_OAR1_OA1MODE_Msk = 0x00000400;
    inline constexpr uint32_t I2C_OAR1_OA1MODE = (1U << 10);
    inline constexpr uint32_t I2C_OAR1_OA1EN_Pos = 15;
    inline constexpr uint32_t I2C_OAR1_OA1EN_Msk = 0x00008000;
    inline constexpr uint32_t I2C_OAR1_OA1EN = (1U << 15);

    // I2C_OAR2 fields
    inline constexpr uint32_t I2C_OAR2_OA2_Pos = 1;
    inline constexpr uint32_t I2C_OAR2_OA2_Msk = 0x000000FE;
    inline constexpr uint32_t I2C_OAR2_OA2MSK_Pos = 8;
    inline constexpr uint32_t I2C_OAR2_OA2MSK_Msk = 0x00000700;
    inline constexpr uint32_t I2C_OAR2_OA2EN_Pos = 15;
    inline constexpr uint32_t I2C_OAR2_OA2EN_Msk = 0x00008000;
    inline constexpr uint32_t I2C_OAR2_OA2EN = (1U << 15);

    // I2C_TIMINGR fields
    inline constexpr uint32_t I2C_TIMINGR_SCLL_Pos = 0;
    inline constexpr uint32_t I2C_TIMINGR_SCLL_Msk = 0x000000FF;
    inline constexpr uint32_t I2C_TIMINGR_SCLH_Pos = 8;
    inline constexpr uint32_t I2C_TIMINGR_SCLH_Msk = 0x0000FF00;
    inline constexpr uint32_t I2C_TIMINGR_SDADEL_Pos = 16;
    inline constexpr uint32_t I2C_TIMINGR_SDADEL_Msk = 0x000F0000;
    inline constexpr uint32_t I2C_TIMINGR_SCLDEL_Pos = 20;
    inline constexpr uint32_t I2C_TIMINGR_SCLDEL_Msk = 0x00F00000;
    inline constexpr uint32_t I2C_TIMINGR_PRESC_Pos = 28;
    inline constexpr uint32_t I2C_TIMINGR_PRESC_Msk = 0xF0000000;

    // I2C_TIMEOUTR fields
    inline constexpr uint32_t I2C_TIMEOUTR_TIMEOUTA_Pos = 0;
    inline constexpr uint32_t I2C_TIMEOUTR_TIMEOUTA_Msk = 0x00000FFF;
    inline constexpr uint32_t I2C_TIMEOUTR_TIDLE_Pos = 12;
    inline constexpr uint32_t I2C_TIMEOUTR_TIDLE_Msk = 0x00001000;
    inline constexpr uint32_t I2C_TIMEOUTR_TIDLE = (1U << 12);
    inline constexpr uint32_t I2C_TIMEOUTR_TIMOUTEN_Pos = 15;
    inline constexpr uint32_t I2C_TIMEOUTR_TIMOUTEN_Msk = 0x00008000;
    inline constexpr uint32_t I2C_TIMEOUTR_TIMOUTEN = (1U << 15);
    inline constexpr uint32_t I2C_TIMEOUTR_TIMEOUTB_Pos = 16;
    inline constexpr uint32_t I2C_TIMEOUTR_TIMEOUTB_Msk = 0x0FFF0000;
    inline constexpr uint32_t I2C_TIMEOUTR_TEXTEN_Pos = 31;
    inline constexpr uint32_t I2C_TIMEOUTR_TEXTEN_Msk = 0x80000000;
    inline constexpr uint32_t I2C_TIMEOUTR_TEXTEN = (1U << 31);

    // I2C_ISR fields
    inline constexpr uint32_t I2C_ISR_TXE_Pos = 0;
    inline constexpr uint32_t I2C_ISR_TXE_Msk = 0x00000001;
    inline constexpr uint32_t I2C_ISR_TXE = (1U << 0);
    inline constexpr uint32_t I2C_ISR_TXIS_Pos = 1;
    inline constexpr uint32_t I2C_ISR_TXIS_Msk = 0x00000002;
    inline constexpr uint32_t I2C_ISR_TXIS = (1U << 1);
    inline constexpr uint32_t I2C_ISR_RXNE_Pos = 2;
    inline constexpr uint32_t I2C_ISR_RXNE_Msk = 0x00000004;
    inline constexpr uint32_t I2C_ISR_RXNE = (1U << 2);
    inline constexpr uint32_t I2C_ISR_ADDR_Pos = 3;
    inline constexpr uint32_t I2C_ISR_ADDR_Msk = 0x00000008;
    inline constexpr uint32_t I2C_ISR_ADDR = (1U << 3);
    inline constexpr uint32_t I2C_ISR_NACKF_Pos = 4;
    inline constexpr uint32_t I2C_ISR_NACKF_Msk = 0x00000010;
    inline constexpr uint32_t I2C_ISR_NACKF = (1U << 4);
    inline constexpr uint32_t I2C_ISR_STOPF_Pos = 5;
    inline constexpr uint32_t I2C_ISR_STOPF_Msk = 0x00000020;
    inline constexpr uint32_t I2C_ISR_STOPF = (1U << 5);
    inline constexpr uint32_t I2C_ISR_TC_Pos = 6;
    inline constexpr uint32_t I2C_ISR_TC_Msk = 0x00000040;
    inline constexpr uint32_t I2C_ISR_TC = (1U << 6);
    inline constexpr uint32_t I2C_ISR_TCR_Pos = 7;
    inline constexpr uint32_t I2C_ISR_TCR_Msk = 0x00000080;
    inline constexpr uint32_t I2C_ISR_TCR = (1U << 7);
    inline constexpr uint32_t I2C_ISR_BERR_Pos = 8;
    inline constexpr uint32_t I2C_ISR_BERR_Msk = 0x00000100;
    inline constexpr uint32_t I2C_ISR_BERR = (1U << 8);
    inline constexpr uint32_t I2C_ISR_ARLO_Pos = 9;
    inline constexpr uint32_t I2C_ISR_ARLO_Msk = 0x00000200;
    inline constexpr uint32_t I2C_ISR_ARLO = (1U << 9);
    inline constexpr uint32_t I2C_ISR_OVR_Pos = 10;
    inline constexpr uint32_t I2C_ISR_OVR_Msk = 0x00000400;
    inline constexpr uint32_t I2C_ISR_OVR = (1U << 10);
    inline constexpr uint32_t I2C_ISR_PECERR_Pos = 11;
    inline constexpr uint32_t I2C_ISR_PECERR_Msk = 0x00000800;
    inline constexpr uint32_t I2C_ISR_PECERR = (1U << 11);
    inline constexpr uint32_t I2C_ISR_TIMEOUT_Pos = 12;
    inline constexpr uint32_t I2C_ISR_TIMEOUT_Msk = 0x00001000;
    inline constexpr uint32_t I2C_ISR_TIMEOUT = (1U << 12);
    inline constexpr uint32_t I2C_ISR_ALERT_Pos = 13;
    inline constexpr uint32_t I2C_ISR_ALERT_Msk = 0x00002000;
    inline constexpr uint32_t I2C_ISR_ALERT = (1U << 13);
    inline constexpr uint32_t I2C_ISR_BUSY_Pos = 15;
    inline constexpr uint32_t I2C_ISR_BUSY_Msk = 0x00008000;
    inline constexpr uint32_t I2C_ISR_BUSY = (1U << 15);
    inline constexpr uint32_t I2C_ISR_DIR_Pos = 16;
    inline constexpr uint32_t I2C_ISR_DIR_Msk = 0x00010000;
    inline constexpr uint32_t I2C_ISR_DIR = (1U << 16);
    inline constexpr uint32_t I2C_ISR_ADDCODE_Pos = 17;
    inline constexpr uint32_t I2C_ISR_ADDCODE_Msk = 0x00FE0000;

    // I2C_ICR fields
    inline constexpr uint32_t I2C_ICR_ADDRCF_Pos = 3;
    inline constexpr uint32_t I2C_ICR_ADDRCF_Msk = 0x00000008;
    inline constexpr uint32_t I2C_ICR_ADDRCF = (1U << 3);
    inline constexpr uint32_t I2C_ICR_NACKCF_Pos = 4;
    inline constexpr uint32_t I2C_ICR_NACKCF_Msk = 0x00000010;
    inline constexpr uint32_t I2C_ICR_NACKCF = (1U << 4);
    inline constexpr uint32_t I2C_ICR_STOPCF_Pos = 5;
    inline constexpr uint32_t I2C_ICR_STOPCF_Msk = 0x00000020;
    inline constexpr uint32_t I2C_ICR_STOPCF = (1U << 5);
    inline constexpr uint32_t I2C_ICR_BERRCF_Pos = 8;
    inline constexpr uint32_t I2C_ICR_BERRCF_Msk = 0x00000100;
    inline constexpr uint32_t I2C_ICR_BERRCF = (1U << 8);
    inline constexpr uint32_t I2C_ICR_ARLOCF_Pos = 9;
    inline constexpr uint32_t I2C_ICR_ARLOCF_Msk = 0x00000200;
    inline constexpr uint32_t I2C_ICR_ARLOCF = (1U << 9);
    inline constexpr uint32_t I2C_ICR_OVRCF_Pos = 10;
    inline constexpr uint32_t I2C_ICR_OVRCF_Msk = 0x00000400;
    inline constexpr uint32_t I2C_ICR_OVRCF = (1U << 10);
    inline constexpr uint32_t I2C_ICR_PECCF_Pos = 11;
    inline constexpr uint32_t I2C_ICR_PECCF_Msk = 0x00000800;
    inline constexpr uint32_t I2C_ICR_PECCF = (1U << 11);
    inline constexpr uint32_t I2C_ICR_TIMOUTCF_Pos = 12;
    inline constexpr uint32_t I2C_ICR_TIMOUTCF_Msk = 0x00001000;
    inline constexpr uint32_t I2C_ICR_TIMOUTCF = (1U << 12);
    inline constexpr uint32_t I2C_ICR_ALERTCF_Pos = 13;
    inline constexpr uint32_t I2C_ICR_ALERTCF_Msk = 0x00002000;
    inline constexpr uint32_t I2C_ICR_ALERTCF = (1U << 13);

    // I2C_PECR fields
    inline constexpr uint32_t I2C_PECR_PEC_Pos = 0;
    inline constexpr uint32_t I2C_PECR_PEC_Msk = 0x000000FF;

    // I2C_RXDR fields
    inline constexpr uint32_t I2C_RXDR_RXDATA_Pos = 0;
    inline constexpr uint32_t I2C_RXDR_RXDATA_Msk = 0x000000FF;

    // I2C_TXDR fields
    inline constexpr uint32_t I2C_TXDR_TXDATA_Pos = 0;
    inline constexpr uint32_t I2C_TXDR_TXDATA_Msk = 0x000000FF;

} // namespace I2C3

namespace I2C4 {
    // I2C_CR1 fields
    inline constexpr uint32_t I2C_CR1_PE_Pos = 0;
    inline constexpr uint32_t I2C_CR1_PE_Msk = 0x00000001;
    inline constexpr uint32_t I2C_CR1_PE = (1U << 0);
    inline constexpr uint32_t I2C_CR1_TXIE_Pos = 1;
    inline constexpr uint32_t I2C_CR1_TXIE_Msk = 0x00000002;
    inline constexpr uint32_t I2C_CR1_TXIE = (1U << 1);
    inline constexpr uint32_t I2C_CR1_RXIE_Pos = 2;
    inline constexpr uint32_t I2C_CR1_RXIE_Msk = 0x00000004;
    inline constexpr uint32_t I2C_CR1_RXIE = (1U << 2);
    inline constexpr uint32_t I2C_CR1_ADDRIE_Pos = 3;
    inline constexpr uint32_t I2C_CR1_ADDRIE_Msk = 0x00000008;
    inline constexpr uint32_t I2C_CR1_ADDRIE = (1U << 3);
    inline constexpr uint32_t I2C_CR1_NACKIE_Pos = 4;
    inline constexpr uint32_t I2C_CR1_NACKIE_Msk = 0x00000010;
    inline constexpr uint32_t I2C_CR1_NACKIE = (1U << 4);
    inline constexpr uint32_t I2C_CR1_STOPIE_Pos = 5;
    inline constexpr uint32_t I2C_CR1_STOPIE_Msk = 0x00000020;
    inline constexpr uint32_t I2C_CR1_STOPIE = (1U << 5);
    inline constexpr uint32_t I2C_CR1_TCIE_Pos = 6;
    inline constexpr uint32_t I2C_CR1_TCIE_Msk = 0x00000040;
    inline constexpr uint32_t I2C_CR1_TCIE = (1U << 6);
    inline constexpr uint32_t I2C_CR1_ERRIE_Pos = 7;
    inline constexpr uint32_t I2C_CR1_ERRIE_Msk = 0x00000080;
    inline constexpr uint32_t I2C_CR1_ERRIE = (1U << 7);
    inline constexpr uint32_t I2C_CR1_DNF_Pos = 8;
    inline constexpr uint32_t I2C_CR1_DNF_Msk = 0x00000F00;
    inline constexpr uint32_t I2C_CR1_ANFOFF_Pos = 12;
    inline constexpr uint32_t I2C_CR1_ANFOFF_Msk = 0x00001000;
    inline constexpr uint32_t I2C_CR1_ANFOFF = (1U << 12);
    inline constexpr uint32_t I2C_CR1_TXDMAEN_Pos = 14;
    inline constexpr uint32_t I2C_CR1_TXDMAEN_Msk = 0x00004000;
    inline constexpr uint32_t I2C_CR1_TXDMAEN = (1U << 14);
    inline constexpr uint32_t I2C_CR1_RXDMAEN_Pos = 15;
    inline constexpr uint32_t I2C_CR1_RXDMAEN_Msk = 0x00008000;
    inline constexpr uint32_t I2C_CR1_RXDMAEN = (1U << 15);
    inline constexpr uint32_t I2C_CR1_SBC_Pos = 16;
    inline constexpr uint32_t I2C_CR1_SBC_Msk = 0x00010000;
    inline constexpr uint32_t I2C_CR1_SBC = (1U << 16);
    inline constexpr uint32_t I2C_CR1_NOSTRETCH_Pos = 17;
    inline constexpr uint32_t I2C_CR1_NOSTRETCH_Msk = 0x00020000;
    inline constexpr uint32_t I2C_CR1_NOSTRETCH = (1U << 17);
    inline constexpr uint32_t I2C_CR1_WUPEN_Pos = 18;
    inline constexpr uint32_t I2C_CR1_WUPEN_Msk = 0x00040000;
    inline constexpr uint32_t I2C_CR1_WUPEN = (1U << 18);
    inline constexpr uint32_t I2C_CR1_GCEN_Pos = 19;
    inline constexpr uint32_t I2C_CR1_GCEN_Msk = 0x00080000;
    inline constexpr uint32_t I2C_CR1_GCEN = (1U << 19);
    inline constexpr uint32_t I2C_CR1_SMBHEN_Pos = 20;
    inline constexpr uint32_t I2C_CR1_SMBHEN_Msk = 0x00100000;
    inline constexpr uint32_t I2C_CR1_SMBHEN = (1U << 20);
    inline constexpr uint32_t I2C_CR1_SMBDEN_Pos = 21;
    inline constexpr uint32_t I2C_CR1_SMBDEN_Msk = 0x00200000;
    inline constexpr uint32_t I2C_CR1_SMBDEN = (1U << 21);
    inline constexpr uint32_t I2C_CR1_ALERTEN_Pos = 22;
    inline constexpr uint32_t I2C_CR1_ALERTEN_Msk = 0x00400000;
    inline constexpr uint32_t I2C_CR1_ALERTEN = (1U << 22);
    inline constexpr uint32_t I2C_CR1_PECEN_Pos = 23;
    inline constexpr uint32_t I2C_CR1_PECEN_Msk = 0x00800000;
    inline constexpr uint32_t I2C_CR1_PECEN = (1U << 23);

    // I2C_CR2 fields
    inline constexpr uint32_t I2C_CR2_SADD0_Pos = 0;
    inline constexpr uint32_t I2C_CR2_SADD0_Msk = 0x00000001;
    inline constexpr uint32_t I2C_CR2_SADD0 = (1U << 0);
    inline constexpr uint32_t I2C_CR2_SADD1_Pos = 1;
    inline constexpr uint32_t I2C_CR2_SADD1_Msk = 0x00000002;
    inline constexpr uint32_t I2C_CR2_SADD1 = (1U << 1);
    inline constexpr uint32_t I2C_CR2_SADD2_Pos = 2;
    inline constexpr uint32_t I2C_CR2_SADD2_Msk = 0x00000004;
    inline constexpr uint32_t I2C_CR2_SADD2 = (1U << 2);
    inline constexpr uint32_t I2C_CR2_SADD3_Pos = 3;
    inline constexpr uint32_t I2C_CR2_SADD3_Msk = 0x00000008;
    inline constexpr uint32_t I2C_CR2_SADD3 = (1U << 3);
    inline constexpr uint32_t I2C_CR2_SADD4_Pos = 4;
    inline constexpr uint32_t I2C_CR2_SADD4_Msk = 0x00000010;
    inline constexpr uint32_t I2C_CR2_SADD4 = (1U << 4);
    inline constexpr uint32_t I2C_CR2_SADD5_Pos = 5;
    inline constexpr uint32_t I2C_CR2_SADD5_Msk = 0x00000020;
    inline constexpr uint32_t I2C_CR2_SADD5 = (1U << 5);
    inline constexpr uint32_t I2C_CR2_SADD6_Pos = 6;
    inline constexpr uint32_t I2C_CR2_SADD6_Msk = 0x00000040;
    inline constexpr uint32_t I2C_CR2_SADD6 = (1U << 6);
    inline constexpr uint32_t I2C_CR2_SADD7_Pos = 7;
    inline constexpr uint32_t I2C_CR2_SADD7_Msk = 0x00000080;
    inline constexpr uint32_t I2C_CR2_SADD7 = (1U << 7);
    inline constexpr uint32_t I2C_CR2_SADD8_Pos = 8;
    inline constexpr uint32_t I2C_CR2_SADD8_Msk = 0x00000100;
    inline constexpr uint32_t I2C_CR2_SADD8 = (1U << 8);
    inline constexpr uint32_t I2C_CR2_SADD9_Pos = 9;
    inline constexpr uint32_t I2C_CR2_SADD9_Msk = 0x00000200;
    inline constexpr uint32_t I2C_CR2_SADD9 = (1U << 9);
    inline constexpr uint32_t I2C_CR2_RD_WRN_Pos = 10;
    inline constexpr uint32_t I2C_CR2_RD_WRN_Msk = 0x00000400;
    inline constexpr uint32_t I2C_CR2_RD_WRN = (1U << 10);
    inline constexpr uint32_t I2C_CR2_ADD10_Pos = 11;
    inline constexpr uint32_t I2C_CR2_ADD10_Msk = 0x00000800;
    inline constexpr uint32_t I2C_CR2_ADD10 = (1U << 11);
    inline constexpr uint32_t I2C_CR2_HEAD10R_Pos = 12;
    inline constexpr uint32_t I2C_CR2_HEAD10R_Msk = 0x00001000;
    inline constexpr uint32_t I2C_CR2_HEAD10R = (1U << 12);
    inline constexpr uint32_t I2C_CR2_START_Pos = 13;
    inline constexpr uint32_t I2C_CR2_START_Msk = 0x00002000;
    inline constexpr uint32_t I2C_CR2_START = (1U << 13);
    inline constexpr uint32_t I2C_CR2_STOP_Pos = 14;
    inline constexpr uint32_t I2C_CR2_STOP_Msk = 0x00004000;
    inline constexpr uint32_t I2C_CR2_STOP = (1U << 14);
    inline constexpr uint32_t I2C_CR2_NACK_Pos = 15;
    inline constexpr uint32_t I2C_CR2_NACK_Msk = 0x00008000;
    inline constexpr uint32_t I2C_CR2_NACK = (1U << 15);
    inline constexpr uint32_t I2C_CR2_NBYTES_Pos = 16;
    inline constexpr uint32_t I2C_CR2_NBYTES_Msk = 0x00FF0000;
    inline constexpr uint32_t I2C_CR2_RELOAD_Pos = 24;
    inline constexpr uint32_t I2C_CR2_RELOAD_Msk = 0x01000000;
    inline constexpr uint32_t I2C_CR2_RELOAD = (1U << 24);
    inline constexpr uint32_t I2C_CR2_AUTOEND_Pos = 25;
    inline constexpr uint32_t I2C_CR2_AUTOEND_Msk = 0x02000000;
    inline constexpr uint32_t I2C_CR2_AUTOEND = (1U << 25);
    inline constexpr uint32_t I2C_CR2_PECBYTE_Pos = 26;
    inline constexpr uint32_t I2C_CR2_PECBYTE_Msk = 0x04000000;
    inline constexpr uint32_t I2C_CR2_PECBYTE = (1U << 26);

    // I2C_OAR1 fields
    inline constexpr uint32_t I2C_OAR1_OA1_Pos = 0;
    inline constexpr uint32_t I2C_OAR1_OA1_Msk = 0x000003FF;
    inline constexpr uint32_t I2C_OAR1_OA1MODE_Pos = 10;
    inline constexpr uint32_t I2C_OAR1_OA1MODE_Msk = 0x00000400;
    inline constexpr uint32_t I2C_OAR1_OA1MODE = (1U << 10);
    inline constexpr uint32_t I2C_OAR1_OA1EN_Pos = 15;
    inline constexpr uint32_t I2C_OAR1_OA1EN_Msk = 0x00008000;
    inline constexpr uint32_t I2C_OAR1_OA1EN = (1U << 15);

    // I2C_OAR2 fields
    inline constexpr uint32_t I2C_OAR2_OA2_Pos = 1;
    inline constexpr uint32_t I2C_OAR2_OA2_Msk = 0x000000FE;
    inline constexpr uint32_t I2C_OAR2_OA2MSK_Pos = 8;
    inline constexpr uint32_t I2C_OAR2_OA2MSK_Msk = 0x00000700;
    inline constexpr uint32_t I2C_OAR2_OA2EN_Pos = 15;
    inline constexpr uint32_t I2C_OAR2_OA2EN_Msk = 0x00008000;
    inline constexpr uint32_t I2C_OAR2_OA2EN = (1U << 15);

    // I2C_TIMINGR fields
    inline constexpr uint32_t I2C_TIMINGR_SCLL_Pos = 0;
    inline constexpr uint32_t I2C_TIMINGR_SCLL_Msk = 0x000000FF;
    inline constexpr uint32_t I2C_TIMINGR_SCLH_Pos = 8;
    inline constexpr uint32_t I2C_TIMINGR_SCLH_Msk = 0x0000FF00;
    inline constexpr uint32_t I2C_TIMINGR_SDADEL_Pos = 16;
    inline constexpr uint32_t I2C_TIMINGR_SDADEL_Msk = 0x000F0000;
    inline constexpr uint32_t I2C_TIMINGR_SCLDEL_Pos = 20;
    inline constexpr uint32_t I2C_TIMINGR_SCLDEL_Msk = 0x00F00000;
    inline constexpr uint32_t I2C_TIMINGR_PRESC_Pos = 28;
    inline constexpr uint32_t I2C_TIMINGR_PRESC_Msk = 0xF0000000;

    // I2C_TIMEOUTR fields
    inline constexpr uint32_t I2C_TIMEOUTR_TIMEOUTA_Pos = 0;
    inline constexpr uint32_t I2C_TIMEOUTR_TIMEOUTA_Msk = 0x00000FFF;
    inline constexpr uint32_t I2C_TIMEOUTR_TIDLE_Pos = 12;
    inline constexpr uint32_t I2C_TIMEOUTR_TIDLE_Msk = 0x00001000;
    inline constexpr uint32_t I2C_TIMEOUTR_TIDLE = (1U << 12);
    inline constexpr uint32_t I2C_TIMEOUTR_TIMOUTEN_Pos = 15;
    inline constexpr uint32_t I2C_TIMEOUTR_TIMOUTEN_Msk = 0x00008000;
    inline constexpr uint32_t I2C_TIMEOUTR_TIMOUTEN = (1U << 15);
    inline constexpr uint32_t I2C_TIMEOUTR_TIMEOUTB_Pos = 16;
    inline constexpr uint32_t I2C_TIMEOUTR_TIMEOUTB_Msk = 0x0FFF0000;
    inline constexpr uint32_t I2C_TIMEOUTR_TEXTEN_Pos = 31;
    inline constexpr uint32_t I2C_TIMEOUTR_TEXTEN_Msk = 0x80000000;
    inline constexpr uint32_t I2C_TIMEOUTR_TEXTEN = (1U << 31);

    // I2C_ISR fields
    inline constexpr uint32_t I2C_ISR_TXE_Pos = 0;
    inline constexpr uint32_t I2C_ISR_TXE_Msk = 0x00000001;
    inline constexpr uint32_t I2C_ISR_TXE = (1U << 0);
    inline constexpr uint32_t I2C_ISR_TXIS_Pos = 1;
    inline constexpr uint32_t I2C_ISR_TXIS_Msk = 0x00000002;
    inline constexpr uint32_t I2C_ISR_TXIS = (1U << 1);
    inline constexpr uint32_t I2C_ISR_RXNE_Pos = 2;
    inline constexpr uint32_t I2C_ISR_RXNE_Msk = 0x00000004;
    inline constexpr uint32_t I2C_ISR_RXNE = (1U << 2);
    inline constexpr uint32_t I2C_ISR_ADDR_Pos = 3;
    inline constexpr uint32_t I2C_ISR_ADDR_Msk = 0x00000008;
    inline constexpr uint32_t I2C_ISR_ADDR = (1U << 3);
    inline constexpr uint32_t I2C_ISR_NACKF_Pos = 4;
    inline constexpr uint32_t I2C_ISR_NACKF_Msk = 0x00000010;
    inline constexpr uint32_t I2C_ISR_NACKF = (1U << 4);
    inline constexpr uint32_t I2C_ISR_STOPF_Pos = 5;
    inline constexpr uint32_t I2C_ISR_STOPF_Msk = 0x00000020;
    inline constexpr uint32_t I2C_ISR_STOPF = (1U << 5);
    inline constexpr uint32_t I2C_ISR_TC_Pos = 6;
    inline constexpr uint32_t I2C_ISR_TC_Msk = 0x00000040;
    inline constexpr uint32_t I2C_ISR_TC = (1U << 6);
    inline constexpr uint32_t I2C_ISR_TCR_Pos = 7;
    inline constexpr uint32_t I2C_ISR_TCR_Msk = 0x00000080;
    inline constexpr uint32_t I2C_ISR_TCR = (1U << 7);
    inline constexpr uint32_t I2C_ISR_BERR_Pos = 8;
    inline constexpr uint32_t I2C_ISR_BERR_Msk = 0x00000100;
    inline constexpr uint32_t I2C_ISR_BERR = (1U << 8);
    inline constexpr uint32_t I2C_ISR_ARLO_Pos = 9;
    inline constexpr uint32_t I2C_ISR_ARLO_Msk = 0x00000200;
    inline constexpr uint32_t I2C_ISR_ARLO = (1U << 9);
    inline constexpr uint32_t I2C_ISR_OVR_Pos = 10;
    inline constexpr uint32_t I2C_ISR_OVR_Msk = 0x00000400;
    inline constexpr uint32_t I2C_ISR_OVR = (1U << 10);
    inline constexpr uint32_t I2C_ISR_PECERR_Pos = 11;
    inline constexpr uint32_t I2C_ISR_PECERR_Msk = 0x00000800;
    inline constexpr uint32_t I2C_ISR_PECERR = (1U << 11);
    inline constexpr uint32_t I2C_ISR_TIMEOUT_Pos = 12;
    inline constexpr uint32_t I2C_ISR_TIMEOUT_Msk = 0x00001000;
    inline constexpr uint32_t I2C_ISR_TIMEOUT = (1U << 12);
    inline constexpr uint32_t I2C_ISR_ALERT_Pos = 13;
    inline constexpr uint32_t I2C_ISR_ALERT_Msk = 0x00002000;
    inline constexpr uint32_t I2C_ISR_ALERT = (1U << 13);
    inline constexpr uint32_t I2C_ISR_BUSY_Pos = 15;
    inline constexpr uint32_t I2C_ISR_BUSY_Msk = 0x00008000;
    inline constexpr uint32_t I2C_ISR_BUSY = (1U << 15);
    inline constexpr uint32_t I2C_ISR_DIR_Pos = 16;
    inline constexpr uint32_t I2C_ISR_DIR_Msk = 0x00010000;
    inline constexpr uint32_t I2C_ISR_DIR = (1U << 16);
    inline constexpr uint32_t I2C_ISR_ADDCODE_Pos = 17;
    inline constexpr uint32_t I2C_ISR_ADDCODE_Msk = 0x00FE0000;

    // I2C_ICR fields
    inline constexpr uint32_t I2C_ICR_ADDRCF_Pos = 3;
    inline constexpr uint32_t I2C_ICR_ADDRCF_Msk = 0x00000008;
    inline constexpr uint32_t I2C_ICR_ADDRCF = (1U << 3);
    inline constexpr uint32_t I2C_ICR_NACKCF_Pos = 4;
    inline constexpr uint32_t I2C_ICR_NACKCF_Msk = 0x00000010;
    inline constexpr uint32_t I2C_ICR_NACKCF = (1U << 4);
    inline constexpr uint32_t I2C_ICR_STOPCF_Pos = 5;
    inline constexpr uint32_t I2C_ICR_STOPCF_Msk = 0x00000020;
    inline constexpr uint32_t I2C_ICR_STOPCF = (1U << 5);
    inline constexpr uint32_t I2C_ICR_BERRCF_Pos = 8;
    inline constexpr uint32_t I2C_ICR_BERRCF_Msk = 0x00000100;
    inline constexpr uint32_t I2C_ICR_BERRCF = (1U << 8);
    inline constexpr uint32_t I2C_ICR_ARLOCF_Pos = 9;
    inline constexpr uint32_t I2C_ICR_ARLOCF_Msk = 0x00000200;
    inline constexpr uint32_t I2C_ICR_ARLOCF = (1U << 9);
    inline constexpr uint32_t I2C_ICR_OVRCF_Pos = 10;
    inline constexpr uint32_t I2C_ICR_OVRCF_Msk = 0x00000400;
    inline constexpr uint32_t I2C_ICR_OVRCF = (1U << 10);
    inline constexpr uint32_t I2C_ICR_PECCF_Pos = 11;
    inline constexpr uint32_t I2C_ICR_PECCF_Msk = 0x00000800;
    inline constexpr uint32_t I2C_ICR_PECCF = (1U << 11);
    inline constexpr uint32_t I2C_ICR_TIMOUTCF_Pos = 12;
    inline constexpr uint32_t I2C_ICR_TIMOUTCF_Msk = 0x00001000;
    inline constexpr uint32_t I2C_ICR_TIMOUTCF = (1U << 12);
    inline constexpr uint32_t I2C_ICR_ALERTCF_Pos = 13;
    inline constexpr uint32_t I2C_ICR_ALERTCF_Msk = 0x00002000;
    inline constexpr uint32_t I2C_ICR_ALERTCF = (1U << 13);

    // I2C_PECR fields
    inline constexpr uint32_t I2C_PECR_PEC_Pos = 0;
    inline constexpr uint32_t I2C_PECR_PEC_Msk = 0x000000FF;

    // I2C_RXDR fields
    inline constexpr uint32_t I2C_RXDR_RXDATA_Pos = 0;
    inline constexpr uint32_t I2C_RXDR_RXDATA_Msk = 0x000000FF;

    // I2C_TXDR fields
    inline constexpr uint32_t I2C_TXDR_TXDATA_Pos = 0;
    inline constexpr uint32_t I2C_TXDR_TXDATA_Msk = 0x000000FF;

} // namespace I2C4

// Peripheral instances (lowercase to avoid namespace collision)
namespace periph {
    inline auto* const i2c1 = reinterpret_cast<I2C1_t*>(0x40005400);
    inline auto* const i2c2 = reinterpret_cast<I2C1_t*>(0x40005800);
    inline auto* const i2c3 = reinterpret_cast<I2C1_t*>(0x40005C00);
    inline auto* const i2c4 = reinterpret_cast<I2C1_t*>(0x58001C00);
} // namespace periph

} // namespace sbl::hw::reg

#endif // SBL_HW_REG_STM32H750_I2C_HPP
