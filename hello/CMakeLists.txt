set(CMAKE_SHARED_LINKER_FLAGS "-L/usr/local/Cellar/llvm/3.8.1/lib -Wl,-search_paths_first -Wl,-headerpad_max_install_names")
add_llvm_loadable_module(LLVMPassname MODULE Pass.cpp)
