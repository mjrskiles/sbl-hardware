# Native Simulator MCU Definition

Virtual MCU for the SBL native simulator. Runs on the host machine for development and testing.

## Status

| Aspect | Status |
|--------|--------|
| Schema | v1.0 (needs migration to v0.1) |
| Pin definitions | Complete (32 GPIO, 4 ADC) |
| Alternate functions | Not applicable |
| Peripherals | Minimal |
| Driver | Implemented in sound-byte-libs |
| Testing | Functional |

**TODO:** Migrate to new schema format with:
- `schemaVersion: "0.1"`
- `pins` object format (for consistency)

## Purpose

The native simulator allows running SBL applications on a development machine without hardware. Useful for:

- Rapid prototyping and iteration
- Unit testing application logic
- CI/CD pipelines
- Learning and experimentation

## Virtual Hardware

| Resource | Count | Notes |
|----------|-------|-------|
| GPIO | 32 | GPIO0-31, simulated state |
| ADC | 4 | ADC0-3, returns configurable values |

The simulator logs all hardware interactions to the console, showing GPIO state changes, timing events, and more.

## Usage

Reference this MCU from the simulator mainboard:

```json
{
  "mainboard": {
    "name": "sbl-simulator-0",
    "mcu": "mcu/native"
  }
}
```

## Limitations

- No real timing (uses host system time)
- No actual hardware interaction
- Peripherals are stubs that log operations
- Single-threaded execution

## Output Example

```
[SBL Native Simulator] Board: sbl-simulator-0 | MCU: native
Uptime:    1000ms | Events:   3

Hardware Status:
GPIO: P25:OUT=HIGH

Event Log:
[00:00.000] [GPIO.25]: Mode -> OUTPUT
[00:00.500] [GPIO.25]: -> HIGH
[00:01.000] [GPIO.25]: -> LOW
```
