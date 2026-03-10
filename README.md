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
    "target": "sbl:mainboards/raspberry-pi-pico-2"
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
    "target": "sbl:mainboards/raspberry-pi-pico-2"
  }
}
```

## Structure

```
sbl-hardware/
├── mcu/                          # MCU definitions (FPU required — ADR-008)
│   ├── arm/                      # ARM Cortex-M MCUs
│   │   ├── rp2350/               # Raspberry Pi RP2350 (Cortex-M33)
│   │   └── stm32h750/            # STM32H750 (Cortex-M7)
│   └── native/                   # Native simulator
├── mainboards/                   # Primary boards running SBL applications
│   ├── daisy-seed/               # Electrosmith Daisy Seed (STM32H750)
│   ├── daisy-patch-sm/           # Electrosmith Daisy Patch SM (STM32H750)
│   └── raspberry-pi-pico-2/      # Raspberry Pi Pico 2 (RP2350)
└── modules/                      # Extension modules
    ├── boards/                   # Expansion PCBs
    │   ├── daisy-pod/            # Electrosmith Daisy Pod (knobs, encoder, LEDs)
    │   └── patch-init/           # Electrosmith Patch.init() (knobs, CV, gates)
    └── ic/                       # Complex ICs (DACs, codecs, etc.)
```

## Hardware Hierarchy

| Level | Description | Example |
|-------|-------------|---------|
| MCU | Silicon + driver + pin definitions | rp2350, stm32h750 |
| Mainboard | Primary board running SBL, exposes pins | daisy-seed, raspberry-pi-pico-2 |
| Module | Attaches to mainboard/module, claims pins | led-panel, dac-board |

### Mainboard vs Module

- **Mainboard**: Has an SBL-compatible MCU (ARM Cortex-M with FPU), runs the application, exposes pins to modules
- **Module**: Attaches to a mainboard or another module, claims pins/buses for its components

## Available Targets

### Mainboards

| Target | Board | MCU | Core |
|--------|-------|-----|------|
| `sbl:mainboards/daisy-seed` | Electrosmith Daisy Seed | STM32H750 | Cortex-M7 |
| `sbl:mainboards/daisy-patch-sm` | Electrosmith Daisy Patch SM | STM32H750 | Cortex-M7 |
| `sbl:mainboards/raspberry-pi-pico-2` | Raspberry Pi Pico 2 | RP2350 | Cortex-M33 |

### Modules

| Target | Module | Attaches To | Features |
|--------|--------|-------------|----------|
| `sbl:modules/boards/daisy-pod` | Electrosmith Daisy Pod | daisy-seed | 2 RGB LEDs, encoder + click, 2 buttons, 2 knobs (ADC), MIDI IN (UART) |
| `sbl:modules/boards/patch-init` | Electrosmith Patch.init() | daisy-patch-sm | 4 knobs, button, toggle, 4 CV in, 2 gate in, 2 gate out, CV out, SD card |

## MCU Definitions

Each MCU directory contains:

- `mcu.json` - MCU metadata, pin definitions with alternate functions, peripheral definitions
- `driver/` - Bare-metal driver implementation
  - `gpio.hpp`, `timer.hpp`, `uart.hpp`, `init.hpp` - High-level drivers
  - `sai.hpp` - SAI/I2S audio driver with DMA (STM32H7)
  - `dma.hpp`, `dma_buffer.hpp` - DMA controller and buffer placement (STM32H7)
  - `adc.hpp` - ADC driver: polling reads and DMA scan mode (STM32H7)
  - `clock.hpp` - Kernel clock mux helpers (STM32H7)
  - `startup.cpp` - Reset handler and vector table
  - `*.ld` - Linker script for the MCU
- `reg/` - SVD-generated register definitions (sibling of `driver/`, no vendor HAL)
- `CMakeLists.txt` - Build integration (copies drivers to `<sbl/hw/driver/>` include path)

### SVD-Generated Registers

Register headers are generated from official CMSIS-SVD files, ensuring definitions match the silicon exactly with no vendor HAL overhead.

**Tool:** [cecrops](https://github.com/mjrskiles/sound-byte-libs/blob/main/docs/planning/feature-designs/FDP-009-cecrops-svd-register-definition-generator.md) - manifest-driven SVD→C++ generator with integrated patching

Each MCU that uses cecrops has a `cecrops.json` manifest:
```json
{
  "svd_source": { "vendor_pack": "Keil.STM32H7xx_DFP", "file": "CMSIS/SVD/STM32H750x.svd" },
  "output": { "peripherals": ["rcc", "gpio", "usart", "tim", "adc"] },
  "patches": [{ "peripheral": "RCC", "action": "set_base_address", "value": "0x58024400" }]
}
```

Generate register headers:
```bash
python -m cecrops generate sbl-hardware/mcu/arm/stm32h750
```

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
daisy-pod claims pin "seed_30" with function "adc"
    ↓
daisy-seed exposes "seed_30" → "PA3" with functions ["gpio", "adc", ...]
    ↓
stm32h750 defines "PA3" → { gpio: { port: 0, pin: 3 }, adc: { peripheral: "ADC1", channel: 15 } }
    ↓
Resolver checks: PA3 not already claimed? ✓
    ↓
Generated: sbl::hw::adc::knob1{15}
```

If the same MCU pin is claimed twice, the resolver fails with a conflict error.

## Schemas

JSON schemas are generated from Pydantic models in [sound-byte-libs/sbl-schema/](https://github.com/mjrskiles/sound-byte-libs/tree/main/sbl-schema):

| Schema | Purpose |
|--------|---------|
| `sbl.schema.json` | Main project configuration |
| `mcu.schema.json` | MCU definition with pin functions and peripherals |
| `mainboard.schema.json` | Mainboard manifests |
| `module.schema.json` | Module manifests |
| `sbl-lock.schema.json` | Lock file format |

Generate schemas: `sbl-schema generate` (outputs to `sbl-schema/generated/`)

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

See the Daisy Pod or Patch.init() module definitions for examples.

## License

MIT License - See LICENSE file.
