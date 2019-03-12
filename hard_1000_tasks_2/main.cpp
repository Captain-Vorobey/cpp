#include <iostream>
#include "tasks.h"
#include "my_algorithms.h"

int main()
{
    int array[10]{5, 5, 5, 5, 5, 5, 3, 3, 3, 6};
    std::cout << counter(array, array + 5, same);
    //run_tests();
    return 0;
}
