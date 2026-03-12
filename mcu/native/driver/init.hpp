// Native driver initialization
//
// Initializes Timer (for millis/micros), prints a boot banner, and prepares
// the audio subsystem. No real hardware to configure.

#pragma once

#include <cstdint>
#include <cstdio>

#include <sbl/hw/driver/timer.hpp>

namespace sbl::driver {

struct ClockConfig {
    uint32_t hse_mhz = 0;
    uint32_t sysclk_mhz = 0;
    uint32_t hclk_mhz = 0;
    uint32_t pclk1_mhz = 0;
    uint32_t pclk2_mhz = 0;
};

inline bool init(const ClockConfig& config = ClockConfig{}) {
    (void)config;
    Timer::init();
    fprintf(stderr, "[native] SBL native driver initialized\n");
    return true;
}

inline bool init_audio(uint32_t hse_mhz = 0) {
    (void)hse_mhz;
    // Audio device is initialized when Sai::start() is called
    return true;
}

inline bool init_usb(uint32_t hse_mhz = 0) {
    (void)hse_mhz;
    return true; // no-op
}

inline void codec_reset_release() {
    // no-op — no hardware codec to reset
}

inline void init_hsi() {
    // no-op
}

} // namespace sbl::driver
