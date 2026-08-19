// dwt.hpp — DWT (Data Watchpoint and Trace) peripheral driver for ARM Cortex-M7
//
// Provides access to the DWT CYCCNT register — a free-running 32-bit counter
// that increments at the core clock rate. At 480 MHz (STM32H750), this gives
// ~2.08 ns resolution with wrap every ~8.9 seconds.
//
// Cortex-M7 requires unlocking the DWT via the Lock Access Register (LAR)
// before CYCCNT works. M3/M4 code that omits this step will silently fail
// on M7 — writes are ignored, counter never starts.

#pragma once
#ifndef SBL_HW_DRIVER_DWT_HPP
#define SBL_HW_DRIVER_DWT_HPP

#include <cstdint>

namespace sbl::driver {

namespace dwt_detail {

inline volatile uint32_t& DEMCR      = *reinterpret_cast<volatile uint32_t*>(0xE000EDFC);
inline volatile uint32_t& DWT_CTRL   = *reinterpret_cast<volatile uint32_t*>(0xE0001000);
inline volatile uint32_t& DWT_CYCCNT = *reinterpret_cast<volatile uint32_t*>(0xE0001004);
inline volatile uint32_t& DWT_LAR    = *reinterpret_cast<volatile uint32_t*>(0xE0001FB0);

static constexpr uint32_t TRCENA_BIT    = 1u << 24;
static constexpr uint32_t CYCCNTENA_BIT = 1u << 0;
static constexpr uint32_t LAR_UNLOCK    = 0xC5ACCE55;

} // namespace dwt_detail

/// Initialize DWT cycle counter. Call once after clock configuration.
inline void dwt_init() {
    dwt_detail::DEMCR     |= dwt_detail::TRCENA_BIT;
    dwt_detail::DWT_LAR    = dwt_detail::LAR_UNLOCK;
    dwt_detail::DWT_CYCCNT = 0;
    dwt_detail::DWT_CTRL  |= dwt_detail::CYCCNTENA_BIT;
}

/// Read DWT CYCCNT register (free-running, wraps at 2^32).
inline uint32_t dwt_read() {
    return dwt_detail::DWT_CYCCNT;
}

} // namespace sbl::driver

#endif // SBL_HW_DRIVER_DWT_HPP
