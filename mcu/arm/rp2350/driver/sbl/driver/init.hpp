/**
 * @file init.hpp
 * @brief RP2350 board initialization
 */
#pragma once

#include "pico/stdlib.h"

namespace sbl::driver {

/**
 * @brief Initialize RP2350 board
 *
 * Sets up stdio for USB/UART output.
 */
inline void init() {
    stdio_init_all();
}

} // namespace sbl::driver
