cmake_minimum_required(VERSION 3.2)
project(template_example)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")

set(SOURCE_FILES main.cpp)
add_executable(template_example ${SOURCE_FILES})