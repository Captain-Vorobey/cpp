#ifndef ARRAYS_1_H_INCLUDED
#define ARRAYS_1_H_INCLUDED
#include <iostream>
#include <cmath>

void print_array(int* arr, int size_)
{
    for(int i = 0; i < size_; ++i)
    {
        std::cout << arr[i] << std::endl;
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


#endif // ARRAYS_1_H_INCLUDED







