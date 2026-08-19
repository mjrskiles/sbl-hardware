/**
 * @file dma_irq.cpp
 * @brief DMA interrupt handlers for STM32H750
 *
 * Provides strong definitions of DMA IRQ handlers that override the weak
 * stubs in startup.cpp. Each handler dispatches to a registered callback
 * and clears interrupt flags.
 *
 * LINK NOTE: This file must be compiled as a direct source of your executable
 * (not via a static library) so the strong symbols override the weak aliases
 * in the startup code. Follow the same pattern as usb_irq.cpp.
 *
 * Example CMakeLists.txt:
 *   add_executable(my_app src/main.cpp ${SBL_MCU_DRIVER_PATH}/driver/dma_irq.cpp)
 */

#include <cstdint>
#include <sbl/hw/driver/dma.hpp>

namespace sbl::driver::dma_detail {
    // Callback table definition (declared extern in dma.hpp)
    DmaCallback callbacks[16] = {};
} // namespace sbl::driver::dma_detail

// ============================================================================
// Helper: dispatch a DMA stream interrupt
// ============================================================================

namespace {

using namespace sbl::hw::reg;

/**
 * Flag bit base positions within LISR/LIFCR (streams 0-3) or HISR/HIFCR (streams 4-7).
 * The STM32H7 DMA flag layout is irregular:
 *   Stream 0/4: base bit 0
 *   Stream 1/5: base bit 6
 *   Stream 2/6: base bit 16
 *   Stream 3/7: base bit 22
 * Within each group: HTIF=+4, TCIF=+5
 */
constexpr uint8_t flag_bases[] = {0, 6, 16, 22};

inline void dispatch_dma_irq(volatile DMA1_t* dma, uint8_t stream, uint8_t callback_idx) {
    // Determine which status/clear register pair to use
    uint8_t group = stream & 0x03;
    uint8_t base = flag_bases[group];

    uint32_t htif_bit = 1u << (base + 4);
    uint32_t tcif_bit = 1u << (base + 5);

    // Read status, dispatch callback, clear flags
    if (stream < 4) {
        uint32_t isr = dma->LISR;
        if (isr & (htif_bit | tcif_bit)) {
            if (auto cb = sbl::driver::dma_detail::callbacks[callback_idx]) {
                cb();
            }
            // Clear HT and TC flags (write-1-to-clear)
            dma->LIFCR = (isr & (htif_bit | tcif_bit));
        }
    } else {
        uint32_t isr = dma->HISR;
        if (isr & (htif_bit | tcif_bit)) {
            if (auto cb = sbl::driver::dma_detail::callbacks[callback_idx]) {
                cb();
            }
            dma->HIFCR = (isr & (htif_bit | tcif_bit));
        }
    }
}

} // anonymous namespace

// ============================================================================
// DMA1 stream interrupt handlers (override weak stubs in startup.cpp)
// ============================================================================

extern "C" {

void DMA1_Stream0_IRQHandler() { dispatch_dma_irq(periph::dma1, 0, 0); }
void DMA1_Stream1_IRQHandler() { dispatch_dma_irq(periph::dma1, 1, 1); }
void DMA1_Stream2_IRQHandler() { dispatch_dma_irq(periph::dma1, 2, 2); }
void DMA1_Stream3_IRQHandler() { dispatch_dma_irq(periph::dma1, 3, 3); }
void DMA1_Stream4_IRQHandler() { dispatch_dma_irq(periph::dma1, 4, 4); }
void DMA1_Stream5_IRQHandler() { dispatch_dma_irq(periph::dma1, 5, 5); }
void DMA1_Stream6_IRQHandler() { dispatch_dma_irq(periph::dma1, 6, 6); }
void DMA1_Stream7_IRQHandler() { dispatch_dma_irq(periph::dma1, 7, 7); }

// ============================================================================
// DMA2 stream interrupt handlers
// ============================================================================

void DMA2_Stream0_IRQHandler() { dispatch_dma_irq(periph::dma2, 0, 8); }
void DMA2_Stream1_IRQHandler() { dispatch_dma_irq(periph::dma2, 1, 9); }
void DMA2_Stream2_IRQHandler() { dispatch_dma_irq(periph::dma2, 2, 10); }
void DMA2_Stream3_IRQHandler() { dispatch_dma_irq(periph::dma2, 3, 11); }
void DMA2_Stream4_IRQHandler() { dispatch_dma_irq(periph::dma2, 4, 12); }
void DMA2_Stream5_IRQHandler() { dispatch_dma_irq(periph::dma2, 5, 13); }
void DMA2_Stream6_IRQHandler() { dispatch_dma_irq(periph::dma2, 6, 14); }
void DMA2_Stream7_IRQHandler() { dispatch_dma_irq(periph::dma2, 7, 15); }

} // extern "C"
