cmake_minimum_required(VERSION 3.4)

SET(LLVM_DIR "/Users/fyquah/dev/llvm/build/lib/cmake/llvm")
SET(CMAKE_MODULE_PATH LLVM_CMAKE_DIR)
set(CMAKE_CXX_FLAGS "-std=c++11")

find_package(LLVM REQUIRED CONFIG)
list(APPEND CMAKE_MODULE_PATH "${LLVM_CMAKE_DIR}")
include(AddLLVM)

add_definitions(${LLVM_DEFINITIONS})
include_directories(${LLVM_INCLUDE_DIRS})

add_subdirectory(hello)
