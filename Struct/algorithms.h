#ifndef ALGORITHMS_H_INCLUDED
#define ALGORITHMS_H_INCLUDED
#include "predicate.h"

namespace stu
{
template <class Iterator, class UP>
bool all_of(Iterator first, Iterator last, UP p)
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

template <class Iterator, class UP>
bool any_of(Iterator first, Iterator last, UP p)
{
    for(; first != last; ++first)
    {
        if(p(*first))
        {
            return true;
        }
    }
    return false;
}

template <class Iterator, class UP>
bool none_of(Iterator first, Iterator last, UP p)
{
    return !any_of(first, last,p);
}

template <class T,class Iterator>
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

template < class Iterator, class UP>
Iterator find_if(Iterator first, Iterator last, UP p)
{
    for(; first != last; ++first)
    {
        if(p(*first))
        {
            return first;
        }
    }
    return first;
}

template <class T>
void swap (T& a, T& b)
{
    T temp = a;
    a = b;
    b = temp;
}

template <class Iterator>
void iterator_swap(Iterator a, Iterator b)
{
    stu::swap(*a, *b);
}

template <class Iterator1, class Iterator2>
void swap_rangers(Iterator1 first1,Iterator1 last, Iterator2 first2)
{
    while(first1 != last)
    {
        stu::iterator_swap(first1++, first2++);
    }
}

template <class Iterator, class T>
T accumulate(Iterator first, Iterator last, T init)
{
    for(; first != last; ++first)
    {
        init = init + *first;
    }
    return init;
}

template <class Iterator, class T, class BO>
T accumulate(Iterator first, Iterator last, T init, BO p)
{
    for(; first != last; ++first)
    {
        init += p(init, *first);
    }
    return init;
}

template <class Iterator, class BP>
Iterator min_element(Iterator first, Iterator last, BP p)
{
    Iterator min_element = first;
    for(; first != last; ++first)
    {
        if(p(*first, *min_element))
        {
            min_element = first;
        }
    }
    return min_element;
}

int gcd(int a, int b)
{
    if(a < b)
    {
        std::swap(a, b);
    }
    while(int c = a % b)
    {
        a = b;
        b = c;
    }
    return b;
}
int lcm(int a, int b)
{
    return (a * b) / stu::gcd(a, b);
}

template <class Iterator,class UP>
void for_each(Iterator first, Iterator last, UP p)
{
    for(; first != last; ++first)
    {
        p(*first);
    }
}

}


#endif // ALGORITHMS_H_INCLUDED
