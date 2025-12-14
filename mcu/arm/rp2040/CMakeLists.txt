# RP2040 Driver Library
# Provides GPIO, Timer, UART, and init wrappers around pico-sdk
#
# Source files are in driver/ but exposed as <sbl/hw/driver/*.hpp>
# CMake copies them to the build include directory at configure time.
#
# Usage: #include <sbl/hw/driver/gpio.hpp>

add_library(sbl_rp2040_driver INTERFACE)

# Create include structure in build directory
set(SBL_RP2040_INCLUDE_DIR ${CMAKE_CURRENT_BINARY_DIR}/include)
file(MAKE_DIRECTORY ${SBL_RP2040_INCLUDE_DIR}/sbl/hw/driver)

# Copy driver headers to build include structure
file(GLOB SBL_RP2040_DRIVER_HEADERS ${CMAKE_CURRENT_SOURCE_DIR}/driver/*.hpp)
file(COPY ${SBL_RP2040_DRIVER_HEADERS} DESTINATION ${SBL_RP2040_INCLUDE_DIR}/sbl/hw/driver)

target_include_directories(sbl_rp2040_driver INTERFACE
    ${SBL_RP2040_INCLUDE_DIR}
)

target_link_libraries(sbl_rp2040_driver INTERFACE
    pico_stdlib
    hardware_gpio
)
