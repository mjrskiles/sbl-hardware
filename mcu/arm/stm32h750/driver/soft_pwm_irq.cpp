/**
 * @file soft_pwm_irq.cpp
 * @brief TIM7 interrupt handler for BCM software PWM
 *
 * Provides the strong definition of TIM7_IRQHandler that overrides the weak
 * stub in startup.cpp. Dispatches to SoftPwm::irq_handler().
 *
 * LINK NOTE: This file must be compiled as a direct source of your executable
 * (not via a static library) so the strong symbol overrides the weak alias
 * in the startup code. Same pattern as dma_irq.cpp and usb_irq.cpp.
 *
 * Example CMakeLists.txt:
 *   add_executable(my_app
 *       src/main.cpp
 *       ${SBL_MCU_DRIVER_PATH}/driver/soft_pwm_irq.cpp
 *   )
 */

#include <sbl/hw/driver/soft_pwm.hpp>

extern "C" {

void TIM7_IRQHandler() {
    sbl::driver::SoftPwm::irq_handler();
}

} // extern "C"
