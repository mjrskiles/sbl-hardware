/**
 * @file uart.hpp
 * @brief STM32H750 UART driver — fully interrupt-driven RX and TX
 *
 * Manifest-driven UART initialization using UartHandle.
 * Bare-metal implementation using SVD-generated register definitions.
 *
 * Both RX and TX use NVIC interrupts + ring buffers:
 * - RX: ISR drains hardware FIFO into 256-byte ring buffer (MIDI never drops)
 * - TX: write_byte() pushes to 256-byte ring buffer, ISR drains to hardware FIFO
 *
 * Templated on Instance index so multiple UART peripherals can coexist
 * (e.g., debug on USART3 + MIDI on USART1). Each Uart<N> has its own
 * static state.
 *
 * LINK NOTE: Any executable using UART must compile uart_irq.cpp as a
 * direct source (not via static lib) so the strong ISR symbols override
 * the weak stubs in startup.cpp. Same pattern as dma_irq.cpp.
 */
#ifndef SBL_HW_DRIVER_UART_HPP_
#define SBL_HW_DRIVER_UART_HPP_

#include <cstdint>
#include <cstddef>
#include <sbl/types.hpp>
#include <sbl/hw/reg/gpio.hpp>
#include <sbl/hw/reg/rcc.hpp>
#include <sbl/hw/reg/usart.hpp>
#include <sbl/hw/reg/irq.hpp>
#include <sbl/hw/reg/cortex_m.hpp>
#include <sbl/hw/driver/timeout.hpp>
#include <sbl/hw/driver/clock.hpp>
#include <sbl/hw/hal/uart/driver.hpp>
#include <sbl/hw/hal/memory/barrier.hpp>
#include <sbl/hw/util/ring_buffer.hpp>

namespace sbl::driver {

namespace uart_detail {

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
 * @brief Get USART peripheral pointer from peripheral number
 * @param peripheral 1=USART1, 2=USART2, 3=USART3
 */
inline volatile sbl::hw::reg::USART_t* get_usart(uint32_t peripheral) {
    using namespace sbl::hw::reg;
    switch (peripheral) {
        case 1: return periph::usart1;
        case 2: return periph::usart2;
        case 3: return periph::usart3;
        default: return periph::usart1;
    }
}

/**
 * @brief Configure a pin as alternate function
 * @param gpio GPIO peripheral pointer
 * @param pin Pin number within port
 * @param af Alternate function number
 */
inline void configure_af_pin(decltype(sbl::hw::reg::periph::gpioa) gpio,
                              uint32_t pin, uint32_t af) {
    // Set mode to alternate function (0b10)
    gpio->GPIO_MODER &= ~(0x3u << (pin * 2));
    gpio->GPIO_MODER |= (0x2u << (pin * 2));

    // Set output type push-pull (0)
    gpio->GPIO_OTYPER &= ~(1u << pin);

    // Set speed to high (0b11)
    gpio->GPIO_OSPEEDR |= (0x3u << (pin * 2));

    // No pull-up/pull-down
    gpio->GPIO_PUPDR &= ~(0x3u << (pin * 2));

    // Set alternate function
    // AFRL handles pins 0-7, AFRH handles pins 8-15
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
 * @brief Enable USART bus clock and set kernel clock to HSI
 * @param peripheral USART peripheral number (1, 2, 3, 6)
 * @return true if valid peripheral
 */
inline bool enable_usart_clocks(uint32_t peripheral) {
    using namespace sbl::hw::reg;

    volatile uint32_t dummy;
    switch (peripheral) {
        case 1:
            periph::rcc->APB2ENR |= RCC::APB2ENR_USART1EN;
            dummy = periph::rcc->APB2ENR;
            break;
        case 2:
            periph::rcc->APB1LENR |= RCC::APB1LENR_USART2EN;
            dummy = periph::rcc->APB1LENR;
            break;
        case 3:
            periph::rcc->APB1LENR |= RCC::APB1LENR_USART3EN;
            dummy = periph::rcc->APB1LENR;
            break;
        case 6:
            periph::rcc->APB2ENR |= RCC::APB2ENR_USART6EN;
            dummy = periph::rcc->APB2ENR;
            break;
        default:
            return false;
    }
    (void)dummy;

    // Force kernel clock to HSI (64 MHz)
    if (peripheral == 1 || peripheral == 6) {
        detail::set_usart16_kernel_clock(KernelClockSrc::HSI);
    } else {
        detail::set_usart234578_kernel_clock(KernelClockSrc::HSI);
    }
    return true;
}

// ── IRQ dispatch infrastructure ──────────────────────────────────────

/** Callback type for UART IRQ dispatch */
using UartCallback = void(*)();

/** Callback table indexed by peripheral number (defined in uart_irq.cpp) */
extern UartCallback callbacks[7];

/**
 * @brief Get NVIC IRQ number for a USART peripheral
 */
inline sbl::hw::reg::IRQn get_usart_irqn(uint32_t peripheral) {
    using sbl::hw::reg::IRQn;
    switch (peripheral) {
        case 1: return IRQn::USART1;   // 37
        case 2: return IRQn::USART2;   // 38
        case 3: return IRQn::USART3;   // 39
        case 6: return IRQn::USART6;   // 71
        default: return IRQn::USART1;
    }
}

/**
 * @brief Enable NVIC interrupt for a USART peripheral
 * @param peripheral USART peripheral number
 * @param priority NVIC priority (lower = higher priority)
 *
 * Priority scheme from FDP-018:
 *   4 (High) — UART RX-only (MIDI): must not be delayed by debug TX
 *  12 (Low)  — UART TX+RX (debug): bulk output, not latency-sensitive
 */
inline void enable_usart_nvic(uint32_t peripheral, uint8_t priority) {
    using namespace sbl::hw::reg;
    auto irq = get_usart_irqn(peripheral);
    uint32_t n = static_cast<uint32_t>(irq);
    periph::nvic->IP[n] = (priority << 4);
    periph::nvic->ISER[n >> 5] = (1u << (n & 0x1Fu));
}

} // namespace uart_detail

/**
 * @brief UART driver for STM32H750 — fully interrupt-driven RX and TX
 *
 * @tparam Instance Instance index (default 0). Each Uart<N> gets its own
 *         static state, enabling multiple coexisting UART peripherals
 *         (e.g., Uart<0> for debug, Uart<1> for MIDI).
 *
 * RX: ISR drains hardware FIFO into 256-byte ring buffer. available() and
 * read_byte() pop from main context.
 *
 * TX: write_byte() pushes to 256-byte ring buffer and enables TXEIE. ISR
 * drains ring buffer into hardware FIFO. Disables TXEIE when buffer empty.
 * Back-pressure: write_byte() spins if TX buffer is full.
 *
 * Supports USART1, USART2, USART3, USART6.
 * Kernel clock: HSI (64 MHz), independent of APB bus clocks.
 */
template<uint8_t Instance = 0>
class Uart {
private:
    static inline bool s_initialized = false;
    static inline bool s_tx_enabled = false;
    static inline volatile sbl::hw::reg::USART_t* s_usart = nullptr;

    /** RX ring buffer — ISR pushes, main loop pops */
    static inline sbl::primitives::buffers::RingBuffer<
        uint8_t, 256, sbl::hal::memory::ArmMemoryBarrier> s_rx_buf;

    /** TX ring buffer — main loop pushes, ISR pops */
    static inline sbl::primitives::buffers::RingBuffer<
        uint8_t, 256, sbl::hal::memory::ArmMemoryBarrier> s_tx_buf;

public:
    /**
     * Hardware FIFO depth, all USART/UART/LPUART instances on the H7
     * (RM0433 Rev 8 Table 399 "USART / LPUART features", p. 2020).
     * With FIFOEN set, 16 bytes buffer before the receiver overruns: at the
     * full threshold the RXFIFO holds FIFO size − 1 and USART_RDR holds one
     * (RM0433 Rev 8 §48.5.4, p. 2025).
     */
    static constexpr uint32_t kRxFifoDepth = 16;

    /** One MIDI byte on the wire: 10 bits at 31250 baud. */
    static constexpr uint32_t kMidiByteUs = 320;

    /**
     * Longest the RX interrupt may be held off (by the audio ISR or any
     * critical section) before a MIDI byte is lost: kRxFifoDepth × 320 µs.
     * Compare against the audio block period when choosing block sizes —
     * a 256-frame block at 48 kHz is 5333 µs, so a fully loaded block would
     * exceed this; 48 frames (1000 µs) has 5× headroom.
     */
    static constexpr uint32_t kMidiRxDeadlineUs = kRxFifoDepth * kMidiByteUs;

    /**
     * @brief Initialize UART (TX + RX) using handle from hardware manifest
     *
     * Configures both TX and RX pins. Both RX and TX are interrupt-driven
     * with 256-byte ring buffers. NVIC priority 12 (Low) — suitable for
     * debug output where latency is not critical.
     *
     * @param handle UartHandle with resolved peripheral, pins, AF, and baud
     * @return true if UART initialized (continues even on TEACK timeout for debug use)
     * @note Not ISR-safe — blocking (TEACK wait). Init-time only.
     */
    static bool init(const sbl::UartHandle& handle) {
        using namespace sbl::hw::reg;

        // Enable GPIO clocks for TX and RX ports
        periph::rcc->AHB4ENR |= (1u << handle.tx_port);
        periph::rcc->AHB4ENR |= (1u << handle.rx_port);
        volatile uint32_t dummy = periph::rcc->AHB4ENR;
        (void)dummy;

        // Enable USART bus clock and set kernel clock
        if (!uart_detail::enable_usart_clocks(handle.peripheral)) {
            return false;
        }

        // Configure TX and RX pins as alternate function
        auto tx_gpio = uart_detail::get_gpio_port(handle.tx_port);
        auto rx_gpio = uart_detail::get_gpio_port(handle.rx_port);
        uart_detail::configure_af_pin(tx_gpio, handle.tx_pin, handle.tx_af);
        uart_detail::configure_af_pin(rx_gpio, handle.rx_pin, handle.rx_af);

        // Get USART peripheral and store for later use
        s_usart = uart_detail::get_usart(handle.peripheral);

        // Disable USART during configuration
        s_usart->CR1 = 0;

        constexpr uint32_t usart_clk = 64'000'000;  // HSI
        s_usart->PRESC = 0;  // No prescaling (STM32H7 feature)
        s_usart->BRR = usart_clk / handle.baud;

        s_usart->CR2 = 0;

        // OVRDIS (bit 12): disable overrun — prevents ORE from blocking RXNE
        s_usart->CR3 = (1u << 12);

        // Register callback before enabling interrupts
        uart_detail::callbacks[handle.peripheral] = &irq_handler;

        // UE + TE + RE + RXNEIE + FIFOEN (TXEIE enabled on first write)
        s_usart->CR1 = USART::UE | USART::TE | USART::RE
                      | USART::RXNEIE | (1u << 29);

        // Wait for transmit enable acknowledge
        bool teack_ok = detail::wait_for(&s_usart->ISR, USART::TEACK, USART::TEACK, 100'000);

        // Enable NVIC — priority 12 (Low) for debug TX+RX
        uart_detail::enable_usart_nvic(handle.peripheral, 12);

        // Continue even if TEACK timeout — debug UART should still try to work
        s_initialized = true;
        s_tx_enabled = true;
        return teack_ok;
    }

    /**
     * @brief Initialize UART in RX-only mode (interrupt-driven)
     *
     * Only configures the RX pin — TX pin is left alone. Critical for cases
     * like MIDI on Daisy Pod where the TX pin (PB6) is used by the encoder.
     *
     * RX bytes are buffered via NVIC interrupt into a 256-byte ring buffer.
     * OVRDIS prevents overrun from blocking RXNE. FIFOEN enables the 16-deep
     * hardware FIFO (RM0433 Rev 8 Table 399, p. 2020) — see kRxFifoDepth.
     *
     * @param handle UartHandle — only peripheral, rx_port, rx_pin, rx_af, baud are used
     * @return true if initialized successfully
     * @note Not ISR-safe — init-time only
     */
    static bool init_rx(const sbl::UartHandle& handle) {
        using namespace sbl::hw::reg;

        // Enable GPIO clock for RX port only
        periph::rcc->AHB4ENR |= (1u << handle.rx_port);
        volatile uint32_t dummy = periph::rcc->AHB4ENR;
        (void)dummy;

        // Enable USART bus clock and set kernel clock
        if (!uart_detail::enable_usart_clocks(handle.peripheral)) {
            return false;
        }

        // Configure RX pin only as alternate function
        auto rx_gpio = uart_detail::get_gpio_port(handle.rx_port);
        uart_detail::configure_af_pin(rx_gpio, handle.rx_pin, handle.rx_af);

        // Get USART peripheral and store
        s_usart = uart_detail::get_usart(handle.peripheral);

        // Disable USART during configuration
        s_usart->CR1 = 0;

        constexpr uint32_t usart_clk = 64'000'000;  // HSI
        s_usart->PRESC = 0;
        s_usart->BRR = usart_clk / handle.baud;

        s_usart->CR2 = 0;

        // OVRDIS (bit 12): disable overrun detection — prevents ORE from blocking RXNE
        s_usart->CR3 = (1u << 12);

        // Register callback before enabling interrupts
        uart_detail::callbacks[handle.peripheral] = &irq_handler;

        // UE + RE + RXNEIE + FIFOEN
        s_usart->CR1 = USART::UE | USART::RE | USART::RXNEIE | (1u << 29);

        // Enable NVIC — priority 4 (High) for MIDI RX
        uart_detail::enable_usart_nvic(handle.peripheral, 4);

        s_initialized = true;
        return true;
    }

    /**
     * @brief Write single byte via TX ring buffer (interrupt-driven)
     *
     * Pushes byte to TX ring buffer and enables TXEIE. The ISR drains
     * the buffer into the hardware FIFO. Back-pressure: spins if buffer full.
     *
     * @param byte Byte to send
     * @note Mostly ISR-safe — spins if TX buffer full. Use try_write_byte()
     *       for guaranteed non-blocking behavior.
     */
    static void write_byte(uint8_t byte) {
        if (!s_tx_enabled) return;

        using namespace sbl::hw::reg;

        // Spin until space in TX ring buffer (back-pressure)
        while (!s_tx_buf.push(byte)) {}

        // Enable TX interrupt — ISR will drain the buffer
        s_usart->CR1 |= USART::TXEIE;
    }

    /**
     * @brief Write buffer
     * @param data Data buffer
     * @param len Number of bytes to write
     * @note Mostly ISR-safe — spins per byte if TX buffer full
     */
    static void write(const uint8_t* data, size_t len) {
        for (size_t i = 0; i < len; ++i) {
            write_byte(data[i]);
        }
    }

    /**
     * @brief Write null-terminated string
     * @param str String to write
     * @note Mostly ISR-safe — spins per byte if TX buffer full
     */
    static void write_string(const char* str) {
        while (*str) {
            write_byte(static_cast<uint8_t>(*str++));
        }
    }

    /**
     * @brief Polling write — bypasses ring buffer, works with interrupts disabled
     *
     * Writes directly to hardware TDR, spinning on TXE for each byte.
     * Use only from fault/panic context where ISRs are disabled.
     *
     * @param str Null-terminated string to write
     * @note NOT ISR-safe — blocks until all bytes are transmitted
     */
    static void write_string_polling(const char* str) {
        using namespace sbl::hw::reg;
        if (!s_usart) return;

        while (*str) {
            // Wait for TX data register empty
            while (!(s_usart->ISR & USART::TXE)) {}
            s_usart->TDR = static_cast<uint8_t>(*str++);
        }
        // Wait for transmission complete
        while (!(s_usart->ISR & (1u << 6))) {}  // TC bit
    }

    /**
     * @brief Non-blocking write — returns false if TX buffer full
     *
     * Unlike write_byte(), never spins. Safe to call from any ISR priority.
     *
     * @param byte Byte to send
     * @return true if byte was queued, false if TX buffer full
     * @note ISR-safe — never blocks
     */
    static bool try_write_byte(uint8_t byte) {
        if (!s_tx_enabled) return false;

        if (!s_tx_buf.push(byte)) {
            return false;
        }

        // Enable TX interrupt — ISR will drain the buffer
        s_usart->CR1 |= sbl::hw::reg::USART::TXEIE;
        return true;
    }

    /**
     * @brief Non-blocking string write — stops if TX buffer full
     *
     * Writes as many bytes as the TX buffer can accept without spinning.
     *
     * @param str String to write
     * @return Number of bytes written (may be less than strlen if buffer full)
     * @note ISR-safe — never blocks
     */
    static size_t try_write_string(const char* str) {
        size_t written = 0;
        while (*str) {
            if (!try_write_byte(static_cast<uint8_t>(*str))) {
                break;
            }
            ++str;
            ++written;
        }
        return written;
    }

    /**
     * @brief Check if RX data available in ring buffer
     * @return true if at least one byte is buffered
     * @note ISR-safe — lock-free ring buffer query
     */
    static bool available() {
        return !s_rx_buf.empty();
    }

    /**
     * @brief Read single byte from RX ring buffer
     * @return Received byte, or 0 if buffer empty
     *
     * Non-blocking. Callers should check available() first, or use
     * sbl::midi::poll<>() which handles the available/read loop.
     *
     * @note ISR-safe — lock-free ring buffer pop
     */
    static uint8_t read_byte() {
        uint8_t b;
        if (s_rx_buf.pop(b)) {
            return b;
        }
        return 0;
    }

    /**
     * @brief UART interrupt handler — called from uart_irq.cpp via callback table
     *
     * Handles both RX and TX:
     * - RX: drains hardware FIFO into RX ring buffer
     * - TX: drains TX ring buffer into hardware FIFO, disables TXEIE when empty
     */
    static void irq_handler() {
        using namespace sbl::hw::reg;
        auto* usart = s_usart;

        // RX: drain hardware FIFO into software ring buffer
        while (usart->ISR & USART::RXNE) {
            uint8_t byte = static_cast<uint8_t>(usart->RDR);
            s_rx_buf.push(byte);  // drop on overflow
        }

        // TX: drain software ring buffer into hardware FIFO
        if (usart->CR1 & USART::TXEIE) {
            while (usart->ISR & USART::TXE) {
                uint8_t byte;
                if (s_tx_buf.pop(byte)) {
                    usart->TDR = byte;
                } else {
                    // Buffer empty — disable TX interrupt until next write
                    usart->CR1 &= ~USART::TXEIE;
                    break;
                }
            }
        }
    }
};

} // namespace sbl::driver

// Compile-time interface validation
#include <sbl/hw/validation/uart_requirements.hpp>
static_assert(sbl::validation::uart_driver_valid<sbl::driver::Uart<0>>,
              "STM32H750 UART driver incomplete");

#endif // SBL_HW_DRIVER_UART_HPP_
