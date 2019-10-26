cmake_minimum_required(VERSION 3.1 FATAL_ERROR)
aux_source_directory(capability/speech SRCS)
add_library(roseframework SHARED ${SRCS})

target_include_directories(roseframework PUBLIC ${SDK_INTERFACE_INCLUDE_DIR})