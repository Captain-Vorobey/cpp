#ifndef ALGORITHMS_H_INCLUDED
#define ALGORITHMS_H_INCLUDED
#include <vector>
#include <iostream>

bool f_min(int a, int b, int c)
{
     return a > b && b < c;
}

bool f_max(int a, int b, int c)
{
    return a < b && b > c;
}

template <class TernaryFunction>
void fill_vector( std::vector<int>& vec,int times, int a, int d, TernaryFunction f )
{
    for(int i = 0; i < times; i++)
    {
        vec.push_back(f(a,d,i));
    }
}

template <class Iterator>
void print_contaiter(Iterator first, Iterator last)
{
    for(; first != last; ++first)
    {
        std::cout << *first << " ";
    }
    std::cout << std::endl;
}

template <class Iterator, class Functor>
int for_each(Iterator first, Iterator last, Functor f)
{
    for(; first != last; ++first)
    {
        f(*first);
    }
    return f;
}

template <typename TernaryPredicate>
int ternary_find_if(int* array, int first, int last, TernaryPredicate t)
{
    for(; first != last; ++first)
    {
        if(t(array[first], array[first + 1], array[first + 2]))
        {
            return array[first + 1];
        }
    }
}

#endif // ALGORITHMS_H_INCLUDED
