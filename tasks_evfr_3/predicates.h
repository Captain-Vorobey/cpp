#ifndef PREDICATES_H_INCLUDED
#define PREDICATES_H_INCLUDED

namespace stu
{
    bool greater(int a, int b)
    {
        return a > b;
    }

    bool less(int a, int b)
    {
        return a < b;
    }

    bool is_even(int a)
    {
        return a % 2 == 0;
    }

    bool less_abs(int a, int b)
    {
        return std::abs(a) > std::abs(b);
    }

    bool is_alternate_by_sign(int a, int b)
    {
        return a < 0 && b > 0;
    }

    int is_null(int a)
    {
        if(a == 0)
        {
            return a = 1;
        }
    }
}

#endif // PREDICATES_H_INCLUDED
