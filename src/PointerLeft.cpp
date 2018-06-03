#include "PointerLeft.h"

using namespace Brainfuck;

void PointerLeft::Eval(Memory<int>&  mem)
{
    --mem;
}