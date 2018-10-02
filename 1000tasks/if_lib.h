#ifndef IF_LIB_H_INCLUDED
#define IF_LIB_H_INCLUDED
#include <iostream>

int if1(int a)
{
    if(a > 0)
    {
        return a + 1;
    }
    return a;
}

int if2(int a)
{
    if(a > 0)
    {
        return a + 1;
    }
    return a - 2;
}

int if3(int a)
{
    if(a > 0)
    {
        return a + 1;
    }
    else if (a == 0)
    {
        return 10;
    }
    else
    {
        return a - 2;
    }
}

int min_2(int a, int b)
{
    if(a < b)
    {
        return a;
    }
    return b;
}

void if4(int a, int b,int c)
{
    int temp = 0;
    if(a > 0)
    {
        temp = temp + 1;
    }
    if(b > 0)
    {
        temp = temp + 1;
    }
    if(c > 0)
    {
        temp = temp + 1;
    }
    std::cout<< temp << std::endl;
}

int min_3(int a, int b, int c)
{
    return min_2(min_2(a, b), c);
}

#endif // IF_LIB_H_INCLUDED
