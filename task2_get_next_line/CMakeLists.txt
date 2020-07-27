cmake_minimum_required(VERSION 3.13)
project(gnl_official)

set(CMAKE_CXX_STANDARD 14)

add_executable(my_gnl my_gnl.c)

find_library(FT ft my_gnl/lib)
target_link_libraries(my_gnl LINK_PUBLIC ${FT})
