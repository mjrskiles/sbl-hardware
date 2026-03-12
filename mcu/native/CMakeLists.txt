#[[
    CMakeLists.txt — Native simulator driver for SBL

    Provides sbl_native_driver target that links against miniaudio for
    real-time audio on Linux (ALSA/PulseAudio/JACK).

    Follows the STM32H750 pattern: copies driver headers to build/include/
    so that <sbl/hw/driver/*.hpp> includes resolve correctly.
]]

cmake_minimum_required(VERSION 3.21)

set(SBL_NATIVE_DRIVER_DIR ${CMAKE_CURRENT_SOURCE_DIR}/driver)

# --- Header copying (same pattern as stm32h750) ---

set(SBL_NATIVE_INCLUDE_DIR ${CMAKE_CURRENT_BINARY_DIR}/include)
file(MAKE_DIRECTORY ${SBL_NATIVE_INCLUDE_DIR}/sbl/hw/driver)

set(SBL_NATIVE_DRIVER_HEADERS
    ${SBL_NATIVE_DRIVER_DIR}/adc.hpp
    ${SBL_NATIVE_DRIVER_DIR}/dma_buffer.hpp
    ${SBL_NATIVE_DRIVER_DIR}/gpio.hpp
    ${SBL_NATIVE_DRIVER_DIR}/i2c.hpp
    ${SBL_NATIVE_DRIVER_DIR}/init.hpp
    ${SBL_NATIVE_DRIVER_DIR}/sai.hpp
    ${SBL_NATIVE_DRIVER_DIR}/sdmmc.hpp
    ${SBL_NATIVE_DRIVER_DIR}/sdram.hpp
    ${SBL_NATIVE_DRIVER_DIR}/timer.hpp
    ${SBL_NATIVE_DRIVER_DIR}/timer_callback.hpp
    ${SBL_NATIVE_DRIVER_DIR}/uart.hpp
    ${SBL_NATIVE_DRIVER_DIR}/usb.hpp
)

# C headers that need to be findable as <ff.h>
set(SBL_NATIVE_C_HEADERS
    ${SBL_NATIVE_DRIVER_DIR}/ff.h
)

set(_STAMP ${CMAKE_CURRENT_BINARY_DIR}/headers_copied.stamp)
add_custom_command(
    OUTPUT ${_STAMP}
    COMMAND ${CMAKE_COMMAND} -E copy ${SBL_NATIVE_DRIVER_HEADERS} ${SBL_NATIVE_INCLUDE_DIR}/sbl/hw/driver/
    COMMAND ${CMAKE_COMMAND} -E copy ${SBL_NATIVE_C_HEADERS} ${SBL_NATIVE_INCLUDE_DIR}/
    COMMAND ${CMAKE_COMMAND} -E touch ${_STAMP}
    DEPENDS ${SBL_NATIVE_DRIVER_HEADERS} ${SBL_NATIVE_C_HEADERS}
    COMMENT "Copying native driver headers"
)
add_custom_target(sbl_native_copy_headers DEPENDS ${_STAMP})

# Configure-time copy for first build
file(COPY ${SBL_NATIVE_DRIVER_HEADERS} DESTINATION ${SBL_NATIVE_INCLUDE_DIR}/sbl/hw/driver)
file(COPY ${SBL_NATIVE_C_HEADERS} DESTINATION ${SBL_NATIVE_INCLUDE_DIR})

# --- Driver library ---

add_library(sbl_native_driver STATIC
    ${SBL_NATIVE_DRIVER_DIR}/sai.cpp
    ${SBL_NATIVE_DRIVER_DIR}/usb_stubs.cpp
    ${SBL_NATIVE_DRIVER_DIR}/ff_stubs.c
)

add_dependencies(sbl_native_driver sbl_native_copy_headers)

# Include paths: build/include for <sbl/hw/driver/*.hpp> + SBL library src
target_include_directories(sbl_native_driver PUBLIC
    ${SBL_NATIVE_INCLUDE_DIR}
    $ENV{SBL_PATH}/src
)

# miniaudio: single-header library
target_include_directories(sbl_native_driver PRIVATE
    $ENV{SBL_PATH}/../external/miniaudio
)

# Host compile flags
target_compile_features(sbl_native_driver PUBLIC cxx_std_17)
target_compile_options(sbl_native_driver PUBLIC
    -O2 -g
    -Wall -Wextra -Wpedantic
    -Wno-unused-parameter
)

# miniaudio dependencies on Linux
target_link_libraries(sbl_native_driver PUBLIC
    pthread
    m
    dl
)
