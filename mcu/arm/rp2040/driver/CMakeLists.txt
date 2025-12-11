# RP2040 Driver Library
# Provides GPIO, Timer, and init wrappers around pico-sdk

add_library(sbl_rp2040_driver INTERFACE)

target_include_directories(sbl_rp2040_driver INTERFACE
    ${CMAKE_CURRENT_SOURCE_DIR}
)

target_link_libraries(sbl_rp2040_driver INTERFACE
    pico_stdlib
    hardware_gpio
)
