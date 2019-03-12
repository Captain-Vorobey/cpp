#ifndef LOOPS_TASKS_H_INCLUDED
#define LOOPS_TASKS_H_INCLUDED
#include "digits.h"

namespace task_b
{
    namespace loops
    {
        bool task1(int value)
        {
             return digits_is_equal_n(value, 2);
        }

        bool task2(int value)
        {
            return digits_is_equal_n(value, 3);
        }

        bool task3(int value)
        {
            return
        }

        bool task4(int value)
        {
            auto temp = count_digits(value)
            return std::all_of(temp.begin(), temp.end(), [](int a){return a == 0 || a == 1;});
        }
        bool task5(int value, int k)
        {
            return digits_is_equal_n(value, k);
        }
        bool task6(int value)
        {
            auto temp = count_digits(value);
            return std::all_of(temp.begin(), temp.end() [k](int a){return a == 0 || a == 1;});
        }
        bool task7(int value)
        {
            return digits_is_equal_n(value, 2);
        }
        bool task8(int value, int k)
        {
            auto temp = count_digits(value);
            return std::any_of(temp.begin(), temp.end(), [k](int a){return a == 0 || a == 1;});
        }
        bool taks9(int value, int k)
        {
            return sum_digits_between(value, 0, k) == sum_digits_between(reverse(value), 0, k);

        }
        bool task10(int value, int k)
        {
            auto temp = count_digits(value);
            return std::any_of(temp.begin(), temp.end(), [k](int a){return a > k;});
        }
        bool task11(int value, int k, int m)
        {
            auto temp = count_digits(value);
            return std::count_if(temp.begin(), temp.end(), [](int a){return a < m;}) == k;
        }
    }
}

#endif // LOOPS_TASKS_H_INCLUDED
