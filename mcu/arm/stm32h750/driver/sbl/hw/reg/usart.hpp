/**
 * @file usart.hpp
 * @brief STM32H750 USART register definitions
 *
 * Minimal register definitions for USART1 debug output.
 * Based on STM32H750 Reference Manual (RM0433).
 */
#pragma once

#include <cstdint>

namespace sbl::hw::reg {

/**
 * @brief USART register block
 */
struct USART_t {
    volatile uint32_t CR1;      // 0x00 Control register 1
    volatile uint32_t CR2;      // 0x04 Control register 2
    volatile uint32_t CR3;      // 0x08 Control register 3
    volatile uint32_t BRR;      // 0x0C Baud rate register
    volatile uint32_t GTPR;     // 0x10 Guard time and prescaler
    volatile uint32_t RTOR;     // 0x14 Receiver timeout
    volatile uint32_t RQR;      // 0x18 Request register
    volatile uint32_t ISR;      // 0x1C Interrupt and status register
    volatile uint32_t ICR;      // 0x20 Interrupt flag clear register
    volatile uint32_t RDR;      // 0x24 Receive data register
    volatile uint32_t TDR;      // 0x28 Transmit data register
    volatile uint32_t PRESC;    // 0x2C Prescaler register
};

/**
 * @brief USART register bit definitions
 */
namespace USART {
    // CR1 bits
    constexpr uint32_t UE     = (1 << 0);   // USART enable
    constexpr uint32_t RE     = (1 << 2);   // Receiver enable
    constexpr uint32_t TE     = (1 << 3);   // Transmitter enable
    constexpr uint32_t RXNEIE = (1 << 5);   // RXNE interrupt enable
    constexpr uint32_t TCIE   = (1 << 6);   // TC interrupt enable
    constexpr uint32_t TXEIE  = (1 << 7);   // TXE interrupt enable
    constexpr uint32_t OVER8  = (1 << 15);  // Oversampling mode (0=16, 1=8)

    // ISR bits
    constexpr uint32_t PE     = (1 << 0);   // Parity error
    constexpr uint32_t FE     = (1 << 1);   // Framing error
    constexpr uint32_t NE     = (1 << 2);   // Noise error
    constexpr uint32_t ORE    = (1 << 3);   // Overrun error
    constexpr uint32_t IDLE   = (1 << 4);   // Idle line detected
    constexpr uint32_t RXNE   = (1 << 5);   // Read data register not empty
    constexpr uint32_t TC     = (1 << 6);   // Transmission complete
    constexpr uint32_t TXE    = (1 << 7);   // Transmit data register empty
    constexpr uint32_t TEACK  = (1 << 21);  // Transmit enable acknowledge
    constexpr uint32_t REACK  = (1 << 22);  // Receive enable acknowledge
}

namespace periph {
    // USART1 base address on APB2
    inline auto* const usart1 = reinterpret_cast<volatile USART_t*>(0x40011000);
    // USART2 base address on APB1
    inline auto* const usart2 = reinterpret_cast<volatile USART_t*>(0x40004400);
    // USART3 base address on APB1
    inline auto* const usart3 = reinterpret_cast<volatile USART_t*>(0x40004800);
}

} // namespace sbl::hw::reg
