#include "GetChar.h"

using namespace Brainfuck;

void GetChar::Eval(Memory<int>&  mem)
{
    *mem = getchar();
}