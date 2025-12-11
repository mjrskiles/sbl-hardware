# RP2040 MCU Definition

Raspberry Pi RP2040 dual-core ARM Cortex-M0+ microcontroller.

## Status

| Aspect | Status |
|--------|--------|
| Schema | v0.1 (current) |
| Pin definitions | Complete (GPIO0-29) |
| Alternate functions | Complete |
| Peripherals | Complete |
| Driver | Not implemented |
| Testing | Schema only, not runtime tested |

## Specifications

| Property | Value |
|----------|-------|
| Architecture | ARM Cortex-M0+ (dual core) |
| Max Clock | 133 MHz |
| Flash | External (via QSPI) |
| SRAM | 264 KB |
| GPIO | 30 pins (GPIO0-29) |
| ADC | 12-bit, 4 channels + internal temp |

## Peripherals

| Peripheral | Count | Notes |
|------------|-------|-------|
| SPI | 2 | SPI0, SPI1 - flexible pin mapping |
| I2C | 2 | I2C0, I2C1 - flexible pin mapping |
| UART | 2 | UART0, UART1 |
| PWM | 8 | PWM0-7, 16 channels total (A/B per slice) |
| PIO | 2 | Programmable I/O state machines |
| ADC | 1 | 4 external channels (GPIO26-29) |

## Pin Alternate Functions

The RP2040 has highly flexible pin mapping. Most GPIO pins support multiple peripheral functions. See `mcu.json` for the complete mapping.

Example (GPIO0):
- GPIO
- SPI0 MISO
- UART0 TX
- I2C0 SDA
- PWM0 Channel A
- PIO0/PIO1

## Usage

Reference this MCU from a mainboard definition:

```json
{
  "mainboard": {
    "name": "my-rp2040-board",
    "mcu": "mcu/arm/rp2040"
  }
}
```

## References

- [RP2040 Datasheet](https://datasheets.raspberrypi.com/rp2040/rp2040-datasheet.pdf)
- [Raspberry Pi Pico Datasheet](https://datasheets.raspberrypi.com/pico/pico-datasheet.pdf)
