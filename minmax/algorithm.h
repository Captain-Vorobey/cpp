#ifndef ALGORITHM_H_INCLUDED
#define ALGORITHM_H_INCLUDED

template <class Iter, class UnaryOperation>
Iter for_each(Iter first, Iter last, UnaryOperation op)
{
    for(; first != last; ++first)
    {
        op(*first);
    }
}

template <class Iterator, class BinaryPredicate>
Iterator find_element(Iterator first, Iterator last, BinaryPredicate p)
{
    Iterator element = first;
    for(; first != last; ++first)
    {
        if(p(*first, *element))
        {
            *element = *first;
        }
    }
    return element;
}

template <class Iterator, class BinaryPredicate>
Iterator find_index(Iterator first, Iterator last, BinaryPredicate p)
{
    int element = *first;
    Iterator index_element = first;
    for(; first != last; ++first)
    {
        if(p(*first, element))
        {
            element = *first;
            index_element = first;
        }
    }
    return index_element;
}

template <typename Iterator>
Iterator counter(Iterator first, Iterator last)
{
    int counter = 0;
    for(; first != last; ++first)
    {
        ++counter;
    }
    return counter;
}

template <class Iterator, class BinaryPredicate>
Iterator reverse_find_element(Iterator first, Iterator last, BinaryPredicate)
{
    Iterator element = (last - 1);
    for(; first != last; --last)
    {
        if(p(*last, *element))
        {
            element = last;
        }
    }
    return element;
}
template <class Iterator, class BinaryPredicate>
Iterator find_el(Iterator first, Iterator last, BinaryPredicate p)
{
    *last = 0;
    int min_element = *first;
    for(; first != last; ++first)
    {
        if(p(min_element, *first))
        {
            min_element = *first;
        }
    }
    std::cout << min_element;
}



#endif // ALGORITHM_H_INCLUDED
