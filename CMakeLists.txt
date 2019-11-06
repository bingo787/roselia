cmake_minimum_required(VERSION 3.1)
# Set project information
project(rose VERSION 0.0.1 LANGUAGES CXX)
set(PROJECT_BRIEF "A cross-platform, modular SDK for development robot")
set(PROJECT_ROOT_DIR ${CMAKE_CURRENT_SOURCE_DIR})

include(${PROJECT_SOURCE_DIR}/configure/default.cmake)

configure_file (
        "${PROJECT_SOURCE_DIR}/configure/config/default.json"
        "${PROJECT_SOURCE_DIR}/configure/config/default.json"
)


set(ROSE_SDK_INTERFACE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/interface/)
set(EXECUTABLE_OUTPUT_PATH ${ROSE_SDK_INTERFACE_DIR}/bin)
set(LIBRARY_OUTPUT_PATH ${ROSE_SDK_INTERFACE_DIR}/lib)

add_subdirectory(common)
add_subdirectory(framework)
add_subdirectory(services)
add_subdirectory(master)
add_subdirectory(examples)