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
            std::cout << "array[first]: " << array[first] << std::endl;
            std::cout << "element: " << element << std::endl;
            index_element = first;
            std::cout << "index: " << index_element <<std::endl;
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
    int array[10]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int max_index = find_index(array, 0, 10, greater_);
    std::cout << max_index << std::endl;
    return 0;
}
