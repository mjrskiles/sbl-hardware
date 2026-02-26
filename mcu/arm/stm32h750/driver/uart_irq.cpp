/**
 * @file uart_irq.cpp
 * @brief UART interrupt handlers for STM32H750
 *
 * Provides strong definitions of USART IRQ handlers that override the weak
 * stubs in startup.cpp. Each handler dispatches to a registered callback
 * (set by Uart<N>::init() or init_rx()) which drains the hardware FIFO
 * into a software ring buffer.
 *
 * LINK NOTE: This file must be compiled as a direct source of your executable
 * (not via a static library) so the strong symbols override the weak aliases
 * in the startup code. Same pattern as dma_irq.cpp.
 *
 * Example CMakeLists.txt:
 *   add_executable(my_app
 *       src/main.cpp
 *       ${SBL_MCU_DRIVER_PATH}/driver/uart_irq.cpp
 *       ${SBL_MCU_DRIVER_PATH}/driver/dma_irq.cpp
 *   )
 */

#include <cstdint>
#include <sbl/hw/driver/uart.hpp>

namespace sbl::driver::uart_detail {
    // Callback table definition (declared extern in uart.hpp)
    // Indexed by USART peripheral number: [1]=USART1, [2]=USART2, [3]=USART3, [6]=USART6
    // Indices 0, 4, 5 are unused.
    UartCallback callbacks[7] = {};
} // namespace sbl::driver::uart_detail

// ============================================================================
// USART interrupt handlers (override weak stubs in startup.cpp)
// ============================================================================

extern "C" {

void USART1_IRQHandler() {
    if (auto cb = sbl::driver::uart_detail::callbacks[1]) cb();
}

void USART2_IRQHandler() {
    if (auto cb = sbl::driver::uart_detail::callbacks[2]) cb();
}

void USART3_IRQHandler() {
    if (auto cb = sbl::driver::uart_detail::callbacks[3]) cb();
}

void USART6_IRQHandler() {
    if (auto cb = sbl::driver::uart_detail::callbacks[6]) cb();
}

} // extern "C"
