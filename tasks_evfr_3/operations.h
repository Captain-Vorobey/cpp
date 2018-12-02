#ifndef OPERATIONS_H_INCLUDED
#define OPERATIONS_H_INCLUDED

namespace stu
{
int mull_if(int init,int first)
{
    if(first > 0)
    {
        return init * first;
    }
    return init;
}
}

#endif // OPERATIONS_H_INCLUDED
