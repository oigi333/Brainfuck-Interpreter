#include "Increment.h"

using namespace Brainfuck;

void Increment::Eval(Memory<int>& mem)
{
    (*mem)++;
}