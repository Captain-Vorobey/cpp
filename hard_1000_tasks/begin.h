#ifndef BEGIN_H_INCLUDED
#define BEGIN_H_INCLUDED
#include <cmath>
#define PI 3.14
#include <iostream>

struct Pair
{
    int first;
    int second;
};

int find_perimeter(int a) //begin 1
{
    int p = 4 * a;
    return a;
}

int find_square(int a) //begin 2
{
    int s = pow(a,2);
    return s;
}

int find_square_and_perimeter_1(int a, int b) //begin 3
{
    int s = a * b;
    return s;
}

int find_square_and_perimeter_2(int a, int b) //begin 3
{
    int p = 2 * (a + b);
    return p;
}

int find_length(int d) // begin 4
{
    int l = PI * d;
    return l;
}

int find_volume_and_surface_area1(int a) // begin 5
{
    int v = pow(a, 3);
    return v;
}

int find_volume_and_surface_area2(int a) // begin 5
{
    int s = 6 * pow(a, 2);
    return s;
}

int volume_and_surface_1(int a, int b, int c) // begin 6
{
    int v = a * b * c;
    return v;
}

int volume_and_surface_2(int a, int b, int c) // begin 6
{
    int s = 2 * (a * b + b * c + a * c);
    return s;
}

int circumference_and_area1(int r) // begin 7
{
    int l = 2 * PI * r;
    return l;
}

int circumference_and_area2(int r) // begin 7
{
    int s = PI * pow(r, 2);
    return s;
}

int arithmetic_average(int a, int b) // begin 8
{
    return (a + b) / 2;
}

int geometric_mean(int a, int b) // begin 9
{
    return sqrt(a * b);
}

void nonzero_numbers(int a, int b) // begin 10
{
    int c = pow(a, 2);
    int d = pow(b, 2);
    int sum = c + d;
    int difference = c - d;
    int mul = c * d;
    int div = c / d;
    std::cout << sum << " " << difference << " " << mul << " " << div << std::endl;
}

void nonzero_numbers_abs(int a, int b) // begin 11
{
    int c = abs(a);
    int d = abs(b);
    int sum = c + d;
    int difference = c - d;
    int mul = c * d;
    int div = c / d;
    std::cout << sum << " " << difference << " " << mul << " " << div << std::endl;
}

int find_the_hypotenuse_and_per1(int a, int b) // begin 12
{
    int c = sqrt(pow(a, 2) + pow(b, 2));
    return c;
}

int find_the_hypotenuse_and_per2(int a, int b, int c) // begin 12
{
    int p = a + b + c;
    return p;
}

int find_square_and_radius(int r1, int r2) // begin 13
{
    int s1 = PI * pow(r1, 2);
    int s2 = PI * pow(r2, 2);
    int s3 = s1 - s2;
    return s3;
}

int find_radius_and_square1(int l) //  begin 14
{
    int r = l / (2 * PI);
    return r;
}

int find_radius_and_square2(int l, int r) //  begin 14
{
    int s = PI * pow(r, 2);
    return s;
}

int find_diameter_and_length(int s) // begin 15
{
    int d = sqrt(s / PI) * (1.0 / 2.0);
    int l = PI * d;
    return l, d;
}

int two_pointers(int x1, int x2) // begin 16
{
    return abs(x2) - abs(x1);
}

int find_length_1(int a, int b, int c) // begin 17
{
    int ac = abs(c - a);
    return ac;
}

int find_length_2(int a, int b, int c) // begin 17
{
    int bc = abs(b - a);
    return bc;
}

int find_length_3(int a, int b, int c) // begin 17
{
    int ac = abs(c - a);
    int bc = abs(b - a);
    int d = ac + bc;
    return d;
}

int mul_ab_bc(int a, int b, int c) // begin 18
{
    return abs(c - a) * abs(c - b);
}

int per_and_square1(int x1, int x2, int y1, int y2) // begin 19
{
    int a = y2 - y1;
    int b = x2 - x1;
    int p = 2 * (a + b);
    return p;
}

int per_and_square2(int x1, int x2, int y1, int y2) // begin 19
{
    int a = y2 - y1;
    int b = x2 - x1;
    int s = a * b;
    return s;
}

int distance(int x1, int x2, int y1, int y2) // begin 20
{
    int a = pow((x2 - x1), 2);
    int b = pow((y2 - y1), 2);
    int c = sqrt(a + b);
    return c;
}

void heron(int x1, int x2, int x3, int y1, int y2, int y3) // 21
{
    double ax = x1 - x2;
    double ay = y1 - y2;
    double bx = x2 - x3;
    double by = y2 - y3;
    double cx = x3 - x1;
    double cy = y3 - y1;
    double a = sqrt(ax * ax + ay * ay);
    double b = sqrt(bx * bx + by * by);
    double c = sqrt(cx * cx + cy * cy);
    double p = (a + b + c) / 2;
    double S = sqrt(p *(p - a) * (p - b) * (p - c));
    std::cout << S << " " << p << std::endl;
}

void swap_1(int& a, int& b) //22
{
    int temp = a;
    a = b;
    b = temp;
}

void swap_2(int& a, int& b, int& c) // 23
{
   int temp = b;
   b = a;
   c = temp;
   a = temp;
}

void swap_3(int& a, int& b, int& c) // 24
{
    int temp = c;
    int temp1 = b;
    c = a;
    b = temp;
    a = temp1;
}

int f1(int x) // 25
{
    return 3 * pow(x, 6) - 6 * pow(x, 2) - 7;
}

int f2(int x) // 26
{
    return 4 * pow(x - 3, 6) - 7 * pow(x - 3, 3) + 2;
}

int pow(int value) // 27
{
    int a = value * value; // pow(a, 2)
    a = a * a; // pow(a, 4)
    a = a * a; // pow(a, 8)
    return a;
}

int power(int a) // 28
{
    int b;
    b = a * a; // pow(A, 2)
    a = b * a; //pow(A, 3)
    a = a * b;
    b = a;
    a = a * a; //pow(A, 10)
    a = a * b; //pow(A, 15)
}

double angle_measure_1(double value) // 29
{
    return value * PI / 180;
}

double angle_measure_2(double value) // 30
{
    return value * 180 / PI;
}

int temperature_1(int tf) // 31
{
    return (tf - 32) * 5 / 9;
}

int temperature_2(int tc) // 32
{
    return 9 * tc / 5 + 32;
}

int kg_candies_1(int x, int a) // 33_1
{
    return x * a;
}

int kg_candies_2(int y, int a) // 33_2
{
    return y * a;
}

int candies(int x, int a, int y, int b) // 34
{
    int candies = 1 * y;
    int iriski = 1 * b;
    int expensive = a / b;
    std::cout << candies << " " << iriski << " " << expensive << std::endl;
}

int boat(int v, int u, int t1, int t2) // 35
{
    return v * t1 + (v - u) * t2;
}

int two_cars_1(int v1, int v2, int s, int t) // 36
{
    return s + t * (v1 + v2);
}

int two_cars_2(int v1, int v2, int s, int t) // 37
{
    return std::abs(s + t *(v1 - v2));
}

int linear_equation_1(int a, int b) // 38
{
    return - (b / a);
}

void roots(int a, int b, int c) // 39
{
    int d = pow(b, 2) - 4 * a * c;
    int x1 = (-b + sqrt(d)) / (2 * a);
    int x2 = (-b -sqrt(d)) / (2 * a);
    std::cout << x1 << " " << x2 << std::endl;
}

void linear_equation_2(int a1, int b1, int c1, int a2, int b2 ,int c2) // 40
{
    int d = a1 * b2 - a2 * b2;
    int x = (c1 * b2 - c2 * b1) / d;
    int y = (a1 * c2 - a2 * c1) / d;
}

#endif // BEGIN_H_INCLUDED
