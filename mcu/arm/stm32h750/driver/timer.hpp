/**
 * @file timer.hpp
 * @brief STM32H750 Timer driver using SysTick
 *
 * Provides delay functions using the ARM Cortex-M7 SysTick timer.
 * Uses SVD-generated Cortex-M peripheral definitions.
 */
#ifndef SBL_HW_DRIVER_TIMER_HPP_
#define SBL_HW_DRIVER_TIMER_HPP_

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
    static constexpr uint32_t DEFAULT_CPU_FREQ_HZ = 480'000'000;

    /**
     * @brief Initialize SysTick for 1ms ticks
     * @param cpu_freq_hz CPU frequency in Hz (default 480 MHz for STM32H750)
     * @return true (always succeeds; matches init() pattern of other drivers)
     */
    static bool init(uint32_t cpu_freq_hz = DEFAULT_CPU_FREQ_HZ) {
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

        return true;
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
     *
     * Polls millis() (driven by SysTick interrupt). Simple and correct —
     * the interrupt is the sole tick source, so no double-counting.
     */
    static void delay_ms(uint32_t ms) {
        uint32_t start = s_tick_count;
        while ((s_tick_count - start) < ms) {
            // Busy wait — SysTick_Handler increments s_tick_count
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
    static inline uint32_t s_cpu_freq = DEFAULT_CPU_FREQ_HZ;
};

} // namespace sbl::driver

// C-linkage SysTick handler for vector table
// __attribute__((used)) forces emission even though nothing "calls" it directly
// (the vector table references it by address, which the compiler doesn't see as a use)
extern "C" {
    __attribute__((used))
    inline void SysTick_Handler() {
        sbl::driver::Timer::systick_handler();
    }
}

// Compile-time interface validation
#include <sbl/validation/timer_requirements.hpp>
static_assert(sbl::validation::timer_driver_valid<sbl::driver::Timer>,
              "STM32H750 Timer driver incomplete");

#endif // SBL_HW_DRIVER_TIMER_HPP_
