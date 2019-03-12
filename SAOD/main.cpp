#include <iostream>
#include <algorithm>

namespace stu
{

template <class Iter, class UP>
unsigned int count_if(Iter first, Iter last, UP p)
{
    unsigned int temp = 0;
    for(; first < last; ++first)
    {
        if(p(*first))
        {
            ++temp;
        }
    }
    return temp;
}
template <class Iter, class OP>
void for_each(Iter first, Iter last, OP p)
{
    for(; first < last; ++first)
    {
        p(*first);
    }
}
};

void f (int first_1,int last_1,int first_2,int last_2)
{
    int value_1 = stu::count_if(first_1,last_1,[](int a)
    {
        return a < 0;
    });

    int value_2 = stu::count_if(first_2,last_2,[](int a)
    {
        return a < 0;
    });

    if(value_1 < value_2)
    {
        std::for_each(first_1, last_1, [](int a)
        {
            std::cout << a << " ";
        });
        std::cout << std::endl;
        std::for_each(first_2, last_2, [](int a)
        {
            std::cout << a << " ";
        });
    }
    else
    {
        stu::for_each(first_2, last_2,[](int a)
        {
            std::cout << a << " ";
        });
        std::cout << std::endl;
        stu::for_each(first_1, last_1,[](int a)
        {
            std::cout << a << " ";
        });
    }
}
using Pair = std::pair<int,int>;
template <class Matrix>
Pair count_values(Matrix m,int size_1,int size_2)
{
    Pair result{0,0};
    for(int i = 0; i < size_1; ++i)
    {
        for(int j = 0; j < size_2; ++j)
        {
            if(m[i][j] == 0)
            {
                ++result.first;
            }
            if(m[i][j] == 1)
            {
                ++result.second;
            }
        }

    }
    return result;
}

int main()
{
    int array[5] {1, 2, 3, 4, 5};
    //std::cout << stu::is_pointer<int*>::value << std::endl;
    std::cout << stu::my_binary_search(array, 0, 5, 3);
    return 0;
}
