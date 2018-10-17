#ifndef UTILITIES_H_INCLUDED
#define UTILITIES_H_INCLUDED

namespace stu
{
template <class Iterator>
void print_array(Iterator first, Iterator last)
{
    for(; first != last; ++first)
    {
        std::cout << *first << std::endl;
    }
}

template <class T>
void swap(T& a, T& b)
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
}


#endif // UTILITIES_H_INCLUDED
