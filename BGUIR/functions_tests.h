#ifndef FUNCTIONS_TESTS_H_INCLUDED
#define FUNCTIONS_TESTS_H_INCLUDED
#include "functions.h"

void test_abs_negative()
{
    assert(2 == abs_negative(2, 5));
    assert(7 == abs_negative(2, -5));
    assert(7 == abs_negative(-2, -5));
}

#endif // FUNCTIONS_TESTS_H_INCLUDED
