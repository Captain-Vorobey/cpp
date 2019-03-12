#include <iostream>
#include <algorithm>

int gcd_(int a, int b)
{
    /*if(a < b)
    {
        std::swap(a, b);
    }*/
    int c;
    while(c = a % b)
    {
        a = b;
        b = c;
    }
    return b;
}
/*
int gcd_recursion(int a, int b)
{
    if(a % b == 0)
    {
        return b;
    }
    return gcd(b, a % b);
}

int f(int x)
{
    if(x == 0)
    {
        std::cout << "return 1" << std::endl;
        return 1;
    }

    if(x % 10 >= 7)
    {
        std::cout << "return 1 * f(x / 10), x = " << x << std::endl;
        return 1 * f(x / 10);
    }

    std::cout << "return x % 10 * f(x / 10), x = " << x << std::endl;
    return x % 10 * f(x / 10);
}
*/
int main()
{
    std::cout << gcd_(555, 45) << std::endl;
    //std::cout << gcd_recursion(45, 5 % 45) << std::endl;
    //std::cout << f(37887) << std::endl;
    return 0;
}
