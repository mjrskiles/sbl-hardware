# STM32H750 MCU Definition

STMicroelectronics STM32H750 high-performance ARM Cortex-M7 microcontroller.

## Status

| Aspect | Status |
|--------|--------|
| Schema | v0.1 |
| Pin definitions | Complete (PA, PB, PC, PD, PG with alt functions) |
| Peripherals | GPIO, Timer, UART, ADC, USB OTG |
| Driver | Bare-metal, SVD-generated registers |
| Testing | Validated on Daisy Seed hardware |

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

## Driver

Bare-metal drivers with no vendor HAL dependencies:

| Driver | File | Status |
|--------|------|--------|
| System init (480 MHz clock tree) | `driver/init.hpp` | Complete |
| GPIO | `driver/gpio.hpp` | Complete |
| Timer (SysTick) | `driver/timer.hpp` | Complete |
| UART (USART1, polling) | `driver/uart.hpp` | Complete |
| ADC (ADC1, polling) | `driver/adc.hpp` | Complete |
| USB OTG (device mode setup) | `driver/usb.hpp` | Complete |
| USB IRQ handler | `driver/usb_irq.cpp` | Complete |

## Register Headers

SVD-generated C++ register definitions via cecrops (`cecrops.json`):

| Header | Peripheral | Source |
|--------|-----------|--------|
| `reg/rcc.hpp` | Reset & Clock Control | cecrops (SVD) |
| `reg/gpio.hpp` | GPIO ports A-K | cecrops (SVD) |
| `reg/pwr.hpp` | Power control | cecrops (SVD) |
| `reg/flash.hpp` | Flash controller | cecrops (SVD) |
| `reg/usart.hpp` | USART/UART | cecrops (SVD) |
| `reg/tim.hpp` | Timers | cecrops (SVD) |
| `reg/adc.hpp` | ADC | cecrops (SVD) |
| `reg/cortex_m.hpp` | NVIC, SysTick, SCB | Manual |
| `reg/usb_otg.hpp` | USB OTG FS/HS | Manual (SVD structurally broken) |
| `reg/irq.hpp` | IRQ number enum | Manual |

Manual headers are listed in `cecrops.json` to prevent overwrite during regeneration.

## Peripherals (Available on Silicon)

| Peripheral | Count | Notes |
|------------|-------|-------|
| SPI | 6 | SPI1-6 |
| I2C | 4 | I2C1-4 |
| UART/USART | 8 | USART1-3, UART4-8 |
| SAI | 4 | Serial Audio Interface |
| I2S | 3 | Via SPI peripherals |
| SDMMC | 2 | SD card interface |
| USB | 2 | FS and HS (OTG) |
| ADC | 3 | 16-bit, up to 3.6 MSPS |
| DAC | 2 | 12-bit |

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

- [STM32H750 Reference Manual (RM0433)](https://www.st.com/resource/en/reference_manual/dm00314099.pdf)
- [STM32H750 Datasheet](https://www.st.com/resource/en/datasheet/stm32h750ib.pdf)
