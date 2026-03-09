/**
 * @file adc.hpp
 * @brief STM32H750 ADC driver - polling and DMA scan modes
 *
 * ADC driver for STM32H7 with two acquisition strategies:
 * - Polling: Single-channel blocking reads via configure_channel/start/wait/read
 * - DMA scan: Multi-channel continuous scan with circular DMA (zero CPU overhead)
 *
 * Uses SVD-generated register definitions - no vendor HAL.
 *
 * DMA scan uses DMA1 Stream 2 (streams 0-1 reserved for SAI audio).
 * DMAMUX request ID 9 = ADC1.
 *
 * Note: Polling and DMA scan cannot coexist on the same ADC peripheral.
 * Call stop_dma_scan() before using polling functions if DMA was started.
 */
#ifndef SBL_HW_DRIVER_ADC_HPP_
#define SBL_HW_DRIVER_ADC_HPP_

#include <cstdint>
#include <sbl/hw/reg/adc.hpp>
#include <sbl/hw/reg/rcc.hpp>
#include <sbl/hw/driver/dma.hpp>
#include <sbl/hw/driver/timeout.hpp>
#include <sbl/hw/driver/clock.hpp>
#include <sbl/hal/adc/driver.hpp>

namespace sbl::driver {

// Import types from core lib
using sbl::adc::SampleTime;

/**
 * @brief ADC driver for STM32H750
 *
 * Low-level polling-mode driver. For convenience functions like
 * blocking read, use sbl::adc::read<Adc>().
 *
 * STM32H750 has three ADC peripherals:
 * - ADC1/ADC2: On AHB1, share common registers (ADC12_Common)
 * - ADC3: On AHB4, separate common registers (ADC3_Common)
 */
class Adc {
public:
    /**
     * @brief Initialize ADC peripheral
     *
     * Enables clocks, exits deep power down, enables voltage regulator,
     * and enables the ADC. Call once at startup.
     *
     * @return true if all three ADC peripherals initialized successfully
     * @note Not ISR-safe — blocking (regulator startup, calibration, ADRDY). Init-time only.
     */
    static bool init() {
        using namespace sbl::hw::reg;

        // Select ADC kernel clock: per_ck (HSI 64 MHz)
        // Default pll2_p may not be running — explicitly select per_ck (HSI).
        detail::set_adc_kernel_clock(KernelClockSrc::PER);

        // Enable ADC bus clocks
        periph::rcc->AHB1ENR |= RCC::AHB1ENR_ADC12EN;  // ADC1, ADC2
        periph::rcc->AHB4ENR |= RCC::AHB4ENR_ADC3EN;   // ADC3

        // Read back for synchronization
        volatile uint32_t dummy = periph::rcc->AHB1ENR;
        (void)dummy;

        // Configure ADC clock prescaler: /2 → 32 MHz (within 36 MHz max for 16-bit)
        // CCR.PRESC[3:0] bits [21:18]: 0001 = /2
        // Must be set before ADEN. Applies to all ADCs sharing the common register.
        periph::adc12_common->CCR =
            (periph::adc12_common->CCR & ~ADC12_Common::CCR_PRESC_Msk)
            | (0x1u << ADC12_Common::CCR_PRESC_Pos);
        periph::adc3_common->CCR =
            (periph::adc3_common->CCR & ~ADC3_Common::CCR_PRESC_Msk)
            | (0x1u << ADC3_Common::CCR_PRESC_Pos);

        // Initialize all three ADCs
        bool ok = true;
        ok &= init_peripheral(periph::adc1);
        ok &= init_peripheral(periph::adc2);
        ok &= init_peripheral(periph::adc3);
        return ok;
    }

    /**
     * @brief Configure channel for conversion
     *
     * Sets sample time and pre-selects the channel for conversion.
     *
     * @param handle ADC channel handle (adc=1,2,3; channel=0-19)
     * @param sample_time Sampling duration
     * @note Not ISR-safe — call before starting conversions
     */
    static void configure_channel(const sbl::AdcHandle& handle, SampleTime sample_time) {
        auto adc = get_adc(handle.adc);
        uint32_t channel = handle.channel;

        // Set sample time (3 bits per channel)
        // Channels 0-9 in SMPR1, 10-19 in SMPR2
        uint32_t smp = sample_time_to_cycles(sample_time);
        if (channel < 10) {
            uint32_t shift = channel * 3;
            adc->SMPR1 = (adc->SMPR1 & ~(0x7u << shift)) | (smp << shift);
        } else {
            uint32_t shift = (channel - 10) * 3;
            adc->SMPR2 = (adc->SMPR2 & ~(0x7u << shift)) | (smp << shift);
        }

        // Pre-select channel (H7 specific - PCSEL register)
        adc->PCSEL |= (1u << channel);

        // Configure sequence: single conversion, 1 conversion in sequence
        // SQR1: L[3:0] = 0 (1 conversion), SQ1[4:0] = channel
        adc->SQR1 = (channel << 6);  // SQ1 starts at bit 6
    }

    /**
     * @brief Start single conversion
     *
     * @param handle ADC channel handle
     * @note Not ISR-safe — main context only
     */
    static void start_conversion(const sbl::AdcHandle& handle) {
        using namespace sbl::hw::reg;
        auto adc = get_adc(handle.adc);

        // Clear EOC flag by writing 1 to it
        adc->ISR = ADC1::ISR_EOC;

        // Start conversion
        adc->CR |= ADC1::CR_ADSTART;
    }

    /**
     * @brief Check if conversion is complete
     *
     * @return true if conversion complete, false otherwise
     * @note ISR-safe — volatile register read
     */
    static bool is_conversion_complete() {
        using namespace sbl::hw::reg;
        // Check any ADC - in practice caller should track which one
        // For single-channel use, we assume ADC1 (most common)
        return (periph::adc1->ISR & ADC1::ISR_EOC) != 0;
    }

    /**
     * @brief Check if specific ADC conversion is complete
     *
     * @param adc_num ADC peripheral number (1, 2, or 3)
     * @return true if conversion complete
     * @note ISR-safe — volatile register read
     */
    static bool is_conversion_complete(uint32_t adc_num) {
        using namespace sbl::hw::reg;
        auto adc = get_adc(adc_num);
        return (adc->ISR & ADC1::ISR_EOC) != 0;
    }

    /**
     * @brief Read raw conversion result
     *
     * @return 16-bit ADC value (0-65535)
     * @note ISR-safe — register read
     */
    static uint16_t read_raw() {
        using namespace sbl::hw::reg;
        return static_cast<uint16_t>(periph::adc1->DR);
    }

    /**
     * @brief Read raw conversion result from specific ADC
     *
     * @param adc_num ADC peripheral number (1, 2, or 3)
     * @return 16-bit ADC value
     * @note ISR-safe — register read
     */
    static uint16_t read_raw(uint32_t adc_num) {
        auto adc = get_adc(adc_num);
        return static_cast<uint16_t>(adc->DR);
    }

    /**
     * @brief Get ADC resolution in bits
     *
     * STM32H7 ADC supports 16-bit resolution by default.
     */
    static constexpr uint8_t resolution_bits() { return 16; }

    // ========================================================================
    // DMA scan mode — continuous multi-channel with circular DMA
    // ========================================================================

    /**
     * @brief Start continuous DMA scan with per-channel sample times
     *
     * Configures ADC1 for continuous scan mode with circular DMA. The DMA
     * writes one 16-bit result per channel into the buffer, then wraps.
     * Read buffer[i] anytime for the latest value of channel i.
     *
     * Uses DMA1 Stream 2 (DMAMUX request 9 = ADC1).
     *
     * @param channels      Array of AdcHandle (all must be on ADC1)
     * @param num_channels  Number of channels (1–16)
     * @param buffer        DMA-accessible buffer, must have num_channels elements.
     *                      Use SBL_DMA_BUFFER for placement in RAM_D2.
     * @param sample_times  Per-channel sampling durations (array of num_channels)
     * @note Not ISR-safe — blocking (stops ongoing conversion). Init-time only.
     */
    static void start_dma_scan(const sbl::AdcHandle* channels, uint8_t num_channels,
                               uint16_t* buffer,
                               const SampleTime* sample_times) {
        using namespace sbl::hw::reg;
        auto* adc = periph::adc1;

        // Stop any ongoing conversion
        if (adc->CR & ADC1::CR_ADSTART) {
            adc->CR |= ADC1::CR_ADSTP;
            while (adc->CR & ADC1::CR_ADSTART) {}
        }

        // Configure sample times and pre-select all channels
        uint32_t pcsel = 0;
        for (uint8_t i = 0; i < num_channels; ++i) {
            uint32_t ch = channels[i].channel;
            pcsel |= (1u << ch);

            uint32_t smp = sample_time_to_cycles(sample_times[i]);
            if (ch < 10) {
                uint32_t shift = ch * 3;
                adc->SMPR1 = (adc->SMPR1 & ~(0x7u << shift)) | (smp << shift);
            } else {
                uint32_t shift = (ch - 10) * 3;
                adc->SMPR2 = (adc->SMPR2 & ~(0x7u << shift)) | (smp << shift);
            }
        }
        adc->PCSEL = pcsel;

        // Build sequence registers SQR1–SQR4
        configure_sequence(adc, channels, num_channels);

        // Configure CFGR: circular DMA, continuous, overwrite on overrun
        // DMNGT=0b11 (DMA circular), CONT=1, OVRMOD=1
        // Must clear DISCEN (incompatible with circular DMA)
        // Preserve RES bits from init
        uint32_t cfgr = adc->CFGR;
        cfgr &= ADC1::CFGR_RES_Msk;  // Keep only resolution
        cfgr |= (0x3u << ADC1::CFGR_DMNGT_Pos);  // DMA circular mode
        cfgr |= ADC1::CFGR_CONT;                  // Continuous conversion
        cfgr |= ADC1::CFGR_OVRMOD;                // Overwrite on overrun
        adc->CFGR = cfgr;

        // Configure DMA1 Stream 2 for ADC1
        constexpr DmaStream dma_stream{1, 2};
        Dma::enable_clock(1);

        DmaConfig dma_cfg{};
        dma_cfg.direction     = DmaDirection::PeriphToMemory;
        dma_cfg.periph_width  = DmaDataWidth::HalfWord;  // 16-bit ADC result
        dma_cfg.memory_width  = DmaDataWidth::HalfWord;
        dma_cfg.priority      = DmaPriority::Medium;
        dma_cfg.circular      = true;
        dma_cfg.periph_increment = false;
        dma_cfg.memory_increment = true;
        // No interrupts — just poll the buffer

        Dma::configure(dma_stream, dma_cfg,
                       const_cast<void*>(static_cast<const volatile void*>(&adc->DR)),
                       static_cast<volatile void*>(buffer),
                       num_channels);

        // Route DMAMUX: request 9 = ADC1
        Dma::set_request(dma_stream, 9);

        // Enable DMA first, then start ADC
        Dma::enable(dma_stream);
        adc->CR |= ADC1::CR_ADSTART;
    }

    /**
     * @brief Start continuous DMA scan with uniform sample time
     *
     * Convenience overload — applies the same sample time to all channels.
     * Equivalent to calling the per-channel overload with a filled array.
     *
     * @param channels      Array of AdcHandle (all must be on ADC1)
     * @param num_channels  Number of channels (1–16)
     * @param buffer        DMA-accessible buffer (SBL_DMA_BUFFER)
     * @param sample_time   Sampling duration for all channels (default: Slow)
     */
    static void start_dma_scan(const sbl::AdcHandle* channels, uint8_t num_channels,
                               uint16_t* buffer,
                               SampleTime sample_time = SampleTime::Slow) {
        SampleTime times[16];
        for (uint8_t i = 0; i < num_channels && i < 16; ++i)
            times[i] = sample_time;
        start_dma_scan(channels, num_channels, buffer, times);
    }

    /**
     * @brief Stop DMA scan mode
     *
     * Stops ADC conversion and disables DMA. After calling this,
     * polling functions can be used again.
     * @note Not ISR-safe — blocking (polls ADSTART clear)
     */
    static void stop_dma_scan() {
        using namespace sbl::hw::reg;
        auto* adc = periph::adc1;
        constexpr DmaStream dma_stream{1, 2};

        // Stop ADC conversion
        if (adc->CR & ADC1::CR_ADSTART) {
            adc->CR |= ADC1::CR_ADSTP;
            while (adc->CR & ADC1::CR_ADSTART) {}
        }

        // Disable DMA stream
        Dma::disable(dma_stream);

        // Clear CONT and DMNGT to restore polling-compatible state
        adc->CFGR &= ~(ADC1::CFGR_CONT | ADC1::CFGR_DMNGT_Msk | ADC1::CFGR_OVRMOD);
    }

private:
    /**
     * @brief Build SQR1–SQR4 sequence registers for multi-channel scan
     *
     * SQR1: L[3:0] at bits 0–3, then SQ1–SQ4 at bits 6,12,18,24
     * SQR2: SQ5–SQ9 at bits 0,6,12,18,24
     * SQR3: SQ10–SQ14 at bits 0,6,12,18,24
     * SQR4: SQ15–SQ16 at bits 0,6
     */
    static void configure_sequence(volatile sbl::hw::reg::ADC3_t* adc,
                                   const sbl::AdcHandle* channels, uint8_t num_channels) {
        // SQR1: L = num_channels - 1 in bits [3:0], then SQ1-SQ4
        uint32_t sqr1 = (num_channels - 1u) & 0xFu;
        for (uint8_t i = 0; i < num_channels && i < 4; ++i) {
            sqr1 |= (channels[i].channel & 0x1Fu) << (6 + i * 6);
        }
        adc->SQR1 = sqr1;

        // SQR2: SQ5-SQ9 (channels[4]..channels[8])
        uint32_t sqr2 = 0;
        for (uint8_t i = 4; i < num_channels && i < 9; ++i) {
            sqr2 |= (channels[i].channel & 0x1Fu) << ((i - 4) * 6);
        }
        adc->SQR2 = sqr2;

        // SQR3: SQ10-SQ14 (channels[9]..channels[13])
        uint32_t sqr3 = 0;
        for (uint8_t i = 9; i < num_channels && i < 14; ++i) {
            sqr3 |= (channels[i].channel & 0x1Fu) << ((i - 9) * 6);
        }
        adc->SQR3 = sqr3;

        // SQR4: SQ15-SQ16 (channels[14]..channels[15])
        uint32_t sqr4 = 0;
        for (uint8_t i = 14; i < num_channels && i < 16; ++i) {
            sqr4 |= (channels[i].channel & 0x1Fu) << ((i - 14) * 6);
        }
        adc->SQR4 = sqr4;
    }

    /**
     * @brief Initialize a single ADC peripheral
     * @return true if peripheral initialized successfully
     */
    static bool init_peripheral(volatile sbl::hw::reg::ADC3_t* adc) {
        using namespace sbl::hw::reg;

        // Exit deep power-down mode (must be done before enabling regulator)
        adc->CR &= ~ADC1::CR_DEEPPWD;

        // Enable internal voltage regulator
        adc->CR |= ADC1::CR_ADVREGEN;

        // Wait for regulator startup (spec: 10us, we wait ~20us at 480MHz)
        for (volatile int i = 0; i < 10000; ++i) {}

        // Set BOOST mode for 32 MHz ADC clock (64 MHz HSI / 2 prescaler)
        // Rev V silicon (REV_ID=0x2003): BOOST[1:0] at CR bits [9:8]
        //   00=≤6.25MHz, 01=≤12.5MHz, 10=≤25MHz, 11=>25MHz
        // SVD only defines 1 bit — use raw 2-bit field. 32 MHz needs BOOST=11.
        // Must be set while ADEN=0.
        adc->CR = (adc->CR & ~(0x3u << 8)) | (0x3u << 8);

        // Run single-ended linearity calibration for best accuracy
        // Must be done while ADEN=0, after ADVREGEN stabilizes
        adc->CR &= ~ADC1::CR_ADCALDIF;  // Single-ended calibration
        adc->CR |= ADC1::CR_ADCALLIN;   // Include linearity calibration
        adc->CR |= ADC1::CR_ADCAL;      // Start calibration
        if (!detail::wait_for(&adc->CR, ADC1::CR_ADCAL, 0)) {
            return false;  // Calibration timeout
        }

        // Configure for 16-bit resolution (RES = 00)
        adc->CFGR = (adc->CFGR & ~ADC1::CFGR_RES_Msk) | (0u << ADC1::CFGR_RES_Pos);

        // Enable ADC
        adc->CR |= ADC1::CR_ADEN;

        // Wait for ADC ready
        if (!detail::wait_for(&adc->ISR, ADC1::ISR_ADRDY, ADC1::ISR_ADRDY)) {
            return false;  // ADC failed to become ready
        }

        // Clear ADRDY flag
        adc->ISR = ADC1::ISR_ADRDY;
        return true;
    }

    /**
     * @brief Get ADC peripheral pointer from number
     */
    static volatile sbl::hw::reg::ADC3_t* get_adc(uint32_t adc_num) {
        using namespace sbl::hw::reg;
        switch (adc_num) {
            case 1: return periph::adc1;
            case 2: return periph::adc2;
            case 3: return periph::adc3;
            default: return periph::adc1;  // Default to ADC1
        }
    }

    /**
     * @brief Convert SampleTime enum to STM32H7 cycle count code
     *
     * STM32H7 sample times:
     *   0: 1.5 cycles    4: 32.5 cycles
     *   1: 2.5 cycles    5: 64.5 cycles
     *   2: 8.5 cycles    6: 387.5 cycles
     *   3: 16.5 cycles   7: 810.5 cycles
     */
    static constexpr uint32_t sample_time_to_cycles(SampleTime st) {
        switch (st) {
            case SampleTime::Fast:   return 1;  // 2.5 cycles
            case SampleTime::Medium: return 3;  // 16.5 cycles
            case SampleTime::Slow:   return 6;  // 387.5 cycles
            default:                 return 3;
        }
    }
};

} // namespace sbl::driver

// Compile-time interface validation
#include <sbl/validation/adc_requirements.hpp>
static_assert(sbl::validation::adc_driver_valid<sbl::driver::Adc>,
              "STM32H750 ADC driver incomplete");

#endif // SBL_HW_DRIVER_ADC_HPP_
