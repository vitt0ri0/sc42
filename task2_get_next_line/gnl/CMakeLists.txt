cmake_minimum_required(VERSION 3.13)
project(gnl)

set(CMAKE_CXX_STANDARD 14)

add_executable(gnl get_next_line.c get_next_line_utils.c)
