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
│   │   ├── rp2040/               # Raspberry Pi RP2040
│   │   └── stm32h750/            # STM32H750
│   └── native/                   # Native simulator
├── mainboards/                   # Primary boards running SBL applications
│   ├── raspberry-pi-pico/        # Raspberry Pi Pico
│   └── sbl-simulator-0/          # Native simulator mainboard
└── modules/                      # Extension modules
    ├── boards/                   # Expansion PCBs
    └── ic/                       # Complex ICs (DACs, codecs, etc.)
```

## Hardware Hierarchy

| Level | Description | Example |
|-------|-------------|---------|
| MCU | Silicon + driver + pin definitions | rp2040, stm32h750 |
| Mainboard | Primary board running SBL, exposes pins | raspberry-pi-pico |
| Module | Attaches to mainboard/module, claims pins | led-panel, dac-board |

### Mainboard vs Module

- **Mainboard**: Has an SBL-compatible MCU (ARM Cortex-M), runs the application, exposes pins to modules
- **Module**: Attaches to a mainboard or another module, claims pins/buses for its components

## Available Targets

### Mainboards

- `sbl:mainboards/raspberry-pi-pico` - Raspberry Pi Pico (RP2040)
- `sbl:mainboards/sbl-simulator-0` - Native simulator for development

### Modules

None yet - add your own!

## MCU Definitions

Each MCU directory contains:

- `mcu.json` - MCU metadata, pin definitions with alternate functions, peripheral definitions
- `driver/` - HAL driver implementation (placeholder)

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

## Contributing

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
