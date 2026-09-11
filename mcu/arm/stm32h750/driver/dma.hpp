/**
 * @file dma.hpp
 * @brief STM32H750 DMA driver - stream-based API
 *
 * Supports DMA1 and DMA2 controllers (8 streams each) with DMAMUX request routing.
 * Uses SVD-generated register definitions - no vendor HAL.
 *
 * Memory constraints:
 * - DTCM (0x20000000) is NOT DMA-accessible
 * - RAM_D2 (0x30000000) is non-cacheable, safe for DMA buffers
 * - RAM_D1 (0x24000000) is cacheable AXI SRAM (needs cache management for DMA)
 * - Use SBL_DMA_BUFFER / SBL_AUDIO_BUFFER macros from dma_buffer.hpp
 */
#ifndef SBL_HW_DRIVER_DMA_HPP_
#define SBL_HW_DRIVER_DMA_HPP_

#include <cstdint>
#include <sbl/hw/reg/dma.hpp>
#include "priorities.hpp"
#include <sbl/hw/reg/rcc.hpp>
#include <sbl/hw/reg/irq.hpp>
#include <sbl/hw/reg/cortex_m.hpp>
#include <sbl/hw/driver/timeout.hpp>

namespace sbl::driver {

// ============================================================================
// DMA types
// ============================================================================

/** Which DMA controller + stream to use */
struct DmaStream {
    uint8_t controller;  // 1 or 2
    uint8_t stream;      // 0-7
};

/** Transfer direction */
enum class DmaDirection : uint8_t {
    PeriphToMemory = 0,  // DIR = 00
    MemoryToPeriph = 1,  // DIR = 01
    MemoryToMemory = 2,  // DIR = 10
};

/** Data width */
enum class DmaDataWidth : uint8_t {
    Byte     = 0,  // 8-bit
    HalfWord = 1,  // 16-bit
    Word     = 2,  // 32-bit
};

/** Priority level */
enum class DmaPriority : uint8_t {
    Low      = 0,
    Medium   = 1,
    High     = 2,
    VeryHigh = 3,
};

/** Transfer configuration */
struct DmaConfig {
    DmaDirection direction      = DmaDirection::PeriphToMemory;
    DmaDataWidth periph_width   = DmaDataWidth::HalfWord;
    DmaDataWidth memory_width   = DmaDataWidth::HalfWord;
    DmaPriority  priority       = DmaPriority::High;
    bool circular               = false;  // Circular mode (auto-restart)
    bool periph_increment       = false;  // Increment peripheral address
    bool memory_increment       = true;   // Increment memory address
    bool half_transfer_irq      = false;  // Enable HTC interrupt
    bool transfer_complete_irq  = false;  // Enable TC interrupt
};

// ============================================================================
// DMA callback type
// ============================================================================

namespace dma_detail {
    using DmaCallback = void(*)();

    // Callback table: [0-7] = DMA1 streams, [8-15] = DMA2 streams
    // Defined in dma_irq.cpp
    extern DmaCallback callbacks[16];
} // namespace dma_detail

// ============================================================================
// DMA driver
// ============================================================================

/**
 * @brief DMA driver for STM32H750
 *
 * Static-method API for DMA1/DMA2 with DMAMUX request routing.
 * Uses pointer arithmetic to access per-stream registers since cecrops
 * generates flat S0CR..S7CR fields (not arrays).
 */
class Dma {
public:
    /**
     * @brief Enable DMA controller clock (RCC AHB1)
     * @param controller 1 or 2
     * @note Not ISR-safe — init-time only
     */
    static void enable_clock(uint8_t controller) {
        using namespace sbl::hw::reg;
        if (controller == 1) {
            periph::rcc->AHB1ENR |= RCC::AHB1ENR_DMA1EN;
        } else {
            periph::rcc->AHB1ENR |= RCC::AHB1ENR_DMA2EN;
        }
        // Read-back for clock synchronization
        volatile uint32_t dummy = periph::rcc->AHB1ENR;
        (void)dummy;
    }

    /**
     * @brief Configure a DMA stream
     *
     * Disables the stream, programs all parameters, but does NOT start the transfer.
     * Call enable() to start.
     *
     * @param stream      DMA controller + stream number
     * @param config      Transfer configuration
     * @param periph_addr Peripheral register address (or source for M2M)
     * @param memory_addr Memory buffer address (must be in DMA-accessible RAM)
     * @param num_items   Number of data items to transfer
     * @note Not ISR-safe — blocking (disables stream, waits for EN clear)
     */
    static void configure(DmaStream stream, const DmaConfig& config,
                         volatile void* periph_addr, volatile void* memory_addr,
                         uint16_t num_items) {
        auto* regs = stream_regs(stream);

        // Disable stream first and wait for EN to clear
        regs->CR &= ~(1u << 0);  // Clear EN
        detail::wait_for(&regs->CR, (1u << 0), 0);

        // Clear all interrupt flags for this stream
        clear_all_flags(stream);

        // Build CR value from config
        // Field positions are identical for all streams (S0CR field offsets)
        uint32_t cr = 0;
        cr |= (static_cast<uint32_t>(config.direction) << 6);     // DIR [7:6]
        cr |= (static_cast<uint32_t>(config.periph_width) << 11); // PSIZE [12:11]
        cr |= (static_cast<uint32_t>(config.memory_width) << 13); // MSIZE [14:13]
        cr |= (static_cast<uint32_t>(config.priority) << 16);     // PL [17:16]

        if (config.circular)          cr |= (1u << 8);   // CIRC
        if (config.periph_increment)  cr |= (1u << 9);   // PINC
        if (config.memory_increment)  cr |= (1u << 10);  // MINC
        if (config.half_transfer_irq) cr |= (1u << 3);   // HTIE
        if (config.transfer_complete_irq) cr |= (1u << 4); // TCIE

        regs->CR = cr;

        // Set addresses and count
        regs->PAR = reinterpret_cast<uint32_t>(periph_addr);
        regs->M0AR = reinterpret_cast<uint32_t>(memory_addr);
        regs->NDTR = num_items;
    }

    /**
     * @brief Route a DMAMUX request to a stream
     *
     * DMAMUX1 channels: DMA1 streams 0-7 → channels 0-7,
     *                   DMA2 streams 0-7 → channels 8-15
     *
     * @param stream     DMA controller + stream number
     * @param request_id DMAMUX request ID (e.g., 87 for SAI1_A, 88 for SAI1_B)
     * @note Not ISR-safe — init-time only
     */
    static void set_request(DmaStream stream, uint8_t request_id) {
        using namespace sbl::hw::reg;
        uint8_t mux_channel = dmamux_channel(stream);
        // DMAMUX CxCR registers are sequential uint32_t starting at the base
        volatile uint32_t* ccr = &periph::dmamux1->DMAMUX_C0CR + mux_channel;
        *ccr = (*ccr & ~DMAMUX1::DMAMUX_C0CR_DMAREQ_ID_Msk) | (request_id & 0x7Fu);
    }

    /**
     * @brief Enable (start) a DMA stream
     * @param stream DMA controller + stream number
     * @note ISR-safe — register write
     */
    static void enable(DmaStream stream, prio::Level level = prio::kOtherDma) {
        auto* regs = stream_regs(stream);
        regs->CR |= (1u << 0);  // EN

        // Enable NVIC interrupt if any IRQs are configured
        if (regs->CR & ((1u << 3) | (1u << 4))) {  // HTIE or TCIE
            enable_nvic(stream, level);
        }
    }

    /**
     * @brief Disable (stop) a DMA stream
     * @param stream DMA controller + stream number
     * @note Not ISR-safe — blocking (polls EN clear)
     */
    static void disable(DmaStream stream) {
        auto* regs = stream_regs(stream);
        regs->CR &= ~(1u << 0);  // Clear EN
        detail::wait_for(&regs->CR, (1u << 0), 0);  // Wait for stream to stop
    }

    /**
     * @brief Check if half-transfer flag is set
     * @note ISR-safe — volatile register read
     */
    static bool is_half_transfer(DmaStream stream) {
        auto [isr, bit] = flag_reg_and_bit(stream, FlagType::HalfTransfer);
        return (*isr & bit) != 0;
    }

    /**
     * @brief Check if transfer-complete flag is set
     * @note ISR-safe — volatile register read
     */
    static bool is_transfer_complete(DmaStream stream) {
        auto [isr, bit] = flag_reg_and_bit(stream, FlagType::TransferComplete);
        return (*isr & bit) != 0;
    }

    /**
     * @brief Clear half-transfer interrupt flag
     * @note ISR-safe — write-1-to-clear register
     */
    static void clear_half_transfer(DmaStream stream) {
        auto [ifcr, bit] = clear_reg_and_bit(stream, FlagType::HalfTransfer);
        *ifcr = bit;  // Write 1 to clear
    }

    /**
     * @brief Clear transfer-complete interrupt flag
     * @note ISR-safe — write-1-to-clear register
     */
    static void clear_transfer_complete(DmaStream stream) {
        auto [ifcr, bit] = clear_reg_and_bit(stream, FlagType::TransferComplete);
        *ifcr = bit;  // Write 1 to clear
    }

    /**
     * @brief Clear all interrupt flags for a stream
     * @note ISR-safe — write-to-clear register
     */
    static void clear_all_flags(DmaStream stream) {
        auto* dma = dma_regs(stream.controller);
        uint8_t s = stream.stream;

        // All 5 flag bits for a stream: FEIF, DMEIF, TEIF, HTIF, TCIF
        // Bit positions within the 6-bit group: 0, 2, 3, 4, 5
        uint32_t base = flag_base_bit(s & 0x03);
        uint32_t mask = (1u << (base + 0)) |  // FEIF
                        (1u << (base + 2)) |  // DMEIF
                        (1u << (base + 3)) |  // TEIF
                        (1u << (base + 4)) |  // HTIF
                        (1u << (base + 5));   // TCIF

        if (s < 4) {
            dma->LIFCR = mask;
        } else {
            dma->HIFCR = mask;
        }
    }

    /**
     * @brief Get remaining items count
     * @note ISR-safe — volatile register read
     */
    static uint16_t remaining(DmaStream stream) {
        return static_cast<uint16_t>(stream_regs(stream)->NDTR);
    }

    /**
     * @brief Register a callback for a DMA stream's interrupts
     *
     * The callback is called from ISR context when HTC or TC fires.
     * Set to nullptr to disable.
     *
     * @param stream   DMA controller + stream
     * @param callback Function pointer (called from ISR context)
     * @note Not ISR-safe — call before enabling stream
     */
    static void set_callback(DmaStream stream, void(*callback)()) {
        uint8_t idx = (stream.controller == 1) ? stream.stream
                                               : (8 + stream.stream);
        dma_detail::callbacks[idx] = callback;
    }

private:
    // ========================================================================
    // Stream register access via pointer arithmetic
    // ========================================================================

    /** Per-stream register block (6 registers, 24 bytes) */
    struct StreamRegs {
        volatile uint32_t CR;
        volatile uint32_t NDTR;
        volatile uint32_t PAR;
        volatile uint32_t M0AR;
        volatile uint32_t M1AR;
        volatile uint32_t FCR;
    };

    /** Get the DMA controller register base */
    static volatile sbl::hw::reg::DMA1_t* dma_regs(uint8_t controller) {
        using namespace sbl::hw::reg;
        return (controller == 1) ? periph::dma1 : periph::dma2;
    }

    /**
     * Get stream register block via pointer arithmetic.
     * Stream N starts at DMA base + 0x10 + N * 0x18 (24 bytes per stream).
     */
    static volatile StreamRegs* stream_regs(DmaStream stream) {
        auto base = reinterpret_cast<uintptr_t>(dma_regs(stream.controller));
        return reinterpret_cast<volatile StreamRegs*>(base + 0x10 + stream.stream * 0x18);
    }

    /** DMAMUX1 channel index: DMA1 streams 0-7 → 0-7, DMA2 streams 0-7 → 8-15 */
    static uint8_t dmamux_channel(DmaStream stream) {
        return (stream.controller == 1) ? stream.stream : (8 + stream.stream);
    }

    // ========================================================================
    // Flag register helpers
    // ========================================================================

    /**
     * STM32H7 DMA flag bit layout is irregular:
     *   Stream 0: base bit 0    (LISR/LIFCR)
     *   Stream 1: base bit 6    (LISR/LIFCR)
     *   Stream 2: base bit 16   (LISR/LIFCR)
     *   Stream 3: base bit 22   (LISR/LIFCR)
     *   Streams 4-7: same pattern in HISR/HIFCR
     *
     * Within each group: FEIF=+0, DMEIF=+2, TEIF=+3, HTIF=+4, TCIF=+5
     */
    static constexpr uint8_t flag_base_bit(uint8_t stream_in_group) {
        constexpr uint8_t bases[] = {0, 6, 16, 22};
        return bases[stream_in_group];
    }

    enum class FlagType { HalfTransfer, TransferComplete };

    static constexpr uint8_t flag_offset(FlagType type) {
        return (type == FlagType::HalfTransfer) ? 4 : 5;
    }

    /** Get status register pointer and bit mask for a flag */
    struct RegAndBit {
        volatile uint32_t* reg;
        uint32_t bit;
    };

    static RegAndBit flag_reg_and_bit(DmaStream stream, FlagType type) {
        auto* dma = dma_regs(stream.controller);
        uint8_t s = stream.stream;
        uint32_t bit = 1u << (flag_base_bit(s & 0x03) + flag_offset(type));
        volatile uint32_t* reg = (s < 4) ? &dma->LISR : &dma->HISR;
        return {reg, bit};
    }

    static RegAndBit clear_reg_and_bit(DmaStream stream, FlagType type) {
        auto* dma = dma_regs(stream.controller);
        uint8_t s = stream.stream;
        uint32_t bit = 1u << (flag_base_bit(s & 0x03) + flag_offset(type));
        volatile uint32_t* reg = (s < 4) ? &dma->LIFCR : &dma->HIFCR;
        return {reg, bit};
    }

    // ========================================================================
    // NVIC helpers
    // ========================================================================

    /** Get IRQ number for a DMA stream */
    static sbl::hw::reg::IRQn stream_irqn(DmaStream stream) {
        using IRQn = sbl::hw::reg::IRQn;
        if (stream.controller == 1) {
            // DMA1: streams 0-6 = IRQn 11-17, stream 7 = IRQn 47
            constexpr IRQn dma1_irqs[] = {
                IRQn::DMA1_Stream0, IRQn::DMA1_Stream1, IRQn::DMA1_Stream2,
                IRQn::DMA1_Stream3, IRQn::DMA1_Stream4, IRQn::DMA1_Stream5,
                IRQn::DMA1_Stream6, IRQn::DMA1_Stream7,
            };
            return dma1_irqs[stream.stream];
        } else {
            // DMA2: streams 0-4 = IRQn 56-60, streams 5-7 = IRQn 68-70
            constexpr IRQn dma2_irqs[] = {
                IRQn::DMA2_Stream0, IRQn::DMA2_Stream1, IRQn::DMA2_Stream2,
                IRQn::DMA2_Stream3, IRQn::DMA2_Stream4, IRQn::DMA2_Stream5,
                IRQn::DMA2_Stream6, IRQn::DMA2_Stream7,
            };
            return dma2_irqs[stream.stream];
        }
    }

    /**
     * @brief Enable NVIC interrupt for a DMA stream at a given level.
     *
     * Audio's level belongs to the SAI streams alone (equal priority cannot
     * preempt, so any peer would hold the audio handler off for its whole
     * duration). Everything else defaults to prio::kOtherDma.
     */
    static void enable_nvic(DmaStream stream, prio::Level level = prio::kOtherDma) {
        prio::enable_irq(stream_irqn(stream), level);
    }
};

} // namespace sbl::driver

#endif // SBL_HW_DRIVER_DMA_HPP_
