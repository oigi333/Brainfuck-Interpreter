#include "Print.h"

using namespace Brainfuck;

void Print::Eval(Memory<int>& mem)
{
    putc(*mem, stdout);
}