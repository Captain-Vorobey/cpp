#include <iostream>
#include <set>
#include <vector>
#include <utility>
#include <algorithm>
#include <array>
#include "digits_tests.h"
#include "loops_tasks.h"
#include "loops_tasks_tests.h"
#include "digits.h"

int main()
{
    run_all_digits_test();
    task_b::loops::run__all_digits_test();
    std::cout << sum_digits(123) << std::endl;
    std::cout << sum_digits_between(123456789, 3, 5);
    return 0;
}
