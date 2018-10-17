#ifndef SORTS_H_INCLUDED
#define SORTS_H_INCLUDED

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

#endif // SORTS_H_INCLUDED
