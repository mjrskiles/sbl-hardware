// Native SDMMC stub — no SD card
//
// init_sdmmc() and Sdmmc::init() succeed but no filesystem operations work.
// FatFs f_mount() will fail, and calibration/preset code handles that gracefully.

#pragma once

#include <cstdint>

namespace sbl::driver {

inline void init_sdmmc() {}

class Sdmmc {
public:
    enum class Error { None, Timeout, CRC, NoCard };

    static Error init() { return Error::NoCard; }
};

} // namespace sbl::driver
