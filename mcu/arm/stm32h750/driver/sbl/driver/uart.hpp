/**
 * @file uart.hpp
 * @brief STM32H750 UART driver for debug output
 *
 * Uses USART1 on PA9 (TX) and PA10 (RX) for debug logging.
 * Bare-metal implementation using SVD-generated register definitions.
 */
#pragma once

#include <cstdint>
#include <cstddef>
#include <sbl/hw/reg/gpio.hpp>
#include <sbl/hw/reg/rcc.hpp>
#include <sbl/hw/reg/usart.hpp>
#include <sbl/hal/uart/driver.hpp>

namespace sbl::driver {

/**
 * @brief UART driver for STM32H750
 *
 * Simple blocking UART for debug output.
 * Uses USART1 on PA9 (TX) and PA10 (RX).
 *
 * Note: Assumes system clock is configured (480 MHz typical for STM32H750).
 * USART1 is on APB2, clocked at 120 MHz by default.
 */
class Uart {
public:
    // USART1 pins on port A
    static constexpr uint32_t TX_PIN = 9;
    static constexpr uint32_t RX_PIN = 10;
    static constexpr uint32_t PORT_A = 0;

    // Alternate function 7 for USART1
    static constexpr uint32_t AF_USART1 = 7;

    /**
     * @brief Initialize UART at specified baud rate
     * @param baud_rate Baud rate (default 115200)
     *
     * Note: Assumes APB2 clock is 120 MHz (STM32H750 default after init).
     */
    static void init(uint32_t baud_rate = sbl::uart::BAUD_115200) {
        using namespace sbl::hw::reg;

        // Enable GPIOA clock (port A is bit 0)
        periph::rcc->AHB4ENR |= (1u << PORT_A);
        volatile uint32_t dummy = periph::rcc->AHB4ENR;

        // Enable USART1 clock (bit 4 of APB2ENR)
        periph::rcc->APB2ENR |= RCC::APB2ENR_USART1EN;
        dummy = periph::rcc->APB2ENR;
        (void)dummy;

        // Configure PA9 (TX) as alternate function
        configure_af_pin(TX_PIN);

        // Configure PA10 (RX) as alternate function
        configure_af_pin(RX_PIN);

        // Disable USART during configuration
        periph::usart1->CR1 = 0;

        // Set baud rate
        // BRR = fck / baud_rate (for oversampling by 16)
        // APB2 clock is typically 120 MHz on STM32H750
        constexpr uint32_t APB2_FREQ = 120'000'000;
        periph::usart1->BRR = APB2_FREQ / baud_rate;

        // CR2 and CR3 at reset values (1 stop bit, no flow control)
        periph::usart1->CR2 = 0;
        periph::usart1->CR3 = 0;

        // Enable USART, transmitter, and receiver
        periph::usart1->CR1 = USART::UE | USART::TE | USART::RE;

        // Wait for transmit enable acknowledge
        while ((periph::usart1->ISR & USART::TEACK) == 0) {
            // Busy wait
        }

        s_initialized = true;
    }

    /**
     * @brief Write single byte
     * @param byte Byte to send
     */
    static void write_byte(uint8_t byte) {
        if (!s_initialized) return;

        using namespace sbl::hw::reg;

        // Wait for TXE (transmit data register empty)
        while ((periph::usart1->ISR & USART::TXE) == 0) {
            // Busy wait
        }

        periph::usart1->TDR = byte;
    }

    /**
     * @brief Write buffer
     * @param data Data buffer
     * @param len Number of bytes to write
     */
    static void write(const uint8_t* data, size_t len) {
        for (size_t i = 0; i < len; ++i) {
            write_byte(data[i]);
        }
    }

    /**
     * @brief Write null-terminated string
     * @param str String to write
     */
    static void write_string(const char* str) {
        while (*str) {
            write_byte(static_cast<uint8_t>(*str++));
        }
    }

    /**
     * @brief Check if RX data available
     * @return true if data waiting
     */
    static bool available() {
        if (!s_initialized) return false;
        using namespace sbl::hw::reg;
        return (periph::usart1->ISR & USART::RXNE) != 0;
    }

    /**
     * @brief Read single byte (blocking)
     * @return Received byte
     */
    static uint8_t read_byte() {
        if (!s_initialized) return 0;

        using namespace sbl::hw::reg;

        // Wait for RXNE (read data register not empty)
        while ((periph::usart1->ISR & USART::RXNE) == 0) {
            // Busy wait
        }

        return static_cast<uint8_t>(periph::usart1->RDR);
    }

private:
    static inline bool s_initialized = false;

    /**
     * @brief Configure a pin as alternate function for USART1
     * @param pin Pin number (9 or 10 for TX/RX)
     */
    static void configure_af_pin(uint32_t pin) {
        using namespace sbl::hw::reg;

        auto gpio = periph::gpioa;

        // Set mode to alternate function (0b10)
        gpio->GPIO_MODER &= ~(0x3u << (pin * 2));
        gpio->GPIO_MODER |= (0x2u << (pin * 2));

        // Set output type push-pull (0)
        gpio->GPIO_OTYPER &= ~(1u << pin);

        // Set speed to high (0b11)
        gpio->GPIO_OSPEEDR |= (0x3u << (pin * 2));

        // No pull-up/pull-down
        gpio->GPIO_PUPDR &= ~(0x3u << (pin * 2));

        // Set alternate function to AF7 (USART1)
        // AFRL handles pins 0-7, AFRH handles pins 8-15
        if (pin < 8) {
            gpio->GPIO_AFRL &= ~(0xFu << (pin * 4));
            gpio->GPIO_AFRL |= (AF_USART1 << (pin * 4));
        } else {
            uint32_t afrh_pin = pin - 8;
            gpio->GPIO_AFRH &= ~(0xFu << (afrh_pin * 4));
            gpio->GPIO_AFRH |= (AF_USART1 << (afrh_pin * 4));
        }
    }
};

} // namespace sbl::driver

// Compile-time interface validation
#include <sbl/validation/uart_requirements.hpp>
static_assert(sbl::validation::uart_driver_valid<sbl::driver::Uart>,
              "STM32H750 UART driver incomplete");
