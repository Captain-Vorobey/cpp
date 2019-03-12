#include <iostream>

template <class T>
void f(T b)
{
    static int a;
    std::cout << a++ << " " << &a << " " << std::endl;
}

int main()
{
    f<int>(4);
    f<int>(4);
    f<int>(4);
    std::cout << &f<int> << std::endl;
    std::cout << &f<double> << std::endl;
    return 0;
}
