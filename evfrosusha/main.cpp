#include <iostream>
#include "predicate.h"
#include "vector.h"
#include "algorithms.h"

struct Pair
{
    int first;
    int second;
};

int main()
{
    int arr[10]{1, 2, 3, 4, 5, 5, 4, 3, 2, 1};
    /*Vector result1;
    Vector result2;
    fill_arrays(arr, result1, result2, 10, is_negative);
    result1.print();
    result2.print();*/
    //Vector result = f(arr, 10);
    //result.print();
    /*print_array(arr, 0, 10);
    bubble_sort(arr,10,min_abs);
    print_array(arr,0,10);
    int temp = search(arr,10,min_abs);
    int result3 = count(arr,10,temp);
    std::cout << result3 << std::endl;
    std::cout<< none_of(arr,10,0) << std::endl;
    std::cout << task8(arr,10,mul_negative) << std::endl;
    Pair results;
    results.first = accumulate(arr, 10, is_even);
    results.second = accumulate(arr, 10, is_not_even);\
    std::cout << results.first << std::endl;
    std::cout << results.second << std::endl;
    int a = task10(arr, 0, 10);
    std::cout << a << std::endl;*/
    std::cout << task14(arr, 10);
    return 0;
}
