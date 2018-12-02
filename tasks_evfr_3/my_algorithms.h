#ifndef MY_ALGORITHMS_H_INCLUDED
#define MY_ALGORITHMS_H_INCLUDED

template <class Iter, class T, class TO>
void fill_array(Iter first, Iter last, T a, T d, T number, TO t)
{
    for(; first != last; ++first)
    {
        *first = t(a, d, number);
        ++number;
    }
}

template <class T, class Iter, class BP>
T binary_count_if(Iter first, Iter last, BP p)
{
    T temp = 0;
    --last;
    for(; first != last; ++first)
    {
        if(p(*first, *(first + 1)))
        {
            ++temp;
        }
    }
    return temp;
}

template <class Iter, class BP>
Iter find_element(Iter first, Iter last, BP p)
{
    Iter el = first;
    for(; first != last; ++first)
    {
        if(p(*first, *el))
        {
            el = first;
        }
    }
    return el;
}

#endif // MY_ALGORITHMS_H_INCLUDED
