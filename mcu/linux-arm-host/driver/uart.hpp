// Native UART driver — stdout/stdin simulation
//
// write_string() → printf(). read_byte() → non-blocking stdin.
// Logging works out of the box.

#pragma once

#include <cstdint>
#include <cstdio>
#include <sbl/types.hpp>

namespace sbl::driver {

template<uint8_t Instance = 0>
class Uart {
public:
    static bool init(const sbl::UartHandle& handle) {
        (void)handle;
        return true;
    }

    static bool init_rx(const sbl::UartHandle& handle) {
        (void)handle;
        return true;
    }

    static void write_byte(uint8_t byte) {
        putchar(byte);
    }

    static void write(const uint8_t* data, size_t len) {
        fwrite(data, 1, len, stdout);
        fflush(stdout);
    }

    static void write_string(const char* str) {
        fputs(str, stdout);
        fflush(stdout);
    }

    static void write_string_polling(const char* str) {
        write_string(str);
    }

    static bool try_write_byte(uint8_t byte) {
        putchar(byte);
        return true;
    }

    static size_t try_write_string(const char* str) {
        size_t len = 0;
        while (str[len]) ++len;
        fputs(str, stdout);
        fflush(stdout);
        return len;
    }

    static bool available() {
        return false; // No stdin input in MVP
    }

    static uint8_t read_byte() {
        return 0;
    }

    static void irq_handler() { /* no-op */ }
};

} // namespace sbl::driver
