// Host cycle port — CLOCK_MONOTONIC in nanoseconds
//
// The system layer's profiling tools read this through
// <sbl/system/port/cycles.hpp>; the contract is
// <sbl/system/port/cycles_requirements.hpp>. The count is nanoseconds
// since init(), so it wraps every 4.3 s; profiling deltas stay within that.
#ifndef SBL_SYSTEM_PORT_CYCLES_HPP_
#define SBL_SYSTEM_PORT_CYCLES_HPP_

#include <cstdint>
#include <ctime>
#include <sbl/system/port/cycles_requirements.hpp>

namespace sbl::driver {

struct Cycles {
    static void init() { clock_gettime(CLOCK_MONOTONIC, &origin()); }

    static uint32_t read() {
        timespec now;
        clock_gettime(CLOCK_MONOTONIC, &now);
        const auto sec  = static_cast<uint32_t>(now.tv_sec - origin().tv_sec);
        const auto nsec = now.tv_nsec - origin().tv_nsec;
        return sec * 1'000'000'000u + static_cast<uint32_t>(nsec);
    }

    static constexpr uint32_t rate() { return 1'000'000'000u; }

private:
    static timespec& origin() {
        static timespec t{};
        return t;
    }
};

} // namespace sbl::driver

static_assert(sbl::system::port::cycles_port_valid<sbl::driver::Cycles>,
              "host cycle port does not meet the contract");

#endif // SBL_SYSTEM_PORT_CYCLES_HPP_
