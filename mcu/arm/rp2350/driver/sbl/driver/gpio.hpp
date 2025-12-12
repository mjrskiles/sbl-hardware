/**
 * @file gpio.hpp
 * @brief RP2350 GPIO driver wrapping pico-sdk
 */
#pragma once

#include "pico/stdlib.h"
#include "hardware/gpio.h"
#include <cstdint>

namespace sbl::driver {

/**
 * @brief GPIO pin modes
 */
enum class PinMode {
    Input,
    Output,
    InputPullup,
    InputPulldown
};

/**
 * @brief GPIO driver for RP2350
 *
 * Static interface wrapping pico-sdk GPIO functions.
 */
class Gpio {
public:
    static void init(uint32_t pin) {
        gpio_init(pin);
    }

    static void set_mode(uint32_t pin, PinMode mode) {
        gpio_init(pin);
        switch (mode) {
            case PinMode::Output:
                gpio_set_dir(pin, GPIO_OUT);
                break;
            case PinMode::Input:
                gpio_set_dir(pin, GPIO_IN);
                gpio_disable_pulls(pin);
                break;
            case PinMode::InputPullup:
                gpio_set_dir(pin, GPIO_IN);
                gpio_pull_up(pin);
                break;
            case PinMode::InputPulldown:
                gpio_set_dir(pin, GPIO_IN);
                gpio_pull_down(pin);
                break;
        }
    }

    static void write(uint32_t pin, bool value) {
        gpio_put(pin, value);
    }

    static bool read(uint32_t pin) {
        return gpio_get(pin);
    }

    static void toggle(uint32_t pin) {
        gpio_xor_mask(1u << pin);
    }
};

} // namespace sbl::driver
