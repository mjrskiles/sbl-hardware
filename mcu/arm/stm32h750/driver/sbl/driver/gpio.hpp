/**
 * @file gpio.hpp
 * @brief STM32H750 GPIO driver using SVD-generated register definitions
 */
#pragma once

#include <cstdint>
#include <sbl/hw/reg/gpio.hpp>
#include <sbl/hw/reg/rcc.hpp>

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
 * @brief GPIO driver for STM32H750
 *
 * Uses SVD-generated register definitions from sbl::hw::reg.
 * Port numbers: 0=A, 1=B, 2=C, etc.
 */
class Gpio {
public:
    /**
     * @brief Enable GPIO port clock
     * @param port Port number (0=A, 1=B, etc.)
     */
    static void enable_port_clock(uint32_t port) {
        using namespace sbl::hw::reg;
        periph::rcc->AHB4ENR |= (1u << port);
        // Read back for synchronization
        volatile uint32_t dummy = periph::rcc->AHB4ENR;
        (void)dummy;
    }

    /**
     * @brief Get GPIO port register block
     * @param port Port number (0=A, 1=B, etc.)
     */
    static volatile sbl::hw::reg::GPIOA_t* port_regs(uint32_t port) {
        using namespace sbl::hw::reg;
        // All GPIO ports have identical layout, differing only in base address
        constexpr uint32_t GPIO_SPACING = 0x400;
        auto base = reinterpret_cast<uintptr_t>(periph::gpioa) + (port * GPIO_SPACING);
        return reinterpret_cast<volatile GPIOA_t*>(base);
    }

    /**
     * @brief Set pin mode
     * @param port Port number (0=A, 1=B, etc.)
     * @param pin Pin number (0-15)
     * @param mode Pin mode
     */
    static void set_mode(uint32_t port, uint32_t pin, PinMode mode) {
        enable_port_clock(port);

        auto gpio = port_regs(port);

        // Clear mode bits (2 bits per pin)
        gpio->GPIO_MODER &= ~(0x3u << (pin * 2));
        // Clear pull bits (2 bits per pin)
        gpio->GPIO_PUPDR &= ~(0x3u << (pin * 2));

        switch (mode) {
            case PinMode::Output:
                gpio->GPIO_MODER |= (0x1u << (pin * 2));  // General purpose output
                gpio->GPIO_OTYPER &= ~(1u << pin);         // Push-pull
                break;
            case PinMode::Input:
                // Mode 00 = input (already cleared)
                break;
            case PinMode::InputPullup:
                gpio->GPIO_PUPDR |= (0x1u << (pin * 2));  // Pull-up
                break;
            case PinMode::InputPulldown:
                gpio->GPIO_PUPDR |= (0x2u << (pin * 2));  // Pull-down
                break;
        }
    }

    /**
     * @brief Write pin value
     * @param port Port number (0=A, 1=B, etc.)
     * @param pin Pin number (0-15)
     * @param value true for high, false for low
     */
    static void write(uint32_t port, uint32_t pin, bool value) {
        auto gpio = port_regs(port);
        if (value) {
            gpio->GPIO_BSRR = (1u << pin);         // Set bit
        } else {
            gpio->GPIO_BSRR = (1u << (pin + 16));  // Reset bit
        }
    }

    /**
     * @brief Read pin value
     * @param port Port number (0=A, 1=B, etc.)
     * @param pin Pin number (0-15)
     * @return true if high, false if low
     */
    static bool read(uint32_t port, uint32_t pin) {
        auto gpio = port_regs(port);
        return (gpio->GPIO_IDR & (1u << pin)) != 0;
    }

    /**
     * @brief Toggle pin value
     * @param port Port number (0=A, 1=B, etc.)
     * @param pin Pin number (0-15)
     */
    static void toggle(uint32_t port, uint32_t pin) {
        auto gpio = port_regs(port);
        gpio->GPIO_ODR ^= (1u << pin);
    }
};

} // namespace sbl::driver
