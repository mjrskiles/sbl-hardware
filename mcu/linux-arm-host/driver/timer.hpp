// Native Timer driver — POSIX clock_gettime
//
// Uses CLOCK_MONOTONIC for timing. Works on Linux ARM and x86_64.

#pragma once

#include <cstdint>
#include <ctime>

namespace sbl::driver {

class Timer {
public:
    static constexpr uint32_t DEFAULT_CPU_FREQ_HZ = 1'000'000'000;

    static bool init(uint32_t cpu_freq_hz = DEFAULT_CPU_FREQ_HZ) {
        (void)cpu_freq_hz;
        clock_gettime(CLOCK_MONOTONIC, &start_time_);
        return true;
    }

    static uint32_t millis() {
        struct timespec now;
        clock_gettime(CLOCK_MONOTONIC, &now);
        return static_cast<uint32_t>(
            (now.tv_sec - start_time_.tv_sec) * 1000 +
            (now.tv_nsec - start_time_.tv_nsec) / 1'000'000
        );
    }

    static uint32_t micros() {
        struct timespec now;
        clock_gettime(CLOCK_MONOTONIC, &now);
        return static_cast<uint32_t>(
            (now.tv_sec - start_time_.tv_sec) * 1'000'000 +
            (now.tv_nsec - start_time_.tv_nsec) / 1'000
        );
    }

    static void busy_wait_ms(uint32_t ms) {
        struct timespec req;
        req.tv_sec = ms / 1000;
        req.tv_nsec = (ms % 1000) * 1'000'000L;
        nanosleep(&req, nullptr);
    }

    static void systick_handler() { /* no-op on native */ }

private:
    static inline struct timespec start_time_ = {};
};

} // namespace sbl::driver
