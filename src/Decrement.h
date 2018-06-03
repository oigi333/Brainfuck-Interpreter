#pragma once

#include "Operation.h"

namespace Brainfuck
{
    class Decrement:
        public Operation
    {
        public:
            void Eval(Memory<int>&  mem);

    };
}