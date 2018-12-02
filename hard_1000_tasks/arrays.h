#ifndef ARRAYS_H_INCLUDED
#define ARRAYS_H_INCLUDED
#include <cmath>
#include <iostream>

void print_array(int* first, int* last) // 1
{
    for(; first != last; ++first)
    {
        std::cout << *first << std::endl;
    }
}

void fill_powers_2(int* first, int* last, int value) // 2
{
    for(int i = 1; first != last; ++first, ++i)
    {
        *first = pow(value, i);
        std::cout << *first << std::endl;
    }
}

void arithmetic_average(int* first, int* last, int a, int d)
{
    for(int i = 0; first != last; ++first, ++i)
    {
        *first = a + d *i;
        std::cout << *first << std::endl;
    }
}

void pow_arithmetic_average(int* first, int* last, int a, int d)
{
    for(int i = 1; first != last; ++first, ++i)
    {
        *first = a * pow(d, i);
        std::cout << *first << std::endl;
    }
}

template <class T, class Iterator, class BinaryOperation>
T accumulate(Iterator first, Iterator last, T init, BinaryOperation op)
{
    for(; first != last; ++first)
    {
        init = op(init, *first);
    }
    return init;
}

template <class T, class Iterator>
T average(Iterator first, Iterator last)
{
    return (accumulate(first, last, 0,[](int a, int b){return a + b;})) / (last - first);
}

int f(int a, int d, int i)
{
    return a + d * i;
}

int f1(int a, int d, int i)
{
    return a * std::pow(d,i);
}


void array17(int* array, int first, int last)
{
    int j = last - 1;
    for(int i = first; ; ++first)
    {
        for(int k = 0; k <= 2; ++k)
        {
            std::cout << i << std::endl;
            ++i;
        }
        for(int k = 0; k <= 2; ++k)
        {
            std::cout << j << std::endl;
            --j;
        }
    }
}



#endif // ARRAYS_H_INCLUDED
