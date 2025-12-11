# SBL Hardware

Hardware definitions for Sound Byte Labs firmware projects.

## Overview

This repository contains MCU drivers, board definitions, and JSON schemas for the Sound Byte Libs hardware resolution system. Use these definitions as a source in your `sbl.json` configuration.

## Usage

Reference this repository in your project's `sbl.json`:

```json
{
  "version": "1.0",
  "hardware": {
    "sources": [
      {
        "name": "sbl",
        "github": "mjrskiles/sbl-hardware",
        "ref": "main"
      }
    ],
    "target": "sbl:boards/daisy-pod"
  }
}
```

Or use a local clone:

```json
{
  "version": "1.0",
  "hardware": {
    "sources": [
      {
        "name": "sbl",
        "path": "../sbl-hardware"
      }
    ],
    "target": "sbl:boards/raspberry-pi-pico"
  }
}
```

## Structure

```
sbl-hardware/
├── mcu/                    # MCU definitions
│   ├── native/             # Native simulator
│   ├── rp2040/             # Raspberry Pi RP2040
│   └── stm32h750/          # STM32H750 (Daisy Seed)
├── boards/                 # Board and module definitions
│   ├── raspberry-pi-pico/  # Standalone board
│   ├── sbl-simulator-0/    # Native simulator board
│   ├── daisy-seed/         # Parent board (exposes pins)
│   └── daisy-pod/          # Module (attaches to daisy-seed)
└── schema/                 # JSON schemas for validation
```

## Hardware Hierarchy

| Level | Description | Example |
|-------|-------------|---------|
| MCU | Silicon + driver + pin definitions | rp2040, stm32h750 |
| Board | MCU carrier, can expose pins | raspberry-pi-pico, daisy-seed |
| Module | Attaches to board, claims pins | daisy-pod |

## Available Targets

### Standalone Boards

- `sbl:boards/raspberry-pi-pico` - Raspberry Pi Pico (RP2040)
- `sbl:boards/sbl-simulator-0` - Native simulator for development

### Modules (require parent board)

- `sbl:boards/daisy-pod` - Electro-Smith Daisy Pod (attaches to daisy-seed)
- `sbl:boards/daisy-seed` - Electro-Smith Daisy Seed (STM32H750)

## MCU Definitions

Each MCU directory contains:

- `mcu.json` - MCU metadata and pin definitions
- `driver/` - HAL driver implementation (placeholder)

### Pin Resolution

Pins are resolved through the hardware chain:

```
daisy-pod claims "d20"
    ↓
daisy-seed exposes "d20" → "PC1"
    ↓
stm32h750 defines "PC1" → { port: 2, pin: 1 }
    ↓
Generated: sbl::hw::gpio::led1_red{2, 1, false}
```

## Schemas

JSON schemas for validation are in `schema/`:

| Schema | Purpose |
|--------|---------|
| `sbl.schema.json` | Main project configuration |
| `mcu.schema.json` | MCU definition with pins |
| `hardware.schema.json` | Board/module manifests |
| `sbl-lock.schema.json` | Lock file format |

## Contributing

To add a new board or module:

1. Create a directory under `boards/`
2. Add a `hardware.json` manifest
3. If it's a module, set `attaches_to` to reference the parent board
4. Define pin claims in the manifest

See existing boards for examples.

## License

MIT License - See LICENSE file.
