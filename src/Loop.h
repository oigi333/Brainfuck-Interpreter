#pragma once

#include "Operation.h"
#include <vector>
#include <memory>

namespace Brainfuck
{
    class Loop:
        public Operation
    {
        std::vector<std::shared_ptr<Operation>> operations;
    
        public:
            Loop(std::vector<Operation*> operations);
            Loop();

            void Eval(Memory<int>& mem);

            void Add(Operation* operation);

    };
}