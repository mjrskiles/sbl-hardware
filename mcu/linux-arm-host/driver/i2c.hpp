// Native I2C driver — no-op stubs
//
// All operations succeed silently. Codec init calls these during boot.

#pragma once

#include <cstdint>
#include <sbl/types.hpp>

namespace sbl::driver {

template<uint8_t Instance = 0>
class I2c {
public:
    static bool init(const sbl::I2cHandle& handle) {
        (void)handle;
        return true;
    }

    static bool write(uint8_t addr, const uint8_t* data, size_t len) {
        (void)addr; (void)data; (void)len;
        return true;
    }

    static bool read(uint8_t addr, uint8_t* data, size_t len) {
        (void)addr; (void)len;
        // Return zeros
        for (size_t i = 0; i < len; ++i) data[i] = 0;
        return true;
    }

    static bool write_then_read(uint8_t addr,
                                const uint8_t* tx, size_t tx_len,
                                uint8_t* rx, size_t rx_len) {
        (void)addr; (void)tx; (void)tx_len;
        for (size_t i = 0; i < rx_len; ++i) rx[i] = 0;
        return true;
    }

    static bool probe(uint8_t addr) {
        (void)addr;
        return true;
    }

    static void scan(void(*callback)(uint8_t addr)) {
        (void)callback;
    }
};

} // namespace sbl::driver
