/**
 * @file cortex_m.hpp
 * @brief ARM Cortex-M core peripheral definitions
 *
 * These are standard across all Cortex-M devices.
 * SysTick, NVIC, SCB addresses are fixed by ARM.
 */

#ifndef SBL_HW_REG_CORTEX_M_HPP
#define SBL_HW_REG_CORTEX_M_HPP

#include <cstdint>

namespace sbl::hw::reg {

/** SysTick Timer */
struct SysTick_t {
    volatile uint32_t CTRL;   ///< Control and Status Register
    volatile uint32_t LOAD;   ///< Reload Value Register
    volatile uint32_t VAL;    ///< Current Value Register
    volatile uint32_t CALIB;  ///< Calibration Register
};

// SysTick bit field constants
namespace SysTick {
    // CTRL fields
    inline constexpr uint32_t ENABLE_Pos = 0;
    inline constexpr uint32_t ENABLE = (1U << 0);
    inline constexpr uint32_t TICKINT_Pos = 1;
    inline constexpr uint32_t TICKINT = (1U << 1);
    inline constexpr uint32_t CLKSOURCE_Pos = 2;
    inline constexpr uint32_t CLKSOURCE = (1U << 2);  // 1 = processor clock
    inline constexpr uint32_t COUNTFLAG_Pos = 16;
    inline constexpr uint32_t COUNTFLAG = (1U << 16);

    // LOAD max value
    inline constexpr uint32_t LOAD_MAX = 0x00FFFFFF;
}

/** System Control Block */
struct SCB_t {
    volatile uint32_t CPUID;     ///< CPUID Base Register
    volatile uint32_t ICSR;      ///< Interrupt Control and State Register
    volatile uint32_t VTOR;      ///< Vector Table Offset Register
    volatile uint32_t AIRCR;     ///< Application Interrupt and Reset Control
    volatile uint32_t SCR;       ///< System Control Register
    volatile uint32_t CCR;       ///< Configuration and Control Register
    volatile uint8_t  SHP[12];   ///< System Handler Priority Registers
    volatile uint32_t SHCSR;     ///< System Handler Control and State Register
    volatile uint32_t CFSR;      ///< Configurable Fault Status Register
    volatile uint32_t HFSR;      ///< HardFault Status Register
    volatile uint32_t DFSR;      ///< Debug Fault Status Register
    volatile uint32_t MMFAR;     ///< MemManage Fault Address Register
    volatile uint32_t BFAR;      ///< BusFault Address Register
    volatile uint32_t AFSR;      ///< Auxiliary Fault Status Register
};

/** NVIC - Nested Vectored Interrupt Controller */
struct NVIC_t {
    volatile uint32_t ISER[8];   ///< Interrupt Set Enable Registers
    uint32_t _reserved0[24];
    volatile uint32_t ICER[8];   ///< Interrupt Clear Enable Registers
    uint32_t _reserved1[24];
    volatile uint32_t ISPR[8];   ///< Interrupt Set Pending Registers
    uint32_t _reserved2[24];
    volatile uint32_t ICPR[8];   ///< Interrupt Clear Pending Registers
    uint32_t _reserved3[24];
    volatile uint32_t IABR[8];   ///< Interrupt Active Bit Registers
    uint32_t _reserved4[56];
    volatile uint8_t  IP[240];   ///< Interrupt Priority Registers
    uint32_t _reserved5[644];
    volatile uint32_t STIR;      ///< Software Trigger Interrupt Register
};

// Peripheral instances (in periph namespace to match SVD-generated style)
namespace periph {
    inline auto* const systick = reinterpret_cast<SysTick_t*>(0xE000E010);
    inline auto* const scb = reinterpret_cast<SCB_t*>(0xE000ED00);
    inline auto* const nvic = reinterpret_cast<NVIC_t*>(0xE000E100);
}

} // namespace sbl::hw::reg

#endif // SBL_HW_REG_CORTEX_M_HPP
