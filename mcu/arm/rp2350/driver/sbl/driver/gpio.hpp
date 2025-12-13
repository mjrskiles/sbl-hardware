/**
 * @file gpio.hpp
 * @brief RP2350 GPIO driver - handle-first API
 *
 * Uses GpioHandle and PinMode from core lib for unified cross-platform interface.
 * For raw pin access, use pico-sdk directly (gpio_put, etc.)
 */
#pragma once

#include "pico/stdlib.h"
#include "hardware/gpio.h"
#include <hal/gpio/driver.hpp>

namespace sbl::driver {

// Import canonical PinMode from core lib
using sbl::gpio::PinMode;

/**
 * @brief GPIO driver for RP2350
 *
 * Handle-first API for portable code across SBL-supported MCUs.
 * For direct hardware access, use pico-sdk functions.
 */
class Gpio {
public:
    /**
     * @brief Set pin mode
     * @param handle GPIO handle from hardware.hpp
     * @param mode Pin mode (from sbl::gpio::PinMode)
     */
    static void set_mode(const sbl::GpioHandle& handle, PinMode mode) {
        gpio_init(handle.pin);
        switch (mode) {
            case PinMode::Output:
                gpio_set_dir(handle.pin, GPIO_OUT);
                break;
            case PinMode::Input:
                gpio_set_dir(handle.pin, GPIO_IN);
                gpio_disable_pulls(handle.pin);
                break;
            case PinMode::InputPullup:
                gpio_set_dir(handle.pin, GPIO_IN);
                gpio_pull_up(handle.pin);
                break;
            case PinMode::InputPulldown:
                gpio_set_dir(handle.pin, GPIO_IN);
                gpio_pull_down(handle.pin);
                break;
            case PinMode::OpenDrain:
                // RP2350: Use output with open-drain behavior via pad control
                // For now, configure as output - true open-drain requires pad config
                gpio_set_dir(handle.pin, GPIO_OUT);
                break;
            case PinMode::Analog:
                // RP2350 has ADC on specific pins (GPIO26-29)
                // Configure as high-impedance input for ADC use
                gpio_set_dir(handle.pin, GPIO_IN);
                gpio_disable_pulls(handle.pin);
                break;
        }
    }

    /**
     * @brief Write logical value (handles active_low automatically)
     * @param handle GPIO handle from hardware.hpp
     * @param value Logical value (true = active, false = inactive)
     */
    static void write(const sbl::GpioHandle& handle, bool value) {
        gpio_put(handle.pin, handle.effective_level(value));
    }

    /**
     * @brief Read logical value (handles active_low automatically)
     * @param handle GPIO handle from hardware.hpp
     * @return Logical value (true = active, false = inactive)
     */
    static bool read(const sbl::GpioHandle& handle) {
        bool raw = gpio_get(handle.pin);
        return handle.active_low ? !raw : raw;
    }

    /**
     * @brief Toggle pin output
     * @param handle GPIO handle from hardware.hpp
     */
    static void toggle(const sbl::GpioHandle& handle) {
        gpio_xor_mask(1u << handle.pin);
    }
};

} // namespace sbl::driver

// Compile-time interface validation
#include <validation/gpio_requirements.hpp>
static_assert(sbl::validation::gpio_driver_valid<sbl::driver::Gpio>,
              "RP2350 GPIO driver incomplete");
