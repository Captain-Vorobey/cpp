#ifndef PREDICATES_H_INCLUDED
#define PREDICATES_H_INCLUDED

bool is_negative(int a)
{
    return a < 0;
}

bool min_abs(int a, int b)
{
   return std::abs(a) < std::abs(b);
}

bool is_nul(int a)
{
    return a == 0;
}

bool mul_negative(int a, int b)
{
    return a * b < 0;
}

bool is_even(int a)
{
    return a % 2 == 0;
}

bool is_not_even(int b)
{
    return b % 2 != 0;
}

#endif // PREDICATES_H_INCLUDED
