#ifndef IF_H_INCLUDED
#define IF_H_INCLUDED
#include <algorithm>
#include <iostream>

int number(int a) // 1
{
    if(a > 0)
    {
        a = a + 1;
        return a;
    }
    return a;
}

int number1(int a) // 2
{
    if(a > 0)
    {
        a = a + 2;
        return a;
    }
    else
    {
        a = a - 2;
        return a;
    }
}

int number2(int a) // 3
{
    if(a > 0)
    {
        a = a + 1;
        return a;
    }
    if(a < 0)
    {
        a = a - 2;
        return a;
    }
    if(a == 0)
    {
        a = 10;
        return a;
    }
}

int counter(int a, int b, int c) // 4
{
    int counter = 0;
    if(a > 0)
    {
        ++counter;
    }
    if(b > 0)
    {
        ++counter;
    }
    if(c > 0)
    {
        ++counter;
    }
    return counter;
}

void counter1(int a, int b, int c) // 5
{
    int positive = 0;
    int negative = 0;
    if(a > 0)
    {
        ++positive;
    }
    else
    {
        ++negative;
    }
    if(b > 0)
    {
        ++positive;
    }
    else
    {
        ++negative;
    }
    if(c > 0)
    {
        ++positive;
    }
    else
    {
        ++negative;
    }
    std::cout << positive << " " << negative << std::endl;
}

int two_numbers1(int a, int b) // 6
{
    if(a > b)
    {
        return a;
    }
    return b;
}

int two_numbers2(int a, int b) // 7
{
    if(a > b)
    {
        return 1;
    }
    return 2;
}

void two_numbers3(int a, int b) // 8
{
    if(a > b)
    {
        std::cout << a << " " << b << std::endl;
    }
    std::cout << b << " " << a << std::endl;
}

void two_numbers4(double a, double b) // 9
{
    if(a > b)
    {
        std::swap(a, b);
        std::cout << a << " " << b << std::endl;
    }
    else
    {
        std::cout << a << " " << b << std::endl;
    }
}

void two_numbers5(int a, int b) // 10
{
    if(a != b)
    {
        a = a + b;
        b = a + b;
    }
    else
    {
        a = 0;
        b = 0;
    }
    std::cout << a << " " << b <<std::endl;
}

void two_numbers6(int a, int b) // 11
{
    if(a != b)
    {
        if(a > b)
        {
            b = a;
        }
        else
        {
            a = b;
        }
    }
    else
    {
        a = 0;
        b = 0;
    }
    std::cout << a << " " << b << std::endl;
}

bool min_number(int a, int b) // 12_1
{
    return a < b;
}

bool minn(int a, int b, int c) // 12_2
{
    return min_number(min_number(a, b), c);
}

int tfgyh(int a, int b, int c) // 13
{
    if(a < b && b < c)
    {
        return b;
    }
    if(c < a && a < b)
    {
        return a;
    }
    if(a < c && c < b)
    {
        return c;
    }
}

void three_numbers1(int a, int b, int c) // 16
{
    if(a < b && b < c)
    {
        a = a * a;
        b = b * b;
        c = c * c;
        std::cout << a << " " << b << " " << c << std::endl;
    }
    else
    {
        a = -a;
        b = -b;
        c = -c;
        std::cout << a << " " << b << " " << c << std::endl;
    }
}

void three_numbers2(double a, double b, double c) // 17
{
    if(((a > b) && (b > c)) || ((c > b) && (b > a)))
    {
        a = a * 2;
        b = b * 2;
        c = c * 2;
    }
    else
    {
        a = -a;
        b = -b;
        c = -c;
    }
    std::cout << a << " " << b << " " << c << std::endl;
}

void three_numbers3(int a, int b, int c) // 18
{
    if((a == b) && (b == c))
    {
        std::cout << "no different" << " ";
        return 0;
    }
    if(a == b)
    {
        std::cout << 3 << " ";
    }
    if(a == c)
    {
        std::cout << 2 << " ";
    }
    if(b == c)
    {
        std::cout << 1 << " ";
    }
}

void three_numbers4(int a, int b, int c, int g) // 19
{
    if(a == b && b == c && c == g)
    {
        std::cout << "no different" << " ";
        return 0;
    }
    if(a == b && b == c)
    {
        std::cout << 4 << " ";
    }
    if(a == b && b == g)
    {
        std::cout << 3 << " ";
    }
    if(a == c && c == g)
    {
        std::cout << 2 << " ";
    }
    if(b == c && c == g)
    {
        std::cout << 1 << " ";
    }
}

void three_numbers5(int a, int b, int c) // 20
{
    int distance_b = a - b;
    int distance_c = a - c;
    if(distance_b < 0)
    {
        distance_b = distanc_b * (-1);
    }
    if(distance_c < 0)
    {
        distance_c = distance_c * (-1);
    }

    if(distance_b > distance_c)
    {
        std::cout << "C = " << distance_c << " " << std::endl;
    }
    else
    {
        std::cout << "B = " << distance_b << " " << std::endl;
    }
}

void x_y(int x, int y) // 21
{
    if( x == 0 && y == 0)
    {
        std::cout << " 0 ";
        return 0;
    }
    if( x == 0 && y != 0)
    {
        std::cout << " 1 ";
        return 0;
    }
    if( y == 0 && x != 0)
    {
        std::cout << " 2 ";
        return 0;
    }
    if( x != 0 || y != 0)
    {
        std::cout << " 3 ";
        return 0;
    }
}

void coordinate_quarter(int x, int y) // 22
{
    if(x > 0 && y > 0)
    {
        std::cout << "1 quarter" << std::endl;
    }
    if(x > 0 && y < 0)
    {
        std::cout << "4 quarter" << std::endl;
    }
    if(x < 0 && y > 0)
    {
        std::cout << "2 quarter" << std::endl;
    }
    if(x < 0 && y < 0)
    {
        std::cout << "3 quarter" << std::endl;
    }
}

void x_y2(int x1, int y1, int x2, int y2, int x3, int y3) // 23
{
    int x4, y4;
    if(x == x1)
    {
        x4 = x3;
    }
    else
    {
        x4 = x1;
    }
    if(y1 == y2)
    {
        y4 = y3;
    }
    else
    {
        y4 = y1;
    }
    std::cout << " x = " << x4 << std::endl
              << " y = " << y4 << std::endl;
}

void quadratic_equation1(double x) // 24
{
    double f = 0;
    if(x > 0)
    {
        f = 2 * sin(x);
    }
    if( x <= 0)
    {
        f = 6 - x;
    }
    std::cout << f;
}

void quadratic_equation2(int x) // 25
{
    int f;
    if(x < -2 || x > 2)
    {
        f = 2 * x;
    }
    else
    {
        f = -3 * x;
    }
    std::cout << f;
}

void quadratic_equation3(double x) // 26
{
    double f = 0;
    if( x <= 0)
    {
        f = -x;
    }
    if( 0 < x && x < 2)
    {
        f = x * x;
    }
    if( x >= 2)
    {
        f = 4;
    }
    std::cout << f;
}

void quadratic_equation4(double x) // 27
{
    double f;
    if(x < 0)
    {
        f = 0;
        std::cout << f;
        return;
    }
    if( (int)x % 2 == 0)
    {
        f = 1;
    }
    else
    {
        f = -1;
    }
    std::cout << f;
    return;
}

int year(int year) // 28
{
    if(year != 0)
    {
        std::cout << 365 << std::endl;
        if(year % 4 == 0)
        {
            std::cout << 366 << std::endl;
        }
    }
}

void how_number(int value) // 29
{
    if(value > 0)
    {
        std::cout << "Value positive " << std::endl;
    }
    else
    {
        std::cout << "Value negative " << std::endl;
    }
    if(value == 0)
    {
        std::cout << "Value zero " <<std::endl;
    }
    else
    {
        std::cout << "Value nonzero " <<std::endl;
    }
    if(value % 2 == 0)
    {
        std::cout << "Value even " <<std::endl;
    }
    else
    {
        std::cout << "same number " <<std::endl;
    }
}

void how_number1(int a) // 30
{
    if(a => 1 && a <= 999)
    {
        if(a % 2 == 0 && a => 10 && a <= 99)
        {
            std::cout << "two-digit number" << " ";
        }
        if(a % 2 != 0 && a => 100 && a <= 999)
        {
            std::cout << "three-digit number" << " ";
        }
    }
}

#endif // IF_H_INCLUDED
