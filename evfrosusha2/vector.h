#ifndef VECTOR_H_INCLUDED
#define VECTOR_H_INCLUDED
#include "algorithms.h"
#include "predicate.h"

struct Vector
{
    int* array;
    int size;
    Vector()
    {
        array = new int[500];
        size = 0;
    }
    void push_back(int value)
    {
        array[size] = value;
        ++size;
    }
    void print()
    {
        for(int i = 0; i < size; ++i)
        {
            std::cout << array[i] << " ";
        }
        std::cout << std::endl;
    }

};



#endif // VECTOR_H_INCLUDED
