# set(CMAKE_SHARED_LINKER_FLAGS "-L/usr/local/Cellar/llvm/3.8.1/lib -Wl,-search_paths_first -Wl,-headerpad_max_install_names")
# add_llvm_loadable_module(LLVMPassname MODULE Pass.cpp)

SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -Wall -fno-rtti")
add_library(LLVMBla MODULE Pass.cpp)

if(APPLE)
  set_target_properties(LLVMBla PROPERTIES
        LINK_FLAGS "-undefined dynamic_lookup"
    )
endif(APPLE)
