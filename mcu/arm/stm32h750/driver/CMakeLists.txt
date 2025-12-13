# STM32H750 Driver Library
# Provides GPIO, Timer, and init using SVD-generated register definitions
#
# Headers are structured as:
#   sbl/driver/gpio.hpp
#   sbl/driver/timer.hpp
#   sbl/driver/init.hpp
#   sbl/hw/reg/*.hpp (SVD-generated)
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

# Startup code (compiled)
add_library(sbl_stm32h750_startup STATIC
    ${CMAKE_CURRENT_SOURCE_DIR}/startup.cpp
)

target_include_directories(sbl_stm32h750_startup PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
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
    ${CMAKE_CURRENT_SOURCE_DIR}  # For <sbl/driver/*.hpp> and <sbl/hw/reg/*.hpp>
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
