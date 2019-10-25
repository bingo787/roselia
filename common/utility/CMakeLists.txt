cmake_minimum_required(VERSION 3.1 FATAL_ERROR)
aux_source_directory(./CRC/ SRCS)
add_library(roseutility SHARED ${SRCS})