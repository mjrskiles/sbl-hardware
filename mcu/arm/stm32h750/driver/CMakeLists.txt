# STM32H750 Driver Library
# Provides GPIO, Timer, and init using SVD-generated register definitions
#
# Headers are structured as:
#   sbl/driver/gpio.hpp
#   sbl/driver/timer.hpp
#   sbl/driver/init.hpp
#   sbl/hw/reg/*.hpp (SVD-generated)
#
# Usage: #include <sbl/driver/gpio.hpp>

# Header-only interface library for drivers
add_library(sbl_stm32h750_driver INTERFACE)

target_include_directories(sbl_stm32h750_driver INTERFACE
    ${CMAKE_CURRENT_SOURCE_DIR}  # For <sbl/driver/*.hpp> and <sbl/hw/reg/*.hpp>
)

# Startup code library (compiled, not header-only)
add_library(sbl_stm32h750_startup STATIC
    ${CMAKE_CURRENT_SOURCE_DIR}/startup.cpp
)

target_include_directories(sbl_stm32h750_startup PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
)

# Linker script path (for use by applications)
set(SBL_STM32H750_LINKER_SCRIPT ${CMAKE_CURRENT_SOURCE_DIR}/stm32h750.ld CACHE STRING "STM32H750 linker script")

# Compile options for Cortex-M7 with FPU
target_compile_options(sbl_stm32h750_startup PRIVATE
    -mcpu=cortex-m7
    -mthumb
    -mfpu=fpv5-d16
    -mfloat-abi=hard
    -ffunction-sections
    -fdata-sections
    -fno-exceptions
    -fno-rtti
)

# Function to configure a target for STM32H750 bare-metal
function(sbl_configure_stm32h750_target TARGET)
    target_link_libraries(${TARGET} PRIVATE
        sbl_stm32h750_driver
        sbl_stm32h750_startup
    )

    target_compile_options(${TARGET} PRIVATE
        -mcpu=cortex-m7
        -mthumb
        -mfpu=fpv5-d16
        -mfloat-abi=hard
        -ffunction-sections
        -fdata-sections
        -fno-exceptions
        -fno-rtti
        -Wall
        -Wextra
        -Os
    )

    target_link_options(${TARGET} PRIVATE
        -mcpu=cortex-m7
        -mthumb
        -mfpu=fpv5-d16
        -mfloat-abi=hard
        -T${SBL_STM32H750_LINKER_SCRIPT}
        -Wl,--gc-sections
        -Wl,-Map=${TARGET}.map
        --specs=nosys.specs
        --specs=nano.specs
        -lc
        -lm
        -lnosys
    )

    # Generate .bin and .hex files
    add_custom_command(TARGET ${TARGET} POST_BUILD
        COMMAND ${CMAKE_OBJCOPY} -O binary $<TARGET_FILE:${TARGET}> ${TARGET}.bin
        COMMAND ${CMAKE_OBJCOPY} -O ihex $<TARGET_FILE:${TARGET}> ${TARGET}.hex
        COMMAND ${CMAKE_SIZE} $<TARGET_FILE:${TARGET}>
        COMMENT "Generating ${TARGET}.bin and ${TARGET}.hex"
    )
endfunction()
