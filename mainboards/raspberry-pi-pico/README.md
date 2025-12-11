# Raspberry Pi Pico

Raspberry Pi Foundation's RP2040-based development board.

## Status

| Aspect | Status |
|--------|--------|
| Schema | v0.1 (current) |
| Pin mapping | Complete |
| Bus definitions | Complete |
| Claims | LED only |
| Testing | Schema validated, not runtime tested |

## Board Overview

The Pico is a minimal RP2040 development board with no complex ICs requiring separate module definitions. On-board components:

| Component | Part | Notes |
|-----------|------|-------|
| MCU | RP2040 | Dual-core Cortex-M0+ |
| Flash | W25Q16JV | 2MB QSPI (handled by MCU) |
| LED | Green | GPIO25, directly driven |
| Regulator | RT6150 | 3.3V buck-boost |
| Crystal | 12 MHz | For USB and PLL |

## Pinout

26 GPIO pins exposed on headers:

| Header Pin | GPIO | Functions |
|------------|------|-----------|
| GP0-GP22 | GPIO0-22 | General purpose, all alternate functions |
| GP26-GP28 | GPIO26-28 | ADC capable (A0-A2) |

**Not exposed:** GPIO23-25, GPIO29
- GPIO23: SMPS power control
- GPIO24: VBUS sense
- GPIO25: On-board LED (claimed)
- GPIO29: ADC3 / VSYS sense

## Internal Claims

| ID | Pin | Function | Purpose |
|----|-----|----------|---------|
| `status_led` | GPIO25 | GPIO OUT | On-board green LED |

## Exposed Buses

| Bus | Type | Default Pins | Notes |
|-----|------|--------------|-------|
| spi0 | SPI | SCK=GP2, MOSI=GP3, MISO=GP0 | Can be remapped |
| spi1 | SPI | SCK=GP10, MOSI=GP11, MISO=GP8 | Can be remapped |
| i2c0 | I2C | SDA=GP4, SCL=GP5 | Can be remapped |
| i2c1 | I2C | SDA=GP6, SCL=GP7 | Can be remapped |
| uart0 | UART | TX=GP0, RX=GP1 | Can be remapped |
| uart1 | UART | TX=GP4, RX=GP5 | Can be remapped |

## Usage

Target this board directly for standalone applications:

```json
{
  "schemaVersion": "0.1",
  "hardware": {
    "sources": [
      { "name": "sbl", "github": "mjrskiles/sbl-hardware", "ref": "main" }
    ],
    "target": "sbl:mainboards/raspberry-pi-pico"
  }
}
```

Or use as a base for expansion modules that claim exposed pins.

## Example Module

A simple LED panel module that attaches to the Pico:

```json
{
  "schemaVersion": "0.1",
  "module": {
    "name": "my-led-panel",
    "category": "boards",
    "attaches_to": "mainboards/raspberry-pi-pico"
  },
  "claims": {
    "pins": [
      { "pin": "gp0", "function": "gpio", "direction": "out", "id": "led_r" },
      { "pin": "gp1", "function": "gpio", "direction": "out", "id": "led_g" },
      { "pin": "gp2", "function": "gpio", "direction": "out", "id": "led_b" }
    ],
    "adc": [
      { "pin": "a0", "id": "pot1" }
    ]
  }
}
```

## References

- [Raspberry Pi Pico Datasheet](https://datasheets.raspberrypi.com/pico/pico-datasheet.pdf)
- [RP2040 Datasheet](https://datasheets.raspberrypi.com/rp2040/rp2040-datasheet.pdf)
- [Pico Pinout Diagram](https://datasheets.raspberrypi.com/pico/Pico-R3-A4-Pinout.pdf)
