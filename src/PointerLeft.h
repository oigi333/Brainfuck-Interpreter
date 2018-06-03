#pragma once

#include "Operation.h"

namespace Brainfuck
{
    class PointerLeft:
        public Operation
    {
        public:
            void Eval(Memory<int>&  mem);

    };
}
