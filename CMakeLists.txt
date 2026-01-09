cmake_minimum_required(VERSION 3.13)

project(simple-compiler)

file(GLOB_RECURSE SOURCE_FILES src/*.cpp src/*.hpp)

set(CMAKE_CXX_STANDARD 23)

add_executable(compiler ${SOURCE_FILES})
