cmake_minimum_required(VERSION 3.1)
# Set project information
project(rose VERSION 0.0.1 LANGUAGES CXX)
set(PROJECT_BRIEF "A cross-platform, modular SDK for development robot")

include(build/default.cmake)

configure_file (
        "${PROJECT_SOURCE_DIR}/build/config/default.json"
        "${PROJECT_SOURCE_DIR}/build/config/default.json"
)

set(SDK_INTERFACE_INCLUDE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/interface/include)

add_subdirectory(common)
add_subdirectory(framework)
add_subdirectory(services)
add_subdirectory(master)
add_subdirectory(examples)