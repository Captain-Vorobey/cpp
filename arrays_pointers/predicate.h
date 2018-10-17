#ifndef PREDICATE_H_INCLUDED
#define PREDICATE_H_INCLUDED

bool is_even(int x)
{
    return x % 2 == 0;
}

bool is_not_even(int x)
{
    return x % 2 != 0;
}

bool max_(int value, int value1)
{
    return value > value1;
}

bool positive(int value)
{
    return value > 0;
}

bool negativ(int value)
{
    return value < 0;
}

#endif // PREDICATE_H_INCLUDED
