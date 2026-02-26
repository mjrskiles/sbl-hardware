/**
 * @file uart.hpp
 * @brief RP2350 UART driver for debug output
 *
 * Manifest-driven UART initialization using UartHandle.
 * Wraps Pico SDK uart functions for SBL compatibility.
 *
 * Templated on Instance index so multiple UART peripherals can coexist.
 */
#ifndef SBL_HW_DRIVER_UART_HPP_
#define SBL_HW_DRIVER_UART_HPP_
#include <cstdint>
#include <cstddef>
#include "pico/stdlib.h"
#include "hardware/uart.h"
#include <sbl/types.hpp>
#include <sbl/hal/uart/driver.hpp>

namespace sbl::driver {

/**
 * @brief UART driver for RP2350
 *
 * @tparam Instance Instance index (default 0). Each Uart<N> gets its own
 *         static state, enabling multiple coexisting UART peripherals.
 *
 * Simple blocking UART for debug output.
 * Pin configuration is resolved from hardware manifests via UartHandle.
 */
template<uint8_t Instance = 0>
class Uart {
public:
    /**
     * @brief Initialize UART (TX + RX) using handle from hardware manifest
     * @param handle UartHandle with resolved peripheral, pins, and baud
     * @note Not ISR-safe — configures peripheral and GPIO, call at init time only
     *
     * Note: AF fields in handle are ignored on RP2350 (Pico SDK GPIO function).
     * RP2350 uses GPIO pin numbers directly (tx_pin/rx_pin).
     */
    static void init(const sbl::UartHandle& handle) {
        auto uart = (handle.peripheral == 0) ? uart0 : uart1;

        uart_init(uart, handle.baud);

        gpio_set_function(handle.tx_pin, GPIO_FUNC_UART);
        gpio_set_function(handle.rx_pin, GPIO_FUNC_UART);

        s_uart = uart;
        s_initialized = true;
    }

    /**
     * @brief Initialize UART in RX-only mode
     *
     * Only sets the RX pin to UART function — TX pin is left alone.
     * Pico SDK enables TX+RX internally in uart_init(), but only the
     * RX pin is routed to the UART peripheral.
     *
     * @param handle UartHandle — only peripheral, rx_pin, and baud are used
     * @note Not ISR-safe — configures peripheral and GPIO, call at init time only
     */
    static void init_rx(const sbl::UartHandle& handle) {
        auto uart = (handle.peripheral == 0) ? uart0 : uart1;

        uart_init(uart, handle.baud);

        // Only set RX pin to UART function — TX pin stays GPIO
        gpio_set_function(handle.rx_pin, GPIO_FUNC_UART);

        s_uart = uart;
        s_initialized = true;
    }

    /**
     * @brief Write single byte
     * @param byte Byte to send
     * @note Not ISR-safe — Pico SDK uart_putc_raw spins waiting for TX FIFO space
     */
    static void write_byte(uint8_t byte) {
        if (!s_initialized) return;
        uart_putc_raw(s_uart, byte);
    }

    /**
     * @brief Write buffer
     * @param data Data buffer
     * @param len Number of bytes to write
     * @note Not ISR-safe — Pico SDK uart_write_blocking spins until all bytes sent
     */
    static void write(const uint8_t* data, size_t len) {
        if (!s_initialized) return;
        uart_write_blocking(s_uart, data, len);
    }

    /**
     * @brief Write null-terminated string
     * @param str String to write
     * @note Not ISR-safe — Pico SDK uart_puts blocks until string is sent
     */
    static void write_string(const char* str) {
        if (!s_initialized) return;
        uart_puts(s_uart, str);
    }

    /**
     * @brief Check if RX data available
     * @return true if data waiting
     * @note ISR-safe — uart_is_readable is a single register flag check
     */
    static bool available() {
        if (!s_initialized) return false;
        return uart_is_readable(s_uart);
    }

    /**
     * @brief Read single byte (blocking)
     * @return Received byte
     * @note Not ISR-safe — uart_getc blocks indefinitely until data arrives
     */
    static uint8_t read_byte() {
        if (!s_initialized) return 0;
        return uart_getc(s_uart);
    }

private:
    static inline bool s_initialized = false;
    static inline uart_inst_t* s_uart = nullptr;
};
} // namespace sbl::driver
// Compile-time interface validation
#include <sbl/validation/uart_requirements.hpp>
static_assert(sbl::validation::uart_driver_valid<sbl::driver::Uart<0>>,
              "RP2350 UART driver incomplete");

#endif // SBL_HW_DRIVER_UART_HPP_
