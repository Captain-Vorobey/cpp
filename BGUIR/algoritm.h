#ifndef ALGORITM_H_INCLUDED
#define ALGORITM_H_INCLUDED

using BinaryPredicate = bool(*)(int, int);
using BinaryOperation = int(*)(int, int);

struct Pair
{
    int first;
    int second;
} ;

int* search_(int* first, int* last, BinaryPredicate p)
{
    int* temp = first++;
    for(; first != last; ++first)
    {
        if(p(*first, *temp))
           {
               temp = first;
           }
    }
    return temp;
}

int accumulate_(int* first, int* last, int init, BinaryOperation p)
{
    for(; first != last; ++first)
    {
        init = p(init, *first);
    }
    return init;
}


template <typename Iterator, typename T>

void print_double_array(Iterator array, T col, T row)
{
    for(T first = 0; first < col; ++first)
    {
        for(T second = 0; second < row; ++second)
        {
            std::cout << array[first][second] << " " << std::endl;
        }
        std::cout << std::endl;
    }
}


template <typename Iterator, typename T>
T qwerty(Iterator array, T col, T row, T first, BinaryPredicate p)
{
    Iterator temp = ++first;
    for(T i = 0; i != col; ++i)
    {
        for(T j = 0; j != row; ++j)
        {
            if(p(array[i][j], temp))
            {
                temp = first;
                std::cout << array[i][j] << std::endl;
            }
                std::cout << std::endl;
        }
    }
}

template <typename Iterator, typename T>

T qwerty1(int* first, int* last, T col, T row, BinaryOperation p)
{
    Iterator temp = ++first;
    for(; first < last; ++first)
    {
        for(T i = 0; )
        {

        }
    }
}

/*int sum_min_max(int* first, int* last, BinaryPredicate p)
{
    int element = *first;
    for(; first != last; ++first)
    {
        if(p(*first, element))
    }
}*/

#endif // ALGORITM_H_INCLUDED
