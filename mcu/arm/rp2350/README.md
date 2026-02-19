# RP2350 MCU Definition

Raspberry Pi RP2350 dual-core ARM Cortex-M33 microcontroller.

## Status

| Aspect | Status |
|--------|--------|
| Schema | v0.1 (current) |
| Pin definitions | Complete (GPIO0-29) |
| Alternate functions | Complete |
| Peripherals | Complete |
| Driver | Complete (Pico SDK wrappers) |
| Testing | Validated on Raspberry Pi Pico 2 hardware |

## Specifications

| Property | Value |
|----------|-------|
| Architecture | ARM Cortex-M33 (dual core) |
| Max Clock | 150 MHz |
| Flash | External (via QSPI) |
| SRAM | 520 KB |
| GPIO | 30 pins (GPIO0-29) |
| ADC | 12-bit, 4 channels + internal temp |

## Peripherals

| Peripheral | Count | Notes |
|------------|-------|-------|
| SPI | 2 | SPI0, SPI1 - flexible pin mapping |
| I2C | 2 | I2C0, I2C1 - flexible pin mapping |
| UART | 2 | UART0, UART1 |
| PWM | 8 | PWM0-7, 16 channels total (A/B per slice) |
| PIO | 3 | PIO0-2 (one more than RP2040) |
| ADC | 1 | 4 external channels (GPIO26-29) |

## Differences from RP2040

- ARM Cortex-M33 core (vs M0+ on RP2040) with hardware float and DSP extensions
- 520 KB SRAM (vs 264 KB)
- 150 MHz default clock (vs 133 MHz)
- 3 PIO blocks (vs 2)
- Security features (ARM TrustZone, secure boot)

## Usage

Reference this MCU from a mainboard definition:

```json
{
  "mainboard": {
    "name": "my-rp2350-board",
    "mcu": "mcu/arm/rp2350"
  }
}
```

## References

- [RP2350 Datasheet](https://datasheets.raspberrypi.com/rp2350/rp2350-datasheet.pdf)
- [Raspberry Pi Pico 2 Datasheet](https://datasheets.raspberrypi.com/pico/pico-2-datasheet.pdf)
