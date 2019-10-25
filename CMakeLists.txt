cmake_minimum_required(VERSION 3.13)
# Set project information
project(rose VERSION 0.0.1 LANGUAGES CXX)
set(PROJECT_BRIEF "A cross-platform, modular SDK for interacting with the Alexa Voice Service")

include(default.cmake)

configure_file (
        "${PROJECT_SOURCE_DIR}/AVSCommon/Utils/include/AVSCommon/Utils/SDKVersion.h.in"
        "${PROJECT_SOURCE_DIR}/AVSCommon/Utils/include/AVSCommon/Utils/SDKVersion.h"
)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(common)
add_subdirectory(interface)
add_subdirectory(framework)
add_subdirectory(services)
add_subdirectory(master)
add_subdirectory(examples)