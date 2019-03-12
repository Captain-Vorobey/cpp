#ifndef ALGORITHMS_H_INCLUDED
#define ALGORITHMS_H_INCLUDED
#include "predicate.h"
#include "vector"

void print_array(int* array, int first, int last)
{
    for(; first != last; ++first)
    {
        std::cout << array[first] << " ";
    }
    std::cout << std::endl;
}

template<typename UnaryPredicate>
void fill_arrays(int* array, Vector& result1, Vector& result2, int size, UnaryPredicate p)
{
    for(int i = 0; i != size; ++i)
    {
        if(p(array[i]))
        {
            result1.push_back(array[i]);
        }
        else
        {
            result2.push_back(array[i]);
        }
    }
}

Vector f(int* arr, int size)
{
    Vector result;
    for(int i = 0; i < size; i = i + 2)
    {
        result.push_back(arr[i]);

    }
    for(int i = 1; i < size; i = i + 2)
    {
        result.push_back(arr[i]);

    }
    return result;
}
template <typename UnaryOperation>
int accumulate(int* array, int first, int last, UnaryOperation p)
{
    int sum = 0;
    for(; first != last; ++first)
    {
        if(p(array[first]))
        {
            sum += array[first];
        }
    }
    return sum;
}
template <typename UnaryPredicate>
bool count_if(int* array, int first, int last, UnaryPredicate p)
{
    int counter = 0;
    for(; first != last; ++first)
    {
        if(p(array[first]))
        {
            ++counter;
        }
    }
    return counter;
}

template <typename BinaryOperation>
int task8(int* array, int first, int last, BinaryOperation p)
{
    for(; first != last - 1; ++first)
    {
        if(p(array[first], array[first + 1]))
        {
            return array[first];
        }

    }
}

int task10(int* array, int first, int last)
{
    int result = count_if(array, 0, 10, is_negative);
    return result % 2 == 0;
}

#endif // ALGORITHMS_H_INCLUDED
