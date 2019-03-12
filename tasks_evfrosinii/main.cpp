#include <iostream>

void positive(int* arr, int first, int last)
{
    for(; first != last; ++first)
    {
        if(arr[first] > 0)
        {
            std::cout << arr[first] << std::endl;
        }
    }
}

void negative(int* arr1, int first, int last)
{
    for(; first != last; ++first)
    {
        if(arr1[first] < 0)
        {
            std::cout << arr1[first] << std::endl;
        }
    }
}

int main()
{
    int arr[5] {1, 0, -3, 0, 5};
    int arr1[5]{2, -5, -3, 9, 7};
    positive(arr, 0, 5);
    negative(arr1, 0, 5);
    return 0;
}

