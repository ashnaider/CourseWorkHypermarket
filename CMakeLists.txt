cmake_minimum_required(VERSION 3.5.1)

project(Hypermarket)

set(SOURCE_EXE main)

set(CMAKE_CXX_STANDART 14)

include_directories(include)

file(GLOB SOURCES src/*.cpp)

add_executable(${SOURCE_EXE} ${SOURCES})






