// Native codec stub — no-op
//
// Davis Jr. calls init_pcm3060() during boot for the Patch SM codec.
// On native, there's no codec — just succeed silently.

#ifndef SBL_MAINBOARD_NATIVE_WORKBENCH_CODEC_HPP_
#define SBL_MAINBOARD_NATIVE_WORKBENCH_CODEC_HPP_

#include <cstdint>
#include <sbl/hw/driver/i2c.hpp>
#include <sbl/hw/driver/timer.hpp>

namespace sbl::driver {

template<uint8_t I2cInst = 0>
inline bool init_pcm3060() {
    // No hardware codec on native — success
    return true;
}

} // namespace sbl::driver

#endif // SBL_MAINBOARD_NATIVE_WORKBENCH_CODEC_HPP_
