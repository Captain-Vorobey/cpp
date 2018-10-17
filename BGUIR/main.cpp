#include <iostream>
#include "Predicates.h"
#include "Tests.h"
#include "algoritm.h"
#include "algoritm_tests.h"
#include "predicates_tests.h"
#include "functions_tests.h"

/*Pair task1(int* first, int* last)
{
    Pair result;
    result.first = accumulate_(first, last, 0, sum_positive);
    result.second = accumulate_(first, last, 1, mul_negative);
    return result;
}

Pair task2(int* first, int* last)
{
    Pair result;
    result.first = accumulate_(first, last, 1, mul_is_even);
    result.second = accumulate_(first, last, 0, sum_negativ);
    return result;
}

Pair task3(int* first, int* last)
{
    Pair result;
    result.first = accumulate_(first, last, 0, sum_positive);
    result.second = accumulate_(first, last, 1, abs_negative);
    return result;
}*/

int main()
{
    int array[2][2] = {{11, 32},
                       {22, 1}};
    int array1[2]{}
    print_double_array(array, 2, 2);
    qwerty(array, 2, 2, 0, 1, min_);
    test_accumulate();
    test_min_();
    test_abs_negative();
    return 0;
}
