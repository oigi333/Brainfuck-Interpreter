#pragma once

#include "Increment.h"
#include "Decrement.h"
#include "PointerLeft.h"
#include "PointerRight.h"
#include "Program.h"
#include "Print.h"
#include "Loop.h"
#include "GetChar.h"

#include <string>

namespace Brainfuck
{
    class Parser
    {
        std::string file;
        public:
            Parser(std::string fileName);

        Operation* Parse();
    };
}