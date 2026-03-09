/**
 * @file dma_buffer.hpp
 * @brief Buffer placement macros for STM32H750 DMA
 *
 * STM32H7 memory regions have different DMA accessibility:
 *
 * | Region  | Address    | DMA? | Cache? | Use for                  |
 * |---------|------------|------|--------|--------------------------|
 * | DTCM    | 0x20000000 | NO   | No     | Stack, .data, .bss       |
 * | RAM_D1  | 0x24000000 | Yes  | Yes    | Large audio buffers      |
 * | RAM_D2  | 0x30000000 | Yes  | No     | DMA buffers (safe)       |
 * | RAM_D3  | 0x38000000 | Yes  | No     | BDMA only (not DMA1/2)   |
 *
 * DTCM is the default RAM (fastest, tightly-coupled to CPU) but DMA
 * controllers CANNOT access it. Buffers used with DMA must be placed
 * in D1 or D2 SRAM using these macros.
 *
 * The linker script (stm32h750.ld) defines .dma_buffer and .audio_buffer
 * sections mapped to RAM_D2 and RAM_D1 respectively.
 */
#ifndef SBL_HW_DRIVER_DMA_BUFFER_HPP_
#define SBL_HW_DRIVER_DMA_BUFFER_HPP_

/**
 * Place buffer in RAM_D2 (0x30000000) - non-cacheable D2 SRAM.
 * Safe for DMA without cache maintenance. Use for peripheral DMA buffers.
 *
 * Example:
 *   SBL_DMA_BUFFER static uint16_t adc_buf[64];
 */
#define SBL_DMA_BUFFER __attribute__((section(".dma_buffer"), aligned(32)))

/**
 * Place buffer in RAM_D1 (0x24000000) - cacheable AXI SRAM.
 * Larger region (512KB) for audio double-buffers. Requires cache
 * maintenance if CPU and DMA access the same buffer.
 *
 * Example:
 *   SBL_AUDIO_BUFFER static int32_t audio_buf[2][256];
 */
#define SBL_AUDIO_BUFFER __attribute__((section(".audio_buffer"), aligned(32)))

/**
 * Place buffer in external SDRAM (0xC0000000) - 64MB on Daisy Seed/Patch SM.
 * Available ONLY after init_sdram() has been called.
 * Use for large audio buffers: multi-second delay, granular capture, samples.
 *
 * Example:
 *   SBL_SDRAM_BUFFER static float long_delay[480000];  // 10 seconds @ 48kHz
 */
#define SBL_SDRAM_BUFFER __attribute__((section(".sdram_bss"), aligned(32)))

#endif // SBL_HW_DRIVER_DMA_BUFFER_HPP_
