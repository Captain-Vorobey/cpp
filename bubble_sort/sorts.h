#ifndef SORTS_H_INCLUDED
#define SORTS_H_INCLUDED
#include "utilities.h"

int rev = 0;

template <class Iterator, class BinaryPredicate>
void bubble_sort(Iterator first, Iterator last, BinaryPredicate p)
{
    int k = 0;
    bool is_sort;
    for(Iterator i = first; i != last; ++i, ++k)
    {
        is_sort = true;
        for(Iterator j = first, end_ = last - k - 1; j != end_; ++j)
        {
            if(p(*j, *(j + 1)))
            {
                stu::iter_swap(j, j + 1);
                is_sort = false;
            }
            ++rev;
        }
        if(is_sort)
        {
            return;
        }
    }
}

template <class Iterator, class BinaryPredicate>
void selection_sort(Iterator first, Iterator last, BinaryPredicate p)
{
    bool is_sort;
    for(Iterator i = first; i != last - 1; ++i)
    {
        is_sort = true;
        Iterator min_index = i;
        for(Iterator j = i + 1; j != last; ++j)
        {
            if(p(*j, *min_index))
            {
                min_index = j;
                is_sort = false;
            }
            ++rev;
        }
        if(min_index != i)
        {
            stu::swap(*i, *min_index);
        }
        if(is_sort)
        {
            return;
        }
    }
}

#endif // SORTS_H_INCLUDED
