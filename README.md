# SBL Hardware

Hardware definitions for Sound Byte Labs firmware projects.

## Overview

This repository contains MCU definitions, mainboard definitions, and module definitions for the Sound Byte Libs hardware resolution system. Use these definitions as a source in your `sbl.json` configuration.

JSON schemas are maintained separately in [sound-byte-libs/schema/](https://github.com/mjrskiles/sound-byte-libs/tree/main/schema).

## Usage

Reference this repository in your project's `sbl.json`:

```json
{
  "schemaVersion": "0.1",
  "hardware": {
    "sources": [
      {
        "name": "sbl",
        "github": "mjrskiles/sbl-hardware",
        "ref": "main"
      }
    ],
    "target": "sbl:mainboards/raspberry-pi-pico"
  }
}
```

Or use a local clone:

```json
{
  "schemaVersion": "0.1",
  "hardware": {
    "sources": [
      {
        "name": "sbl",
        "path": "../sbl-hardware"
      }
    ],
    "target": "sbl:mainboards/raspberry-pi-pico"
  }
}
```

## Structure

```
sbl-hardware/
├── mcu/                          # MCU definitions (SBL-native only)
│   ├── arm/                      # ARM Cortex-M MCUs
│   │   ├── rp2040/               # Raspberry Pi RP2040 (Cortex-M0+)
│   │   ├── rp2350/               # Raspberry Pi RP2350 (Cortex-M33)
│   │   └── stm32h750/            # STM32H750 (Cortex-M7)
│   └── native/                   # Native simulator
├── mainboards/                   # Primary boards running SBL applications
│   ├── daisy-seed/               # Electrosmith Daisy Seed (STM32H750)
│   ├── raspberry-pi-pico/        # Raspberry Pi Pico (RP2040)
│   ├── raspberry-pi-pico-2/      # Raspberry Pi Pico 2 (RP2350)
│   └── sbl-simulator-0/          # Native simulator mainboard
└── modules/                      # Extension modules
    ├── boards/                   # Expansion PCBs
    └── ic/                       # Complex ICs (DACs, codecs, etc.)
```

## Hardware Hierarchy

| Level | Description | Example |
|-------|-------------|---------|
| MCU | Silicon + driver + pin definitions | rp2040, rp2350, stm32h750 |
| Mainboard | Primary board running SBL, exposes pins | raspberry-pi-pico |
| Module | Attaches to mainboard/module, claims pins | led-panel, dac-board |

### Mainboard vs Module

- **Mainboard**: Has an SBL-compatible MCU (ARM Cortex-M), runs the application, exposes pins to modules
- **Module**: Attaches to a mainboard or another module, claims pins/buses for its components

## Available Targets

### Mainboards

| Target | Board | MCU | Core |
|--------|-------|-----|------|
| `sbl:mainboards/raspberry-pi-pico` | Raspberry Pi Pico | RP2040 | Cortex-M0+ |
| `sbl:mainboards/raspberry-pi-pico-2` | Raspberry Pi Pico 2 | RP2350 | Cortex-M33 |
| `sbl:mainboards/daisy-seed` | Electrosmith Daisy Seed | STM32H750 | Cortex-M7 |
| `sbl:mainboards/sbl-simulator-0` | Native simulator | x86/ARM host | - |

### Modules

None yet

## MCU Definitions

Each MCU directory contains:

- `mcu.json` - MCU metadata, pin definitions with alternate functions, peripheral definitions
- `driver/` - Bare-metal driver implementation
  - `gpio.hpp`, `timer.hpp`, `uart.hpp`, `init.hpp` - High-level drivers
  - `reg/*.hpp` - SVD-generated register definitions (no vendor HAL)
  - `startup.cpp` - Reset handler and vector table
  - `*.ld` - Linker script for the MCU
- `CMakeLists.txt` - Build integration (copies drivers to `<sbl/hw/driver/>` include path)

### SVD-Generated Registers

Register headers are generated from official CMSIS-SVD files using `sound-byte-libs/tools/svd/`.
This ensures register definitions match the silicon exactly, with no vendor HAL overhead.

```cpp
// Generated from SVD - no ST HAL, no CMSIS
#include <sbl/hw/driver/reg/gpio.hpp>
#include <sbl/hw/driver/reg/rcc.hpp>

// Direct register access via generated structs
sbl::hw::reg::periph::rcc->AHB4ENR |= (1u << 2);  // Enable GPIOC clock
sbl::hw::reg::periph::gpioc->MODER |= (1u << 14); // PC7 output
```

### Pin Functions

MCU pins define all available alternate functions:

```json
{
  "GPIO0": {
    "functions": {
      "gpio": { "port": 0, "pin": 0 },
      "spi": { "peripheral": "SPI0", "signal": "miso" },
      "uart": { "peripheral": "UART0", "signal": "tx" },
      "i2c": { "peripheral": "I2C0", "signal": "sda" },
      "pwm": { "peripheral": "PWM0", "channel": 0 }
    }
  }
}
```

### Pin Claim Resolution

Pins are resolved through the hardware chain with conflict detection:

```
my-panel claims pin "gp0" with function "gpio"
    ↓
raspberry-pi-pico exposes "gp0" → "GPIO0" with functions ["gpio", "spi", ...]
    ↓
rp2040 defines "GPIO0" → { gpio: { port: 0, pin: 0 }, spi: {...} }
    ↓
Resolver checks: GPIO0 not already claimed? ✓
    ↓
Generated: sbl::hw::gpio::led_r{0, 0, false}
```

If the same MCU pin is claimed twice, the resolver fails with a conflict error.

## Schemas

JSON schemas are maintained in [sound-byte-libs/schema/](https://github.com/mjrskiles/sound-byte-libs/tree/main/schema):

| Schema | Purpose |
|--------|---------|
| `sbl.schema.json` | Main project configuration |
| `mcu.schema.json` | MCU definition with pin functions and peripherals |
| `mainboard.schema.json` | Mainboard manifests |
| `module.schema.json` | Module manifests |
| `sbl-lock.schema.json` | Lock file format |

## New hardware definitions

### Adding a Mainboard

1. Create a directory under `mainboards/`
2. Add a `hardware.json` with `mainboard` schema
3. Define exposed pins, ADC channels, and buses
4. Set internal pin claims (e.g., onboard LED)

### Adding a Module

1. Create a directory under `modules/boards/` or `modules/ic/`
2. Add a `hardware.json` with `module` schema
3. Set `attaches_to` to reference the parent (e.g., `mainboards/raspberry-pi-pico`)
4. Define pin and bus claims with explicit functions

See the Raspberry Pi Pico README for an example module definition.

## License

MIT License - See LICENSE file.
