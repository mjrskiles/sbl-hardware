// Native SAI driver — miniaudio wrapper
//
// Wraps miniaudio for real-time audio playback on the host. Converts between
// miniaudio float I/O and the SBL int32_t DMA callback format, exercising
// the full pipeline including interleave_from_float / deinterleave_to_float.
//
// The DMA boundary conversion (float↔int32 MSB-justified 24-bit) happens
// in the application's audio callback, exactly as on hardware. We convert
// miniaudio's float↔int32 here to bridge the gap.

#pragma once

#include <cstdint>
#include <cstring>
#include <atomic>

#include <sbl/hw/hal/audio/types.hpp>

// Forward declare miniaudio types (implementation in sai.cpp)
struct ma_device;

namespace sbl::driver {

class Sai {
public:
    static bool init();
    static bool init(const sbl::hal::audio::AudioConfig& config);
    static void set_callback(sbl::hal::audio::AudioCallback cb);
    static void start();
    static bool check_underrun();
    static void stop();

    // Access to config for the .cpp implementation
    static sbl::hal::audio::AudioConfig& config_ref();
    static sbl::hal::audio::AudioCallback& callback_ref();
};

} // namespace sbl::driver
