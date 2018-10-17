#ifndef PREDICATES_TESTS_H_INCLUDED
#define PREDICATES_TESTS_H_INCLUDED
#include "predicates.h"

void test_min_()
{
    assert(!min_(4, 2));
    assert(min_(2, 4));
    assert(!min_(2, 2));
}

#endif // PREDICATES_TESTS_H_INCLUDED
