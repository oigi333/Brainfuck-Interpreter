#pragma once

#include "utils/Memory.h"

namespace Brainfuck
{
    class Operation
    {
        public:
            virtual void Eval(Memory<int>& mem) = 0;
    };
}