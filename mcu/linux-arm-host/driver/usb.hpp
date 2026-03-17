// Native USB driver stub — no USB hardware
//
// Provides sbl::usb::init() / task() that Davis Jr. calls from main.
// Also declares tud_task() which main.cpp calls directly (normally from TinyUSB).

#pragma once

namespace sbl::usb {

inline void init() {}
inline void task() {}

} // namespace sbl::usb

// TinyUSB stub — normally declared in tusb.h
extern "C" {
    void tud_task(void);
}

