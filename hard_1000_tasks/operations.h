#ifndef OPERATIONS_H_INCLUDED
#define OPERATIONS_H_INCLUDED

bool is_even(int a)
{
    return a % 2 == 0;
}

bool alternate_by_even(int a, int b)
{
    return is_even(a) ^ is_even(b);
}

bool is_progression(int a, int b, int q)
{
    return b / a == q;
}

template <class T, class Iterator, typename BinaryPredicate>
T binary_all_of(Iterator first, Iterator last, BinaryPredicate op)
{
    for(; first != last; ++first)
    {
        if(!op(*(first), *(first + 1)))
        {
            return false;
        }
    }
    return true;
}

template <class T, class Iterator, typename TernaryPredicate>
T ternary_all_of(Iterator first, Iterator last, T q, TernaryPredicate op)
{
    for(; first != last; ++first)
    {
        if(!op(*(first), *(first + 1), q))
        {
            return false;
        }
    }
    return true;
}

bool task_40(int a, int b, int r)
{
    return std::abs(((a + b) - r));
}

template <typename TernaryOperation>
int* binary_find_element(int* first, int* last, int r, TernaryOperation op)
{
    int element = first;
    int temp = op(*first, *first + 1, r);
    first = first + 2;
    for(; first != last - 1; ++first)
    {
        if(op(*first, *(first + 1), r) < temp)
        {
            element = first;
        }
    }
    return element;
}

#endif // OPERATIONS_H_INCLUDED
