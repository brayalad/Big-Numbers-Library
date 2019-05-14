cmake_minimum_required(VERSION 3.1)
project(BigNum)

set(CMAKE_CXX_STANDARD 14)

add_subdirectory(lib/googletest-master)

include_directories(lib/googletest-master/googletest/include)
include_directories(lib/googletest-master/googlemock/include)


add_executable(BigNum main.cpp src/BigNumber.cpp src/include/BigNumber.h BigNumberTesting.cpp)
target_link_libraries(BigNum gtest gtest_main)

