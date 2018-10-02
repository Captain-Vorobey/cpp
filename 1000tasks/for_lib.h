#ifndef FOR_LIB_H_INCLUDED
#define FOR_LIB_H_INCLUDED
#include <iostream>
#include <cmath>

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

int sqwuare_of_number(int n)
{
    int sum = 0;
    for(int i = 1; i <= 2 * n -1; i = i +2)
    {
        sum += i;
    }
    return sum;
}

void print(int first, int last)
{
    int counter = 0;
    for(; first <= last; ++first)
    {
        ++counter;
        for(int i = 0; i < counter; ++i)
        {
            std::cout << first << std::endl;
        }
    }
}

int pow_(int value, int power)
{
    return pow(value, power);
}

void f()
{
    // int temp = 1;
    for(int value = 0; value < 12; ++value)
    {
        std::cout << pow(2, value) << std::endl;
    }
    // return temp;
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

double task_for_13(int n)
{
    double sum = 1;
    double temp = -1;
    for(double i = 0.1; i < n; i = i + 0.1)
    {
        temp = temp * -1;
        sum = sum + i * temp;
        std::cout << sum << std::endl;
    }
    return sum;
}

int get_sum_powers_5(int first, int last)
{
    int temp = 0;
    for(;first < last; ++first)
    {
        temp = temp + std::pow(5, first);
    }
    return temp;
}

int sum_digits_3(int first, int last)
{
    int temp = 0;
    for(; first < last; first += 3)
    {
        temp = temp + first;
    }
    return temp;
}

int fibonachi(int times)
{
    int sum = 0;
    int temp = 0;
    int temp1 = 1;
    int temp2 = 0;
    for(int i = 2;i!=times;++i)
    {
        sum += temp2;
        temp2 = temp + temp1;
        std::cout << temp2 << std:: endl;
        temp = temp1;
        temp1 = temp2;

    }
    return sum+1;
}


#endif // FOR_LIB_H_INCLUDED
