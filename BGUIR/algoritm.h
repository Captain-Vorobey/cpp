#ifndef ALGORITM_H_INCLUDED
#define ALGORITM_H_INCLUDED

using BinaryPredicate = bool(*)(int, int);
using BinaryOperation = int(*)(int, int);

struct Pair
{
    int first;
    int second;
} ;

int* search_(int* first, int* last, BinaryPredicate p)
{
    int* temp = first++;
    for(; first != last; ++first)
    {
        if(p(*first, *temp))
           {
               temp = first;
           }
    }
    return temp;
}

int accumulate_(int* first, int* last, int init, BinaryOperation p)
{
    for(; first != last; ++first)
    {
        init = p(init, *first);
    }
    return init;
}

int find_if(int* first, int* last, BinaryPredicate p)
{
    int element = *first;
    for(; first != last; ++first)
    {
        if(p(*first, element))
           {
               element = *first;
           }
    }
    return element;
}



/*int sum_min_max(int* first, int* last, BinaryPredicate p)
{
    int element = *first;
    for(; first != last; ++first)
    {
        if(p(*first, element))
    }
}*/

#endif // ALGORITM_H_INCLUDED
