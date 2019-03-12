#ifndef ARRAYS_1_H_INCLUDED
#define ARRAYS_1_H_INCLUDED
#include <iostream>
#include <cmath>
#include "predicates.h"
#define Vector std::vector<int> v{1, 1, 3, 4, 5, 6, 7, 1, 2, 10}

void print_array(int* array, int size_)
{
    for(int i = 0; i < size_; ++i)
    {
        std::cout << array[i] << std::endl;
    }
}

void print_array(int* arr, int first, int last)
{
    for(; first < last; ++first)
    {
        std::cout << arr[first] << std::endl;
    }
}

void iota(int* arr, int first, int last, int value)
{
    for(; first < last; ++first, ++value)
    {
        arr[first] = value;
    }
}

void fill_array(int* array, int first, int last)
{
    int temp = 1;
    for(; first < last; ++first, temp += 2)
    {
        array[first] = temp;
        std::cout << temp << std::endl;
    }
}

void fill_array_powers_2(int* array, int first, int last, int power)
{

    for(; first < last; ++first)
    {
        array[first] = pow(first, power);
    }
}

void reverse_order(int* array, int first, int last)
{
    for(; first < last; --last)
    {
        std::cout << array[last] << std::endl;
    }
}

void array14(int* array, int first, int last)
{
    if(first % 2 != 0)
    {
        ++first;
    }
    for(; first < last; first += 2)
    {
        std::cout << array[first] << std::endl;
    }
}
array14_1(int* array, int first, int last)
{
    if(first % 2 == 0)
    {
        ++first;
    }
    for(; first < last; first += 2)
    {
        std::cout << " " << array[first] << std::endl;
    }
}



void fill_array_fibonache (int* array, int first, int last)
{
    array [first++] = 0;
    array [first++] = 1;
    for (; first<last; ++first)
    {
        array [first] = array [first - 1] + array [first - 2];
    }
}

void counter(int* array, int size)
{
    for(int i = 0; i < size; ++i)
    {
        if(array[i] < array[9])
        {
            std::cout << array[i] << std::endl;
            return;
        }

    }
    std::cout << 0 << std::endl;
}

void array17(int* arr, int n)
{
    for(int i = 0, j = n - 1; i < n; ++i)
    {
        if(i % 3 == 0)
        {
            std::cout << arr[j--] << std::endl;
        }
    }
}

void array17_2(int* array, int first, int last)
{
    for(; first < last; ++first)
    {
        std::cout << array[first] << std::endl;
    }
}

void array21(int* array, int first, int last, int k, int l)
{
    int sum = 0;
    int i = 0;
    for(; first < k && k <= l && l < last; ++k, ++i)
    {
        sum =  sum + array[k];
    }
    std::cout << sum / i << std::endl;
}

void straight(int* array, int first, int last)
{
    for(; first < last; ++first)
    {
        std::cout << array[first] << std::endl;
    }
}

void back_(int* array, int first, int last)
{
    std::cout << array[3] << array[4] << std::endl;
    for(; first > last; --first)
    {
        std::cout << array[first] << std::endl;
    }
}

/*template <typename Iterator>
void array17(Iterator first, Iterator last)
{
    --last;
    for(int i = *first; i < last;)
    {
        for(int k = 0; k < 2; ++k)
        {
            std::cout << *first << std::endl;
            ++i;
        }

        for(int k = 0; k < 2; ++k)
        {
            std::cout << *last << std::endl;
            --last;
        }
    }
}*/

template <class Iterator, class UnaryPredicate>
void for_each(Iterator first, Iterator last, UnaryPredicate p)
{
    for(; first != last; ++first)
    {
        p(*first);
    }
}

template <class Iterator, class BinaryOperation>
Iterator counter(Iterator first, Iterator last, BinaryOperation op)
{
    int counter = 0;
    for(; first != last; ++first)
    {
        if(op(*first, *(first + 1)))
        {
            ++counter;
        }
    }
    return counter;
}

using BinaryPredicate = bool(*)(int, int);

int find_index(int* arr, int first, int last, BinaryPredicate p)
{
    for(; first < last; ++first)
    {
        if(p(arr[first], last))
        {
            return arr[first];
        }
    }
}

bool less_(int value, int number)
{
    if(value < number)
    {
        return value;
    }
}

bool higher(int value, int number)
{
    if(value > number)
    {
        return number;
    }
}

bool all(int value, int number)
{
    return all(less_(value,number), higher(value,number));
}

#endif // ARRAYS_1_H_INCLUDED




