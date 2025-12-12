# RP2040 Driver Library
# Provides GPIO, Timer, and init wrappers around pico-sdk
#
# Headers are structured as:
#   sbl/driver/gpio.hpp
#   sbl/driver/timer.hpp
#   sbl/driver/init.hpp
#
# Usage: #include <sbl/driver/gpio.hpp>

add_library(sbl_rp2040_driver INTERFACE)

target_include_directories(sbl_rp2040_driver INTERFACE
    ${CMAKE_CURRENT_SOURCE_DIR}  # For <sbl/driver/*.hpp> includes
)

target_link_libraries(sbl_rp2040_driver INTERFACE
    pico_stdlib
    hardware_gpio
)
