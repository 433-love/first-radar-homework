cmake_minimum_required(VERSION 3.11)

project(fib)

include_directories(include)

add_executable(fib src/main.cpp src/fib.cpp)