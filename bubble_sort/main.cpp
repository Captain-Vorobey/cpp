#include <iostream>
#include "utilities.h"
#include "sorts.h"

int main()
{
    int array[5] {5, 4, 3, 2, 1};
    bubble_sort(array, array +  5, [](int a, int b)
    {
        return a < b;
    });
    stu::print_array(array, array + 5);
    std::cout << "reverse: " << rev << std::endl;
    return 0;
}
