/**
 * @file priorities.hpp
 * @brief STM32H750 — every interrupt vector's execution level, in one place
 *
 * The scheme (level names, invariants, the BASEPRI ceiling) is the library's:
 * <sbl/hw/hal/interrupts/types.hpp>. This file maps this MCU's vectors onto
 * it. Drivers take their priority from here and never write a number.
 *
 * Numbers are ARM NVIC levels, lower = more urgent, four implemented bits.
 * Rationale per row: docs/research/interrupt-priority-and-real-time-scheduling.md §4.3.
 *
 * | Level | Vector(s)                              |
 * |-------|----------------------------------------|
 * |   0   | (empty by design)                      |
 * |   2   | DMA1 streams carrying SAI1 A/B (audio) |
 * |   4   | OTG_FS / OTG_HS, MIDI USART RX         |
 * |   5   | any other DMA stream                   |
 * |   8   | TIM6 control tick — BASEPRI ceiling    |
 * |   9   | TIM7 soft PWM (BCM)                    |
 * |  12   | debug USART                            |
 * |  14   | SysTick                                |
 * |  15   | PendSV, SVCall                         |
 */

#ifndef SBL_HW_DRIVER_PRIORITIES_HPP_
#define SBL_HW_DRIVER_PRIORITIES_HPP_

#include <cstdint>
#include <sbl/hw/hal/interrupts/types.hpp>
#include <sbl/hw/reg/cortex_m.hpp>
#include <sbl/hw/reg/irq.hpp>

namespace sbl::driver::prio {

using Level = sbl::hal::interrupts::Level;
using sbl::hal::interrupts::encode;

inline constexpr Level kAudioDma    = Level::Audio;        ///< SAI1 A/B DMA streams
inline constexpr Level kUsbOtg      = Level::UsbMidi;      ///< OTG_FS / OTG_HS
inline constexpr Level kMidiUart    = Level::UsbMidi;      ///< USART RX-only (MIDI)
inline constexpr Level kOtherDma    = Level::Dma;          ///< ADC, SDMMC, anything not audio
inline constexpr Level kControlTick = Level::ControlTick;  ///< TIM6 — the BASEPRI ceiling
inline constexpr Level kSoftPwm     = Level::SoftPwm;      ///< TIM7 BCM engine
inline constexpr Level kDebugUart   = Level::Debug;        ///< USART TX+RX (debug)
inline constexpr Level kSysTick     = Level::SysTick;
inline constexpr Level kPendSv      = Level::PendSv;
inline constexpr Level kSvCall      = Level::PendSv;

/// Write one NVIC vector's priority.
inline void set_irq(sbl::hw::reg::IRQn irq, Level level) {
    sbl::hw::reg::periph::nvic->IP[static_cast<uint32_t>(irq)] = encode(level);
}

/// Enable one NVIC vector at its level.
inline void enable_irq(sbl::hw::reg::IRQn irq, Level level) {
    using namespace sbl::hw::reg;
    uint32_t n = static_cast<uint32_t>(irq);
    periph::nvic->IP[n] = encode(level);
    periph::nvic->ISER[n >> 5] = (1u << (n & 0x1Fu));
}

/**
 * @brief Assign the system handlers their levels.
 *
 * Reset leaves SysTick, PendSV and SVCall at level 0 — above audio — so an
 * unassigned SysTick could preempt the audio DMA handler. SCB->SHP indexes:
 * SVCall = 7, PendSV = 10, SysTick = 11 (ARMv7-M SHPR2/SHPR3 byte order,
 * CMSIS `SHP[(IRQn & 0xF) - 4]`). Called from Timer::init(), which owns
 * SysTick; idempotent.
 */
inline void set_system_handler_levels() {
    using namespace sbl::hw::reg;
    periph::scb->SHP[7]  = encode(kSvCall);
    periph::scb->SHP[10] = encode(kPendSv);
    periph::scb->SHP[11] = encode(kSysTick);
}

} // namespace sbl::driver::prio

#endif // SBL_HW_DRIVER_PRIORITIES_HPP_
