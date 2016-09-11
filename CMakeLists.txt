cmake_minimum_required(VERSION 3.4)

SET(LLVM_DIR "/usr/local/Cellar/llvm/3.8.1/share/llvm/cmake")
SET(CMAKE_MODULE_PATH LLVM_CMAKE_DIR)
set(CMAKE_CXX_FLAGS "-std=c++11 -Wall -fno-rtti")
set(CMAKE_SHARED_LINKER_FLAGS "-L/usr/local/Cellar/llvm/3.8.1/lib -Wl,-search_paths_first -Wl,-headerpad_max_install_names")

find_package(LLVM REQUIRED CONFIG)
list(APPEND CMAKE_MODULE_PATH "${LLVM_CMAKE_DIR}")
include(AddLLVM)

add_definitions(${LLVM_DEFINITIONS})
include_directories(${LLVM_INCLUDE_DIRS})

add_subdirectory(hello)
