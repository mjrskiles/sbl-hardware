// Host tick port — CLOCK_MONOTONIC in microseconds
//
// The system timer reads this through <sbl/system/port/tick.hpp>; the
// contract is <sbl/system/port/tick_requirements.hpp>. count() is the low
// 32 bits of the microseconds since init(). There is no overflow interrupt
// on the host: enable() runs a thread that sleeps until the next 2^32 µs
// boundary and calls the handler, the way the host TimerCallback runs its
// period on a thread.
#ifndef SBL_SYSTEM_PORT_TICK_HPP_
#define SBL_SYSTEM_PORT_TICK_HPP_

#include <atomic>
#include <chrono>
#include <cstdint>
#include <ctime>
#include <thread>
#include <sbl/system/port/tick_requirements.hpp>

namespace sbl::driver {

struct Tick {
    using Handler = void (*)();

    static constexpr uint32_t rate() { return 1'000'000u; }

    static void init() { origin() = now_ns(); }

    static void setup(Handler handler) { handler_ = handler; }

    static void enable() {
        if (enabled_.exchange(true)) {
            return;
        }
        thread_ = std::thread([] {
            while (enabled_) {
                const uint64_t us = micros();
                const uint64_t next = ((us >> 32) + 1) << 32;
                const uint64_t wait = next - us;
                // Sleep in slices so disable() returns promptly.
                const uint64_t slice = wait < 100'000 ? wait : 100'000;
                std::this_thread::sleep_for(std::chrono::microseconds(slice));
                if (enabled_ && (micros() >> 32) != acked_epoch_.load()) {
                    if (handler_) {
                        handler_();
                    }
                }
            }
        });
    }

    static void disable() {
        if (!enabled_.exchange(false)) {
            return;
        }
        if (thread_.joinable()) {
            thread_.join();
        }
    }

    static void acknowledge() { acked_epoch_ = static_cast<uint32_t>(micros() >> 32); }

    static bool overflow() { return static_cast<uint32_t>(micros() >> 32) != acked_epoch_.load(); }

    static uint32_t count() { return static_cast<uint32_t>(micros()); }

private:
    static uint64_t now_ns() {
        timespec t;
        clock_gettime(CLOCK_MONOTONIC, &t);
        return static_cast<uint64_t>(t.tv_sec) * 1'000'000'000u + static_cast<uint64_t>(t.tv_nsec);
    }
    static uint64_t& origin() {
        static uint64_t o = 0;
        return o;
    }
    static uint64_t micros() { return (now_ns() - origin()) / 1000u; }

    static inline Handler handler_ = nullptr;
    static inline std::atomic<bool> enabled_{false};
    static inline std::atomic<uint32_t> acked_epoch_{0};
    static inline std::thread thread_;
};

} // namespace sbl::driver

static_assert(sbl::system::port::tick_port_valid<sbl::driver::Tick>,
              "host tick port does not meet the contract");

#endif // SBL_SYSTEM_PORT_TICK_HPP_
