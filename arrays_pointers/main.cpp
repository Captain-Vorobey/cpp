#include <iostream>
#include "predicate.h"
#include <cmath>
#include "arrays_new_method.h"

int main()
{
    int array[5] {6, -3, -8, 12, -5};
    //fill_array_not_even_numbers(array, array + 5, 11);
    //fill_powers_2(array, array + 5, 2);
    //array3(array, array + 5, 11, 24);
    // array4(array, array + 5, 11, 24);
    //print_array(array, array +5);
    int result = array8(array, array + 5, is_even, Direction::Straight);
    std::cout << std::endl;
    std::cout << result << std::endl;
    print_colours()
    return 0;
}
