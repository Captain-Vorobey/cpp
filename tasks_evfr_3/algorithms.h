#ifndef ALGORITHMS_H_INCLUDED
#define ALGORITHMS_H_INCLUDED

namespace stu
{
template <class Iter, class UnaryOperation>
Iter for_each(Iter first, Iter last, UnaryOperation op)
{
    for(; first != last; ++first)
    {
        op(*first);
    }
}

template <class T>
void swap(T& a, T& b)
{
    T temp = a;
    a = b;
    b = temp;
}

template <class Iterator1, class Iterator2>
void iter_swap(Iterator1 a, Iterator2 b)
{
    stu::swap(*a, *b);
}

template <class Iterator1, class Iterator2>
void swap_rangers(Iterator1 first1, Iterator1 last1, Iterator2 first2)
{
    stu::iter_swap(first1++, first2++);
}

template <class Iterator, class T>
void fill(Iterator first, Iterator last, T value)
{
    for(; first != last; ++first)
    {
        *first = value;
    }
}

template <class Iterator, class T>
Iterator find(Iterator first, Iterator last, T value)
{
    for(; first != last; ++first)
    {
        if(*first == value)
        {
            return first;
        }
    }
}

template <class Iterator, class UP>
Iterator find_if(Iterator first, Iterator last, UP p)
{
    for(; first != last; ++first)
    {
        if(p(*first))
        {
            return first;
        }
    }
}

template <class Iter, class T>
Iter accumulate(Iter first, Iter last, T init)
{
    for(; first != last; ++first)
    {
        init = init + *first;
    }
    return init;
}

template <class Iter, class T, class BO>
Iter accumulate(Iter first, Iter last, T init, BO op)
{
    for(; first != last; ++first)
    {
        init += op(init, *first);
    }
    return init;
}

template <class Iterator, class UO>
Iterator count_if(Iterator first, Iterator last, UO p)
{
    int temp = 0;
    for(; first != last; ++first)
    {
        if(p(*first))
        {
            ++temp;
        }
    }
    return temp;
}

template <class Iter, class T>
Iter count(Iter first, Iter last, T value)
{
    int temp = 0;
    for(; first != last; ++first)
    {
        if(*first == value)
        {
            ++temp;
        }
    }
    return temp;
}
}

#endif // ALGORITHMS_H_INCLUDED
