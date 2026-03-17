// Native SDRAM stub — host memory is the "SDRAM"
//
// On STM32H7, init_sdram() configures the FMC controller and MPU.
// On native, we have unlimited host memory — nothing to do.

#pragma once

namespace sbl::driver {

inline void init_sdram() {}

} // namespace sbl::driver
