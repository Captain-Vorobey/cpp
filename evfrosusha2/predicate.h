#ifndef PREDICATE_H_INCLUDED
#define PREDICATE_H_INCLUDED
#include <iostream>
#include "vector.h"
#include <cmath>

bool is_positive(int a)
{
    return a > 0;
}

bool is_negative(int a)
{
    return a < 0;
}

bool is_even(int value)
{
    return value % 2 == 0;
}

int mul_negative(int value, int value1)
{
    return value * value1 < 0;
}

#endif // PREDICATE_H_INCLUDED
