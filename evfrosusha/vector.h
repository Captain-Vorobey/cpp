#ifndef VECTOR_H_INCLUDED
#define VECTOR_H_INCLUDED
#include <iostream>

struct Vector
{
    int* arr;
    int size;
    Vector()
    {
        arr = new int[500];
        size = 0;
    }

    void push_back(int value)
    {
        arr[size] = value;
        ++size;
    }

    void print()
    {
        for(int i = 0; i < size; ++i)
        {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
    }
};

#endif // VECTOR_H_INCLUDED
