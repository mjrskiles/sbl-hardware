/**
 * @file dbgmcu.hpp
 * @brief Register definitions for STM32H750 - dbgmcu
 *
 * Generated from: stm32h750.svd.patched
 * Generator: cecrops
 * Generated: 2026-09-03T15:06:16.445322
 *
 * DO NOT EDIT - Regenerate with: cecrops generate <mcu-dir>
 */

#ifndef SBL_HW_REG_STM32H750_DBGMCU_HPP
#define SBL_HW_REG_STM32H750_DBGMCU_HPP

#include <cstdint>

namespace sbl::hw::reg {

/** Microcontroller Debug Unit */
struct DBGMCU_t {
    volatile uint32_t IDC;  ///< DBGMCU Identity Code Register
    volatile uint32_t CR;  ///< DBGMCU Configuration Register
    uint8_t _reserved0[44];
    volatile uint32_t APB3FZ1;  ///< DBGMCU APB3 peripheral freeze register
    uint8_t _reserved1[4];
    volatile uint32_t APB1LFZ1;  ///< DBGMCU APB1L peripheral freeze register
    uint8_t _reserved2[12];
    volatile uint32_t APB2FZ1;  ///< DBGMCU APB2 peripheral freeze register
    uint8_t _reserved3[4];
    volatile uint32_t APB4FZ1;  ///< DBGMCU APB4 peripheral freeze register
};

namespace DBGMCU {
    // IDC fields
    inline constexpr uint32_t IDC_DEV_ID_Pos = 0;
    inline constexpr uint32_t IDC_DEV_ID_Msk = 0x00000FFF;
    inline constexpr uint32_t IDC_REV_ID_Pos = 16;
    inline constexpr uint32_t IDC_REV_ID_Msk = 0xFFFF0000;

    // CR fields
    inline constexpr uint32_t CR_DBGSLEEP_D1_Pos = 0;
    inline constexpr uint32_t CR_DBGSLEEP_D1_Msk = 0x00000001;
    inline constexpr uint32_t CR_DBGSLEEP_D1 = (1U << 0);
    inline constexpr uint32_t CR_DBGSTOP_D1_Pos = 1;
    inline constexpr uint32_t CR_DBGSTOP_D1_Msk = 0x00000002;
    inline constexpr uint32_t CR_DBGSTOP_D1 = (1U << 1);
    inline constexpr uint32_t CR_DBGSTBY_D1_Pos = 2;
    inline constexpr uint32_t CR_DBGSTBY_D1_Msk = 0x00000004;
    inline constexpr uint32_t CR_DBGSTBY_D1 = (1U << 2);
    inline constexpr uint32_t CR_DBGSLEEP_D2_Pos = 3;
    inline constexpr uint32_t CR_DBGSLEEP_D2_Msk = 0x00000008;
    inline constexpr uint32_t CR_DBGSLEEP_D2 = (1U << 3);
    inline constexpr uint32_t CR_DBGSTOP_D2_Pos = 4;
    inline constexpr uint32_t CR_DBGSTOP_D2_Msk = 0x00000010;
    inline constexpr uint32_t CR_DBGSTOP_D2 = (1U << 4);
    inline constexpr uint32_t CR_DBGSTBY_D2_Pos = 5;
    inline constexpr uint32_t CR_DBGSTBY_D2_Msk = 0x00000020;
    inline constexpr uint32_t CR_DBGSTBY_D2 = (1U << 5);
    inline constexpr uint32_t CR_DBGSTOP_D3_Pos = 7;
    inline constexpr uint32_t CR_DBGSTOP_D3_Msk = 0x00000080;
    inline constexpr uint32_t CR_DBGSTOP_D3 = (1U << 7);
    inline constexpr uint32_t CR_DBGSTBY_D3_Pos = 8;
    inline constexpr uint32_t CR_DBGSTBY_D3_Msk = 0x00000100;
    inline constexpr uint32_t CR_DBGSTBY_D3 = (1U << 8);
    inline constexpr uint32_t CR_TRACECLKEN_Pos = 20;
    inline constexpr uint32_t CR_TRACECLKEN_Msk = 0x00100000;
    inline constexpr uint32_t CR_TRACECLKEN = (1U << 20);
    inline constexpr uint32_t CR_D1DBGCKEN_Pos = 21;
    inline constexpr uint32_t CR_D1DBGCKEN_Msk = 0x00200000;
    inline constexpr uint32_t CR_D1DBGCKEN = (1U << 21);
    inline constexpr uint32_t CR_D3DBGCKEN_Pos = 22;
    inline constexpr uint32_t CR_D3DBGCKEN_Msk = 0x00400000;
    inline constexpr uint32_t CR_D3DBGCKEN = (1U << 22);
    inline constexpr uint32_t CR_TRGOEN_Pos = 28;
    inline constexpr uint32_t CR_TRGOEN_Msk = 0x10000000;
    inline constexpr uint32_t CR_TRGOEN = (1U << 28);

    // APB3FZ1 fields
    inline constexpr uint32_t APB3FZ1_WWDG1_Pos = 6;
    inline constexpr uint32_t APB3FZ1_WWDG1_Msk = 0x00000040;
    inline constexpr uint32_t APB3FZ1_WWDG1 = (1U << 6);

    // APB1LFZ1 fields
    inline constexpr uint32_t APB1LFZ1_DBG_TIM2_Pos = 0;
    inline constexpr uint32_t APB1LFZ1_DBG_TIM2_Msk = 0x00000001;
    inline constexpr uint32_t APB1LFZ1_DBG_TIM2 = (1U << 0);
    inline constexpr uint32_t APB1LFZ1_DBG_TIM3_Pos = 1;
    inline constexpr uint32_t APB1LFZ1_DBG_TIM3_Msk = 0x00000002;
    inline constexpr uint32_t APB1LFZ1_DBG_TIM3 = (1U << 1);
    inline constexpr uint32_t APB1LFZ1_DBG_TIM4_Pos = 2;
    inline constexpr uint32_t APB1LFZ1_DBG_TIM4_Msk = 0x00000004;
    inline constexpr uint32_t APB1LFZ1_DBG_TIM4 = (1U << 2);
    inline constexpr uint32_t APB1LFZ1_DBG_TIM5_Pos = 3;
    inline constexpr uint32_t APB1LFZ1_DBG_TIM5_Msk = 0x00000008;
    inline constexpr uint32_t APB1LFZ1_DBG_TIM5 = (1U << 3);
    inline constexpr uint32_t APB1LFZ1_DBG_TIM6_Pos = 4;
    inline constexpr uint32_t APB1LFZ1_DBG_TIM6_Msk = 0x00000010;
    inline constexpr uint32_t APB1LFZ1_DBG_TIM6 = (1U << 4);
    inline constexpr uint32_t APB1LFZ1_DBG_TIM7_Pos = 5;
    inline constexpr uint32_t APB1LFZ1_DBG_TIM7_Msk = 0x00000020;
    inline constexpr uint32_t APB1LFZ1_DBG_TIM7 = (1U << 5);
    inline constexpr uint32_t APB1LFZ1_DBG_TIM12_Pos = 6;
    inline constexpr uint32_t APB1LFZ1_DBG_TIM12_Msk = 0x00000040;
    inline constexpr uint32_t APB1LFZ1_DBG_TIM12 = (1U << 6);
    inline constexpr uint32_t APB1LFZ1_DBG_TIM13_Pos = 7;
    inline constexpr uint32_t APB1LFZ1_DBG_TIM13_Msk = 0x00000080;
    inline constexpr uint32_t APB1LFZ1_DBG_TIM13 = (1U << 7);
    inline constexpr uint32_t APB1LFZ1_DBG_TIM14_Pos = 8;
    inline constexpr uint32_t APB1LFZ1_DBG_TIM14_Msk = 0x00000100;
    inline constexpr uint32_t APB1LFZ1_DBG_TIM14 = (1U << 8);
    inline constexpr uint32_t APB1LFZ1_DBG_LPTIM1_Pos = 9;
    inline constexpr uint32_t APB1LFZ1_DBG_LPTIM1_Msk = 0x00000200;
    inline constexpr uint32_t APB1LFZ1_DBG_LPTIM1 = (1U << 9);
    inline constexpr uint32_t APB1LFZ1_DBG_I2C1_Pos = 21;
    inline constexpr uint32_t APB1LFZ1_DBG_I2C1_Msk = 0x00200000;
    inline constexpr uint32_t APB1LFZ1_DBG_I2C1 = (1U << 21);
    inline constexpr uint32_t APB1LFZ1_DBG_I2C2_Pos = 22;
    inline constexpr uint32_t APB1LFZ1_DBG_I2C2_Msk = 0x00400000;
    inline constexpr uint32_t APB1LFZ1_DBG_I2C2 = (1U << 22);
    inline constexpr uint32_t APB1LFZ1_DBG_I2C3_Pos = 23;
    inline constexpr uint32_t APB1LFZ1_DBG_I2C3_Msk = 0x00800000;
    inline constexpr uint32_t APB1LFZ1_DBG_I2C3 = (1U << 23);

    // APB2FZ1 fields
    inline constexpr uint32_t APB2FZ1_DBG_TIM1_Pos = 0;
    inline constexpr uint32_t APB2FZ1_DBG_TIM1_Msk = 0x00000001;
    inline constexpr uint32_t APB2FZ1_DBG_TIM1 = (1U << 0);
    inline constexpr uint32_t APB2FZ1_DBG_TIM8_Pos = 1;
    inline constexpr uint32_t APB2FZ1_DBG_TIM8_Msk = 0x00000002;
    inline constexpr uint32_t APB2FZ1_DBG_TIM8 = (1U << 1);
    inline constexpr uint32_t APB2FZ1_DBG_TIM15_Pos = 16;
    inline constexpr uint32_t APB2FZ1_DBG_TIM15_Msk = 0x00010000;
    inline constexpr uint32_t APB2FZ1_DBG_TIM15 = (1U << 16);
    inline constexpr uint32_t APB2FZ1_DBG_TIM16_Pos = 17;
    inline constexpr uint32_t APB2FZ1_DBG_TIM16_Msk = 0x00020000;
    inline constexpr uint32_t APB2FZ1_DBG_TIM16 = (1U << 17);
    inline constexpr uint32_t APB2FZ1_DBG_TIM17_Pos = 18;
    inline constexpr uint32_t APB2FZ1_DBG_TIM17_Msk = 0x00040000;
    inline constexpr uint32_t APB2FZ1_DBG_TIM17 = (1U << 18);
    inline constexpr uint32_t APB2FZ1_DBG_HRTIM_Pos = 29;
    inline constexpr uint32_t APB2FZ1_DBG_HRTIM_Msk = 0x20000000;
    inline constexpr uint32_t APB2FZ1_DBG_HRTIM = (1U << 29);

    // APB4FZ1 fields
    inline constexpr uint32_t APB4FZ1_DBG_I2C4_Pos = 7;
    inline constexpr uint32_t APB4FZ1_DBG_I2C4_Msk = 0x00000080;
    inline constexpr uint32_t APB4FZ1_DBG_I2C4 = (1U << 7);
    inline constexpr uint32_t APB4FZ1_DBG_LPTIM2_Pos = 9;
    inline constexpr uint32_t APB4FZ1_DBG_LPTIM2_Msk = 0x00000200;
    inline constexpr uint32_t APB4FZ1_DBG_LPTIM2 = (1U << 9);
    inline constexpr uint32_t APB4FZ1_DBG_LPTIM3_Pos = 10;
    inline constexpr uint32_t APB4FZ1_DBG_LPTIM3_Msk = 0x00000400;
    inline constexpr uint32_t APB4FZ1_DBG_LPTIM3 = (1U << 10);
    inline constexpr uint32_t APB4FZ1_DBG_LPTIM4_Pos = 11;
    inline constexpr uint32_t APB4FZ1_DBG_LPTIM4_Msk = 0x00000800;
    inline constexpr uint32_t APB4FZ1_DBG_LPTIM4 = (1U << 11);
    inline constexpr uint32_t APB4FZ1_DBG_LPTIM5_Pos = 12;
    inline constexpr uint32_t APB4FZ1_DBG_LPTIM5_Msk = 0x00001000;
    inline constexpr uint32_t APB4FZ1_DBG_LPTIM5 = (1U << 12);
    inline constexpr uint32_t APB4FZ1_DBG_RTC_Pos = 16;
    inline constexpr uint32_t APB4FZ1_DBG_RTC_Msk = 0x00010000;
    inline constexpr uint32_t APB4FZ1_DBG_RTC = (1U << 16);
    inline constexpr uint32_t APB4FZ1_DBG_WDGLSD1_Pos = 18;
    inline constexpr uint32_t APB4FZ1_DBG_WDGLSD1_Msk = 0x00040000;
    inline constexpr uint32_t APB4FZ1_DBG_WDGLSD1 = (1U << 18);

} // namespace DBGMCU

// Peripheral instances (lowercase to avoid namespace collision)
namespace periph {
    inline auto* const dbgmcu = reinterpret_cast<DBGMCU_t*>(0x5C001000);
} // namespace periph

} // namespace sbl::hw::reg

#endif // SBL_HW_REG_STM32H750_DBGMCU_HPP
