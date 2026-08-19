/**
 * @file codec.hpp
 * @brief PCM3060 codec initialization for Daisy Patch SM
 *
 * The PCM3060 is an I2C-controlled stereo codec used on the Daisy Patch
 * Submodule. Unlike the Daisy Seed's AK4556 (hardware-configured via GPIO
 * reset), the PCM3060 requires I2C register writes for format selection
 * and power management.
 *
 * I2C2 on PB10 (SCL) / PB11 (SDA) at 400 kHz.
 * Device address: 0x46 (A0 pin tied to GND on Patch SM hardware).
 *
 * Init sequence (reference: external/libDaisy/src/dev/codec_pcm3060.cpp, MIT):
 *   1. Clear MRST bit (master reset release)
 *   2. Clear SRST bit (system reset release)
 *   3. Set DAC format to 24-bit Left-Justified (FMT1[1:0] = 01)
 *   4. Set ADC format to 24-bit Left-Justified (FMT2[1:0] = 01)
 *   5. Disable power-save for both ADC and DAC
 *
 * Usage:
 *   #include <sbl/hw/driver/i2c.hpp>
 *   #include "codec.hpp"   // or via mainboard driver include path
 *
 *   sbl::driver::I2c<0>::init(sbl::hw::i2c::codec);
 *   sbl::driver::init_pcm3060();
 */
#ifndef SBL_MAINBOARD_DAISY_PATCH_SM_CODEC_HPP_
#define SBL_MAINBOARD_DAISY_PATCH_SM_CODEC_HPP_

#include <cstdint>
#include <sbl/hw/driver/i2c.hpp>
#include <sbl/hw/driver/timer.hpp>

namespace sbl::driver {

namespace pcm3060_detail {

// PCM3060 I2C address (A0 = GND on Patch SM)
constexpr uint8_t ADDR = 0x46;

// Register addresses
constexpr uint8_t REG_SYS_CTRL  = 0x40;
constexpr uint8_t REG_DAC_CTRL1 = 0x43;
constexpr uint8_t REG_ADC_CTRL1 = 0x48;

// SysCtrl bit masks
constexpr uint8_t MRST_BIT = 0x80;  // Master reset
constexpr uint8_t SRST_BIT = 0x40;  // System reset
constexpr uint8_t PSV_ADC  = 0x20;  // ADC power save
constexpr uint8_t PSV_DAC  = 0x10;  // DAC power save

// Format: 24-bit Left-Justified (equivalent to MSB-Justified for SAI)
constexpr uint8_t FMT_24LJ = 0x01;

/**
 * @brief Read a single register via I2C
 * @tparam I2cInst I2c driver instance to use
 */
template<uint8_t I2cInst = 0>
inline bool read_reg(uint8_t reg, uint8_t& value) {
    return I2c<I2cInst>::write_then_read(ADDR, &reg, 1, &value, 1);
}

/**
 * @brief Write a single register via I2C
 * @tparam I2cInst I2c driver instance to use
 */
template<uint8_t I2cInst = 0>
inline bool write_reg(uint8_t reg, uint8_t value) {
    uint8_t buf[2] = {reg, value};
    return I2c<I2cInst>::write(ADDR, buf, 2);
}

} // namespace pcm3060_detail

/**
 * @brief Initialize PCM3060 codec over I2C
 *
 * Must call I2c<I2cInst>::init() first with the codec I2C handle.
 * Uses read-modify-write to preserve register defaults where possible.
 *
 * @tparam I2cInst I2c driver instance (default 0)
 * @return true if all I2C transactions succeeded
 */
template<uint8_t I2cInst = 0>
inline bool init_pcm3060() {
    using namespace pcm3060_detail;

    uint8_t reg_val;

    // 1. Clear MRST (master reset release)
    if (!read_reg<I2cInst>(REG_SYS_CTRL, reg_val)) return false;
    reg_val &= ~MRST_BIT;
    if (!write_reg<I2cInst>(REG_SYS_CTRL, reg_val)) return false;
    Timer::busy_wait_ms(4);

    // 2. Clear SRST (system reset release)
    if (!read_reg<I2cInst>(REG_SYS_CTRL, reg_val)) return false;
    reg_val &= ~SRST_BIT;
    if (!write_reg<I2cInst>(REG_SYS_CTRL, reg_val)) return false;
    Timer::busy_wait_ms(4);

    // 3. Set DAC format to 24-bit Left-Justified
    if (!read_reg<I2cInst>(REG_DAC_CTRL1, reg_val)) return false;
    reg_val = (reg_val & ~0x03u) | FMT_24LJ;
    if (!write_reg<I2cInst>(REG_DAC_CTRL1, reg_val)) return false;

    // 4. Set ADC format to 24-bit Left-Justified
    if (!read_reg<I2cInst>(REG_ADC_CTRL1, reg_val)) return false;
    reg_val = (reg_val & ~0x03u) | FMT_24LJ;
    if (!write_reg<I2cInst>(REG_ADC_CTRL1, reg_val)) return false;

    // 5. Disable power-save for ADC and DAC
    if (!read_reg<I2cInst>(REG_SYS_CTRL, reg_val)) return false;
    reg_val &= ~(PSV_ADC | PSV_DAC);
    if (!write_reg<I2cInst>(REG_SYS_CTRL, reg_val)) return false;

    return true;
}

} // namespace sbl::driver

#endif // SBL_MAINBOARD_DAISY_PATCH_SM_CODEC_HPP_
