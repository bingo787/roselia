cmake_minimum_required(VERSION 3.1 FATAL_ERROR)
aux_source_directory(capability/speech SRCS)
add_library(roseframework SHARED ${SRCS})

target_include_directories(roseframework PUBLIC ${ROSE_SDK_INTERFACE_DIR}/include)

install()