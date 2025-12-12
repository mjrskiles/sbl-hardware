/**
 * @file timer.hpp
 * @brief STM32H750 Timer driver using SysTick
 *
 * Provides delay functions using the ARM Cortex-M7 SysTick timer.
 * Uses SVD-generated Cortex-M peripheral definitions.
 */
#pragma once

#include <cstdint>
#include <sbl/hw/reg/cortex_m.hpp>

namespace sbl::driver {

/**
 * @brief Timer driver using SysTick
 *
 * Provides blocking delays and tick counting.
 * For STM32H750, SysTick runs at processor clock (480 MHz after init).
 */
class Timer {
public:
    /**
     * @brief Initialize SysTick for 1ms ticks
     * @param cpu_freq_hz CPU frequency in Hz (default 480 MHz for STM32H750)
     */
    static void init(uint32_t cpu_freq_hz = 480'000'000) {
        using namespace sbl::hw::reg;

        s_cpu_freq = cpu_freq_hz;

        // Disable SysTick during configuration
        periph::systick->CTRL = 0;

        // Set reload value for 1ms tick
        periph::systick->LOAD = (cpu_freq_hz / 1000) - 1;

        // Clear current value
        periph::systick->VAL = 0;

        // Enable with processor clock and interrupt
        periph::systick->CTRL = SysTick::ENABLE | SysTick::TICKINT | SysTick::CLKSOURCE;
    }

    /**
     * @brief Get milliseconds since boot
     */
    static uint32_t millis() {
        return s_tick_count;
    }

    /**
     * @brief Get microseconds since boot (approximate)
     */
    static uint32_t micros() {
        using namespace sbl::hw::reg;

        uint32_t ms = s_tick_count;
        uint32_t ticks = periph::systick->LOAD - periph::systick->VAL;
        uint32_t us_fraction = (ticks * 1000) / (periph::systick->LOAD + 1);

        return (ms * 1000) + us_fraction;
    }

    /**
     * @brief Blocking delay in milliseconds
     */
    static void delay_ms(uint32_t ms) {
        uint32_t start = millis();
        while ((millis() - start) < ms) {
            // Busy wait
        }
    }

    /**
     * @brief Blocking delay in microseconds
     *
     * For delays under 1ms, uses direct SysTick polling.
     */
    static void delay_us(uint32_t us) {
        using namespace sbl::hw::reg;

        if (us == 0) return;

        // Calculate ticks needed
        uint32_t ticks_per_us = s_cpu_freq / 1'000'000;

        while (us > 0) {
            // SysTick is 24-bit, max ~16M ticks
            uint32_t chunk = (us > 1000) ? 1000 : us;
            uint32_t ticks = chunk * ticks_per_us;

            if (ticks > SysTick::LOAD_MAX) {
                ticks = SysTick::LOAD_MAX;
            }

            // Save current state
            uint32_t saved_ctrl = periph::systick->CTRL;
            uint32_t saved_load = periph::systick->LOAD;

            periph::systick->CTRL = 0;  // Disable
            periph::systick->LOAD = ticks - 1;
            periph::systick->VAL = 0;
            periph::systick->CTRL = SysTick::ENABLE | SysTick::CLKSOURCE;

            // Wait for COUNTFLAG
            while ((periph::systick->CTRL & SysTick::COUNTFLAG) == 0) {
                // Busy wait
            }

            // Restore
            periph::systick->CTRL = 0;
            periph::systick->LOAD = saved_load;
            periph::systick->VAL = 0;
            periph::systick->CTRL = saved_ctrl;

            us -= chunk;
        }
    }

    /**
     * @brief SysTick interrupt handler - call from SysTick_Handler
     */
    static void systick_handler() {
        ++s_tick_count;
    }

private:
    static inline volatile uint32_t s_tick_count = 0;
    static inline uint32_t s_cpu_freq = 480'000'000;
};

} // namespace sbl::driver

// C-linkage SysTick handler for vector table
extern "C" {
    inline void SysTick_Handler() {
        sbl::driver::Timer::systick_handler();
    }
}
