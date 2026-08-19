// Virtual codec stub — no-op
//
// Apps call init_pcm3060() during boot for the Patch SM codec.
// On virtual targets, there's no codec — just succeed silently.

#ifndef SBL_COMPONENT_VIRTUAL_CODEC_HPP_
#define SBL_COMPONENT_VIRTUAL_CODEC_HPP_

#include <cstdint>
#include <sbl/hw/driver/i2c.hpp>
#include <sbl/hw/driver/timer.hpp>

namespace sbl::driver {

template<uint8_t I2cInst = 0>
inline bool init_pcm3060() {
    // No hardware codec on virtual target — success
    return true;
}

} // namespace sbl::driver

#endif // SBL_COMPONENT_VIRTUAL_CODEC_HPP_
