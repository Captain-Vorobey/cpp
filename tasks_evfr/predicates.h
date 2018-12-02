#ifndef PREDICATES_H_INCLUDED
#define PREDICATES_H_INCLUDED

namespace stu
{
    int greater(int a, int b)
    {
        return a > b;
    }
    int less(int a, int b)
    {
        return a < b;
    }
    int is_local_max(int a, int b, int c)
    {
        return c > b && c > a;
    }
}

#endif // PREDICATES_H_INCLUDED
