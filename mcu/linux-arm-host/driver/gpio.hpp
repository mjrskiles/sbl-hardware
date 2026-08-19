// Native GPIO driver — in-memory state simulation
//
// All GPIO operations work on a local boolean array. No real hardware.
// Sufficient for Board LED/gate stubs and SFINAE validation.

#pragma once

#include <cstdint>
#include <sbl/types.hpp>
#include <sbl/hw/hal/gpio/driver.hpp>

namespace sbl::driver {

class Gpio {
public:
    static void set_mode(const sbl::GpioHandle& handle, sbl::gpio::PinMode mode) {
        if (handle.port == 0 && handle.pin < MAX_PINS) {
            // Model pull resistor idle state: pull-up reads HIGH, pull-down reads LOW
            if (mode == sbl::gpio::PinMode::InputPullup) {
                pin_state_[handle.pin] = true;
            } else if (mode == sbl::gpio::PinMode::InputPulldown) {
                pin_state_[handle.pin] = false;
            }
        }
    }

    static void write(const sbl::GpioHandle& handle, bool value) {
        bool physical = handle.effective_level(value);
        if (handle.port == 0 && handle.pin < MAX_PINS) {
            pin_state_[handle.pin] = physical;
        }
    }

    static bool read(const sbl::GpioHandle& handle) {
        if (handle.port == 0 && handle.pin < MAX_PINS) {
            bool physical = pin_state_[handle.pin];
            return handle.active_low ? !physical : physical;
        }
        return false;
    }

    static void toggle(const sbl::GpioHandle& handle) {
        if (handle.port == 0 && handle.pin < MAX_PINS) {
            pin_state_[handle.pin] = !pin_state_[handle.pin];
        }
    }

private:
    static constexpr uint32_t MAX_PINS = 32;
    static inline bool pin_state_[MAX_PINS] = {};
};

} // namespace sbl::driver
