#ifndef FOR_LIB_H_INCLUDED
#define FOR_LIB_H_INCLUDED
#include <iostream>

void print_price_list(double first, double last, double price, double step)
{
    for(double i = first; i < last; i += step)
    {
        std::cout << i * price << std::endl;
    }
}

void print_sum(int first, int last)
{
    for(int sum = 0; first <= last; ++first)
    {
        sum += first;
        std::cout << sum << std::endl;
    }
}

void print_price_list_1(double price)
{
    for(double i = 0.1; i <= 1; i += 0.1)
    {
        std::cout << i * price << std::endl;
    }
}

int get_sum_digit(int a)
{
    int temp = 0;
    for(; a != 0; a = a / 10)
    {
        temp = temp + a % 10;
    }
    return temp;
}

#endif // FOR_LIB_H_INCLUDED
