# cmake_minimum_required(VERSION 3.4)

# SET(LLVM_DIR "/Users/fyquah/dev/llvm/build/lib/cmake/llvm")
# SET(LLVM_LIBRARY_DIRS "/Users/fyquah/dev/llvm/build/lib")
# SET(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} ${LLVM_DIR})
# set(CMAKE_CXX_FLAGS "-std=c++11 -Wall -fno-rtti")
# set(CMAKE_SHARED_LINKER_FLAGS "-L/Users/fyquah/dev/llvm/build/lib -Wl,-search_paths_first -Wl,-headerpad_max_install_names")

# find_package(LLVM)
# include(AddLLVM)
# 
# set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
# add_library(LLVMBla MODULE hello/Pass.cpp)
# 
# add_definitions(${LLVM_DEFINITIONS})
# include_directories(${LLVM_INCLUDE_DIRS})
# link_directories(${LLVM_LIBRARY_DIRS})
# 
# add_subdirectory(hello)


# find_package(LLVM REQUIRED CONFIG)
# 
# add_definitions(${LLVM_DEFINITIONS})
# include_directories(${LLVM_INCLUDE_DIRS})
# 
# add_subdirectory(Hello)

find_package(LLVM REQUIRED CONFIG)

add_definitions(${LLVM_DEFINITIONS})
include_directories(${LLVM_INCLUDE_DIRS})

add_subdirectory(hello)
