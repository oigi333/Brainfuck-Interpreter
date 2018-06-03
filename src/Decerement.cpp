#include "Decrement.h"

using namespace Brainfuck;

void Decrement::Eval(Memory<int>&  mem)
{
    (*mem)--;
}