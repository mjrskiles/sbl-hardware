/**
 * @file cycles.hpp
 * @brief STM32H750 cycle port: DWT CYCCNT at the core clock
 *
 * The system layer's profiling tools read this through
 * <sbl/system/port/cycles.hpp>; the contract is
 * <sbl/system/port/cycles_requirements.hpp>. The rate is the generated
 * sysclk, so it is right only after init() has switched to the PLL.
 */
#ifndef SBL_SYSTEM_PORT_CYCLES_HPP_
#define SBL_SYSTEM_PORT_CYCLES_HPP_

#include <cstdint>
#include <sbl/hw/config/target.hpp>
#include <sbl/hw/driver/dwt.hpp>
#include <sbl/system/port/cycles_requirements.hpp>

namespace sbl::driver {

struct Cycles {
    static void init() { dwt_init(); }
    static uint32_t read() { return dwt_read(); }
    static constexpr uint32_t rate() { return sbl::hw::target::sysclk_mhz * 1'000'000u; }
};

} // namespace sbl::driver

static_assert(sbl::system::port::cycles_port_valid<sbl::driver::Cycles>,
              "STM32H750 cycle port does not meet the contract");

#endif // SBL_SYSTEM_PORT_CYCLES_HPP_
