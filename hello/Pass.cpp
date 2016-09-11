#include "llvm/Pass.h"
#include "llvm/IR/Function.h"
#include "llvm/Support/raw_ostream.h"

using namespace llvm;

namespace {


class GraphBuilder {
private:
    
public:
    GraphBuilder() {}
    void process_function(llvm::Function function) {}
};

class Hello : public llvm::ModulePass {
private:
    GraphBuilder graph_builder;
public:
    static char ID;
    Hello() : llvm::ModulePass(ID) {
    
    }
    bool runOnModule(llvm::Module &module) override {
        errs() << "Hello";
        // try construct a call graph ...
//         auto function_list = module.getFunctionList();
//         for (llvm::Function &function : function_list) {
//              function_list.getSubProgram();
//         }
        return false;
    }

}; // Hello
} // namespace

char Hello::ID = 0;
static RegisterPass<Hello> X("hello", "Hello World Pass",
                             false /* Only looks at CFG */,
                             false /* Analysis Pass */);
