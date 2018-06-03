#include "Loop.h"

using namespace Brainfuck;

Loop::Loop()
{

}

Loop::Loop(std::vector<Operation*> operations)
{
    this->operations.resize(operations.size());
    for(int i = 0; i < operations.size(); i++)
        this->operations[i] = std::shared_ptr<Operation>(operations[i]);
}

void Loop::Eval(Memory<int>& mem)
{
    while((*mem)>0)
    {
        for(auto op: operations)
        {
            op->Eval(mem);
        }
        
    }
    
}

void Loop::Add(Operation* operation)
{
    operations.push_back(std::shared_ptr<Operation>(operation));
}