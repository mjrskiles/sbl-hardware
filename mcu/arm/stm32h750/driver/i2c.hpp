/**
 * @file i2c.hpp
 * @brief STM32H750 I2C driver — blocking mode
 *
 * Manifest-driven I2C initialization using I2cHandle.
 * Bare-metal implementation using SVD-generated register definitions.
 *
 * Templated on Instance index so multiple I2C peripherals can coexist
 * (e.g., I2c<0> for sensors + I2c<1> for codec control). Each I2c<N>
 * has its own static state.
 *
 * GPIO configuration: open-drain with pull-up — critical for I2C bus.
 * Kernel clock: HSI (64 MHz), independent of APB bus clocks.
 *
 * TIMINGR values pre-calculated for HSI 64 MHz. Verify on hardware
 * with logic analyzer if timing issues occur.
 *
 * Phase 1: Blocking only (polling ISR flags).
 * Phase 2 will add interrupt-driven async via i2c_irq.cpp.
 */
#ifndef SBL_HW_DRIVER_I2C_HPP_
#define SBL_HW_DRIVER_I2C_HPP_

#include <cstdint>
#include <cstddef>
#include <sbl/types.hpp>
#include <sbl/hw/reg/gpio.hpp>
#include <sbl/hw/reg/rcc.hpp>
#include <sbl/hw/reg/i2c.hpp>
#include <sbl/hw/reg/irq.hpp>
#include <sbl/hw/reg/cortex_m.hpp>
#include <sbl/hw/driver/timeout.hpp>
#include <sbl/hw/driver/clock.hpp>

namespace sbl::driver {

namespace i2c_detail {

/**
 * @brief Get GPIO peripheral pointer from port number
 * @param port Port number (0=A, 1=B, 2=C, etc.)
 */
inline auto get_gpio_port(uint32_t port) {
    using namespace sbl::hw::reg;
    switch (port) {
        case 0: return periph::gpioa;
        case 1: return periph::gpiob;
        case 2: return periph::gpioc;
        case 3: return periph::gpiod;
        case 4: return periph::gpioe;
        case 5: return periph::gpiof;
        case 6: return periph::gpiog;
        default: return periph::gpioa;
    }
}

/**
 * @brief Get I2C peripheral pointer from peripheral number
 * @param peripheral 1=I2C1, 2=I2C2, 3=I2C3, 4=I2C4
 *
 * All I2C peripherals have identical register layout (I2C1_t).
 */
inline volatile sbl::hw::reg::I2C1_t* get_i2c(uint32_t peripheral) {
    using namespace sbl::hw::reg;
    switch (peripheral) {
        case 1: return periph::i2c1;
        case 2: return periph::i2c2;
        case 3: return periph::i2c3;
        case 4: return periph::i2c4;
        default: return periph::i2c1;
    }
}

/**
 * @brief Configure a pin for I2C: alternate function, open-drain, pull-up
 *
 * Critical difference from UART: I2C requires open-drain (OTYPER=1) and
 * pull-up (PUPDR=01). Push-pull would fight the bus and damage devices.
 */
inline void configure_i2c_pin(decltype(sbl::hw::reg::periph::gpioa) gpio,
                               uint32_t pin, uint32_t af) {
    // Set mode to alternate function (0b10)
    gpio->GPIO_MODER &= ~(0x3u << (pin * 2));
    gpio->GPIO_MODER |= (0x2u << (pin * 2));

    // Set output type to OPEN-DRAIN (bit = 1) — essential for I2C
    gpio->GPIO_OTYPER |= (1u << pin);

    // Set speed to high (0b11)
    gpio->GPIO_OSPEEDR |= (0x3u << (pin * 2));

    // Set pull-up (0b01) — I2C bus needs pull-ups
    gpio->GPIO_PUPDR &= ~(0x3u << (pin * 2));
    gpio->GPIO_PUPDR |= (0x1u << (pin * 2));

    // Set alternate function
    if (pin < 8) {
        gpio->GPIO_AFRL &= ~(0xFu << (pin * 4));
        gpio->GPIO_AFRL |= (af << (pin * 4));
    } else {
        uint32_t afrh_pin = pin - 8;
        gpio->GPIO_AFRH &= ~(0xFu << (afrh_pin * 4));
        gpio->GPIO_AFRH |= (af << (afrh_pin * 4));
    }
}

/**
 * @brief Enable I2C bus clock and set kernel clock to HSI
 * @param peripheral I2C peripheral number (1-4)
 * @return true if valid peripheral
 */
inline bool enable_i2c_clocks(uint32_t peripheral) {
    using namespace sbl::hw::reg;

    volatile uint32_t dummy;
    switch (peripheral) {
        case 1:
            periph::rcc->APB1LENR |= RCC::APB1LENR_I2C1EN;
            dummy = periph::rcc->APB1LENR;
            break;
        case 2:
            periph::rcc->APB1LENR |= RCC::APB1LENR_I2C2EN;
            dummy = periph::rcc->APB1LENR;
            break;
        case 3:
            periph::rcc->APB1LENR |= RCC::APB1LENR_I2C3EN;
            dummy = periph::rcc->APB1LENR;
            break;
        case 4:
            periph::rcc->APB4ENR |= RCC::APB4ENR_I2C4EN;
            dummy = periph::rcc->APB4ENR;
            break;
        default:
            return false;
    }
    (void)dummy;

    // Force kernel clock to HSI (64 MHz)
    if (peripheral <= 3) {
        detail::set_i2c123_kernel_clock(KernelClockSrc::HSI);
    } else {
        detail::set_i2c4_kernel_clock(KernelClockSrc::HSI);
    }
    return true;
}

/**
 * @brief Get TIMINGR value for a given speed at HSI 64 MHz
 *
 * Values calculated for I2C kernel clock = HSI = 64 MHz.
 * Reference: STM32CubeMX I2C timing tool / AN4235.
 *
 * Standard mode (100 kHz):
 *   PRESC=0xF, SCLDEL=0x4, SDADEL=0x2, SCLH=0x3F, SCLL=0x53
 *   → TIMINGR = 0xF042'3F53
 *
 * Fast mode (400 kHz):
 *   PRESC=0x6, SCLDEL=0x3, SDADEL=0x0, SCLH=0x0F, SCLL=0x13
 *   → TIMINGR = 0x6030'0F13
 *
 * Fast mode plus (1 MHz):
 *   PRESC=0x3, SCLDEL=0x1, SDADEL=0x0, SCLH=0x03, SCLL=0x09
 *   → TIMINGR = 0x3010'0309
 *
 * These should be verified with a logic analyzer on first hardware test.
 */
inline uint32_t get_timingr(uint32_t speed_hz) {
    switch (speed_hz) {
        case 400000:  return 0x60300F13u;  // Fast mode
        case 1000000: return 0x30100309u;  // Fast mode plus
        default:      return 0xF0423F53u;  // Standard mode (100 kHz)
    }
}

// ── IRQ dispatch infrastructure (Phase 2 prep) ──────────────────────

/** Callback type for I2C IRQ dispatch */
using I2cCallback = void(*)();

/** Event callback table indexed by peripheral number (defined in i2c_irq.cpp) */
extern I2cCallback ev_callbacks[5];

/** Error callback table indexed by peripheral number (defined in i2c_irq.cpp) */
extern I2cCallback er_callbacks[5];

} // namespace i2c_detail

/**
 * @brief I2C driver for STM32H750 — blocking mode
 *
 * @tparam Instance Instance index (default 0). Each I2c<N> gets its own
 *         static state, enabling multiple coexisting I2C peripherals.
 *
 * Supports I2C1, I2C2, I2C3, I2C4.
 * Kernel clock: HSI (64 MHz), independent of APB bus clocks.
 *
 * All transactions are blocking (polling ISR flags with timeout).
 * Phase 2 will add interrupt-driven async transfers.
 */
template<uint8_t Instance = 0>
class I2c {
private:
    static inline volatile sbl::hw::reg::I2C1_t* s_i2c = nullptr;
    static inline uint32_t s_peripheral = 0;

    /**
     * @brief Wait for an ISR flag with timeout, checking for NACK
     * @return true if flag set, false if timeout or NACK
     */
    static bool wait_flag(uint32_t flag) {
        using namespace sbl::hw::reg;
        for (uint32_t i = 0; i < HW_TIMEOUT; ++i) {
            uint32_t isr = s_i2c->I2C_ISR;
            if (isr & I2C1::I2C_ISR_NACKF) {
                // NACK received — clear it and abort
                s_i2c->I2C_ICR = I2C1::I2C_ICR_NACKCF;
                return false;
            }
            if (isr & flag) {
                return true;
            }
        }
        return false;
    }

    /**
     * @brief Wait for STOP flag (transaction complete)
     */
    static bool wait_stop() {
        using namespace sbl::hw::reg;
        if (!detail::wait_for(&s_i2c->I2C_ISR,
                              I2C1::I2C_ISR_STOPF, I2C1::I2C_ISR_STOPF)) {
            return false;
        }
        // Clear STOP flag
        s_i2c->I2C_ICR = I2C1::I2C_ICR_STOPCF;
        return true;
    }

    /**
     * @brief Configure CR2 for a transfer
     * @param addr 7-bit slave address
     * @param nbytes Number of bytes (max 255)
     * @param direction 0=write, 1=read
     * @param autoend true=AUTOEND, false=SOFTEND (for repeated START)
     */
    static void configure_transfer(uint8_t addr, uint8_t nbytes,
                                    bool direction, bool autoend) {
        using namespace sbl::hw::reg;
        uint32_t cr2 = 0;
        cr2 |= ((uint32_t)addr << 1) & 0x3FEu;  // SADD[7:1] for 7-bit addressing
        cr2 |= ((uint32_t)nbytes << I2C1::I2C_CR2_NBYTES_Pos) & I2C1::I2C_CR2_NBYTES_Msk;
        if (direction) cr2 |= I2C1::I2C_CR2_RD_WRN;
        if (autoend)   cr2 |= I2C1::I2C_CR2_AUTOEND;
        cr2 |= I2C1::I2C_CR2_START;
        s_i2c->I2C_CR2 = cr2;
    }

public:
    /**
     * @brief Initialize I2C using handle from hardware manifest
     *
     * Configures SCL and SDA pins as open-drain with pull-ups.
     * Sets kernel clock to HSI (64 MHz) and programs TIMINGR for
     * the requested bus speed.
     *
     * @param handle I2cHandle with peripheral, pins, AF, and speed
     * @return true if initialized successfully
     */
    static bool init(const sbl::I2cHandle& handle) {
        using namespace sbl::hw::reg;

        s_peripheral = handle.peripheral;

        // Enable GPIO clocks for SCL and SDA ports
        periph::rcc->AHB4ENR |= (1u << handle.scl_port);
        periph::rcc->AHB4ENR |= (1u << handle.sda_port);
        volatile uint32_t dummy = periph::rcc->AHB4ENR;
        (void)dummy;

        // Enable I2C bus clock and set kernel clock
        if (!i2c_detail::enable_i2c_clocks(handle.peripheral)) {
            return false;
        }

        // Configure SCL and SDA pins: open-drain, pull-up, alternate function
        auto scl_gpio = i2c_detail::get_gpio_port(handle.scl_port);
        auto sda_gpio = i2c_detail::get_gpio_port(handle.sda_port);
        i2c_detail::configure_i2c_pin(scl_gpio, handle.scl_pin, handle.scl_af);
        i2c_detail::configure_i2c_pin(sda_gpio, handle.sda_pin, handle.sda_af);

        // Get I2C peripheral
        s_i2c = i2c_detail::get_i2c(handle.peripheral);

        // Disable PE for configuration
        s_i2c->I2C_CR1 = 0;

        // Wait for PE to clear
        for (volatile int i = 0; i < 100; ++i) {}

        // Set timing for requested speed
        s_i2c->I2C_TIMINGR = i2c_detail::get_timingr(handle.speed_hz);

        // Enable PE
        s_i2c->I2C_CR1 = I2C1::I2C_CR1_PE;

        return true;
    }

    /**
     * @brief Write data to an I2C slave
     *
     * Sends NBYTES to 7-bit slave address with AUTOEND (automatic STOP).
     *
     * @param addr 7-bit slave address (unshifted, 0x00-0x7F)
     * @param data Data buffer to send
     * @param len Number of bytes to send (max 255)
     * @return true if all bytes sent and STOP completed
     */
    static bool write(uint8_t addr, const uint8_t* data, size_t len) {
        using namespace sbl::hw::reg;

        if (len == 0 || len > 255) return false;

        configure_transfer(addr, static_cast<uint8_t>(len), false, true);

        for (size_t i = 0; i < len; ++i) {
            if (!wait_flag(I2C1::I2C_ISR_TXIS)) return false;
            s_i2c->I2C_TXDR = data[i];
        }

        return wait_stop();
    }

    /**
     * @brief Read data from an I2C slave
     *
     * Reads NBYTES from 7-bit slave address with AUTOEND.
     *
     * @param addr 7-bit slave address (unshifted)
     * @param data Buffer to receive data
     * @param len Number of bytes to read (max 255)
     * @return true if all bytes received and STOP completed
     */
    static bool read(uint8_t addr, uint8_t* data, size_t len) {
        using namespace sbl::hw::reg;

        if (len == 0 || len > 255) return false;

        configure_transfer(addr, static_cast<uint8_t>(len), true, true);

        for (size_t i = 0; i < len; ++i) {
            if (!wait_flag(I2C1::I2C_ISR_RXNE)) return false;
            data[i] = static_cast<uint8_t>(s_i2c->I2C_RXDR);
        }

        return wait_stop();
    }

    /**
     * @brief Write then read (repeated START)
     *
     * Sends tx_len bytes, then issues a repeated START and reads rx_len bytes.
     * Uses SOFTEND for the write phase to keep the bus held, then AUTOEND
     * for the read phase.
     *
     * Common use case: write register address, then read register value.
     *
     * @param addr 7-bit slave address (unshifted)
     * @param tx Data to send (often just the register address)
     * @param tx_len Number of bytes to send
     * @param rx Buffer to receive data
     * @param rx_len Number of bytes to read
     * @return true if complete transaction succeeded
     */
    static bool write_then_read(uint8_t addr,
                                 const uint8_t* tx, size_t tx_len,
                                 uint8_t* rx, size_t rx_len) {
        using namespace sbl::hw::reg;

        if (tx_len == 0 || tx_len > 255 || rx_len == 0 || rx_len > 255) return false;

        // Write phase: SOFTEND (no automatic STOP — we want repeated START)
        configure_transfer(addr, static_cast<uint8_t>(tx_len), false, false);

        for (size_t i = 0; i < tx_len; ++i) {
            if (!wait_flag(I2C1::I2C_ISR_TXIS)) return false;
            s_i2c->I2C_TXDR = tx[i];
        }

        // Wait for TC (Transfer Complete) — SOFTEND means no STOP, just TC
        if (!detail::wait_for(&s_i2c->I2C_ISR,
                              I2C1::I2C_ISR_TC, I2C1::I2C_ISR_TC)) {
            return false;
        }

        // Read phase: AUTOEND (automatic STOP after last byte)
        configure_transfer(addr, static_cast<uint8_t>(rx_len), true, true);

        for (size_t i = 0; i < rx_len; ++i) {
            if (!wait_flag(I2C1::I2C_ISR_RXNE)) return false;
            rx[i] = static_cast<uint8_t>(s_i2c->I2C_RXDR);
        }

        return wait_stop();
    }

    /**
     * @brief Probe for a device at the given address
     *
     * Sends a zero-length write to check for ACK. Returns true if
     * the device responds (ACK), false if NACK.
     *
     * @param addr 7-bit slave address
     * @return true if device responded with ACK
     */
    static bool probe(uint8_t addr) {
        using namespace sbl::hw::reg;

        // Send START with 0 bytes — just looking for ACK/NACK
        configure_transfer(addr, 0, false, true);

        // Wait for either STOP (success) or NACK (no device)
        for (uint32_t i = 0; i < HW_TIMEOUT; ++i) {
            uint32_t isr = s_i2c->I2C_ISR;
            if (isr & I2C1::I2C_ISR_NACKF) {
                s_i2c->I2C_ICR = I2C1::I2C_ICR_NACKCF;
                // Also clear STOP that AUTOEND generates after NACK
                s_i2c->I2C_ICR = I2C1::I2C_ICR_STOPCF;
                return false;
            }
            if (isr & I2C1::I2C_ISR_STOPF) {
                s_i2c->I2C_ICR = I2C1::I2C_ICR_STOPCF;
                return true;
            }
        }
        return false;
    }

    /**
     * @brief Scan the I2C bus for devices
     *
     * Probes all valid 7-bit addresses (0x08-0x77) and calls the
     * callback for each device that responds.
     *
     * @param callback Called with each found address
     */
    static void scan(void(*callback)(uint8_t addr)) {
        for (uint8_t addr = 0x08; addr <= 0x77; ++addr) {
            if (probe(addr)) {
                callback(addr);
            }
        }
    }
};

} // namespace sbl::driver

#endif // SBL_HW_DRIVER_I2C_HPP_
