#ifndef INTEGER_H_INCLUDED
#define INTEGER_H_INCLUDED
#include <iostream>

int length(int value) // 1
{
    return value / 100;
}

int weight(int m) // 2
{
  return m / 1000;
}

int bytes(int byte) // 3
{
    return byte / 1024;
}

int segments_1(int a, int b) // 4
{
    return a / b;
}

int segments_2(int a, int b) // 5
{
    return a % b;
}

int operation_number(int value) // 6
{
    return (value / 10) % 10 && value % 10;
}

int sum_digits(int value) // 7 and 11
{
    int temp = 0;
    for(; value != 0; value = value / 10)
    {
        temp += value % 10;
    }
    return temp;
}

template <typename T>
int swapping_digits_1(T value) // 8
{
    T a = value / 10;
    return a;
}

template <typename T>
int swapping_digits_2(T value) // 8
{
    T b = value % 10;
    return b;
}

int div_100(int value) // 9
{
    return value / 100;
}

int swapping_digits_2(int a) // 10
{
    return a % 10 && (a / 10) % 10;
}

void opposite(int value) // 12
{
    for(int i = value % 10; value != 0; value = value / 10, --i)
    {
        std::cout << i;
    }
}

void number_1(int value) // 13
{
    int first = value / 100;
    std::cout << value << first << std::endl;
}

void number_2(int value) // 14
{
    int last = value % 10;
    std::cout << last << value << std::endl;
}

void number_3(int value) // 15
{
   int b = value / 100;
   int c = (value / 10) % 10;
   int d = value % 10;
   std::cout << c << b << d;
}

void number_4(int value) // 16
{
   int b = value / 100;
   int c = (value / 10) % 10;
   int d = value % 10;
   std::cout << b << d << c;
}

int find_digit_1(int value) // 17
{
    int a = value / 100;
    int b = a % 10;
    return b;
}

int find_digit_2(int value) // 18
{
    int a = value / 1000;
    int b = a % 10;
    return b;
}

int minutes(int value) // 19
{
    int minute = value / 60;
    return minute;
}

int hours_1(int value) // 20
{
    int hour = value / 3600;
    return hour;
}

int last_minute(int value) // 21
{
    return value % 60;
}

int hours_2(int value) // 22
{
   return ((value / 60) % 60) * 60;
}

int last_hour(int value) // 23
{
    return (value / 60) % 60;
}

int day_of_week_1(int day) // 24
{
    return day % 7;
}

int day_of_week_2(int day) // 25
{
    return (day + 3) % 7;
}

int day_of_week_3(int day) // 26
{
    return (day + 1) % 7;
}

int day_of_week_4(int day) // 27
{
    return (day + 5) % 7;
}

int day_of_week_5(int day, int n) // 28
{
    return (day + n) % 7;
}

int year_of_century(int year) // 30
{
    return (year - 1) / 100 + 1;
}

void run_test()
{
    number_2(123);
}

#endif // INTEGER_H_INCLUDED
