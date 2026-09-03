# STM32H750 Driver Library
# Provides GPIO, Timer, UART, DMA, and init using SVD-generated register definitions
#
# Source files are in driver/ and reg/ but exposed as:
#   <sbl/hw/driver/*.hpp>
#   <sbl/hw/reg/*.hpp>
# CMake copies them to the build include directory at configure time.
#
# Usage: target_link_libraries(my_app PRIVATE sbl_stm32h750_driver)
# This gives you headers, startup code, and linker configuration.

# Linker script path
set(SBL_STM32H750_LINKER_SCRIPT ${CMAKE_CURRENT_SOURCE_DIR}/stm32h750.ld)

# Cortex-M7 compile/link flags
set(SBL_STM32H750_CPU_FLAGS
    -mcpu=cortex-m7
    -mthumb
    -mfpu=fpv5-d16
    -mfloat-abi=hard
)

# Create include structure in build directory
set(SBL_STM32H750_INCLUDE_DIR ${CMAKE_CURRENT_BINARY_DIR}/include)
file(MAKE_DIRECTORY ${SBL_STM32H750_INCLUDE_DIR}/sbl/hw/driver)
file(MAKE_DIRECTORY ${SBL_STM32H750_INCLUDE_DIR}/sbl/hw/reg)

# Driver headers — explicit list so CMake re-runs configure when files change.
# Add new headers here (not GLOB) to avoid stale builds.
set(SBL_STM32H750_DRIVER_HEADERS
    ${CMAKE_CURRENT_SOURCE_DIR}/driver/adc.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/driver/clock.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/driver/dma.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/driver/dma_buffer.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/driver/gpio.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/driver/i2c.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/driver/init.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/driver/sai.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/driver/sdmmc.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/driver/sdram.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/driver/soft_pwm.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/driver/timeout.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/driver/timer.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/driver/timer_callback.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/driver/uart.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/driver/usb.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/driver/dwt.hpp
)

# SVD-generated register headers
set(SBL_STM32H750_REG_HEADERS
    ${CMAKE_CURRENT_SOURCE_DIR}/reg/adc.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/reg/axi.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/reg/cortex_m.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/reg/dbgmcu.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/reg/dma.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/reg/flash.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/reg/gpio.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/reg/i2c.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/reg/irq.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/reg/pwr.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/reg/rcc.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/reg/sai.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/reg/sdmmc.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/reg/tim_basic.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/reg/fmc.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/reg/usart.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/reg/usb_otg.hpp
)

# Copy headers to build include structure at build time.
# Using a custom command + stamp file ensures edits to source headers
# trigger recompilation of dependent targets (file(COPY) only runs at
# configure time, causing stale builds on header-only changes).
set(_STAMP ${CMAKE_CURRENT_BINARY_DIR}/headers_copied.stamp)
add_custom_command(
    OUTPUT ${_STAMP}
    COMMAND ${CMAKE_COMMAND} -E copy ${SBL_STM32H750_DRIVER_HEADERS} ${SBL_STM32H750_INCLUDE_DIR}/sbl/hw/driver/
    COMMAND ${CMAKE_COMMAND} -E copy ${SBL_STM32H750_REG_HEADERS} ${SBL_STM32H750_INCLUDE_DIR}/sbl/hw/reg/
    COMMAND ${CMAKE_COMMAND} -E touch ${_STAMP}
    DEPENDS ${SBL_STM32H750_DRIVER_HEADERS} ${SBL_STM32H750_REG_HEADERS}
    COMMENT "Copying STM32H750 driver/reg headers"
)
add_custom_target(sbl_stm32h750_copy_headers DEPENDS ${_STAMP})

# Keep configure-time copy for first build (custom command needs dirs to exist)
file(COPY ${SBL_STM32H750_DRIVER_HEADERS} DESTINATION ${SBL_STM32H750_INCLUDE_DIR}/sbl/hw/driver)
file(COPY ${SBL_STM32H750_REG_HEADERS} DESTINATION ${SBL_STM32H750_INCLUDE_DIR}/sbl/hw/reg)

# Startup code + malloc trap (compiled)
add_library(sbl_stm32h750_startup STATIC
    ${CMAKE_CURRENT_SOURCE_DIR}/startup.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/malloc_trap.cpp
)
add_dependencies(sbl_stm32h750_startup sbl_stm32h750_copy_headers)

target_include_directories(sbl_stm32h750_startup PUBLIC
    ${SBL_STM32H750_INCLUDE_DIR}
)

target_compile_options(sbl_stm32h750_startup PRIVATE
    ${SBL_STM32H750_CPU_FLAGS}
    -ffunction-sections
    -fdata-sections
    -fno-exceptions
    -fno-rtti
)

# Main driver library - "batteries included"
# Links to this target gets you everything needed for bare-metal STM32H750
add_library(sbl_stm32h750_driver INTERFACE)

target_include_directories(sbl_stm32h750_driver INTERFACE
    ${SBL_STM32H750_INCLUDE_DIR}
)

# Linking to driver automatically links startup
target_link_libraries(sbl_stm32h750_driver INTERFACE
    sbl_stm32h750_startup
)

# Propagate compile options to users
target_compile_options(sbl_stm32h750_driver INTERFACE
    ${SBL_STM32H750_CPU_FLAGS}
    -ffunction-sections
    -fdata-sections
    -fno-exceptions
    -fno-rtti
    -Wall
    -Wextra
    -O2
    -g
    # Real-time safety warnings (FDP-020)
    -Werror=vla                 # VLAs are stack bombs in ISR context
    -Wdouble-promotion          # Catch float→double on M7 (still safe but wasteful)
    -Wfloat-conversion          # Catch implicit float↔int
    -Wframe-larger-than=512     # Large stack frames in audio callbacks
    -Wstack-usage=1024          # Per-function stack budget
)

# Malloc trap: intercept heap allocations at link time (FDP-020)
# Default-on for all firmware — bare-metal audio must never allocate.
# Wraps both standard and newlib reentrant (_r) variants.
set(SBL_MALLOC_TRAP_FLAGS
    -Wl,--wrap=malloc
    -Wl,--wrap=free
    -Wl,--wrap=calloc
    -Wl,--wrap=realloc
    -Wl,--wrap=_malloc_r
    -Wl,--wrap=_free_r
    -Wl,--wrap=_calloc_r
    -Wl,--wrap=_realloc_r
)

# Propagate link options to users
target_link_options(sbl_stm32h750_driver INTERFACE
    ${SBL_STM32H750_CPU_FLAGS}
    -T${SBL_STM32H750_LINKER_SCRIPT}
    -Wl,--gc-sections
    ${SBL_MALLOC_TRAP_FLAGS}
    --specs=nosys.specs
    --specs=nano.specs
    -lc
    -lm
    -lnosys
)
