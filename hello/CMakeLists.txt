add_library(LLVMPassname MODULE Pass.cpp)
set(CMAKE_CXX_FLAGS "-std=c++11 -Wall -fno-rtti -D__STDC_CONSTANT_MACROS -D__STDC_LIMIT_MACROS -fPIC")
include_directories("/Users/fyquah/dev/llvm/llvm/include")
