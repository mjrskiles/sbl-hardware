// Native interrupts driver — the library's interrupts contract on the host.
//
// The workbench has no interrupts to mask: the control tick runs in one
// thread and the bridge invariants hold by construction there (FDP-073).
// Every method is a no-op.

#pragma once

#include <cstdint>
#include <sbl/system/interrupts.hpp>

namespace sbl::driver {

class Interrupts {
public:
    using Level = sbl::system::interrupts::Level;

    static uint32_t save_ceiling() { return 0; }
    static void raise_ceiling(Level level) { (void)level; }
    static void restore_ceiling(uint32_t saved) { (void)saved; }
    static uint32_t disable_all() { return 0; }
    static void restore_all(uint32_t saved) { (void)saved; }
};

} // namespace sbl::driver

#include <sbl/hw/validation/interrupts_requirements.hpp>
static_assert(sbl::validation::interrupts_driver_valid<sbl::driver::Interrupts>,
              "Native interrupts driver incomplete");
