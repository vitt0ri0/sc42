cmake_minimum_required(VERSION 3.13)
project(test_gnl)

set(CMAKE_CXX_STANDARD 14)

add_executable(test_gnl my_gnl.c)

find_library(FT ft lib)
target_link_libraries(test_gnl LINK_PUBLIC ${FT})
