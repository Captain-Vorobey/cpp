#include <iostream>

using BinaryOperation = bool(*)(int, int);

int find_index(int* array, int first, int last, BinaryOperation p)
{
    int element = array[first];
    int index = first;
        for(; first != last; ++first)
    {
        if(p(array[first], element))
        {
            element = array[first];
            index = first;
        }
    }
    return index;
}

bool greater_(int value, int value1)
{
    return value > value1;
}

int main()
{
    int array[10]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::cout << find_index(array, 0, 10, greater_) << std::endl;
    std::cout << index << std::endl;
    return 0;
}

