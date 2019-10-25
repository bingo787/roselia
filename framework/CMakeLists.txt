cmake_minimum_required(VERSION 3.1 FATAL_ERROR)
aux_source_directory(./capability_agents/speech SRCS)
add_library(roseframework SHARED ${SRCS})