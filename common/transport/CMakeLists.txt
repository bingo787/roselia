cmake_minimum_required(VERSION 3.1 FATAL_ERROR)
aux_source_directory(./channel/abstract SRCS)
add_library(rosetransport SHARED ${SRCS})