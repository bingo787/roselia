cmake_minimum_required(VERSION 3.1)

add_executable(rose_master main.cc)
target_include_directories(rose_master PUBLIC ${PROJECT_ROOT_DIR})
target_link_libraries(rose_master roselogger)