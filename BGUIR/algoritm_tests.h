#ifndef ALGORITM_TESTS_H_INCLUDED
#define ALGORITM_TESTS_H_INCLUDED
#include "algoritm.h"
#include <cassert>

void test_accumulate()
{
    int array[5]{3, 5, 7, 9, 11};
    assert(35 == accumulate_(array, array + 5, 0, [](int a, int b){return a + b;}));
}



/*void test_search_()
{
    int array[5]{2, 4, 6, 8, 10};
    assert(search_())
}*/
#endif // ALGORITM_TESTS_H_INCLUDED
