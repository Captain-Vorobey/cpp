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
    int AC = abs(c - a);
    return AC;
}

int find_length_2(int a, int b, int c) // begin 17
{
    int BC = abs(b - a);
    return BC;
}

int find_length_3(int a, int b, int c) // begin 17
{
    int AC = abs(c - a);
    int BC = abs(b - a);
    int d = AC + BC;
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



#endif // BEGIN_H_INCLUDED
