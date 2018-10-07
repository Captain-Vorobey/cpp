#include <iostream>
#include <cmath>

using BinaryPredicate = bool(*)(int, int);

/*int find_index(int* arr, int first, int last, BinaryPredicate p)
{
    for(; first < last; ++first)
    {
        if(p(arr[first], last))
        {
            return arr[first];
        }
    }
}*/

int find_index(int* array, int first, int last, BinaryPredicate p)
{
    int element = array[first];
    int index_element = first;
    for(; first != last; ++first)
    {
        if(p(array[first], element))
        {
            element = array[first];
            index_element = first;
            //std::cout << index_element << std::endl;
        }
    }
    return index_element;
}

bool greater_(int value, int value1)
{
    return value > value1;
}

bool min_r(int value, int value1)
{
    int r = 5;
    return abs(value - r) < abs(value1 - r);
}

int main()
{
    int array[10]{12, 1500, 17, 6, 84, 253, 91, 48, 21, 93};
    int max_index = find_index(array, 0, 9, min_r);
    std::cout << max_index << std::endl;
    return 0;
}
