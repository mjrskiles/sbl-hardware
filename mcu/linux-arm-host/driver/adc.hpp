// Virtual ADC driver — the scan buffer is the whole peripheral
//
// There is no converter: start_dma_scan() hands the app a buffer and fills
// each channel with the jack's idle code from the generated electrics
// (sbl::hw::electrical, sloth-rendered from the hardware manifest). A pot at
// rest and an unpatched CV jack read what they would read on the bench.
// Nothing writes the buffer afterwards until a VDH client does (FDP-076
// Phase 2); until then the values are what the manifest says idle looks like.

#pragma once

#include <cstdint>
#include <sbl/types.hpp>
#include <sbl/hw/hal/adc/types.hpp>
#include <sbl/hw/config/electrical.hpp>

namespace sbl::driver {

class Adc {
public:
    static bool init() { return true; }

    static void configure_channel(const sbl::AdcHandle& handle,
                                  sbl::adc::SampleTime sample_time) {
        (void)handle;
        (void)sample_time;
    }

    static void start_conversion(const sbl::AdcHandle& handle) {
        (void)handle;
    }

    static bool is_conversion_complete() { return true; }
    static bool is_conversion_complete(uint32_t adc_num) {
        (void)adc_num;
        return true;
    }

    static uint16_t read_raw() { return 0; }
    static uint16_t read_raw(uint32_t adc_num) {
        (void)adc_num;
        return 0;
    }

    static constexpr uint8_t resolution_bits() { return 16; }

    /// DMA scan: remember the buffer and set every channel to its idle code.
    static void start_dma_scan(const sbl::AdcHandle* channels, uint8_t num_channels,
                               uint16_t* buffer,
                               const sbl::adc::SampleTime* sample_times) {
        (void)sample_times;
        scan_buffer_ = buffer;
        scan_count_ = num_channels;
        for (uint8_t i = 0; i < num_channels; ++i) {
            buffer[i] = sbl::hw::electrical::idle_counts(channels[i]);
        }
    }

    static void start_dma_scan(const sbl::AdcHandle* channels, uint8_t num_channels,
                               uint16_t* buffer,
                               sbl::adc::SampleTime sample_time = sbl::adc::SampleTime::Slow) {
        (void)sample_time;
        start_dma_scan(channels, num_channels, buffer,
                       static_cast<const sbl::adc::SampleTime*>(nullptr));
    }

    static void stop_dma_scan() {
        scan_buffer_ = nullptr;
        scan_count_ = 0;
    }

private:
    static inline uint16_t* scan_buffer_ = nullptr;
    static inline uint8_t scan_count_ = 0;
};

} // namespace sbl::driver
