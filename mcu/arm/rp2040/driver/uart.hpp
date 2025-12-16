/**
 * @file uart.hpp
 * @brief RP2040 UART driver for debug output
 *
 * Manifest-driven UART initialization using UartHandle.
 * Wraps Pico SDK uart functions for SBL compatibility.
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
 * @brief UART driver for RP2040
 *
 * Simple blocking UART for debug output.
 * Pin configuration is resolved from hardware manifests via UartHandle.
 */
class Uart {
public:
    /**
     * @brief Initialize UART using handle from hardware manifest
     * @param handle UartHandle with resolved peripheral, pins, and baud
     *
     * Note: AF fields in handle are ignored on RP2040 (Pico SDK GPIO function).
     * RP2040 uses GPIO pin numbers directly (tx_pin/rx_pin).
     */
    static void init(const sbl::UartHandle& handle) {
        // Select UART peripheral based on handle
        auto uart = (handle.peripheral == 0) ? uart0 : uart1;

        // Initialize UART at specified baud rate
        uart_init(uart, handle.baud);

        // Set GPIO functions for UART (Pico uses raw pin numbers)
        gpio_set_function(handle.tx_pin, GPIO_FUNC_UART);
        gpio_set_function(handle.rx_pin, GPIO_FUNC_UART);

        s_uart = uart;
        s_initialized = true;
    }

    /**
     * @brief Write single byte
     * @param byte Byte to send
     */
    static void write_byte(uint8_t byte) {
        if (!s_initialized) return;
        uart_putc_raw(s_uart, byte);
    }

    /**
     * @brief Write buffer
     * @param data Data buffer
     * @param len Number of bytes to write
     */
    static void write(const uint8_t* data, size_t len) {
        if (!s_initialized) return;
        uart_write_blocking(s_uart, data, len);
    }

    /**
     * @brief Write null-terminated string
     * @param str String to write
     */
    static void write_string(const char* str) {
        if (!s_initialized) return;
        uart_puts(s_uart, str);
    }

    /**
     * @brief Check if RX data available
     * @return true if data waiting
     */
    static bool available() {
        if (!s_initialized) return false;
        return uart_is_readable(s_uart);
    }

    /**
     * @brief Read single byte (blocking)
     * @return Received byte
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
static_assert(sbl::validation::uart_driver_valid<sbl::driver::Uart>,
              "RP2040 UART driver incomplete");

#endif // SBL_HW_DRIVER_UART_HPP_
