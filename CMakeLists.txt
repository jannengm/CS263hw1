cmake_minimum_required(VERSION 3.3)
project(CS263hw1)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main-rat.cpp RationalNumber.cpp RationalNumber.h)
add_executable(CS263hw1 ${SOURCE_FILES})