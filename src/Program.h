#pragma once

#include "Operation.h"
#include <vector>
#include <memory>

namespace Brainfuck
{
    class Program:
        public Operation
    {
        std::vector<std::shared_ptr<Operation>> operations;
    
        public:
            Program(std::vector<Operation*> operations);

            void Eval(Memory<int>& mem);

    };
}