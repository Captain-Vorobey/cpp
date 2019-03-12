#ifndef PREDICATES_H_INCLUDED
#define PREDICATES_H_INCLUDED

bool min_positive(int a, int b)
{
    return a > 0 && a < b;
}

int min_el(int a, int b)
{
    return a < b;
}

bool max_even(int a, int b)
{
    return a % 2 && a > b;
}

bool greater_min(int a, int b)
{
    return a > 3 && b > 3 && a < b;
}

bool is_positive(int a)
{
    return a > 0;
}

bool is_negative(int a)
{
    return a < 0;
}

bool two_numbers(int a, int b)
{
    return a > b;
}

#endif // PREDICATES_H_INCLUDED
