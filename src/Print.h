#pragma once

#include "Operation.h"

namespace Brainfuck
{
    class Print:
        public Operation
    {
        public:
            void Eval(Memory<int>&  mem);

    };
}
