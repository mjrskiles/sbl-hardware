// Native TimerCallback — std::thread periodic callback
//
// Spawns a background thread that calls the callback at the requested interval.

#pragma once

#include <cstdint>
#include <atomic>
#include <thread>
#include <chrono>

namespace sbl::driver {

class TimerCallback {
public:
    using Callback = void(*)();

    static void start(uint32_t period_us, Callback cb) {
        stop();
        callback_ = cb;
        period_us_ = period_us;
        running_ = true;
        thread_ = std::thread(thread_func);
    }

    static void stop() {
        running_ = false;
        if (thread_.joinable()) {
            thread_.join();
        }
        callback_ = nullptr;
    }

    static void set_period(uint32_t period_us) {
        period_us_ = period_us;
    }

    static void irq_handler() {
        if (callback_) callback_();
    }

    static bool running() { return running_; }

private:
    static void thread_func() {
        while (running_) {
            if (callback_) {
                callback_();
            }
            std::this_thread::sleep_for(std::chrono::microseconds(period_us_.load()));
        }
    }

    static inline Callback callback_ = nullptr;
    static inline std::atomic<uint32_t> period_us_{5000};
    static inline std::atomic<bool> running_{false};
    static inline std::thread thread_;
};

} // namespace sbl::driver
