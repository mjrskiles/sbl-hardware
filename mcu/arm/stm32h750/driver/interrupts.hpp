/**
 * @file interrupts.hpp
 * @brief STM32H750 interrupts driver: level encoding and masking (Cortex-M7)
 *
 * Implements the library's interrupts contract
 * (<sbl/hw/validation/interrupts_requirements.hpp>) over BASEPRI and PRIMASK.
 *
 * Two masks, two jobs:
 *
 * - BASEPRI raises the execution priority to a ceiling. Handlers above the
 *   ceiling keep running, so the audio ISR is never delayed by a critical
 *   section in main or control code.
 * - PRIMASK stops every configurable exception, audio included. It is for
 *   death paths (assert, fault) and nothing else.
 *
 * The rule (research doc §4.3 item 10): nothing above the ceiling touches
 * state that main or the control tick protect; nothing at or below it uses
 * PRIMASK. Cortex-M7 r1p1 (the STM32H750) does not carry the r0p1 BASEPRI
 * erratum 837070, so a plain MSR is correct.
 */

#ifndef SBL_HW_DRIVER_INTERRUPTS_HPP_
#define SBL_HW_DRIVER_INTERRUPTS_HPP_

#include <cstdint>
#include <sbl/hw/hal/interrupts.hpp>

namespace sbl::driver {

class Interrupts {
public:
    using Level = sbl::hal::interrupts::Level;

    /** NVIC priority bits this MCU implements: 4 of 8. */
    static constexpr uint8_t PRIORITY_BITS = 4;

    /** Encode a level as the byte written to NVIC->IP[], SCB->SHP[] or BASEPRI. */
    static constexpr uint8_t encode(Level level) {
        return static_cast<uint8_t>(static_cast<uint8_t>(level) << (8u - PRIORITY_BITS));
    }

    /** The current BASEPRI (0 = no ceiling). */
    static uint32_t save_ceiling() {
        uint32_t v;
        __asm volatile("mrs %0, basepri" : "=r"(v));
        return v;
    }

    /** Raise BASEPRI to `level` only if that masks more than now; nested sections compose. */
    static void raise_ceiling(Level level) {
        const uint32_t encoded = encode(level);
        __asm volatile("msr basepri_max, %0" : : "r"(encoded) : "memory");
    }

    /** Write BASEPRI back from save_ceiling(). */
    static void restore_ceiling(uint32_t saved) { __asm volatile("msr basepri, %0" : : "r"(saved) : "memory"); }

    /** Set PRIMASK and return its previous value. Blocks audio: death paths only. */
    static uint32_t disable_all() {
        uint32_t saved;
        __asm volatile("mrs %0, primask" : "=r"(saved));
        __asm volatile("cpsid i" : : : "memory");
        return saved;
    }

    /** Write PRIMASK back from disable_all(). */
    static void restore_all(uint32_t saved) { __asm volatile("msr primask, %0" : : "r"(saved) : "memory"); }
};

static_assert(Interrupts::encode(Interrupts::Level::Reserved) == 0x00);
static_assert(Interrupts::encode(Interrupts::Level::Audio) == 0x20);
static_assert(Interrupts::encode(Interrupts::Level::ControlTick) == 0x80);
static_assert(Interrupts::encode(Interrupts::Level::SysTick) == 0xE0);
static_assert(Interrupts::encode(Interrupts::Level::PendSv) == 0xF0);

} // namespace sbl::driver

#include <sbl/hw/validation/interrupts_requirements.hpp>
static_assert(sbl::validation::interrupts_driver_valid<sbl::driver::Interrupts>,
              "STM32H750 interrupts driver incomplete");

#endif // SBL_HW_DRIVER_INTERRUPTS_HPP_
