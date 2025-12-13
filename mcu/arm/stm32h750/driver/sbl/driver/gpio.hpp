/**
 * @file gpio.hpp
 * @brief STM32H750 GPIO driver - handle-first API
 *
 * Uses GpioHandle and PinMode from core lib for unified cross-platform interface.
 * Uses SVD-generated register definitions - no vendor HAL.
 * For raw register access, use sbl::hw::reg:: directly.
 */
#pragma once

#include <cstdint>
#include <sbl/hw/reg/gpio.hpp>
#include <sbl/hw/reg/rcc.hpp>
#include <sbl/hal/gpio/driver.hpp>

namespace sbl::driver {

// Import canonical PinMode from core lib
using sbl::gpio::PinMode;

/**
 * @brief GPIO driver for STM32H750
 *
 * Handle-first API for portable code across SBL-supported MCUs.
 * Uses SVD-generated registers - no vendor HAL dependency.
 * For direct register access, use sbl::hw::reg:: namespace.
 */
class Gpio {
public:
    /**
     * @brief Set pin mode
     * @param handle GPIO handle from hardware.hpp
     * @param mode Pin mode (from sbl::gpio::PinMode)
     */
    static void set_mode(const sbl::GpioHandle& handle, PinMode mode) {
        enable_port_clock(handle.port);

        auto gpio = port_regs(handle.port);

        // Clear mode bits (2 bits per pin)
        gpio->GPIO_MODER &= ~(0x3u << (handle.pin * 2));
        // Clear pull bits (2 bits per pin)
        gpio->GPIO_PUPDR &= ~(0x3u << (handle.pin * 2));

        switch (mode) {
            case PinMode::Output:
                gpio->GPIO_MODER |= (0x1u << (handle.pin * 2));  // General purpose output
                gpio->GPIO_OTYPER &= ~(1u << handle.pin);         // Push-pull
                break;
            case PinMode::Input:
                // Mode 00 = input (already cleared)
                break;
            case PinMode::InputPullup:
                gpio->GPIO_PUPDR |= (0x1u << (handle.pin * 2));  // Pull-up
                break;
            case PinMode::InputPulldown:
                gpio->GPIO_PUPDR |= (0x2u << (handle.pin * 2));  // Pull-down
                break;
            case PinMode::OpenDrain:
                gpio->GPIO_MODER |= (0x1u << (handle.pin * 2));  // General purpose output
                gpio->GPIO_OTYPER |= (1u << handle.pin);          // Open-drain
                break;
            case PinMode::Analog:
                gpio->GPIO_MODER |= (0x3u << (handle.pin * 2));  // Analog mode
                break;
        }
    }

    /**
     * @brief Write logical value (handles active_low automatically)
     * @param handle GPIO handle from hardware.hpp
     * @param value Logical value (true = active, false = inactive)
     */
    static void write(const sbl::GpioHandle& handle, bool value) {
        auto gpio = port_regs(handle.port);
        bool physical = handle.effective_level(value);
        if (physical) {
            gpio->GPIO_BSRR = (1u << handle.pin);         // Set bit
        } else {
            gpio->GPIO_BSRR = (1u << (handle.pin + 16));  // Reset bit
        }
    }

    /**
     * @brief Read logical value (handles active_low automatically)
     * @param handle GPIO handle from hardware.hpp
     * @return Logical value (true = active, false = inactive)
     */
    static bool read(const sbl::GpioHandle& handle) {
        auto gpio = port_regs(handle.port);
        bool raw = (gpio->GPIO_IDR & (1u << handle.pin)) != 0;
        return handle.active_low ? !raw : raw;
    }

    /**
     * @brief Toggle pin output
     * @param handle GPIO handle from hardware.hpp
     */
    static void toggle(const sbl::GpioHandle& handle) {
        auto gpio = port_regs(handle.port);
        gpio->GPIO_ODR ^= (1u << handle.pin);
    }

private:
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
};

} // namespace sbl::driver

// Compile-time interface validation
#include <sbl/validation/gpio_requirements.hpp>
static_assert(sbl::validation::gpio_driver_valid<sbl::driver::Gpio>,
              "STM32H750 GPIO driver incomplete");
