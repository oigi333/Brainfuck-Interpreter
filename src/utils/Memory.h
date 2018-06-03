#pragma once
#include <cstdio>

template<typename T>
class Memory
{
        T* memoryTable;
        int memoryPtr = 0;
    public:
        int Size;

        Memory(int size): Size(size)
        {
            memoryTable = new T[Size]{0};
        }
        ~Memory()
        {
            delete memoryTable;
        }

        int& operator*()
        {
            return memoryTable[memoryPtr];
        }
        Memory& operator++()
        {
            if(memoryPtr+1<Size)
                memoryPtr++;

            return *this;
        }
        Memory& operator--()
        {
            if(memoryPtr>0)
                memoryPtr--;

            return *this;
        }

        void ResetPtr()
        {
            memoryPtr = 0;
        }
        
};