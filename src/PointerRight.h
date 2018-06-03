#pragma once

#include "Operation.h"

namespace Brainfuck
{
    class PointerRight:
        public Operation
    {
        public:
            void Eval(Memory<int>&  mem);

    };
}
