#ifndef FOR_H_INCLUDED
#define FOR_H_INCLUDED
#include <iostream>

template <class T>
void for_1(T n, T k)
{
    for(int i = 0; i != n; ++i)
    {
        std::cout<< k <<std::endl;
    }
}

template <class T>
void for_2(T a, T b)
{
    T n = 0;
    for(; a <= b; ++a)
    {
        std::cout << a << std::endl;
        ++n;
    }
    std::cout << n;
}

template <class T>
void for_3(T a, T b)
{
    T n = 0;
    for(; a != b; --b)
    {
        std::cout << b <<std::endl;
        ++n;
    }
    std::cout << n;

}

void for_4(double value)
{
    for(int i = 1; i != 10; ++i)
    {
        std::cout << i * value << std::endl;
    }
}

void for_5(double value)
{
    for(double i = 0.1; i <= 1; i += 0.1)
    {
        std::cout << i * value << std::endl;
    }
}

void for_6(double value)
{
    for(double i = 1.2; i <= 2; i += 0.2)
    {
        std::cout << i * value << std::endl;
    }
}

template <class T>
int for_7(T a, T b)
{
    T temp = 0;
    for(; a <= b; ++a)
    {
        temp += a;
    }
    return temp;
}

template <class T>
int for_8(T a, T b)
{
    T temp = 1;
    for(; a <= b; ++a)
    {
        temp *= a;
    }
    return temp;
}

template <class T>
int for_9(T a, T b)
{
    T temp = 0;
    for(; a <= b; ++a)
    {
        temp += pow(a,2);
    }
    return temp;
}

double for_10(int n)
{
    double temp = 0;
    for(double i = 1; i <= n; ++i)
    {
        temp += 1/i;
    }
    return temp;
}

int for_11(int n )
{
    int temp = 0;
    for(int i = 0; i != n; ++i)
    {
        temp += pow(n + i, 2);
    }
    return temp;
}

int for_12(double n)
{
    double temp = 1;
    for(double i = 1.1; i <= n; i += 0.1)
    {
        temp *= i;
    }
    return temp;
}

double for_13(double n)
{
    double temp = 0;
    for(double i = 1.0; i <= n; i += 0.1, temp *= -1)
    {
        temp = temp + i;

    }
    return temp;
}

void for_14(int n)
{
    int temp = 0;
    for(int i = 1; i <= n; ++i)
    {
        temp += 2 * i - 1;
        std::cout << temp <<std::endl;
    }
}

double for_15(double a, int n)
{
    double temp = 1;
    for(int i = 1; i <= n; ++i)
    {
        temp *=a;
    }
    return temp;
}

void for_16(double a, int n)
{
    double temp = 1;
    for(int i = 0; i != n; ++i)
    {
        temp *= a;
        std::cout << temp << std::endl;
    }
}

int for_17(double a, int n)
{
    int temp = 0;
    for(int i = 0; i != n; ++i)
    {
        temp += pow(a,i);
    }
    return temp;
}

double for_18(double a, int n)
{
    double temp = 0;
    for(int i = 0; i != n; ++i, temp *= -1)
    {
        temp += pow(a,i);
    }
    return temp;
}

double for_19(double value)
{
    double temp = 1;
    for(int i = 2; i <= value; ++i)
    {
        temp *= i;
    }
    return temp;
}

double for_20(double value)
{
    double temp = 1;
    for(int i = 2; i <= value; ++i)
    {
        temp += temp * i;
    }
    return temp;
}

int sum_digits(int a, int n) // for_17
{
    int temp = 0;
    for(int i = 2; i < n; ++i)
    {
        temp += pow(a, i);
    }
    return temp;
}

int operations_on_digits(int a, int n) // for_18
{
    int temp = 0;
    int temp1 = 1;
    for(int i = 2; i < n; ++i, temp1 *= -1)
    {
        temp = pow(a, i) * temp1;
    }
    return temp;
}

int factorial_1(int n) // for_19
{
    int temp = 1;
    int temp1 = 1;
    for(int i = 0; i < n - 1; ++i, ++temp1)
    {
        temp += temp * temp1;
    }
    return temp;
}

int factorial_2(int n) // 20
{
    int temp = 1;
    int temp1 = 1;
    int temp2 = 0;
    for(int i = 0; i < n - 1; ++i, ++temp1)
    {
        temp += temp * temp1;
        temp2 += temp;
    }
    return temp2;
}

double sum_factorial(double n) // for_21
{
    double temp = 1;
    double temp1 = 1;
    double temp3 = 0;
    for(double i = 0; i < n - 1; ++i, ++temp1)
    {
        temp += temp * temp1;
        temp3 += 1 / temp;
    }
    return temp3;
}

double sum_pow_factorial(double n, double x) // for_22
{
    double temp = 1;
    double temp1 = 1;
    double temp3 = 0;
    for(double i = 1; i < n - 1; ++i, ++temp1)
    {
        temp += temp * temp1;
        temp3 += pow(x, i) / temp;
    }
    return temp3;
}

double operations_on_factorial(double x, double n) // for_23
{
    double temp = 1;
    double temp1 = 1;
    double temp2 = 1;
    double temp3 = x;
    for(int j = 0; j < n; ++j, ++temp1)
    {
        temp += temp * temp1;
    }

    for(double i = 3;  i < n; i += 2, temp2 *= -1)
    {
        temp3 += pow(x, i) / temp * temp2;
    }
    return temp3;
}

double for_25(double x, double n)
{
    double temp = x;
    for(int i = 2; i <= n; ++i, temp *= -1)
    {
        temp += pow(x, i) / i;
    }
    return temp;
}

double for_26(double x, double n)
{
    double temp  = x;
    for(int i = 3; i <= n; i += 2, temp *= -1)
    {
        temp += pow(x, i) / i;
    }
    return temp;
}

double for_27(double x, double n)
{
    double temp = x;
    for(int i = 3; i <= n; ++i)
    {
        temp += (2 * i -1) * pow(x, 2 * i -1) / (2 * i + 1);
    }
    return temp;
}

double for_28(double x, double n)
{
    double temp = 1;
    for(int i = 1; i <= n; ++i)
    {
        temp += pow(-1, i) * (2 * i - 3) * pow(x, i) / (2 * i);
    }
    return temp;
}

void for_29 (double a, double h, int n)
{
    for(int i = 0; i <= n; ++i)
    {
        std::cout << a + i * h <<std::endl;
    }
}

void for_31(int n)
{
    int a = 2;
    for(int i = 1; i <= n; ++i)
    {
        a = 2 + 1 / a - 1;
        std::cout << a;
    }
}


void k(double k) // 32
{
    double temp0 = 1;
    double tempk = 2;
    for(int i = 0; i < k; ++i)
    {
        tempk = tempk - temp0;
        tempk = (tempk + 1) / k;
        std::cout << tempk << std::endl;
        ++temp0;
    }
}

void fibonacci(int value) // 33
{
    int temp1 = 0;
    int temp2 = 1;
    for(int i = 2; i <= value; ++i)
    {
        temp1 += temp2;
        temp2 = temp1 - temp2;
        std::cout << temp2 << " ";
    }
}

double for_34(int k) // 34
{
    double a1 = 1;
    double a2 = 2;
    int a;
    for(int i = 0; i < k; ++i)
    {
        a1 = a1 + a2;
        a = a1 + 2 * a2;
    }
    return a;
}

double for_36(double n, double k)
{
    double temp = 0;
    for(int i = 1; i <= n; ++i)
    {
        temp += pow(i, k);
    }
    return temp;
}

double for_37(double n)
{
    double temp = 0;
    for(int i = 1; i <= n; ++i)
    {
        temp += pow(i, i);
    }
    return temp;
}

double for_38(double n, double k)
{
    double temp = 0;
    for(int i = 1; i <= n; ++i, --k)
    {
        temp += pow(n, k);
    }
    return temp;
}

void for_39(int n)
{
    for(int i = 1; i <= n; ++i)
    {
        for(int j = 1; j <= i; ++j)
        {
            std::cout << i << std::endl;;
        }
    }
}

void print_digits(int a, int b) // 40
{
    for(int i = a; i < b; ++i)
    {
        for(int j = 1; j < i; ++j)
        {
            std::cout << i << std::endl;
        }
    }
}

void run_tests()
{
    std::cout << operations_on_factorial() << " ";
    for_32(8);
}

#endif // FOR_H_INCLUDED
