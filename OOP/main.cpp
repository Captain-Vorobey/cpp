#include <iostream>
#include "predicate.h"
#include "utilities.h"

using BinaryPredicate = bool(*)(int, int);

void print_array(int* first, int* last)
{
    for(; first != last; ++first)
    {
        std::cout << *first << std::endl;
    }
}

void bubble_sort(int* array, int size, BinaryPredicate p)
{
    for(int i = 0; i != size; ++i)
    {
        for(int j = 0; j < size - i - 1; ++j)
        {
            if(p(array[j], array[j + 1]))
            {
                swap_(array + j, array + j + 1);
            }
        }
    }
}

int main()
{
    int v = 4;
    int v1 = 6;
    int array[5] {21, 23, 55, 97, 29};
    swap_(&v, &v1);
    std::cout << v << " " << v1 << std::endl;
    bubble_sort(array, 5, greater_);
    print_array(array, array + 5);
    return 0;
}
