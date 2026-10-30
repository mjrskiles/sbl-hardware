/**
 * @file tick.hpp
 * @brief STM32H750 tick port: TIM5 free-running at 1 MHz
 *
 * The system timer reads this through <sbl/system/port/tick.hpp>; the
 * contract is <sbl/system/port/tick_requirements.hpp>. TIM5 is one of the
 * two 32-bit timers; TIM2 is kept for counting SAI1 frames (sbl-hardware#23).
 * The prescaler comes from the timer kernel clock init() achieved, so every
 * boot path counts at 1 MHz. The counter freezes while the core is halted
 * (DBGMCU_APB1LFZ1.DBG_TIM5), so a breakpoint does not age every pending
 * wait. The overflow interrupt, once every 71.6 min, calls the handler the
 * system timer registers.
 */
#ifndef SBL_SYSTEM_PORT_TICK_HPP_
#define SBL_SYSTEM_PORT_TICK_HPP_

#include <cstddef>
#include <cstdint>
#include <sbl/hw/driver/clocks.hpp>
#include <sbl/hw/driver/priorities.hpp>
#include <sbl/hw/reg/dbgmcu.hpp>
#include <sbl/hw/reg/irq.hpp>
#include <sbl/hw/reg/rcc.hpp>
#include <sbl/hw/reg/tim_general.hpp>
#include <sbl/system/port/tick_requirements.hpp>

namespace sbl::driver {

// The registers this port touches, at the offsets RM0433 §39.4 gives them.
static_assert(offsetof(sbl::hw::reg::TIM2_t, CR1) == 0x00 && offsetof(sbl::hw::reg::TIM2_t, DIER) == 0x0C &&
                  offsetof(sbl::hw::reg::TIM2_t, SR) == 0x10 && offsetof(sbl::hw::reg::TIM2_t, EGR) == 0x14 &&
                  offsetof(sbl::hw::reg::TIM2_t, CNT) == 0x24 && offsetof(sbl::hw::reg::TIM2_t, PSC) == 0x28 &&
                  offsetof(sbl::hw::reg::TIM2_t, ARR) == 0x2C,
              "TIM2_t layout does not match RM0433 §39.4");

struct Tick {
    using Handler = void (*)();

    static constexpr uint32_t rate() { return 1'000'000u; }

    /** Start TIM5 counting. Boot-time only; called at the end of every init path. */
    static void init() {
        using namespace sbl::hw::reg;
        periph::rcc->APB1LENR |= RCC::APB1LENR_TIM5EN;
        volatile uint32_t dummy = periph::rcc->APB1LENR;
        (void)dummy;

        auto* tim = periph::tim5;
        tim->CR1 = TIM2::CR1_URS;  // only a counter overflow sets UIF, not the UG below (RM0433 §39.4.5)
        tim->DIER = 0;
        tim->PSC = timer_kernel_clock_hz / rate() - 1;
        tim->ARR = 0xFFFFFFFFu;
        tim->EGR = TIM2::EGR_UG;  // load PSC and ARR
        tim->SR = 0;
        tim->CNT = 0;

        periph::dbgmcu->APB1LFZ1 |= DBGMCU::APB1LFZ1_DBG_TIM5;  // freeze on debug halt

        tim->CR1 |= TIM2::CR1_CEN;
    }

    static void setup(Handler handler) { s_handler = handler; }

    static void enable() {
        using namespace sbl::hw::reg;
        periph::tim5->DIER |= TIM2::DIER_UIE;
        prio::enable_irq(IRQn::TIM5, prio::kSystemTimer);
    }

    static void disable() {
        using namespace sbl::hw::reg;
        periph::tim5->DIER &= ~TIM2::DIER_UIE;
    }

    /** Clear the overflow flag (rc_w0: writing 0 clears). */
    static void acknowledge() {
        using namespace sbl::hw::reg;
        periph::tim5->SR = ~TIM2::SR_UIF;
    }

    static bool overflow() {
        using namespace sbl::hw::reg;
        return (periph::tim5->SR & TIM2::SR_UIF) != 0;
    }

    static uint32_t count() { return sbl::hw::reg::periph::tim5->CNT; }

    /** Called from TIM5_IRQHandler. */
    static void irq_handler() {
        if (s_handler) {
            s_handler();
        }
    }

private:
    static inline Handler s_handler = nullptr;
};

} // namespace sbl::driver

static_assert(sbl::system::port::tick_port_valid<sbl::driver::Tick>,
              "STM32H750 tick port does not meet the contract");

// C-linkage handler for the vector table. __attribute__((used)) forces emission
// even though nothing calls it directly: the table references it by address.
extern "C" {
__attribute__((used)) inline void TIM5_IRQHandler() { sbl::driver::Tick::irq_handler(); }
}

#endif // SBL_SYSTEM_PORT_TICK_HPP_
