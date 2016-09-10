add_library(LLVMPassname MODULE Pass.cpp)

set(CMAKE_CXX_FLAGS "-std=c++11 -Wall -fno-rtti -D__STDC_CONSTANT_MACROS -D__STDC_LIMIT_MACROS -fPIC")
set(LLVM_DIR "/Users/fyquah/dev/llvm/build")
set(LLVM_TOOLS_BINARY_DIR "/Users/fyquah/dev/llvm/build/include/bin")

include_directories("/Users/fyquah/dev/llvm/llvm/include")
include_directories("/Users/fyquah/dev/llvm/build/include")

link_directories(${LLVM_LINK_DIRS})
link_directories("/Users/fyquah/dev/llvm/build/lib")

add_definitions(${LLVM_DEFINITIONS})
