#include <iostream>
#include "arrays_1.h"
#include "Minmax.h"
int main()
{
    //int a = 998877;
    int array[10] {100, 47, 66, 33, 87, 1200, 63, 70, 32, 210};
    //std::cout << array[5];
    //array[10] = 11111;
    //std::cout << a;
    //iota(array, 0, 10, 5);
    //fill_array(array, 0, 10);

    //fill_array_powers_2(array, 0, 10);
    //print_array(array, 0, 10);
    //reverse_order(array, 0, 9);
    //array14(array, 0, 9);
    //array14_1(array, 0, 9);
    //fill_array_fibonacci(array, 0, 10);
    //print_array(array, 0, 10);
    //counter(array, 10);
    //array21(array, 0, 10, 3, 5);
    //array17(array, 0, 10);
    ///int max_ = find_index(arr, 0, 10, higher_);
    ///int min_ = find_index(arr, 0, 10, less_);
    std::cout << find_index(array, 0, 10, less_) << std::endl;
    return 0;
}
