cmake_minimum_required(VERSION 3.1 FATAL_ERROR)

aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR} SRCS)
add_library(rosedatabase SHARED ${SRCS})