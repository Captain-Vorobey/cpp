#include <iostream>
#include <stdlib.h>

void print_array(int* array, int first, int last)
{
    for(; first != last; ++first)
    {
        std::cout << array[first] << std::endl;
    }
}

void print_array_249_div_5(int* array, int first, int last)
{
    for(int first = array[249]; first != last; ++first)
    {
        array[first] = (-6) + rand() % 12;
        if(array[first] % 5 == 0)
        {
            std::cout << array[first] << std::endl;
        }
    }
}

int main()
{
    int array[1271]{};
    print_array(array, 0, 1271);
    return 0;
}
