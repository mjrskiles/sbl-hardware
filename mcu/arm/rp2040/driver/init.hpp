/**
 * @file init.hpp
 * @brief RP2040 board initialization
 */
#pragma once

#include "pico/stdlib.h"

namespace sbl {

/**
 * @brief Initialize RP2040 board
 *
 * Sets up stdio for USB/UART output.
 */
inline void init() {
    stdio_init_all();
}

} // namespace sbl
