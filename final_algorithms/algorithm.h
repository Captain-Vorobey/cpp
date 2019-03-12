#ifndef ALGORITHM_H_INCLUDED
#define ALGORITHM_H_INCLUDED
#include <algorithm>
#include "type_traits.h"
#include <cassert>

namespace stu
{

template <class Iterator, class UnaryPredicate>
bool all_of(Iterator first, Iterator last, UnaryPredicate p)
{
    for(; first != last; ++first)
    {
        if(!p(*first))
        {
            return false;
        }
    }
    return true;
}

template <class Iterator, class UnaryPredicate>
int any_of(Iterator first, Iterator last, UnaryPredicate p)
{
    for(; first != last; ++first)
    {
        if(p(*first))
        {
            return first;
        }
    }
    return last;
}

template <class Iterator, class UnaryPredicate>
bool none_of(Iterator first, Iterator last, UnaryPredicate p)
{
    for(; first != last; ++first)
    {
        if(p(*first))
        {
            return false;
        }
    }
    return true;
}

template <class T, class Iterator>
Iterator find(Iterator first, Iterator last, T value)
{
    for(; first != last; ++first)
    {
        if(*first == value)
        {
            return first;
        }
    }
    return first;
}

template <typename Iterator, typename UnaryPredicate>
Iterator find_if(Iterator first, Iterator last, UnaryPredicate op)
{
    assert(stu::is_pointer<Iterator>::value);

    for(; first != last; ++first)
    {
        if(p(*first))
        {
            return first;
        }
    }
    return last;
}

template <class Iterator, class UnaryFunction>
UnaryFunction for_each(Iterator first, Iterator last, UnaryFunction f)
{
    for(; first != last; ++first)
    {
        f(*first);
    }
    return f;
}


int my_binary_search(int* array, int left, int right, int key)
{
    int middle;
    while(left <= right)
    {
        middle = (left + right) / 2;
        if(key < array[middle])
        {
            right = middle - 1;
        }
        if(key > array[middle])
        {
            left = middle + 1;
        }
        if(key == middle)
        {
            return middle;
        }
    }
    return -1;
}

}

void insertion_sort(int* array, int size)
{
    for(int i = 1; i < size; ++i)
    {
        int temp = array[i];
        for(int j = i - 1; j > 0; --j)
        {
            if(temp > array[j])
            {
                break;
            }
            array[j + 1] = array[j];
            array[j] = temp;
            std::cout << temp << " ";
        }
    }
}

/*void sort_(int* array, int size, int key)
{
    int min_el = 0;
    int index = 0;
    for(int i = 0; i < size; ++i)
    {
        for(int j = i + 1; j < size; ++j)
        {
            if(min_el > array[i])
            {
                min_el = array[i];
                index = i;
            }
            std::swap(array[i], min_el);
        }
    }
}*/

template <class Iterator>
Iterator my_binary_search(Iterator left, Iterator right, int key)
{
    Iterator middle;
    Iterator fail = right;
    while(left < right)
    {
        middle = left + ((right - left) / 2);
        if(key == *middle)
        {
            return middle;
        }

        else
        {
            if(key < *middle)
            {
                right = middle - 1;
            }
            else
            {
                left = middle + 1;
            }
        }
    }
    return fail;
}
/*
void sort_(int* array, int size)
{
    int min_el = 0;
    int index = 0;
    for(int i = 0; i != size; ++i)
    {
        for(int j = i + 1; j != size; ++j)
        {
            if(min_el < array[i])
            {
                min_el = array[i];
                index = i;
            }
            std::swap(array[i], min_el);
        }
    }
}*/

#endif // ALGORITHM_H_INCLUDED
