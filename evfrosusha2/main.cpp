#include <iostream>
#include "algorithms.h"
#include "predicate.h"
#include "vector"

struct Pair
{
    int first;
    int secondl;
};

int main()
{
    int array[10]{1, 3, 5, 77, 2, 12, -5, 8, 93, 34};
    /*Vector result1;
    Vector result2;
    fill_arrays(array, result1, result2, 10, is_negative);
    result1.print();
    result2.print();
    Vector result = f(array, 10);
    result.print();*/
    //std::cout << task10(array, 0, 10);
    std::cout << task8(array, 0, 10, mul_negative) << std::endl;
    return 0;
}
