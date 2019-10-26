cmake_minimum_required(VERSION 3.1 FATAL_ERROR)
aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR} SRCS)
add_library(roselogger SHARED ${SRCS})

target_include_directories(roselogger PUBLIC ./glog)
target_link_libraries(roselogger glog)
