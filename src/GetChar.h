#pragma once

#include "Operation.h"

namespace Brainfuck
{
    class GetChar:
        public Operation
    {
        public:
            void Eval(Memory<int>&  mem);

    };
}
