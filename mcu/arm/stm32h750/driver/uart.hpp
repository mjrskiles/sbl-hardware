/**
 * @file uart.hpp
 * @brief STM32H750 UART driver
 *
 * Manifest-driven UART initialization using UartHandle.
 * Bare-metal implementation using SVD-generated register definitions.
 *
 * Templated on Instance index so multiple UART peripherals can coexist
 * (e.g., debug on USART3 + MIDI on USART1). Each Uart<N> has its own
 * static state.
 */
#ifndef SBL_HW_DRIVER_UART_HPP_
#define SBL_HW_DRIVER_UART_HPP_

#include <cstdint>
#include <cstddef>
#include <sbl/types.hpp>
#include <sbl/hw/reg/gpio.hpp>
#include <sbl/hw/reg/rcc.hpp>
#include <sbl/hw/reg/usart.hpp>
#include <sbl/hw/driver/timeout.hpp>
#include <sbl/hw/driver/clock.hpp>
#include <sbl/hal/uart/driver.hpp>

namespace sbl::driver {

namespace uart_detail {

/**
 * @brief Get GPIO peripheral pointer from port number
 * @param port Port number (0=A, 1=B, 2=C, etc.)
 */
inline auto get_gpio_port(uint32_t port) {
    using namespace sbl::hw::reg;
    switch (port) {
        case 0: return periph::gpioa;
        case 1: return periph::gpiob;
        case 2: return periph::gpioc;
        case 3: return periph::gpiod;
        case 4: return periph::gpioe;
        case 5: return periph::gpiof;
        case 6: return periph::gpiog;
        default: return periph::gpioa;
    }
}

/**
 * @brief Get USART peripheral pointer from peripheral number
 * @param peripheral 1=USART1, 2=USART2, 3=USART3
 */
inline volatile sbl::hw::reg::USART_t* get_usart(uint32_t peripheral) {
    using namespace sbl::hw::reg;
    switch (peripheral) {
        case 1: return periph::usart1;
        case 2: return periph::usart2;
        case 3: return periph::usart3;
        default: return periph::usart1;
    }
}

/**
 * @brief Configure a pin as alternate function
 * @param gpio GPIO peripheral pointer
 * @param pin Pin number within port
 * @param af Alternate function number
 */
inline void configure_af_pin(decltype(sbl::hw::reg::periph::gpioa) gpio,
                              uint32_t pin, uint32_t af) {
    // Set mode to alternate function (0b10)
    gpio->GPIO_MODER &= ~(0x3u << (pin * 2));
    gpio->GPIO_MODER |= (0x2u << (pin * 2));

    // Set output type push-pull (0)
    gpio->GPIO_OTYPER &= ~(1u << pin);

    // Set speed to high (0b11)
    gpio->GPIO_OSPEEDR |= (0x3u << (pin * 2));

    // No pull-up/pull-down
    gpio->GPIO_PUPDR &= ~(0x3u << (pin * 2));

    // Set alternate function
    // AFRL handles pins 0-7, AFRH handles pins 8-15
    if (pin < 8) {
        gpio->GPIO_AFRL &= ~(0xFu << (pin * 4));
        gpio->GPIO_AFRL |= (af << (pin * 4));
    } else {
        uint32_t afrh_pin = pin - 8;
        gpio->GPIO_AFRH &= ~(0xFu << (afrh_pin * 4));
        gpio->GPIO_AFRH |= (af << (afrh_pin * 4));
    }
}

/**
 * @brief Enable USART bus clock and set kernel clock to HSI
 * @param peripheral USART peripheral number (1, 2, 3, 6)
 * @return true if valid peripheral
 */
inline bool enable_usart_clocks(uint32_t peripheral) {
    using namespace sbl::hw::reg;

    volatile uint32_t dummy;
    switch (peripheral) {
        case 1:
            periph::rcc->APB2ENR |= RCC::APB2ENR_USART1EN;
            dummy = periph::rcc->APB2ENR;
            break;
        case 2:
            periph::rcc->APB1LENR |= RCC::APB1LENR_USART2EN;
            dummy = periph::rcc->APB1LENR;
            break;
        case 3:
            periph::rcc->APB1LENR |= RCC::APB1LENR_USART3EN;
            dummy = periph::rcc->APB1LENR;
            break;
        case 6:
            periph::rcc->APB2ENR |= RCC::APB2ENR_USART6EN;
            dummy = periph::rcc->APB2ENR;
            break;
        default:
            return false;
    }
    (void)dummy;

    // Force kernel clock to HSI (64 MHz)
    if (peripheral == 1 || peripheral == 6) {
        detail::set_usart16_kernel_clock(KernelClockSrc::HSI);
    } else {
        detail::set_usart234578_kernel_clock(KernelClockSrc::HSI);
    }
    return true;
}

} // namespace uart_detail

/**
 * @brief UART driver for STM32H750
 *
 * @tparam Instance Instance index (default 0). Each Uart<N> gets its own
 *         static state, enabling multiple coexisting UART peripherals
 *         (e.g., Uart<0> for debug, Uart<1> for MIDI).
 *
 * Simple blocking UART for debug output and serial input.
 * Pin configuration is resolved from hardware manifests via UartHandle.
 *
 * Supports USART1, USART2, USART3, USART6.
 * Note: STM32H7 USART kernel clock defaults to HSI (64 MHz).
 * This is independent of APB bus clocks - USARTs have dedicated kernel clock muxes.
 */
template<uint8_t Instance = 0>
class Uart {
private:
    static inline bool s_initialized = false;
    static inline volatile sbl::hw::reg::USART_t* s_usart = nullptr;

public:
    /**
     * @brief Initialize UART (TX + RX) using handle from hardware manifest
     * @param handle UartHandle with resolved peripheral, pins, AF, and baud
     * @return true if UART initialized (continues even on TEACK timeout for debug use)
     */
    static bool init(const sbl::UartHandle& handle) {
        using namespace sbl::hw::reg;

        // Enable GPIO clocks for TX and RX ports
        periph::rcc->AHB4ENR |= (1u << handle.tx_port);
        periph::rcc->AHB4ENR |= (1u << handle.rx_port);
        volatile uint32_t dummy = periph::rcc->AHB4ENR;
        (void)dummy;

        // Enable USART bus clock and set kernel clock
        if (!uart_detail::enable_usart_clocks(handle.peripheral)) {
            return false;
        }

        // Configure TX and RX pins as alternate function
        auto tx_gpio = uart_detail::get_gpio_port(handle.tx_port);
        auto rx_gpio = uart_detail::get_gpio_port(handle.rx_port);
        uart_detail::configure_af_pin(tx_gpio, handle.tx_pin, handle.tx_af);
        uart_detail::configure_af_pin(rx_gpio, handle.rx_pin, handle.rx_af);

        // Get USART peripheral and store for later use
        s_usart = uart_detail::get_usart(handle.peripheral);

        // Disable USART during configuration
        s_usart->CR1 = 0;

        constexpr uint32_t usart_clk = 64'000'000;  // HSI
        s_usart->PRESC = 0;  // No prescaling (STM32H7 feature)
        s_usart->BRR = usart_clk / handle.baud;

        // CR2 and CR3 at reset values (1 stop bit, no flow control)
        s_usart->CR2 = 0;
        s_usart->CR3 = 0;

        // Enable USART, transmitter, and receiver
        s_usart->CR1 = USART::UE | USART::TE | USART::RE;

        // Wait for transmit enable acknowledge
        bool teack_ok = detail::wait_for(&s_usart->ISR, USART::TEACK, USART::TEACK, 100'000);

        // Continue even if TEACK timeout — debug UART should still try to work
        s_initialized = true;
        return teack_ok;
    }

    /**
     * @brief Initialize UART in RX-only mode
     *
     * Only configures the RX pin — TX pin is left alone. Critical for cases
     * like MIDI on Daisy Pod where the TX pin (PB6) is used by the encoder.
     *
     * Enables OVRDIS (overrun disable) so ORE doesn't block RXNE, and
     * FIFOEN (8-byte hardware FIFO) for buffering between polls.
     *
     * @param handle UartHandle — only peripheral, rx_port, rx_pin, rx_af, baud are used
     * @return true if initialized successfully
     */
    static bool init_rx(const sbl::UartHandle& handle) {
        using namespace sbl::hw::reg;

        // Enable GPIO clock for RX port only
        periph::rcc->AHB4ENR |= (1u << handle.rx_port);
        volatile uint32_t dummy = periph::rcc->AHB4ENR;
        (void)dummy;

        // Enable USART bus clock and set kernel clock
        if (!uart_detail::enable_usart_clocks(handle.peripheral)) {
            return false;
        }

        // Configure RX pin only as alternate function
        auto rx_gpio = uart_detail::get_gpio_port(handle.rx_port);
        uart_detail::configure_af_pin(rx_gpio, handle.rx_pin, handle.rx_af);

        // Get USART peripheral and store
        s_usart = uart_detail::get_usart(handle.peripheral);

        // Disable USART during configuration
        s_usart->CR1 = 0;

        constexpr uint32_t usart_clk = 64'000'000;  // HSI
        s_usart->PRESC = 0;
        s_usart->BRR = usart_clk / handle.baud;

        s_usart->CR2 = 0;

        // OVRDIS (bit 12): disable overrun detection — prevents ORE from blocking RXNE
        s_usart->CR3 = (1u << 12);

        // UE + RE + FIFOEN (bit 29): enable receiver with 8-byte hardware FIFO
        s_usart->CR1 = USART::UE | USART::RE | (1u << 29);

        s_initialized = true;
        return true;
    }

    /**
     * @brief Write single byte
     * @param byte Byte to send
     */
    static void write_byte(uint8_t byte) {
        if (!s_initialized || !s_usart) return;

        using namespace sbl::hw::reg;

        // Wait for TXE (transmit data register empty) with timeout
        volatile uint32_t timeout = 10000;
        while ((s_usart->ISR & USART::TXE) == 0 && --timeout) {
            // Busy wait
        }
        if (timeout == 0) return;  // Give up on this byte

        s_usart->TDR = byte;
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
        if (!s_initialized || !s_usart) return false;
        using namespace sbl::hw::reg;
        return (s_usart->ISR & USART::RXNE) != 0;
    }

    /**
     * @brief Read single byte (blocking)
     * @return Received byte
     */
    static uint8_t read_byte() {
        if (!s_initialized || !s_usart) return 0;

        using namespace sbl::hw::reg;

        // Wait for RXNE (read data register not empty)
        while ((s_usart->ISR & USART::RXNE) == 0) {
            // Busy wait
        }

        return static_cast<uint8_t>(s_usart->RDR);
    }
};

} // namespace sbl::driver

// Compile-time interface validation
#include <sbl/validation/uart_requirements.hpp>
static_assert(sbl::validation::uart_driver_valid<sbl::driver::Uart<0>>,
              "STM32H750 UART driver incomplete");

#endif // SBL_HW_DRIVER_UART_HPP_
