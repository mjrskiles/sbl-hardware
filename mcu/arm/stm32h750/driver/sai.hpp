/**
 * @file sai.hpp
 * @brief STM32H750 SAI (Serial Audio Interface) driver for I2S audio
 *
 * Drives SAI1 with DMA for full-duplex audio streaming.
 * Supports configurable block direction via AudioConfig::layout:
 *
 *   A_TX_B_RX (default): Block A = Primary TX, Block B = Secondary RX (Daisy Seed)
 *   A_RX_B_TX:           Block A = Primary RX, Block B = Secondary TX (Patch SM)
 *
 * Block A is ALWAYS the primary (generates MCLK/SCK/FS) because PE2 is
 * SAI1_MCLK_A — only Block A can drive the MCLK output pin. The layout
 * controls whether A transmits or receives.
 *
 * DMA1 Stream 0 always maps to Block A, Stream 1 to Block B (DMAMUX routing).
 * The driver translates TX/RX buffer pointers in the callback based on layout.
 *
 * Audio format: 24-bit MSB-Justified, stereo (2 x 32-bit slots per frame).
 * DMA operates in circular mode with half-transfer + transfer-complete interrupts
 * for double-buffered audio processing.
 *
 * Usage:
 *   sbl::driver::init();
 *   sbl::driver::init_audio();
 *   sbl::driver::Sai::init();           // default: A_TX_B_RX
 *   // or: sbl::driver::Sai::init({.layout = SaiLayout::A_RX_B_TX});
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
#include <sbl/hw/driver/timeout.hpp>
#include <sbl/hal/audio/types.hpp>

namespace sbl::driver {

using AudioCallback = sbl::hal::audio::AudioCallback;
using AudioConfig = sbl::hal::audio::AudioConfig;
using SaiLayout = sbl::hal::audio::SaiLayout;

/**
 * @brief SAI1 I2S driver with configurable block direction
 *
 * Block A is always primary (owns MCLK pin). The layout determines
 * whether A is TX or RX:
 *   A_TX_B_RX: A = Primary TX (MODE=00), B = Secondary RX (MODE=11)
 *   A_RX_B_TX: A = Primary RX (MODE=10), B = Secondary TX (MODE=01)
 */
class Sai {
    // SAI register field values (RM0433 §51.5)
    static constexpr uint32_t DS_24BIT      = 6;   // Data size: 24-bit
    static constexpr uint32_t SLOTSZ_32BIT  = 2;   // Slot size: 32-bit
    static constexpr uint32_t NBSLOT_STEREO = 1;   // 2 slots (NBSLOT+1)
    static constexpr uint32_t FRL_64BIT     = 63;  // Frame length: 64 bits (FRL+1)
    static constexpr uint32_t FSALL_32BIT   = 31;  // FS active: 32 bits (FSALL+1)
    static constexpr uint32_t SLOTEN_LR     = 0x3; // Enable slots 0+1 (L+R)
    static constexpr uint32_t MCKEN_BIT     = 27;  // MCLK output enable (not in SVD)

    // SAI MODE field values (RM0433 §51.5.2, ST HAL stm32h7xx_hal_sai.h)
    //   Bit 0 = RX flag (0=TX, 1=RX)
    //   Bit 1 = Slave flag (0=Master, 1=Slave)
    static constexpr uint32_t MODE_PRIMARY_TX   = 0;  // Master TX (generates clocks, transmits)
    static constexpr uint32_t MODE_PRIMARY_RX   = 1;  // Master RX (generates clocks, receives)
    static constexpr uint32_t MODE_SECONDARY_TX = 2;  // Slave TX  (syncs to primary, transmits)
    static constexpr uint32_t MODE_SECONDARY_RX = 3;  // Slave RX  (syncs to primary, receives)

public:
    /**
     * @brief Configure SAI1 for I2S operation (default: 48 samples/block, A_TX_B_RX)
     * @return true (always succeeds; matches init() pattern of other drivers)
     * @note Not ISR-safe — init-time only
     */
    static bool init() {
        return init(AudioConfig{});
    }

    /**
     * @brief Configure SAI1 for I2S operation
     *
     * Uses config.block_size for DMA buffer sizing and config.layout for
     * SAI block direction. Sample rate and bit depth are determined by PLL2
     * and SAI register configuration respectively.
     * Call init_audio() first for PLL2 and GPIO configuration.
     *
     * @return true (always succeeds; matches init() pattern of other drivers)
     * @note Not ISR-safe — init-time only
     */
    static bool init(const AudioConfig& config) {
        s_block_size = config.block_size;
        s_buf_samples = config.block_size * 2 * 2;  // block_size × stereo × double-buffer
        s_layout = config.layout;

        // Enable DMA1 clock
        Dma::enable_clock(1);

        // Block A is always primary (it owns MCLK_A on PE2).
        // Layout determines direction, not primary/secondary assignment.
        if (s_layout == SaiLayout::A_TX_B_RX) {
            configure_block_a(MODE_PRIMARY_TX);
            configure_block_b(MODE_SECONDARY_RX);
        } else {
            configure_block_a(MODE_PRIMARY_RX);
            configure_block_b(MODE_SECONDARY_TX);
        }

        configure_dma();

        return true;
    }

    /**
     * @brief Set the audio processing callback
     * @param cb Function called from ISR with TX/RX buffer pointers
     * @note Not ISR-safe — call before start()
     */
    static void set_callback(AudioCallback cb) {
        s_callback = cb;
    }

    /**
     * @brief Start audio streaming
     *
     * Enables DMA streams, then SAI blocks (secondary before primary).
     * Block A is always primary.
     * @note Not ISR-safe — init-time only
     */
    static void start() {
        using namespace sbl::hw::reg;

        // Start sequence derived from ST HAL analysis (stm32h7xx_hal_sai.c):
        //
        // For primary TX: DMA start → DMAEN → wait FIFO fill → SAIXEN
        //   Primary block generates internal FIFO clock, so DMA fills FIFO
        //   before SAIXEN enables output.
        //
        // For primary RX: DMA start → SAIXEN → DMAEN
        //   RX starts immediately; DMA drains FIFO as data arrives.
        //
        // For secondary TX (SYNCEN=01): The secondary block's FIFO cannot
        //   generate DMA requests until the primary provides clocks. The HAL's
        //   FIFO wait times out (1s), and SAIXEN is never set in that path.
        //   Once the master starts, clocks propagate and DMA fills the FIFO.
        //   We set SAIXEN for the secondary AFTER the master is running.
        //
        // For secondary RX: Same as primary RX — SAIXEN before DMAEN.

        if (s_layout == SaiLayout::A_TX_B_RX) {
            // A = Primary TX, B = Secondary RX

            // Secondary RX (B): SAIXEN → DMAEN (before master per RM0433)
            Dma::enable(STREAM_B);
            periph::sai1->SAI_BCR1 |= SAI1::SAI_BCR1_SAIXEN;
            periph::sai1->SAI_BCR1 |= SAI1::SAI_BCR1_DMAEN;

            // Primary TX (A): DMAEN → wait FIFO → SAIXEN
            Dma::enable(STREAM_A);
            periph::sai1->SAI_ACR1 |= SAI1::SAI_ACR1_DMAEN;
            wait_fifo_fill(&periph::sai1->SAI_ASR);
            periph::sai1->SAI_ACR1 |= SAI1::SAI_ACR1_SAIXEN;

        } else {
            // A = Primary RX, B = Secondary TX
            //
            // Start slave TX first, then master RX (matches libDaisy/HAL order).
            //
            // Per RM0433: when SAIXEN=0, FIFO is empty and FREQ is set in TX
            // mode. Setting DMAEN triggers DMA to fill the FIFO immediately.
            // Once FIFO is non-empty, set SAIXEN. Then start master.

            // Secondary TX (B): DMA → DMAEN → wait FIFO fill → SAIXEN
            Dma::enable(STREAM_B);
            periph::sai1->SAI_BCR1 |= SAI1::SAI_BCR1_DMAEN;
            wait_fifo_fill(&periph::sai1->SAI_BSR);
            periph::sai1->SAI_BCR1 |= SAI1::SAI_BCR1_SAIXEN;

            // Primary RX (A): DMA → SAIXEN (starts clocks) → DMAEN
            Dma::enable(STREAM_A);
            periph::sai1->SAI_ACR1 |= SAI1::SAI_ACR1_SAIXEN;
            periph::sai1->SAI_ACR1 |= SAI1::SAI_ACR1_DMAEN;
        }
    }

    /**
     * @brief Check and clear SAI FIFO underrun flag (FDP-020)
     *
     * Checks the TX block's status register for underrun.
     * Safe to call from control context (not ISR-critical).
     *
     * @return true if an underrun occurred since the last check
     */
    static bool check_underrun() {
        using namespace sbl::hw::reg;

        if (s_layout == SaiLayout::A_TX_B_RX) {
            // Block A is TX
            bool underrun = (periph::sai1->SAI_ASR & SAI1::SAI_ASR_OVRUDR) != 0;
            if (underrun)
                periph::sai1->SAI_ACLRFR = SAI1::SAI_ACLRFR_COVRUDR;
            return underrun;
        } else {
            // Block B is TX
            bool underrun = (periph::sai1->SAI_BSR & SAI1::SAI_BSR_OVRUDR) != 0;
            if (underrun)
                periph::sai1->SAI_BCLRFR = SAI1::SAI_BCLRFR_COVRUDR;
            return underrun;
        }
    }

    /**
     * @brief Stop audio streaming
     *
     * Disables SAI blocks (primary before secondary), then DMA.
     * Block A is always primary.
     * @note Not ISR-safe — blocking (polls SAIXEN clear)
     */
    static void stop() {
        using namespace sbl::hw::reg;

        // Disable primary (A) first — stops clocks
        periph::sai1->SAI_ACR1 &= ~SAI1::SAI_ACR1_SAIXEN;
        detail::wait_for(&periph::sai1->SAI_ACR1, SAI1::SAI_ACR1_SAIXEN, 0);

        // Disable secondary (B)
        periph::sai1->SAI_BCR1 &= ~SAI1::SAI_BCR1_SAIXEN;
        detail::wait_for(&periph::sai1->SAI_BCR1, SAI1::SAI_BCR1_SAIXEN, 0);

        // Stop DMA
        Dma::disable(STREAM_A);
        Dma::disable(STREAM_B);
    }

private:
    // DMA stream assignments (fixed by DMAMUX — Stream 0 always routes to Block A)
    static constexpr DmaStream STREAM_A{1, 0};  // DMA1 Stream 0 → SAI1_A
    static constexpr DmaStream STREAM_B{1, 1};  // DMA1 Stream 1 → SAI1_B

    // DMAMUX request IDs (RM0433 Table 110)
    static constexpr uint8_t DMAMUX_SAI1_A = 87;
    static constexpr uint8_t DMAMUX_SAI1_B = 88;

    // Maximum buffer size: 48 samples × 2 channels × 2 halves = 192 int32_t
    static constexpr uint32_t MAX_BUF_SAMPLES = 48 * 2 * 2;

    // DMA buffers in RAM_D2 (non-cacheable, DMA-safe).
    // Named by block (A/B), not direction (TX/RX) — direction depends on layout.
    __attribute__((section(".dma_buffer.sai"), aligned(32)))
    static inline int32_t s_buf_a[MAX_BUF_SAMPLES];
    __attribute__((section(".dma_buffer.sai"), aligned(32)))
    static inline int32_t s_buf_b[MAX_BUF_SAMPLES];

    static inline AudioCallback s_callback = nullptr;
    static inline uint16_t s_block_size = 48;
    static inline uint32_t s_buf_samples = MAX_BUF_SAMPLES;
    static inline SaiLayout s_layout = SaiLayout::A_TX_B_RX;

    /**
     * @brief Wait for SAI FIFO to become non-empty (FLVL != 0)
     * Polls the status register with timeout. Used during start() to ensure
     * DMA has filled the TX FIFO before enabling the SAI block.
     */
    static bool wait_fifo_fill(volatile uint32_t* sr) {
        using namespace sbl::hw::reg;
        for (uint32_t i = 0; i < HW_TIMEOUT; ++i) {
            if ((*sr & SAI1::SAI_ASR_FLVL_Msk) != 0) return true;
        }
        return false;  // Timeout — FIFO never filled
    }

    /**
     * @brief Configure SAI1 Block A (always primary — generates clocks)
     *
     * @param mode SAI MODE value: MODE_PRIMARY_TX (00) or MODE_PRIMARY_RX (10)
     *
     * PE2 is SAI1_MCLK_A, so Block A must always be the primary
     * regardless of TX/RX direction.
     */
    static void configure_block_a(uint32_t mode) {
        using namespace sbl::hw::reg;

        periph::sai1->SAI_ACR1 &= ~SAI1::SAI_ACR1_SAIXEN;
        detail::wait_for(&periph::sai1->SAI_ACR1, SAI1::SAI_ACR1_SAIXEN, 0);
        periph::sai1->SAI_ACR2 |= SAI1::SAI_ACR2_FFLUSH;

        uint32_t cr1 = 0;
        cr1 |= (mode << SAI1::SAI_ACR1_MODE_Pos);
        cr1 |= (0u << SAI1::SAI_ACR1_PRTCFG_Pos);       // Free protocol
        cr1 |= (DS_24BIT << SAI1::SAI_ACR1_DS_Pos);
        cr1 |= SAI1::SAI_ACR1_CKSTR;                      // Data on falling edge (MSB-J)
        // DMAEN deferred to start() — ST HAL pattern
        cr1 |= (1u << MCKEN_BIT);                        // MCLK output
        // MCKDIV=4: PLL2P(49.152MHz) / 4 = 12.288 MHz MCLK = 256×48kHz.
        // NOTE: RM0433 documents fMCLK = fSAI_CK/(MCKDIV×2) but actual
        // STM32H750 silicon divides by MCKDIV only (not ×2). Verified
        // empirically: MCKDIV=2 gives 96kHz, MCKDIV=4 gives 48kHz.
        cr1 |= (4u << SAI1::SAI_ACR1_MCKDIV_Pos);
        periph::sai1->SAI_ACR1 = cr1;

        // Frame config: 64-bit frame, FS active 32 bits, MSB-Justified
        uint32_t frcr = 0;
        frcr |= (FRL_64BIT << SAI1::SAI_AFRCR_FRL_Pos);
        frcr |= (FSALL_32BIT << SAI1::SAI_AFRCR_FSALL_Pos);
        frcr |= SAI1::SAI_AFRCR_FSDEF;                  // FS = channel identification
        frcr |= SAI1::SAI_AFRCR_FSPOL;                  // FS active high (MSB-Justified)
        periph::sai1->SAI_AFRCR = frcr;

        // Slot config: 32-bit slots, 2 slots, both enabled
        uint32_t slotr = 0;
        slotr |= (SLOTSZ_32BIT << SAI1::SAI_ASLOTR_SLOTSZ_Pos);
        slotr |= (NBSLOT_STEREO << SAI1::SAI_ASLOTR_NBSLOT_Pos);
        slotr |= (SLOTEN_LR << SAI1::SAI_ASLOTR_SLOTEN_Pos);
        periph::sai1->SAI_ASLOTR = slotr;
    }

    /**
     * @brief Configure SAI1 Block B as secondary (synced to Block A)
     *
     * Used for A_TX_B_RX layout where Block B is Secondary RX.
     *
     * @param mode SAI MODE value: MODE_SECONDARY_RX (11) or MODE_SECONDARY_TX (01)
     */
    static void configure_block_b(uint32_t mode) {
        using namespace sbl::hw::reg;

        periph::sai1->SAI_BCR1 &= ~SAI1::SAI_BCR1_SAIXEN;
        detail::wait_for(&periph::sai1->SAI_BCR1, SAI1::SAI_BCR1_SAIXEN, 0);
        periph::sai1->SAI_BCR2 |= SAI1::SAI_BCR2_FFLUSH;

        uint32_t cr1 = 0;
        cr1 |= (mode << SAI1::SAI_BCR1_MODE_Pos);
        cr1 |= (0u << SAI1::SAI_BCR1_PRTCFG_Pos);       // Free protocol
        cr1 |= (DS_24BIT << SAI1::SAI_BCR1_DS_Pos);
        cr1 |= SAI1::SAI_BCR1_CKSTR;                      // Data on falling edge (MSB-J)
        // SYNCEN only for secondary modes (MODE=01 or MODE=11)
        if (mode == MODE_SECONDARY_TX || mode == MODE_SECONDARY_RX) {
            cr1 |= (1u << SAI1::SAI_BCR1_SYNCEN_Pos);   // Sync with sub-block A
        }
        // DMAEN deferred to start() — ST HAL pattern
        periph::sai1->SAI_BCR1 = cr1;

        // Frame config — same as Block A
        uint32_t frcr = 0;
        frcr |= (FRL_64BIT << SAI1::SAI_BFRCR_FRL_Pos);
        frcr |= (FSALL_32BIT << SAI1::SAI_BFRCR_FSALL_Pos);
        frcr |= SAI1::SAI_BFRCR_FSDEF;                  // FS = channel identification
        frcr |= SAI1::SAI_BFRCR_FSPOL;                  // FS active high (MSB-Justified)
        periph::sai1->SAI_BFRCR = frcr;

        // Slot config — same as Block A
        uint32_t slotr = 0;
        slotr |= (SLOTSZ_32BIT << SAI1::SAI_BSLOTR_SLOTSZ_Pos);
        slotr |= (NBSLOT_STEREO << SAI1::SAI_BSLOTR_NBSLOT_Pos);
        slotr |= (SLOTEN_LR << SAI1::SAI_BSLOTR_SLOTEN_Pos);
        periph::sai1->SAI_BSLOTR = slotr;
    }

    /**
     * @brief Configure DMA streams for SAI1
     *
     * Stream 0 always maps to Block A, Stream 1 to Block B.
     * The DMA direction depends on the layout:
     *   A_TX_B_RX: Stream 0 = Mem->Periph (TX), Stream 1 = Periph->Mem (RX)
     *   A_RX_B_TX: Stream 0 = Periph->Mem (RX), Stream 1 = Mem->Periph (TX)
     *
     * The ISR callback always fires on Stream 0 (Block A, the primary).
     * Block A always runs because it generates the clocks — its DMA is
     * guaranteed to transfer regardless of TX/RX direction.
     */
    static void configure_dma() {
        using namespace sbl::hw::reg;

        const bool a_is_tx = (s_layout == SaiLayout::A_TX_B_RX);

        // The TX stream drives the ISR — the callback must know the TX DMA
        // position to safely write to the half-buffer the DMA isn't reading.
        const DmaStream tx_stream = a_is_tx ? STREAM_A : STREAM_B;
        const DmaStream rx_stream = a_is_tx ? STREAM_B : STREAM_A;

        // --- TX stream (drives ISR) ---
        DmaConfig cfg_tx{};
        cfg_tx.direction = DmaDirection::MemoryToPeriph;
        cfg_tx.periph_width = DmaDataWidth::Word;
        cfg_tx.memory_width = DmaDataWidth::Word;
        cfg_tx.priority = DmaPriority::High;
        cfg_tx.circular = true;
        cfg_tx.periph_increment = false;
        cfg_tx.memory_increment = true;
        cfg_tx.half_transfer_irq = true;
        cfg_tx.transfer_complete_irq = true;

        auto* tx_periph_reg = a_is_tx ? &periph::sai1->SAI_ADR
                                      : &periph::sai1->SAI_BDR;
        int32_t* tx_buf = a_is_tx ? s_buf_a : s_buf_b;
        Dma::configure(tx_stream, cfg_tx, tx_periph_reg, tx_buf, s_buf_samples);
        Dma::set_request(tx_stream, a_is_tx ? DMAMUX_SAI1_A : DMAMUX_SAI1_B);
        Dma::set_callback(tx_stream, dma_callback);

        // --- RX stream (no ISR) ---
        DmaConfig cfg_rx{};
        cfg_rx.direction = DmaDirection::PeriphToMemory;
        cfg_rx.periph_width = DmaDataWidth::Word;
        cfg_rx.memory_width = DmaDataWidth::Word;
        cfg_rx.priority = DmaPriority::High;
        cfg_rx.circular = true;
        cfg_rx.periph_increment = false;
        cfg_rx.memory_increment = true;
        cfg_rx.half_transfer_irq = false;
        cfg_rx.transfer_complete_irq = false;

        auto* rx_periph_reg = a_is_tx ? &periph::sai1->SAI_BDR
                                      : &periph::sai1->SAI_ADR;
        int32_t* rx_buf = a_is_tx ? s_buf_b : s_buf_a;
        Dma::configure(rx_stream, cfg_rx, rx_periph_reg, rx_buf, s_buf_samples);
        Dma::set_request(rx_stream, a_is_tx ? DMAMUX_SAI1_B : DMAMUX_SAI1_A);
    }

    /**
     * @brief DMA callback — determines half-buffer and invokes user callback
     *
     * Called from the TX stream's ISR. The ISR fires on the TX stream so
     * we know exactly which half-buffer the DMA just finished reading —
     * that's the half we can safely overwrite.
     */
    static void dma_callback() {
        if (!s_callback) return;

        const bool a_is_tx = (s_layout == SaiLayout::A_TX_B_RX);
        const DmaStream tx_stream = a_is_tx ? STREAM_A : STREAM_B;

        uint16_t half_samples = s_block_size * 2;  // stereo samples per half
        bool is_half = Dma::is_half_transfer(tx_stream);

        int32_t* tx_buf = a_is_tx ? s_buf_a : s_buf_b;
        int32_t* rx_buf = a_is_tx ? s_buf_b : s_buf_a;

        uint32_t offset = is_half ? 0 : half_samples;
        s_callback(&tx_buf[offset], &rx_buf[offset], s_block_size);
    }
};

} // namespace sbl::driver

#include <sbl/validation/audio_requirements.hpp>
static_assert(sbl::validation::audio_driver_valid<sbl::driver::Sai>,
              "SAI driver missing required audio methods");

#endif // SBL_HW_DRIVER_SAI_HPP_
