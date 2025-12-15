/**
 * @file adc.hpp
 * @brief STM32H750 ADC driver - polling mode
 *
 * Single-channel polling-mode ADC driver for STM32H7.
 * Uses SVD-generated register definitions - no vendor HAL.
 *
 * Supports ADC1, ADC2, and ADC3 peripherals with 16-bit resolution.
 * For Daisy Seed, ADC inputs are typically on ADC1.
 */
#ifndef SBL_HW_DRIVER_ADC_HPP_
#define SBL_HW_DRIVER_ADC_HPP_

#include <cstdint>
#include <sbl/hw/reg/adc.hpp>
#include <sbl/hw/reg/rcc.hpp>
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
     */
    static void init() {
        using namespace sbl::hw::reg;

        // Enable ADC clocks
        periph::rcc->AHB1ENR |= RCC::AHB1ENR_ADC12EN;  // ADC1, ADC2
        periph::rcc->AHB4ENR |= RCC::AHB4ENR_ADC3EN;   // ADC3

        // Read back for synchronization
        volatile uint32_t dummy = periph::rcc->AHB1ENR;
        (void)dummy;

        // Initialize all three ADCs
        init_peripheral(periph::adc1);
        init_peripheral(periph::adc2);
        init_peripheral(periph::adc3);
    }

    /**
     * @brief Configure channel for conversion
     *
     * Sets sample time and pre-selects the channel for conversion.
     *
     * @param handle ADC channel handle (adc=1,2,3; channel=0-19)
     * @param sample_time Sampling duration
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

private:
    /**
     * @brief Initialize a single ADC peripheral
     */
    static void init_peripheral(volatile sbl::hw::reg::ADC3_t* adc) {
        using namespace sbl::hw::reg;

        // Exit deep power-down mode (must be done before enabling regulator)
        adc->CR &= ~ADC1::CR_DEEPPWD;

        // Enable internal voltage regulator
        adc->CR |= ADC1::CR_ADVREGEN;

        // Wait for regulator startup (spec: 10us, we wait ~20us at 480MHz)
        for (volatile int i = 0; i < 10000; ++i) {}

        // Configure for 16-bit resolution (RES = 00)
        adc->CFGR = (adc->CFGR & ~ADC1::CFGR_RES_Msk) | (0u << ADC1::CFGR_RES_Pos);

        // Enable ADC
        adc->CR |= ADC1::CR_ADEN;

        // Wait for ADC ready
        while ((adc->ISR & ADC1::ISR_ADRDY) == 0) {}

        // Clear ADRDY flag
        adc->ISR = ADC1::ISR_ADRDY;
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
