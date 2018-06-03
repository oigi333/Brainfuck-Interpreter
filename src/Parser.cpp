#include "Parser.h"
#include <fstream>
#include <sstream>

using namespace Brainfuck;

Parser::Parser(std::string fileName)
{
    std::string file = static_cast<std::stringstream const&>(std::stringstream() << std::ifstream(fileName).rdbuf()).str();
    for(auto c: file)
    {
        if(c=='+'||c=='-'||c=='<'||c=='>'||c=='['||c==']'||c=='.'||c==',')
            this->file+=c;
    }
}

Operation* Parser::Parse()
{
    std::vector<Operation*> operations;
    std::vector<Operation*> loops;

    for(int i = 0; i < this->file.size(); i++)
    {
        char c = this->file[i];
        switch(c)
        {
            case '+':
                if(loops.size()>0)
                {
                    ((Loop*)loops[loops.size()-1])->Add(new Increment());
                }
                else
                    operations.push_back(new Increment());

                break;
            case '-':
                if(loops.size()>0)
                {
                    ((Loop*)loops[loops.size()-1])->Add(new Decrement());                    
                }
                else
                    operations.push_back(new Decrement());
                break;
            case '>':
                if(loops.size()>0)
                {
                    ((Loop*)loops[loops.size()-1])->Add(new PointerRight()); 
                }
                else
                    operations.push_back(new PointerRight());
                break;
            case '<':
                if(loops.size()>0)
                {
                    ((Loop*)loops[loops.size()-1])->Add(new PointerLeft());
                }
                else
                    operations.push_back(new PointerLeft());
                break;
            case '.':
                if(loops.size()>0)
                {
                    ((Loop*)loops[loops.size()-1])->Add(new Print());
                }
                else
                    operations.push_back(new Print());
                break;
            case ',':
                if(loops.size()>0)
                {
                    ((Loop*)loops[loops.size()-1])->Add(new GetChar());
                }
                else
                    operations.push_back(new GetChar());
                break;
            case '[':
                if(loops.size()==0)
                {
                    operations.push_back(new Loop());
                    loops.push_back(operations[operations.size()-1]);
                }
                else
                {
                    Operation* loop = new Loop();
                    ((Loop*)loops[loops.size()-1])->Add(loop);
                    loops.push_back(loop);
                }
                break;
            case ']':
                loops.pop_back();
                break;
            
        }
    }
    return new Program(operations);
}