/**
 * @file startup.cpp
 * @brief STM32H750 bare-metal startup code
 *
 * Provides reset handler and vector table for bare-metal operation.
 * No HAL or vendor dependencies.
 */

#include <cstdint>
#include <cstring>

// Linker-provided symbols
extern "C" {
    extern uint32_t _estack;      // End of stack (top of RAM)
    extern uint32_t _sidata;      // Start of .data initialization values (in Flash)
    extern uint32_t _sdata;       // Start of .data section (in RAM)
    extern uint32_t _edata;       // End of .data section
    extern uint32_t _sbss;        // Start of .bss section
    extern uint32_t _ebss;        // End of .bss section
    extern uint32_t _sdma_buffer; // Start of .dma_buffer section (RAM_D2)
    extern uint32_t _edma_buffer; // End of .dma_buffer section

    // System core clock - required by TinyUSB
    // Daisy Seed runs at 480MHz but boots with HSI (64MHz) until PLL init
    uint32_t SystemCoreClock = 64000000;

    // Main entry point
    int main();

    // Default handler for unused interrupts
    void Default_Handler();

    // Core exception handlers
    void Reset_Handler();
    void NMI_Handler()          __attribute__((weak, alias("Default_Handler")));
    void HardFault_Handler()    __attribute__((weak, alias("Default_Handler")));
    void MemManage_Handler()    __attribute__((weak, alias("Default_Handler")));
    void BusFault_Handler()     __attribute__((weak, alias("Default_Handler")));
    void UsageFault_Handler()   __attribute__((weak, alias("Default_Handler")));
    void SVC_Handler()          __attribute__((weak, alias("Default_Handler")));
    void DebugMon_Handler()     __attribute__((weak, alias("Default_Handler")));
    void PendSV_Handler()       __attribute__((weak, alias("Default_Handler")));
    void SysTick_Handler()      __attribute__((weak, alias("Default_Handler")));

    // STM32H7 peripheral interrupt handlers (weak, can be overridden)
    void WWDG_IRQHandler()              __attribute__((weak, alias("Default_Handler")));
    void PVD_AVD_IRQHandler()           __attribute__((weak, alias("Default_Handler")));
    void TAMP_STAMP_IRQHandler()        __attribute__((weak, alias("Default_Handler")));
    void RTC_WKUP_IRQHandler()          __attribute__((weak, alias("Default_Handler")));
    void FLASH_IRQHandler()             __attribute__((weak, alias("Default_Handler")));
    void RCC_IRQHandler()               __attribute__((weak, alias("Default_Handler")));
    void EXTI0_IRQHandler()             __attribute__((weak, alias("Default_Handler")));
    void EXTI1_IRQHandler()             __attribute__((weak, alias("Default_Handler")));
    void EXTI2_IRQHandler()             __attribute__((weak, alias("Default_Handler")));
    void EXTI3_IRQHandler()             __attribute__((weak, alias("Default_Handler")));
    void EXTI4_IRQHandler()             __attribute__((weak, alias("Default_Handler")));
    void DMA1_Stream0_IRQHandler()      __attribute__((weak, alias("Default_Handler")));
    void DMA1_Stream1_IRQHandler()      __attribute__((weak, alias("Default_Handler")));
    void DMA1_Stream2_IRQHandler()      __attribute__((weak, alias("Default_Handler")));
    void DMA1_Stream3_IRQHandler()      __attribute__((weak, alias("Default_Handler")));
    void DMA1_Stream4_IRQHandler()      __attribute__((weak, alias("Default_Handler")));
    void DMA1_Stream5_IRQHandler()      __attribute__((weak, alias("Default_Handler")));
    void DMA1_Stream6_IRQHandler()      __attribute__((weak, alias("Default_Handler")));
    void ADC_IRQHandler()               __attribute__((weak, alias("Default_Handler")));

    // DMA1 stream 7 (IRQ 47, non-contiguous with streams 0-6)
    void DMA1_Stream7_IRQHandler()      __attribute__((weak, alias("Default_Handler")));

    // DMA2 streams (IRQs 56-60, 68-70)
    void DMA2_Stream0_IRQHandler()      __attribute__((weak, alias("Default_Handler")));
    void DMA2_Stream1_IRQHandler()      __attribute__((weak, alias("Default_Handler")));
    void DMA2_Stream2_IRQHandler()      __attribute__((weak, alias("Default_Handler")));
    void DMA2_Stream3_IRQHandler()      __attribute__((weak, alias("Default_Handler")));
    void DMA2_Stream4_IRQHandler()      __attribute__((weak, alias("Default_Handler")));
    void DMA2_Stream5_IRQHandler()      __attribute__((weak, alias("Default_Handler")));
    void DMA2_Stream6_IRQHandler()      __attribute__((weak, alias("Default_Handler")));
    void DMA2_Stream7_IRQHandler()      __attribute__((weak, alias("Default_Handler")));

    // TIM6/TIM7 interrupt handlers
    void TIM6_DAC_IRQHandler()       __attribute__((weak, alias("Default_Handler")));
    void TIM7_IRQHandler()           __attribute__((weak, alias("Default_Handler")));

    // USB OTG interrupt handlers
    // USB1_OTG_HS (at 0x40040000) - NOT used by Daisy Seed
    void OTG_HS_EP1_OUT_IRQHandler() __attribute__((weak, alias("Default_Handler")));
    void OTG_HS_EP1_IN_IRQHandler()  __attribute__((weak, alias("Default_Handler")));
    void OTG_HS_IRQHandler()         __attribute__((weak, alias("Default_Handler")));

    // USB2_OTG_FS (at 0x40080000) - USED by Daisy Seed on PA11/PA12!
    // USB2 only has one IRQ (101), no separate EP1 IRQs. Positions 99-100 are other peripherals.
    void OTG_FS_IRQHandler() __attribute__((weak, alias("Default_Handler")));  // USB2 main - position 101

    // USART interrupt handlers (overridden by uart_irq.cpp when linked)
    void USART1_IRQHandler()        __attribute__((weak, alias("Default_Handler")));
    void USART2_IRQHandler()        __attribute__((weak, alias("Default_Handler")));
    void USART3_IRQHandler()        __attribute__((weak, alias("Default_Handler")));
    void USART6_IRQHandler()        __attribute__((weak, alias("Default_Handler")));
}

/**
 * @brief Default interrupt handler
 *
 * Enters infinite loop. Override in application for proper handling.
 */
void Default_Handler() {
    while (true) {
        __asm__ volatile("bkpt #0");  // Breakpoint for debugger
    }
}

// Minimal delay for debug blinking
static void debug_delay() {
    for (volatile uint32_t i = 0; i < 500000; ++i) {
        __asm__ volatile("nop");
    }
}

/**
 * @brief Reset handler - entry point after reset
 *
 * Initializes .data and .bss sections, then calls main().
 */
void Reset_Handler() {
    // IMMEDIATE LED DEBUG: Blink LED 3 times before anything else
    // This confirms the CPU is executing code from flash
    // GPIOC PC7 is the Daisy Seed LED
    constexpr uint32_t RCC_BASE = 0x58024400;
    constexpr uint32_t GPIOC_BASE = 0x58020800;

    volatile uint32_t& RCC_AHB4ENR = *reinterpret_cast<volatile uint32_t*>(RCC_BASE + 0xE0);
    volatile uint32_t& GPIOC_MODER = *reinterpret_cast<volatile uint32_t*>(GPIOC_BASE + 0x00);
    volatile uint32_t& GPIOC_ODR = *reinterpret_cast<volatile uint32_t*>(GPIOC_BASE + 0x14);

    // Enable GPIOC clock
    RCC_AHB4ENR |= (1u << 2);

    // Small delay for clock to stabilize
    for (volatile int i = 0; i < 1000; ++i) { __asm__ volatile("nop"); }

    // Configure PC7 as output
    GPIOC_MODER &= ~(3u << 14);
    GPIOC_MODER |= (1u << 14);

    // Blink 3 times fast to indicate we're alive
    for (int blink = 0; blink < 6; ++blink) {
        GPIOC_ODR ^= (1u << 7);
        debug_delay();
    }

    // Copy .data section from Flash to RAM
    uint32_t* src = &_sidata;
    uint32_t* dst = &_sdata;
    while (dst < &_edata) {
        *dst++ = *src++;
    }

    // Zero .bss section
    dst = &_sbss;
    while (dst < &_ebss) {
        *dst++ = 0;
    }

    // Zero .dma_buffer section (RAM_D2, NOLOAD — no flash LMA)
    dst = &_sdma_buffer;
    while (dst < &_edma_buffer) {
        *dst++ = 0;
    }

    // Enable FPU (Cortex-M7 with FPU)
    // Set CP10 and CP11 to full access
    *reinterpret_cast<volatile uint32_t*>(0xE000ED88) |= (0xFu << 20);

    // Data and instruction synchronization barriers
    __asm__ volatile("dsb");
    __asm__ volatile("isb");

    // Call C++ constructors for static objects
    // (if using static constructors, add __libc_init_array call here)

    // Call main
    main();

    // If main returns, loop forever
    while (true) {
        __asm__ volatile("wfi");
    }
}

/**
 * @brief Vector table
 *
 * Placed at start of Flash (0x08000000) by linker script.
 * First entry is initial stack pointer, second is reset handler.
 */
__attribute__((section(".isr_vector")))
const void* const vector_table[] = {
    // Initial stack pointer
    reinterpret_cast<void*>(&_estack),

    // Core exceptions
    reinterpret_cast<void*>(Reset_Handler),
    reinterpret_cast<void*>(NMI_Handler),
    reinterpret_cast<void*>(HardFault_Handler),
    reinterpret_cast<void*>(MemManage_Handler),
    reinterpret_cast<void*>(BusFault_Handler),
    reinterpret_cast<void*>(UsageFault_Handler),
    nullptr,  // Reserved
    nullptr,  // Reserved
    nullptr,  // Reserved
    nullptr,  // Reserved
    reinterpret_cast<void*>(SVC_Handler),
    reinterpret_cast<void*>(DebugMon_Handler),
    nullptr,  // Reserved
    reinterpret_cast<void*>(PendSV_Handler),
    reinterpret_cast<void*>(SysTick_Handler),

    // STM32H7 peripheral interrupts
    // Full table up to USB OTG FS at position 101
    reinterpret_cast<void*>(WWDG_IRQHandler),           // 0
    reinterpret_cast<void*>(PVD_AVD_IRQHandler),        // 1
    reinterpret_cast<void*>(TAMP_STAMP_IRQHandler),     // 2
    reinterpret_cast<void*>(RTC_WKUP_IRQHandler),       // 3
    reinterpret_cast<void*>(FLASH_IRQHandler),          // 4
    reinterpret_cast<void*>(RCC_IRQHandler),            // 5
    reinterpret_cast<void*>(EXTI0_IRQHandler),          // 6
    reinterpret_cast<void*>(EXTI1_IRQHandler),          // 7
    reinterpret_cast<void*>(EXTI2_IRQHandler),          // 8
    reinterpret_cast<void*>(EXTI3_IRQHandler),          // 9
    reinterpret_cast<void*>(EXTI4_IRQHandler),          // 10
    reinterpret_cast<void*>(DMA1_Stream0_IRQHandler),   // 11
    reinterpret_cast<void*>(DMA1_Stream1_IRQHandler),   // 12
    reinterpret_cast<void*>(DMA1_Stream2_IRQHandler),   // 13
    reinterpret_cast<void*>(DMA1_Stream3_IRQHandler),   // 14
    reinterpret_cast<void*>(DMA1_Stream4_IRQHandler),   // 15
    reinterpret_cast<void*>(DMA1_Stream5_IRQHandler),   // 16
    reinterpret_cast<void*>(DMA1_Stream6_IRQHandler),   // 17
    reinterpret_cast<void*>(ADC_IRQHandler),            // 18
    reinterpret_cast<void*>(Default_Handler),           // 19
    reinterpret_cast<void*>(Default_Handler),           // 20
    reinterpret_cast<void*>(Default_Handler),           // 21
    reinterpret_cast<void*>(Default_Handler),           // 22
    reinterpret_cast<void*>(Default_Handler),           // 23
    reinterpret_cast<void*>(Default_Handler),           // 24
    reinterpret_cast<void*>(Default_Handler),           // 25
    reinterpret_cast<void*>(Default_Handler),           // 26
    reinterpret_cast<void*>(Default_Handler),           // 27
    reinterpret_cast<void*>(Default_Handler),           // 28
    reinterpret_cast<void*>(Default_Handler),           // 29
    reinterpret_cast<void*>(Default_Handler),           // 30
    reinterpret_cast<void*>(Default_Handler),           // 31
    reinterpret_cast<void*>(Default_Handler),           // 32
    reinterpret_cast<void*>(Default_Handler),           // 33
    reinterpret_cast<void*>(Default_Handler),           // 34
    reinterpret_cast<void*>(Default_Handler),           // 35
    reinterpret_cast<void*>(Default_Handler),           // 36
    reinterpret_cast<void*>(USART1_IRQHandler),         // 37 - USART1
    reinterpret_cast<void*>(USART2_IRQHandler),         // 38 - USART2
    reinterpret_cast<void*>(USART3_IRQHandler),         // 39 - USART3
    reinterpret_cast<void*>(Default_Handler),           // 40
    reinterpret_cast<void*>(Default_Handler),           // 41
    reinterpret_cast<void*>(Default_Handler),           // 42
    reinterpret_cast<void*>(Default_Handler),           // 43
    reinterpret_cast<void*>(Default_Handler),           // 44
    reinterpret_cast<void*>(Default_Handler),           // 45
    reinterpret_cast<void*>(Default_Handler),           // 46
    reinterpret_cast<void*>(DMA1_Stream7_IRQHandler),    // 47 - DMA1 stream 7
    reinterpret_cast<void*>(Default_Handler),           // 48
    reinterpret_cast<void*>(Default_Handler),           // 49
    reinterpret_cast<void*>(Default_Handler),           // 50
    reinterpret_cast<void*>(Default_Handler),           // 51
    reinterpret_cast<void*>(Default_Handler),           // 52
    reinterpret_cast<void*>(Default_Handler),           // 53
    reinterpret_cast<void*>(TIM6_DAC_IRQHandler),        // 54 - TIM6 / DAC
    reinterpret_cast<void*>(TIM7_IRQHandler),            // 55 - TIM7
    reinterpret_cast<void*>(DMA2_Stream0_IRQHandler),    // 56 - DMA2 stream 0
    reinterpret_cast<void*>(DMA2_Stream1_IRQHandler),    // 57 - DMA2 stream 1
    reinterpret_cast<void*>(DMA2_Stream2_IRQHandler),    // 58 - DMA2 stream 2
    reinterpret_cast<void*>(DMA2_Stream3_IRQHandler),    // 59 - DMA2 stream 3
    reinterpret_cast<void*>(DMA2_Stream4_IRQHandler),    // 60 - DMA2 stream 4
    reinterpret_cast<void*>(Default_Handler),           // 61
    reinterpret_cast<void*>(Default_Handler),           // 62
    reinterpret_cast<void*>(Default_Handler),           // 63
    reinterpret_cast<void*>(Default_Handler),           // 64
    reinterpret_cast<void*>(Default_Handler),           // 65
    reinterpret_cast<void*>(Default_Handler),           // 66
    reinterpret_cast<void*>(Default_Handler),           // 67
    reinterpret_cast<void*>(DMA2_Stream5_IRQHandler),    // 68 - DMA2 stream 5
    reinterpret_cast<void*>(DMA2_Stream6_IRQHandler),    // 69 - DMA2 stream 6
    reinterpret_cast<void*>(DMA2_Stream7_IRQHandler),    // 70 - DMA2 stream 7
    reinterpret_cast<void*>(USART6_IRQHandler),         // 71 - USART6
    reinterpret_cast<void*>(Default_Handler),           // 72
    reinterpret_cast<void*>(Default_Handler),           // 73
    reinterpret_cast<void*>(OTG_HS_EP1_OUT_IRQHandler),  // 74 - USB1 EP1 OUT
    reinterpret_cast<void*>(OTG_HS_EP1_IN_IRQHandler),  // 75 - USB1 EP1 IN
    reinterpret_cast<void*>(Default_Handler),           // 76 - USB1 WKUP (unused)
    reinterpret_cast<void*>(OTG_HS_IRQHandler),         // 77 - USB1 OTG HS
    reinterpret_cast<void*>(Default_Handler),           // 78
    reinterpret_cast<void*>(Default_Handler),           // 79
    reinterpret_cast<void*>(Default_Handler),           // 80
    reinterpret_cast<void*>(Default_Handler),           // 81
    reinterpret_cast<void*>(Default_Handler),           // 82
    reinterpret_cast<void*>(Default_Handler),           // 83
    reinterpret_cast<void*>(Default_Handler),           // 84
    reinterpret_cast<void*>(Default_Handler),           // 85
    reinterpret_cast<void*>(Default_Handler),           // 86
    reinterpret_cast<void*>(Default_Handler),           // 87
    reinterpret_cast<void*>(Default_Handler),           // 88
    reinterpret_cast<void*>(Default_Handler),           // 89
    reinterpret_cast<void*>(Default_Handler),           // 90
    reinterpret_cast<void*>(Default_Handler),           // 91
    reinterpret_cast<void*>(Default_Handler),           // 92
    reinterpret_cast<void*>(Default_Handler),           // 93
    reinterpret_cast<void*>(Default_Handler),           // 94
    reinterpret_cast<void*>(Default_Handler),           // 95
    reinterpret_cast<void*>(Default_Handler),           // 96
    reinterpret_cast<void*>(Default_Handler),           // 97
    reinterpret_cast<void*>(Default_Handler),           // 98
    reinterpret_cast<void*>(Default_Handler),           // 99 - Reserved (not USB2)
    reinterpret_cast<void*>(Default_Handler),           // 100 - Reserved (not USB2)
    reinterpret_cast<void*>(OTG_FS_IRQHandler),         // 101 - USB2 OTG FS (used by Daisy Seed!)
};
