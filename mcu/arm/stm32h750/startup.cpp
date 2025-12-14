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
    // ... additional handlers can be added as needed
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

    // STM32H7 peripheral interrupts (first 16)
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
    // Additional interrupt handlers would continue here...
    // Full STM32H7 has 150+ interrupts, add as needed
};
