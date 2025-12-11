# STM32H750 MCU Definition

STMicroelectronics STM32H750 high-performance ARM Cortex-M7 microcontroller.

## Status

| Aspect | Status |
|--------|--------|
| Schema | v1.0 (needs migration to v0.1) |
| Pin definitions | Partial (subset of pins) |
| Alternate functions | Not implemented |
| Peripherals | Not implemented |
| Driver | Not implemented |
| Testing | Not tested |

**TODO:** Migrate to new schema format with:
- `schemaVersion: "0.1"`
- `pins` object with alternate functions
- `peripherals` object

## Specifications

| Property | Value |
|----------|-------|
| Architecture | ARM Cortex-M7 |
| Max Clock | 480 MHz |
| Flash | 128 KB internal + external QSPI |
| SRAM | 1 MB |
| GPIO | 140+ pins (package dependent) |
| ADC | 16-bit, 3 ADCs, 20+ channels |
| DAC | 2x 12-bit |

## Peripherals (To Be Defined)

| Peripheral | Count | Notes |
|------------|-------|-------|
| SPI | 6 | SPI1-6 |
| I2C | 4 | I2C1-4 |
| UART/USART | 8 | USART1-3, UART4-8 |
| SAI | 4 | Serial Audio Interface |
| I2S | 3 | Via SPI peripherals |
| SDMMC | 2 | SD card interface |
| USB | 2 | FS and HS |
| ADC | 3 | 16-bit, up to 3.6 MSPS |
| DAC | 2 | 12-bit |

## Current Pin Definitions

The current definition includes a subset of GPIO pins commonly used. Full alternate function mapping is pending.

Ports defined: PA, PB, PC, PD, PG (partial)

## Usage

Reference this MCU from a mainboard definition:

```json
{
  "mainboard": {
    "name": "my-stm32h7-board",
    "mcu": "mcu/arm/stm32h750"
  }
}
```

## References

- [STM32H750 Reference Manual](https://www.st.com/resource/en/reference_manual/dm00314099.pdf)
- [STM32H750 Datasheet](https://www.st.com/resource/en/datasheet/stm32h750ib.pdf)
