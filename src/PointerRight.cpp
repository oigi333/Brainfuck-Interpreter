#include "PointerRight.h"

using namespace Brainfuck;

void PointerRight::Eval(Memory<int>&  mem)
{
    ++mem;
}