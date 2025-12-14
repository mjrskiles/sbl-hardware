/**
 * STM32H750 Linker Script
 *
 * Memory layout for STM32H750VBT6 (Daisy Seed):
 * - 128KB Flash
 * - 1MB total RAM across multiple regions
 *
 * For bare-metal SBL applications without external bootloader.
 */

/* Entry point */
ENTRY(Reset_Handler)

/* Memory regions */
MEMORY
{
    /* Flash - 128KB at 0x08000000 */
    FLASH (rx)      : ORIGIN = 0x08000000, LENGTH = 128K

    /* DTCM-RAM - 128KB at 0x20000000 (fast, tightly coupled) */
    DTCM (rwx)      : ORIGIN = 0x20000000, LENGTH = 128K

    /* ITCM-RAM - 64KB at 0x00000000 (instruction, tightly coupled) */
    ITCM (rwx)      : ORIGIN = 0x00000000, LENGTH = 64K

    /* AXI-SRAM - 512KB at 0x24000000 (main RAM, D1 domain) */
    RAM_D1 (rwx)    : ORIGIN = 0x24000000, LENGTH = 512K

    /* SRAM1 - 128KB at 0x30000000 (D2 domain) */
    RAM_D2 (rwx)    : ORIGIN = 0x30000000, LENGTH = 128K

    /* SRAM2 - 128KB at 0x30020000 (D2 domain) */
    RAM_D2_2 (rwx)  : ORIGIN = 0x30020000, LENGTH = 128K

    /* SRAM3 - 32KB at 0x30040000 (D2 domain) */
    RAM_D2_3 (rwx)  : ORIGIN = 0x30040000, LENGTH = 32K

    /* SRAM4 - 64KB at 0x38000000 (D3 domain) */
    RAM_D3 (rwx)    : ORIGIN = 0x38000000, LENGTH = 64K

    /* Backup SRAM - 4KB at 0x38800000 */
    BACKUP (rwx)    : ORIGIN = 0x38800000, LENGTH = 4K
}

/* Stack size */
_Min_Stack_Size = 0x2000;  /* 8KB stack */

/* Heap size */
_Min_Heap_Size = 0x4000;   /* 16KB heap */

SECTIONS
{
    /* Vector table and code go in Flash */
    .isr_vector :
    {
        . = ALIGN(4);
        KEEP(*(.isr_vector))
        . = ALIGN(4);
    } >FLASH

    /* Code */
    .text :
    {
        . = ALIGN(4);
        *(.text)
        *(.text*)
        *(.glue_7)         /* ARM/Thumb interworking */
        *(.glue_7t)
        *(.eh_frame)

        KEEP(*(.init))
        KEEP(*(.fini))

        . = ALIGN(4);
        _etext = .;
    } >FLASH

    /* Read-only data */
    .rodata :
    {
        . = ALIGN(4);
        *(.rodata)
        *(.rodata*)
        . = ALIGN(4);
    } >FLASH

    /* ARM exception unwinding */
    .ARM.extab :
    {
        *(.ARM.extab* .gnu.linkonce.armextab.*)
    } >FLASH

    .ARM :
    {
        __exidx_start = .;
        *(.ARM.exidx*)
        __exidx_end = .;
    } >FLASH

    /* C++ constructor/destructor tables */
    .preinit_array :
    {
        PROVIDE_HIDDEN(__preinit_array_start = .);
        KEEP(*(.preinit_array*))
        PROVIDE_HIDDEN(__preinit_array_end = .);
    } >FLASH

    .init_array :
    {
        PROVIDE_HIDDEN(__init_array_start = .);
        KEEP(*(SORT(.init_array.*)))
        KEEP(*(.init_array*))
        PROVIDE_HIDDEN(__init_array_end = .);
    } >FLASH

    .fini_array :
    {
        PROVIDE_HIDDEN(__fini_array_start = .);
        KEEP(*(SORT(.fini_array.*)))
        KEEP(*(.fini_array*))
        PROVIDE_HIDDEN(__fini_array_end = .);
    } >FLASH

    /* Data initialization values stored in Flash */
    _sidata = LOADADDR(.data);

    /* Initialized data - copied from Flash to RAM at startup */
    .data :
    {
        . = ALIGN(4);
        _sdata = .;
        *(.data)
        *(.data*)
        . = ALIGN(4);
        _edata = .;
    } >DTCM AT> FLASH

    /* Uninitialized data - zeroed at startup */
    .bss :
    {
        . = ALIGN(4);
        _sbss = .;
        __bss_start__ = _sbss;
        *(.bss)
        *(.bss*)
        *(COMMON)
        . = ALIGN(4);
        _ebss = .;
        __bss_end__ = _ebss;
    } >DTCM

    /* Heap */
    ._user_heap_stack :
    {
        . = ALIGN(8);
        PROVIDE(end = .);
        PROVIDE(_end = .);
        . = . + _Min_Heap_Size;
        . = . + _Min_Stack_Size;
        . = ALIGN(8);
    } >DTCM

    /* Stack pointer starts at end of DTCM */
    _estack = ORIGIN(DTCM) + LENGTH(DTCM);

    /* DMA buffers in D2 SRAM (needed for peripherals) */
    .dma_buffer (NOLOAD) :
    {
        . = ALIGN(4);
        *(.dma_buffer)
        *(.dma_buffer*)
        . = ALIGN(4);
    } >RAM_D2

    /* Audio buffers in AXI SRAM (large, cache-able) */
    .audio_buffer (NOLOAD) :
    {
        . = ALIGN(4);
        *(.audio_buffer)
        *(.audio_buffer*)
        . = ALIGN(4);
    } >RAM_D1

    /* Remove debug info from output */
    /DISCARD/ :
    {
        libc.a(*)
        libm.a(*)
        libgcc.a(*)
    }

    /* Debug sections */
    .ARM.attributes 0 : { *(.ARM.attributes) }
}
