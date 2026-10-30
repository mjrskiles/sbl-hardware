// Native driver initialization
//
// Starts the tick port and the system timer, prints a boot banner, and prepares
// the audio subsystem. No real hardware to configure.

#pragma once

#include <cstdint>
#include <cstdio>

#include <sbl/system/port/tick.hpp>
#include <sbl/system/timer.hpp>

namespace sbl::driver {

inline bool init() {
    Tick::init();
    sbl::system::timer::init();
    fprintf(stderr, "[host] SBL linux-arm-host driver initialized\n");
    return true;
}

inline bool init_audio() {
    // Audio device is initialized when Sai::start() is called
    return true;
}

inline bool init_usb() {
    return true; // no-op
}

inline void codec_reset_release() {
    // no-op — no hardware codec to reset
}

inline void init_hsi() {
    // no-op
}

} // namespace sbl::driver
