// Native SAI driver implementation — miniaudio backend
//
// This is the one .cpp file in the native driver set because miniaudio
// requires exactly one translation unit with MA_IMPLEMENTATION defined.
//
// Device selection via SBL_AUDIO_DEVICE environment variable:
//   SBL_AUDIO_DEVICE="Zoom"   — substring match on device name
//   SBL_AUDIO_DEVICE="list"   — print available devices and exit
//   (unset)                   — use system default

#define MA_IMPLEMENTATION
#define MA_NO_ENCODING  // We don't need WAV/MP3 encoding
#define MA_NO_DECODING  // We don't need WAV/MP3 decoding
#define MA_NO_GENERATION // We don't need waveform generation

#include "miniaudio.h"
#include "sai.hpp"

#include <cstdio>
#include <cstdlib>
#include <cstring>

namespace {

// Static state
static sbl::hal::audio::AudioConfig s_config;
static sbl::hal::audio::AudioCallback s_callback = nullptr;
static ma_device s_device;
static ma_context s_context;
static bool s_context_initialized = false;
static bool s_device_initialized = false;
static constexpr uint16_t MAX_BLOCK_SIZE = 256;

/// Case-insensitive substring search
bool contains_icase(const char* haystack, const char* needle) {
    if (!haystack || !needle) return false;
    size_t hlen = strlen(haystack);
    size_t nlen = strlen(needle);
    if (nlen > hlen) return false;
    for (size_t i = 0; i <= hlen - nlen; ++i) {
        bool match = true;
        for (size_t j = 0; j < nlen; ++j) {
            char h = haystack[i + j];
            char n = needle[j];
            if (h >= 'A' && h <= 'Z') h += 32;
            if (n >= 'A' && n <= 'Z') n += 32;
            if (h != n) { match = false; break; }
        }
        if (match) return true;
    }
    return false;
}

/// Print all available audio devices
void print_devices(ma_context* ctx) {
    ma_device_info* playback_devices;
    ma_uint32 playback_count;
    ma_device_info* capture_devices;
    ma_uint32 capture_count;

    if (ma_context_get_devices(ctx, &playback_devices, &playback_count,
                               &capture_devices, &capture_count) != MA_SUCCESS) {
        fprintf(stderr, "[native-sai] Failed to enumerate devices\n");
        return;
    }

    fprintf(stderr, "[native-sai] Playback devices:\n");
    for (ma_uint32 i = 0; i < playback_count; ++i) {
        fprintf(stderr, "  [%u] %s%s\n", i, playback_devices[i].name,
                playback_devices[i].isDefault ? " (default)" : "");
    }

    fprintf(stderr, "[native-sai] Capture devices:\n");
    for (ma_uint32 i = 0; i < capture_count; ++i) {
        fprintf(stderr, "  [%u] %s%s\n", i, capture_devices[i].name,
                capture_devices[i].isDefault ? " (default)" : "");
    }
}

/// Find a device by substring match on name. Returns true if found.
bool find_device(ma_context* ctx, const char* query,
                 ma_device_id* out_playback_id, bool* found_playback,
                 ma_device_id* out_capture_id, bool* found_capture) {
    ma_device_info* playback_devices;
    ma_uint32 playback_count;
    ma_device_info* capture_devices;
    ma_uint32 capture_count;

    *found_playback = false;
    *found_capture = false;

    if (ma_context_get_devices(ctx, &playback_devices, &playback_count,
                               &capture_devices, &capture_count) != MA_SUCCESS) {
        return false;
    }

    for (ma_uint32 i = 0; i < playback_count; ++i) {
        if (contains_icase(playback_devices[i].name, query)) {
            *out_playback_id = playback_devices[i].id;
            *found_playback = true;
            fprintf(stderr, "[native-sai] Matched playback: %s\n", playback_devices[i].name);
            break;
        }
    }

    for (ma_uint32 i = 0; i < capture_count; ++i) {
        if (contains_icase(capture_devices[i].name, query)) {
            *out_capture_id = capture_devices[i].id;
            *found_capture = true;
            fprintf(stderr, "[native-sai] Matched capture: %s\n", capture_devices[i].name);
            break;
        }
    }

    return *found_playback || *found_capture;
}

/// miniaudio callback — bridges float audio to SBL int32_t callback format.
///
/// SBL audio callbacks receive interleaved int32_t (24-bit MSB-justified).
/// The application's callback uses interleave_from_float/deinterleave_to_float
/// at the DMA boundary, exactly as on hardware.
void ma_data_callback(ma_device* device, void* output, const void* input,
                      ma_uint32 frame_count) {
    (void)device;

    if (!s_callback) {
        memset(output, 0, frame_count * 2 * sizeof(float));
        return;
    }

    // Process in blocks matching the configured block size
    auto* out_f32 = static_cast<float*>(output);
    auto* in_f32 = static_cast<const float*>(input);
    uint16_t block_size = s_config.block_size;
    ma_uint32 remaining = frame_count;

    // Scratch buffers for float↔int32 conversion
    // SBL callbacks work with interleaved int32_t stereo
    static int32_t tx_buf[MAX_BLOCK_SIZE * 2];
    static int32_t rx_buf[MAX_BLOCK_SIZE * 2];

    while (remaining > 0) {
        uint16_t frames = (remaining > block_size) ? block_size : static_cast<uint16_t>(remaining);

        // Convert input float [-1,1] → int32 (24-bit MSB-justified)
        // This matches the format that deinterleave_to_float expects
        if (in_f32) {
            for (uint16_t i = 0; i < frames * 2; ++i) {
                float s = in_f32[i];
                if (s > 1.0f) s = 1.0f;
                if (s < -1.0f) s = -1.0f;
                rx_buf[i] = static_cast<int32_t>(s * 8388607.0f);
            }
        } else {
            memset(rx_buf, 0, frames * 2 * sizeof(int32_t));
        }

        // Clear TX buffer
        memset(tx_buf, 0, frames * 2 * sizeof(int32_t));

        // Call the SBL audio callback (same signature as on hardware)
        s_callback(tx_buf, rx_buf, frames);

        // Convert output int32 (24-bit MSB-justified) → float [-1,1]
        // This is the reverse of interleave_from_float
        for (uint16_t i = 0; i < frames * 2; ++i) {
            out_f32[i] = static_cast<float>(tx_buf[i]) / 8388607.0f;
        }

        out_f32 += frames * 2;
        if (in_f32) in_f32 += frames * 2;
        remaining -= frames;
    }
}

} // anonymous namespace

namespace sbl::driver {

sbl::hal::audio::AudioConfig& Sai::config_ref() { return s_config; }
sbl::hal::audio::AudioCallback& Sai::callback_ref() { return s_callback; }

bool Sai::init() {
    return init(sbl::hal::audio::AudioConfig{});
}

bool Sai::init(const sbl::hal::audio::AudioConfig& config) {
    s_config = config;
    return true;
}

void Sai::set_callback(sbl::hal::audio::AudioCallback cb) {
    s_callback = cb;
}

void Sai::start() {
    if (s_device_initialized) {
        stop();
    }

    // Initialize miniaudio context for device enumeration
    if (!s_context_initialized) {
        if (ma_context_init(nullptr, 0, nullptr, &s_context) != MA_SUCCESS) {
            fprintf(stderr, "[native-sai] Failed to initialize audio context\n");
            return;
        }
        s_context_initialized = true;
    }

    // Check for device selection via environment variable
    const char* device_env = getenv("SBL_AUDIO_DEVICE");

    if (device_env && strcmp(device_env, "list") == 0) {
        print_devices(&s_context);
        exit(0);
    }

    // Resolve device IDs if a query is specified
    ma_device_id playback_id, capture_id;
    bool have_playback = false, have_capture = false;

    if (device_env && device_env[0] != '\0') {
        if (!find_device(&s_context, device_env,
                         &playback_id, &have_playback,
                         &capture_id, &have_capture)) {
            fprintf(stderr, "[native-sai] No device matching '%s'\n", device_env);
            print_devices(&s_context);
            fprintf(stderr, "[native-sai] Falling back to default device\n");
        }
    }

    // Try duplex first (playback + capture)
    ma_device_config dev_config = ma_device_config_init(ma_device_type_duplex);
    dev_config.playback.format = ma_format_f32;
    dev_config.playback.channels = 2;
    dev_config.capture.format = ma_format_f32;
    dev_config.capture.channels = 2;
    dev_config.sampleRate = s_config.sample_rate;
    dev_config.periodSizeInFrames = s_config.block_size;
    dev_config.dataCallback = ma_data_callback;

    if (have_playback) dev_config.playback.pDeviceID = &playback_id;
    if (have_capture)  dev_config.capture.pDeviceID = &capture_id;

    if (ma_device_init(&s_context, &dev_config, &s_device) != MA_SUCCESS) {
        fprintf(stderr, "[native-sai] Duplex init failed, trying playback-only\n");

        // Fall back to playback-only (no capture device available)
        dev_config = ma_device_config_init(ma_device_type_playback);
        dev_config.playback.format = ma_format_f32;
        dev_config.playback.channels = 2;
        dev_config.sampleRate = s_config.sample_rate;
        dev_config.periodSizeInFrames = s_config.block_size;
        dev_config.dataCallback = ma_data_callback;

        if (have_playback) dev_config.playback.pDeviceID = &playback_id;

        if (ma_device_init(&s_context, &dev_config, &s_device) != MA_SUCCESS) {
            fprintf(stderr, "[native-sai] Failed to initialize playback device\n");
            return;
        }
    }

    s_device_initialized = true;

    fprintf(stderr, "[native-sai] Audio device: %s\n", s_device.playback.name);
    fprintf(stderr, "[native-sai] Sample rate: %u Hz, block size: %u frames\n",
            s_config.sample_rate, s_config.block_size);

    if (ma_device_start(&s_device) != MA_SUCCESS) {
        fprintf(stderr, "[native-sai] Failed to start audio device\n");
        ma_device_uninit(&s_device);
        s_device_initialized = false;
        return;
    }

    fprintf(stderr, "[native-sai] Audio streaming started\n");
}

bool Sai::check_underrun() {
    return false;
}

void Sai::stop() {
    if (s_device_initialized) {
        ma_device_uninit(&s_device);
        s_device_initialized = false;
        fprintf(stderr, "[native-sai] Audio device stopped\n");
    }
    if (s_context_initialized) {
        ma_context_uninit(&s_context);
        s_context_initialized = false;
    }
}

} // namespace sbl::driver
