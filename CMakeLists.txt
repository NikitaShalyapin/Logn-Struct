cmake_minimum_required(VERSION 3.10)
project(TestLibDetail)

set(CMAKE_CXX_STANDARD 17)

add_executable(TestLibDetail main.cpp detail_rb_tree.h detail_logn_struct.h)