#ifndef TASKS_H_INCLUDED
#define TASKS_H_INCLUDED
#include "predicates.h"
#define Array int array[10]{-12, -2, -3, -4, -5, -6, -7, -8, -9, -1}

template <class Iterator>
int at(Iterator first, Iterator last)
{
    Array;
    *last = 0;
    int min_ell = find_el(array, array + 10, [](int a){return a > 0;});
    for(; first != last; ++first)
    {
        if(min_ell > find_el(array, array + 10, [](int a){return a > 0;}))
        {
            min_ell = find_el(array, array + 10, [](int a){return a > 0;});
        }

    }
    return min_ell;
}

void task12()
{
    Array;
    int min_el = find_el(array, array + 10, [](int a){return a > 0;});
    int att = at(array, array + 10);
    std::cout << att << " ";
}

void run_tasks()
{
    task12();
}

#endif // TASKS_H_INCLUDED
