#pragma once

#include "Operation.h"

namespace Brainfuck
{
    class Increment:
        public Operation
    {
        public:
            void Eval(Memory<int>&  mem);

    };
}