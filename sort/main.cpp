#include <iostream>

void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void print_array(int* array, int first, int last)
{
    for(; first < last; ++first)
    {
        std::cout << array[first] << std::endl;
    }
}

void print_array(int* first, int* last)
{
    for(; first < last; ++first)
    {
        std::cout << *first << std::endl;
    }
}


int main()
{
    int var1 = 10;
    int var2 = 15;
    swap(&var1, &var2);
    std::cout << var1 << var2 << std::endl;
    int array[5]{13, 57, 92, 12, 68};
    swap(array + 3, array + 1);
    print_array(array, array + 5);
    return 0;
}
