#include <iostream>

template <class T>
T sum_digits(T a, T b)
{
    return a + b;
}

template <class Iterator>
int accumulate_(Iterator first, Iterator last)
{
    int sum = 0;
    for(; first != last; ++first)
    {
        sum = sum + *first;
    }
    return sum;
}

void print_array(int(*first)[2])
{
    for(int i = 0; i < 2; ++i)
    {
        for(int j = 0; j < 2; ++j)
        {
            std::cout << first[i][j] << std::endl;
        }
    }
}

template <class Matrix>
void print_array(Matrix p, int column, int row)
{
    for(int i = 0; i != column; ++i)
    {
        for(int j = 0; j != row; ++j)
        {
            std::cout << p[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

int main()
{
    int array[4][5] {{2, 10, 15, 3, 5},
        {67, 38, 21, 14, 13},
        {63, 30, 23, 19, 14},
        {68, 37, 29, 11, 18}
    };
    //int(*p)[5] = array;
    //std::cout << p[1][4] << std::endl;
    //std::cout << *(*(p + 1) + 2) << std::endl;
    print_array(array, 4, 5);
}
