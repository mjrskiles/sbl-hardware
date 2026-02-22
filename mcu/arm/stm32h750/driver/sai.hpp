/**
 * @file sai.hpp
 * @brief STM32H750 SAI (Serial Audio Interface) driver for I2S audio
 *
 * Drives SAI1 in I2S master mode with DMA for full-duplex audio streaming.
 * Designed for the Daisy Seed's AK4556 codec (hardware-configured, no control port).
 *
 * SAI1 Block A = Master TX (to DAC), DMA1 Stream 0, DMAMUX request 87
 * SAI1 Block B = Slave RX (from ADC), DMA1 Stream 1, DMAMUX request 88
 *
 * Audio format: 24-bit MSB-Justified, stereo (2 × 32-bit slots per frame).
 * DMA operates in circular mode with half-transfer + transfer-complete interrupts
 * for double-buffered audio processing.
 *
 * Usage:
 *   sbl::driver::init();
 *   sbl::driver::init_audio();
 *   sbl::driver::Sai::init();
 *   sbl::driver::Sai::set_callback(my_audio_callback);
 *   sbl::driver::Sai::start();
 */
#ifndef SBL_HW_DRIVER_SAI_HPP_
#define SBL_HW_DRIVER_SAI_HPP_

#include <cstdint>
#include <sbl/hw/reg/sai.hpp>
#include <sbl/hw/reg/rcc.hpp>
#include <sbl/hw/driver/dma.hpp>
#include <sbl/hw/driver/dma_buffer.hpp>
#include <sbl/hal/audio/types.hpp>

namespace sbl::driver {

using AudioCallback = sbl::hal::audio::AudioCallback;
using AudioConfig = sbl::hal::audio::AudioConfig;

/**
 * @brief SAI1 I2S driver for Daisy Seed audio
 *
 * Configures SAI1 Block A (master TX) and Block B (slave RX, synchronous)
 * with circular DMA for continuous full-duplex audio streaming.
 */
class Sai {
public:
    /**
     * @brief Configure SAI1 for I2S operation (default: 48 samples/block)
     */
    static void init() {
        init(AudioConfig{});
    }

    /**
     * @brief Configure SAI1 for I2S operation
     *
     * Uses config.block_size for DMA buffer sizing. Sample rate and bit depth
     * are determined by PLL2 and SAI register configuration respectively.
     * Call init_audio() first for PLL2 and GPIO configuration.
     */
    static void init(const AudioConfig& config) {
        s_block_size = config.block_size;
        s_buf_samples = config.block_size * 2 * 2;  // block_size × stereo × double-buffer

        // Fill DMA buffers with silence at runtime
        // (.dma_buffer section has no flash LMA — static initializers won't work)
        for (uint32_t i = 0; i < MAX_BUF_SAMPLES; ++i) {
            s_tx_buf[i] = 0;
            s_rx_buf[i] = 0;
        }

        // Enable DMA1 clock
        Dma::enable_clock(1);

        configure_block_a();
        configure_block_b();
        configure_dma();
    }

    /**
     * @brief Set the audio processing callback
     * @param cb Function called from ISR with TX/RX buffer pointers
     */
    static void set_callback(AudioCallback cb) {
        s_callback = cb;
    }

    /**
     * @brief Start audio streaming
     *
     * Enables DMA streams, then SAI blocks (slave before master).
     */
    static void start() {
        using namespace sbl::hw::reg;

        // Enable DMA streams
        Dma::enable(TX_STREAM);
        Dma::enable(RX_STREAM);

        // Enable Block B (slave RX) first — it waits for master clocks
        periph::sai1->SAI_BCR1 |= SAI1::SAI_BCR1_SAIXEN;

        // Enable Block A (master TX) — starts generating clocks
        periph::sai1->SAI_ACR1 |= SAI1::SAI_ACR1_SAIXEN;
    }

    /**
     * @brief Stop audio streaming
     *
     * Disables SAI blocks (master before slave), then DMA.
     */
    static void stop() {
        using namespace sbl::hw::reg;

        // Disable Block A (master) first — stops clocks
        periph::sai1->SAI_ACR1 &= ~SAI1::SAI_ACR1_SAIXEN;
        // Wait for Block A to actually stop
        while (periph::sai1->SAI_ACR1 & SAI1::SAI_ACR1_SAIXEN) {}

        // Disable Block B (slave)
        periph::sai1->SAI_BCR1 &= ~SAI1::SAI_BCR1_SAIXEN;
        while (periph::sai1->SAI_BCR1 & SAI1::SAI_BCR1_SAIXEN) {}

        // Stop DMA
        Dma::disable(TX_STREAM);
        Dma::disable(RX_STREAM);
    }

private:
    // DMA stream assignments
    static constexpr DmaStream TX_STREAM{1, 0};  // DMA1 Stream 0 for SAI1_A (TX)
    static constexpr DmaStream RX_STREAM{1, 1};  // DMA1 Stream 1 for SAI1_B (RX)

    // DMAMUX request IDs (RM0433 Table 110)
    static constexpr uint8_t DMAMUX_SAI1_A = 87;
    static constexpr uint8_t DMAMUX_SAI1_B = 88;

    // Maximum buffer size: 48 samples × 2 channels × 2 halves = 192 int32_t
    static constexpr uint32_t MAX_BUF_SAMPLES = 48 * 2 * 2;

    // DMA buffers in RAM_D2 (non-cacheable, DMA-safe).
    // Uses .dma_buffer.sai subsection to avoid COMDAT conflict with
    // file-scope SBL_DMA_BUFFER variables (static inline = COMDAT,
    // file-scope static = non-COMDAT, GCC rejects mixing in same section).
    // Linker script wildcard *(.dma_buffer*) catches both.
    __attribute__((section(".dma_buffer.sai"), aligned(32)))
    static inline int32_t s_tx_buf[MAX_BUF_SAMPLES];
    __attribute__((section(".dma_buffer.sai"), aligned(32)))
    static inline int32_t s_rx_buf[MAX_BUF_SAMPLES];

    static inline AudioCallback s_callback = nullptr;
    static inline uint16_t s_block_size = 48;
    static inline uint32_t s_buf_samples = MAX_BUF_SAMPLES;

    /**
     * @brief Configure SAI1 Block A as Master TX (MSB-Justified)
     *
     * MODE=00 (Master TX), PRTCFG=00 (Free protocol), DS=110 (24-bit),
     * MCKDIV=0, DMAEN=1, MCKEN=1
     *
     * Frame: 64-bit (2 × 32-bit slots), FS active 32 bits, MSB-Justified
     * Slots: 32-bit width, 2 slots enabled
     *
     * AK4556 uses MSB-Justified format (not standard I2S):
     *   - Data starts immediately at LRCK transition (FSOFF=0)
     *   - LRCK low = left channel (FSPOL=0)
     */
    static void configure_block_a() {
        using namespace sbl::hw::reg;

        // Ensure Block A is disabled before configuring
        periph::sai1->SAI_ACR1 &= ~SAI1::SAI_ACR1_SAIXEN;
        while (periph::sai1->SAI_ACR1 & SAI1::SAI_ACR1_SAIXEN) {}

        // Flush FIFO
        periph::sai1->SAI_ACR2 |= SAI1::SAI_ACR2_FFLUSH;

        // CR1: Master TX, free protocol, 24-bit data, DMA enabled
        uint32_t cr1 = 0;
        cr1 |= (0u << SAI1::SAI_ACR1_MODE_Pos);     // 00 = Master TX
        cr1 |= (0u << SAI1::SAI_ACR1_PRTCFG_Pos);   // 00 = Free protocol
        cr1 |= (6u << SAI1::SAI_ACR1_DS_Pos);        // 110 = 24-bit data
        cr1 |= SAI1::SAI_ACR1_DMAEN;                  // DMA enabled
        cr1 |= (1u << 27);                             // MCKEN: enable MCLK output (Rev V+)
        // MCKDIV=0, NODIV=0 → MCLK = SAI_CK (12.288 MHz from PLL2P)
        periph::sai1->SAI_ACR1 = cr1;

        // Frame config: 64-bit frame, FS active 32 bits, MSB-Justified
        uint32_t frcr = 0;
        frcr |= (63u << SAI1::SAI_AFRCR_FRL_Pos);    // Frame length = 64 bits (FRL+1)
        frcr |= (31u << SAI1::SAI_AFRCR_FSALL_Pos);   // FS active = 32 bits (FSALL+1)
        frcr |= SAI1::SAI_AFRCR_FSDEF;                 // FS = channel identification
        // FSPOL=0 → FS active low (left channel when low)
        // FSOFF=0 → FS coincides with first data bit (MSB-Justified)
        periph::sai1->SAI_AFRCR = frcr;

        // Slot config: 32-bit slots, 2 slots, both enabled
        uint32_t slotr = 0;
        slotr |= (2u << SAI1::SAI_ASLOTR_SLOTSZ_Pos);  // 10 = 32-bit slot width
        slotr |= (1u << SAI1::SAI_ASLOTR_NBSLOT_Pos);   // NBSLOT = 1 (2 slots, N-1)
        slotr |= (0x3u << SAI1::SAI_ASLOTR_SLOTEN_Pos); // Enable slots 0 and 1
        periph::sai1->SAI_ASLOTR = slotr;
    }

    /**
     * @brief Configure SAI1 Block B as Slave RX (synchronous with Block A)
     *
     * MODE=11 (Slave RX), SYNCEN=01 (sync with sub-block A), DMAEN=1
     * Same frame and slot config as Block A.
     */
    static void configure_block_b() {
        using namespace sbl::hw::reg;

        // Ensure Block B is disabled
        periph::sai1->SAI_BCR1 &= ~SAI1::SAI_BCR1_SAIXEN;
        while (periph::sai1->SAI_BCR1 & SAI1::SAI_BCR1_SAIXEN) {}

        // Flush FIFO
        periph::sai1->SAI_BCR2 |= SAI1::SAI_BCR2_FFLUSH;

        // CR1: Slave RX, synced to Block A, 24-bit data, DMA enabled
        uint32_t cr1 = 0;
        cr1 |= (3u << SAI1::SAI_BCR1_MODE_Pos);       // 11 = Slave RX
        cr1 |= (0u << SAI1::SAI_BCR1_PRTCFG_Pos);     // 00 = Free protocol
        cr1 |= (6u << SAI1::SAI_BCR1_DS_Pos);          // 110 = 24-bit data
        cr1 |= (1u << SAI1::SAI_BCR1_SYNCEN_Pos);      // 01 = Sync with sub-block A
        cr1 |= SAI1::SAI_BCR1_DMAEN;                    // DMA enabled
        periph::sai1->SAI_BCR1 = cr1;

        // Frame config — same as Block A (MSB-Justified)
        uint32_t frcr = 0;
        frcr |= (63u << SAI1::SAI_BFRCR_FRL_Pos);
        frcr |= (31u << SAI1::SAI_BFRCR_FSALL_Pos);
        frcr |= SAI1::SAI_BFRCR_FSDEF;
        // FSOFF=0 → MSB-Justified (same as Block A)
        periph::sai1->SAI_BFRCR = frcr;

        // Slot config — same as Block A
        uint32_t slotr = 0;
        slotr |= (2u << SAI1::SAI_BSLOTR_SLOTSZ_Pos);  // 10 = 32-bit slot width
        slotr |= (1u << SAI1::SAI_BSLOTR_NBSLOT_Pos);
        slotr |= (0x3u << SAI1::SAI_BSLOTR_SLOTEN_Pos);
        periph::sai1->SAI_BSLOTR = slotr;
    }

    /**
     * @brief Configure DMA streams for SAI1 TX and RX
     *
     * Both streams: circular mode, 32-bit data, HT+TC interrupts.
     * TX callback dispatches to user audio callback with correct half-buffer pointers.
     */
    static void configure_dma() {
        using namespace sbl::hw::reg;

        // --- TX: Memory → SAI1_A data register ---
        DmaConfig tx_cfg{};
        tx_cfg.direction = DmaDirection::MemoryToPeriph;
        tx_cfg.periph_width = DmaDataWidth::Word;   // 32-bit SAI data register
        tx_cfg.memory_width = DmaDataWidth::Word;    // 32-bit samples
        tx_cfg.priority = DmaPriority::High;
        tx_cfg.circular = true;
        tx_cfg.periph_increment = false;
        tx_cfg.memory_increment = true;
        tx_cfg.half_transfer_irq = true;
        tx_cfg.transfer_complete_irq = true;

        Dma::configure(TX_STREAM, tx_cfg,
                       &periph::sai1->SAI_ADR,
                       s_tx_buf,
                       s_buf_samples);
        Dma::set_request(TX_STREAM, DMAMUX_SAI1_A);
        Dma::set_callback(TX_STREAM, dma_tx_handler);

        // --- RX: SAI1_B data register → Memory ---
        DmaConfig rx_cfg{};
        rx_cfg.direction = DmaDirection::PeriphToMemory;
        rx_cfg.periph_width = DmaDataWidth::Word;
        rx_cfg.memory_width = DmaDataWidth::Word;
        rx_cfg.priority = DmaPriority::High;
        rx_cfg.circular = true;
        rx_cfg.periph_increment = false;
        rx_cfg.memory_increment = true;
        rx_cfg.half_transfer_irq = false;   // Only need callback on TX side
        rx_cfg.transfer_complete_irq = false;

        Dma::configure(RX_STREAM, rx_cfg,
                       &periph::sai1->SAI_BDR,
                       s_rx_buf,
                       s_buf_samples);
        Dma::set_request(RX_STREAM, DMAMUX_SAI1_B);
    }

    /**
     * @brief DMA TX callback — determines which half-buffer completed and invokes user callback
     *
     * Called from DMA1_Stream0 ISR. The circular DMA ping-pongs between two halves:
     * - Half-transfer: first half is complete → user fills first half
     * - Transfer-complete: second half is complete → user fills second half
     */
    static void dma_tx_handler() {
        if (!s_callback) return;

        uint16_t half_samples = s_block_size * 2;  // stereo samples per half

        // Determine which half just completed
        // HT flag = first half done, TC flag = second half done
        bool is_half = Dma::is_half_transfer(TX_STREAM);

        int32_t* tx_ptr;
        const int32_t* rx_ptr;

        if (is_half) {
            // First half of buffer just finished sending — safe to fill it
            tx_ptr = &s_tx_buf[0];
            rx_ptr = &s_rx_buf[0];
        } else {
            // Second half just finished — safe to fill it
            tx_ptr = &s_tx_buf[half_samples];
            rx_ptr = &s_rx_buf[half_samples];
        }

        s_callback(tx_ptr, rx_ptr, s_block_size);
    }
};

} // namespace sbl::driver

#include <sbl/validation/audio_requirements.hpp>
static_assert(sbl::validation::audio_driver_valid<sbl::driver::Sai>,
              "SAI driver missing required audio methods");

#endif // SBL_HW_DRIVER_SAI_HPP_
