cmake_minimum_required(VERSION 3.13)
project(task2_get_next_line)

set(CMAKE_CXX_STANDARD 14)

add_executable(task2_get_next_line gnl_main.c gnl/get_next_line_utils.c gnl/get_next_line.c)

find_library(FT ft my_gnl/lib)
target_link_libraries(task2_get_next_line LINK_PUBLIC ${FT})
