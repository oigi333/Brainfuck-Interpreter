#include <cstdio>
#include "Increment.h"
#include "Decrement.h"
#include "PointerLeft.h"
#include "PointerRight.h"
#include "Program.h"
#include "Loop.h"
#include "Parser.h"
#include "Print.h"

int main(int argc, char** argv)
{
	if(argc<2)
	{
		printf("Usage: BFI.exe <filename>");
		return 1;
	}
	Memory<int> mem(3000);
	Brainfuck::Parser parser(argv[1]);
	(parser.Parse())->Eval(mem);
	
	return 0;
}