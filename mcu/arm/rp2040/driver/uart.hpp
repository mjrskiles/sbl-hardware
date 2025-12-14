/**
 * @file uart.hpp
 * @brief RP2040 UART driver for debug output
 *
 * Uses UART0 on GP0 (TX) and GP1 (RX) for debug logging.
 * Wraps Pico SDK uart functions for SBL compatibility.
 */

#ifndef SBL_HW_DRIVER_UART_HPP_
#define SBL_HW_DRIVER_UART_HPP_

#include <cstdint>
#include <cstddef>
#include "pico/stdlib.h"
#include "hardware/uart.h"
#include <sbl/hal/uart/driver.hpp>

namespace sbl::driver {

/**
 * @brief UART driver for RP2040
 *
 * Simple blocking UART for debug output.
 * Uses UART0 by default (GP0=TX, GP1=RX).
 */
class Uart {
public:
    // Default pins for UART0
    static constexpr uint TX_PIN = 0;
    static constexpr uint RX_PIN = 1;

    /**
     * @brief Initialize UART at specified baud rate
     * @param baud_rate Baud rate (default 115200)
     */
    static void init(uint32_t baud_rate = sbl::uart::BAUD_115200) {
        // Initialize UART0
        uart_init(uart0, baud_rate);

        // Set GPIO functions for UART
        gpio_set_function(TX_PIN, GPIO_FUNC_UART);
        gpio_set_function(RX_PIN, GPIO_FUNC_UART);

        s_initialized = true;
    }

    /**
     * @brief Write single byte
     * @param byte Byte to send
     */
    static void write_byte(uint8_t byte) {
        if (!s_initialized) return;
        uart_putc_raw(uart0, byte);
    }

    /**
     * @brief Write buffer
     * @param data Data buffer
     * @param len Number of bytes to write
     */
    static void write(const uint8_t* data, size_t len) {
        if (!s_initialized) return;
        uart_write_blocking(uart0, data, len);
    }

    /**
     * @brief Write null-terminated string
     * @param str String to write
     */
    static void write_string(const char* str) {
        if (!s_initialized) return;
        uart_puts(uart0, str);
    }

    /**
     * @brief Check if RX data available
     * @return true if data waiting
     */
    static bool available() {
        if (!s_initialized) return false;
        return uart_is_readable(uart0);
    }

    /**
     * @brief Read single byte (blocking)
     * @return Received byte
     */
    static uint8_t read_byte() {
        if (!s_initialized) return 0;
        return uart_getc(uart0);
    }

private:
    static inline bool s_initialized = false;
};

} // namespace sbl::driver

// Compile-time interface validation
#include <sbl/validation/uart_requirements.hpp>
static_assert(sbl::validation::uart_driver_valid<sbl::driver::Uart>,
              "RP2040 UART driver incomplete");

#endif // SBL_HW_DRIVER_UART_HPP_
