#include <iostream>
#include "predicates.h"
#include "algorithms.h"
#include "algorithm_test.h"
#define Array int array[10]{2, -5, 1, -8, -3, 9, 32, 58, -12, 6};

template <class Iterator>
void minn(Iterator first, Iterator last)
{
    Array;
    int min_ = *find_min(array, array + 10, is_greater);
    for_each(first, last, [min_](int& a){if(a > 0){a = min_;}});
}

void test()
{
    Array;
    auto res = find(array, array + 10, 10);
    assert(*(res) == 10);
}

int main()
{
    Array;
    //int array[10]{2, 5, 1, 8, 3, 9, 32, 58, 12, 6};
    //int res = *find_min(array, array + 10, is_greater);
    //std::cout << res << std::endl;
    //minn(array, array + 10);
    test();
    /*for(int i = 0; i != 10; ++i)
    {
        std::cout << array[i] << " ";
    }*/
    return 0;
}
