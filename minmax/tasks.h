#ifndef TASKS_H_INCLUDED
#define TASKS_H_INCLUDED
#include <iostream>
#include "algorithm.h"
#include "date_types.h"
#include "predicates.h"
#include <cassert>
#include <cmath>
#define Arr int arr[10]{-7, 2, 3, -4, -5, 6, -1, -8, -9, -10}
#define PairArr Pair arr[10]{Pair(2,9), Pair(2,10), Pair(2,11), Pair(3,12),\
Pair(5,6),Pair(7,25),Pair(10,9),Pair(4,-3),Pair(-13,13),Pair(11,-121)}

void task1()
{
    Arr;
    int* min_el = find_element(arr, arr + 10, [](int a, int b)
    {
        return a < b;
    });
    int* max_el = find_element(arr, arr + 10, [](int a, int b)
    {
        return a > b;
    });
    std::cout << *min_el << " " << *max_el;
    assert(min_el == arr + 4);
    assert(max_el == arr + 9);
}

void task2()
{
    PairArr;
    Pair* min_sqrt = find_element(arr, arr + 10, less_sqrt);
    assert (min_sqrt == arr + 9);
}

void task3()
{
    PairArr;
    Pair* max_sqrt = find_element(arr,arr + 10,greater_sqrt);
    //std::cout << *max_sqrt;
    assert (max_sqrt == arr + 5);
}

void task4()
{
    Arr;
    int* min_el = find_element(arr,arr + 10,[](int a, int b)
    {
        return a < b;
    });
    std::cout << *min_el << std::endl;
    assert(min_el == arr + 4);
}

void task5()
{
    PairArr;
    Pair* max_number = find_element(arr,arr + 10, max_density);
    std::cout << max_number << std::endl;
    //assert (max_number == arr + 6);
}

void task7()
{
    Arr;
    int min_index = *find_index(arr, arr + 10,
                                        [](int a, int b)
    {
        return a < b;
    });
    int max_index = *find_index(arr, arr + 10,
                                        [](int a, int b)
    {
        return a > b;
    });
    std::cout << &min_index << " " << &max_index << std::endl;

}

/*void task12_1()
{
    for(int i = 0; i != size; ++i)
    {
        if(arr[i] < 0)
        {
            std::cout << "0";
        }
    }
}*/

template <class Iterator>
int at(Iterator first, Iterator last)
{
    Arr;
    int min_ell = find_el(arr, arr + 10, [](int a){return a > 0;});
    for(; first != last; ++first)
    {
        if(min_ell < find_el(arr, arr + 10, [](int a){return a > 0;}))
        {
            min_ell = find_el(arr, arr + 10, [](int a){return a > 0;});
        }
        std::cout << min_ell << " ";
    }
    return min_ell;
}

template <class Iterator, class UnaryPredicate>
void all_of(Iterator first, Iterator last, UnaryPredicate p)
{
    Arr;
    for(; first != last; ++first)
    {
        if(p(*first))
        {
            std::cout << "true";
        }
    }
    std::cout << "0";
}

void task12_1()
{
    Arr;
    all_of(arr, arr + 10, is_positive);
}

void task12()
{
    Arr;
    int* min_el = find_el(arr, arr + 10, [](int a, int b){return a > b;});
    //int null = all_of(arr, arr + 10, is_negative);
    //int att = at(arr, arr + 10);
    int all = all_of(arr, arr + 10, [](int a){return a > 0;});
    std::cout << min_el << " " ;

}

void run_tests()
{
    //task7();
    task12_1();
}

#endif // TASKS_H_INCLUDED
