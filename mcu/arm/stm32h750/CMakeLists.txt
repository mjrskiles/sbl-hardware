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
    ${CMAKE_CURRENT_SOURCE_DIR}/driver/init.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/driver/sai.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/driver/soft_pwm.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/driver/timeout.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/driver/timer.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/driver/uart.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/driver/usb.hpp
)

# SVD-generated register headers
set(SBL_STM32H750_REG_HEADERS
    ${CMAKE_CURRENT_SOURCE_DIR}/reg/adc.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/reg/cortex_m.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/reg/dma.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/reg/flash.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/reg/gpio.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/reg/irq.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/reg/pwr.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/reg/rcc.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/reg/sai.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/reg/tim_basic.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/reg/usart.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/reg/usb_otg.hpp
)

# Copy headers to build include structure
file(COPY ${SBL_STM32H750_DRIVER_HEADERS} DESTINATION ${SBL_STM32H750_INCLUDE_DIR}/sbl/hw/driver)
file(COPY ${SBL_STM32H750_REG_HEADERS} DESTINATION ${SBL_STM32H750_INCLUDE_DIR}/sbl/hw/reg)

# Startup code (compiled)
add_library(sbl_stm32h750_startup STATIC
    ${CMAKE_CURRENT_SOURCE_DIR}/startup.cpp
)

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
    -Os
)

# Propagate link options to users
target_link_options(sbl_stm32h750_driver INTERFACE
    ${SBL_STM32H750_CPU_FLAGS}
    -T${SBL_STM32H750_LINKER_SCRIPT}
    -Wl,--gc-sections
    --specs=nosys.specs
    --specs=nano.specs
    -lc
    -lm
    -lnosys
)
