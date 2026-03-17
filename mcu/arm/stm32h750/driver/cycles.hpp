// cycles.hpp — DWT cycle counter for ARM Cortex-M7
//
// Provides cycle-accurate profiling via the Data Watchpoint and Trace (DWT)
// unit's CYCCNT register. At 480 MHz (STM32H750), this gives ~2.08 ns
// resolution with wrap every ~8.9 seconds.
//
// Cortex-M7 requires unlocking the DWT via the Lock Access Register (LAR)
// before CYCCNT works. M3/M4 code that omits this step will silently fail
// on M7 — writes are ignored, counter never starts.

#pragma once
#ifndef SBL_HW_DRIVER_CYCLES_HPP
#define SBL_HW_DRIVER_CYCLES_HPP

#include <cstdint>

namespace sbl::profiling {

namespace detail {

inline volatile uint32_t& DEMCR      = *reinterpret_cast<volatile uint32_t*>(0xE000EDFC);
inline volatile uint32_t& DWT_CTRL   = *reinterpret_cast<volatile uint32_t*>(0xE0001000);
inline volatile uint32_t& DWT_CYCCNT = *reinterpret_cast<volatile uint32_t*>(0xE0001004);
inline volatile uint32_t& DWT_LAR    = *reinterpret_cast<volatile uint32_t*>(0xE0001FB0);

static constexpr uint32_t TRCENA_BIT    = 1u << 24;
static constexpr uint32_t CYCCNTENA_BIT = 1u << 0;
static constexpr uint32_t LAR_UNLOCK    = 0xC5ACCE55;

} // namespace detail

/// Initialize DWT cycle counter. Call once after clock configuration.
inline void cycles_init() {
    detail::DEMCR     |= detail::TRCENA_BIT;
    detail::DWT_LAR    = detail::LAR_UNLOCK;
    detail::DWT_CYCCNT = 0;
    detail::DWT_CTRL  |= detail::CYCCNTENA_BIT;
}

/// Read current cycle count (free-running, wraps at 2^32).
inline uint32_t cycles() {
    return detail::DWT_CYCCNT;
}

} // namespace sbl::profiling

#endif // SBL_HW_DRIVER_CYCLES_HPP
