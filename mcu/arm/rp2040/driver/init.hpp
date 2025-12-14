/**
 * @file init.hpp
 * @brief RP2040 board initialization
 */

#ifndef SBL_HW_DRIVER_INIT_HPP_
#define SBL_HW_DRIVER_INIT_HPP_

#include "pico/stdlib.h"

namespace sbl::driver {

/**
 * @brief Initialize RP2040 board
 *
 * Sets up stdio for USB/UART output.
 */
inline void init() {
    stdio_init_all();
}

} // namespace sbl::driver

#endif // SBL_HW_DRIVER_INIT_HPP_
