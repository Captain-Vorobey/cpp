#include <iostream>

void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    /*int var1 = 4;
    int var2 = 5;
    int* a = &var1;
    std::cout << a << std::endl;
    std::cout << *a << std::endl;
    int* b = &var2;
    std::cout << b << std::endl;
    std::cout << *b << std::endl;
    int temp = *a;
    *a = *b;
    *b = temp;
    std::cout << var1 << std::endl;
    std::cout << var2 << std::endl; */
    int var1 = 4;
    int var2 = 5;
    swap(&var1, &var2);
    std::cout << var1 << var2 << std::endl;
    return 0;
}
