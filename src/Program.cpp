#include "Program.h"

using namespace Brainfuck;

void Program::Eval(Memory<int>&  mem)
{
    for(auto op: operations)
    {
        op->Eval(mem);
    }
}

Program::Program(std::vector<Operation*> operations)
{
    this->operations.resize(operations.size());
    for(int i = 0; i < operations.size(); i++)
        this->operations[i] = std::shared_ptr<Operation>(operations[i]);
}