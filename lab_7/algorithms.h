#ifndef ALGORITHMS_H_INCLUDED
#define ALGORITHMS_H_INCLUDED

template <typename Iterator, typename UnaryOperations>
void for_each(Iterator first, Iterator last, UnaryOperations op)
{
    for(; first != last; ++first)
    {
        op(*first);
    }
}

template <class Iterator, class BinaryPredicate>
Iterator find_min(Iterator first, Iterator last, BinaryPredicate p)
{
    Iterator min_el = first;
    for(; first != last; ++first)
    {
        if(p(*min_el, *first))
        {
            min_el = first;
        }
    }
    return min_el;
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
    return last;
}

#endif // ALGORITHMS_H_INCLUDED
