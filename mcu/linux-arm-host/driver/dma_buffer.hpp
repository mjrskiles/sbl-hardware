// Native DMA buffer macros — no-ops
//
// On STM32H7 these place buffers in DMA-accessible SRAM and enforce
// cache line alignment. On native, regular memory is fine.

#pragma once

#define SBL_DMA_BUFFER
#define SBL_AUDIO_BUFFER
#define SBL_SDRAM_BUFFER
