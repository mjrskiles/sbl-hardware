// cycles.hpp — Host cycle counter via POSIX monotonic clock
//
// Provides profiling on hosted Linux using clock_gettime(CLOCK_MONOTONIC).
// Returns nanoseconds since init, truncated to uint32_t (~4.3s wrap).
// Same API as the ARM DWT version — audio_budget.hpp and section.hpp
// work identically on both platforms.

#pragma once
#ifndef SBL_HW_DRIVER_CYCLES_HPP
#define SBL_HW_DRIVER_CYCLES_HPP

#include <cstdint>
#include <ctime>

namespace sbl::profiling {

namespace detail {

inline timespec cycles_origin_{};

inline uint32_t host_nanos_since_origin() {
    timespec now;
    clock_gettime(CLOCK_MONOTONIC, &now);
    auto sec  = static_cast<uint32_t>(now.tv_sec - cycles_origin_.tv_sec);
    auto nsec = now.tv_nsec - cycles_origin_.tv_nsec;
    return sec * 1'000'000'000u + static_cast<uint32_t>(nsec);
}

} // namespace detail

/// Initialize cycle counter. Call once at startup.
inline void cycles_init() {
    clock_gettime(CLOCK_MONOTONIC, &detail::cycles_origin_);
}

/// Read current "cycle" count (nanoseconds since init, wraps at 2^32).
inline uint32_t cycles() {
    return detail::host_nanos_since_origin();
}

} // namespace sbl::profiling

#endif // SBL_HW_DRIVER_CYCLES_HPP
