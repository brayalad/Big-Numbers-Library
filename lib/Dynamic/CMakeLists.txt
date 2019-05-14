cmake_minimum_required(VERSION 3.14)
project(BigNumbers)

set(CMAKE_CXX_STANDARD 11)

add_library(BigNumbers SHARED src/BigNumber.cpp src/include/BigNumber.h)