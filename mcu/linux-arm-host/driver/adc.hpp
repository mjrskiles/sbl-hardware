// Native ADC driver — shared buffer simulation
//
// ADC values live in a uint16_t array. DMA scan is a no-op (buffer is
// always "ready"). External code (Python TUI, MIDI) can write values
// to the buffer to simulate knob/CV input.

#pragma once

#include <cstdint>
#include <cstring>
#include <sbl/types.hpp>
#include <sbl/hal/adc/types.hpp>

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

    /// DMA scan: remember the buffer pointer and initialize to midpoint.
    /// Midpoint (32768) represents "no signal" for bipolar CV inputs and
    /// "fully CCW" for unipolar pots — a safe idle state for both.
    static void start_dma_scan(const sbl::AdcHandle* channels, uint8_t num_channels,
                               uint16_t* buffer,
                               const sbl::adc::SampleTime* sample_times) {
        (void)channels;
        (void)sample_times;
        scan_buffer_ = buffer;
        scan_count_ = num_channels;
        for (uint8_t i = 0; i < num_channels; ++i) {
            buffer[i] = ADC_MIDPOINT;
        }
    }

    static void start_dma_scan(const sbl::AdcHandle* channels, uint8_t num_channels,
                               uint16_t* buffer,
                               sbl::adc::SampleTime sample_time = sbl::adc::SampleTime::Slow) {
        (void)channels;
        (void)sample_time;
        scan_buffer_ = buffer;
        scan_count_ = num_channels;
        for (uint8_t i = 0; i < num_channels; ++i) {
            buffer[i] = ADC_MIDPOINT;
        }
    }

    static void stop_dma_scan() {
        scan_buffer_ = nullptr;
        scan_count_ = 0;
    }

    /// Write a simulated ADC value to a scan buffer index.
    /// For use by external control (Python TUI, MIDI mapper, etc.)
    static void set_value(uint8_t index, uint16_t value) {
        if (scan_buffer_ && index < scan_count_) {
            scan_buffer_[index] = value;
        }
    }

    static constexpr uint16_t ADC_MIDPOINT = 32768;

private:
    static inline uint16_t* scan_buffer_ = nullptr;
    static inline uint8_t scan_count_ = 0;
};

} // namespace sbl::driver
