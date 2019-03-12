#ifndef ALGORITHM_H_INCLUDED
#define ALGORITHM_H_INCLUDED

template <class Iterator, class UnaryPredicate>
int find_el(Iterator first, Iterator last, UnaryPredicate p)
{
    *last = 0;
    for(; first != last; ++first)
    {
        if(!p(*first))
        {
            return false;
        }
    }
     return true;
}

#endif // ALGORITHM_H_INCLUDED
