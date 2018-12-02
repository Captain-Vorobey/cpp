#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

namespace stu
{
    template <class Iterator, class UnaryOperation>
    void for_each(Iterator first, Iterator last, UnaryOperation op)
    {
        for(; first != last; ++first)
        {
            op(*first);
        }
    }
}

template <class Iterator, class BinaryOperation>
Iterator find_element(Iterator first, Iterator last, BinaryOperation op)
{
    int element = first;
    for(; first != last; ++first)
    {
        if(op(first, element))
        {
            element = first;
        }
    }
    return element;
}

template <class T>
int swap(T& a, T& b)
{
    T temp = a;
    a = b;
    b = temp;
}

template <class Iterator>
void iter_swap(Iterator a, Iterator b)
{
     swap(*a, *b);
}

template <class Iterator1, class Iterator2>
void swap_rangers(Iterator1 first1,Iterator1 last1,Iterator2 first2)
{
    while(first1 != last1)
    {
        iter_swap(first1++, first2++);
    }
}

template <class Iterator>
void reverse(Iterator first, Iterator last)
{
    --last;
    while(first != last)
    {
        iter_swap(first++, --last);
    }
}

template <class Iterator, class TernaryOperation>
void zero_local_ma(Iterator first, Iterator last, TernaryOperation op)
{
    for(; first != last; ++first)
    {
        if(op(*first, *(first + 1), *(first + 2)))
        {
            *(first + 1) = 0;
        }
    }
}

#endif // HEADER_H_INCLUDED
