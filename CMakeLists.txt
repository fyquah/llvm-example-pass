cmake_minimum_required(VERSION 3.4)

project(my_first_pass)

set(LLVM_DIR "/Users/fyquah/dev/llvm/build")
set(LLVM_TOOLS_BINARY_DIR "/Users/fyquah/dev/llvm/build/include/bin")
add_subdirectory(hello)

include_directories("/Users/fyquah/dev/llvm/llvm/include")
link_directories(${LLVM_LINK_DIRS})
link_directories("/Users/fyquah/dev/llvm/build/lib")
add_definitions(${LLVM_DEFINITIONS})
