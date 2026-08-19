/**
 * @file timer_callback_irq.cpp
 * @brief TIM6 interrupt handler for TimerCallback
 *
 * Provides the strong definition of TIM6_DAC_IRQHandler that overrides the
 * weak stub in startup.cpp. Dispatches to TimerCallback::irq_handler().
 *
 * LINK NOTE: This file must be compiled as a direct source of your executable
 * (not via a static library) so the strong symbol overrides the weak alias
 * in the startup code. Same pattern as dma_irq.cpp and soft_pwm_irq.cpp.
 *
 * Example CMakeLists.txt:
 *   add_executable(my_app
 *       src/main.cpp
 *       ${SBL_MCU_DRIVER_PATH}/driver/timer_callback_irq.cpp
 *   )
 */

#include <sbl/hw/driver/timer_callback.hpp>

extern "C" {

void TIM6_DAC_IRQHandler() {
    sbl::driver::TimerCallback::irq_handler();
}

} // extern "C"
