#ifndef BOOLEAN_H_INCLUDED
#define BOOLEAN_H_INCLUDED

bool is_positiv(int a) // 1
{
    return a > 0;
}

bool is_not_even(int a) // 2
{
    return a % 2 != 0;
}

bool even(int a) // 3
{
    return a % 2 != 0;
}

bool inequalities_1(int a, int b) // 4
{
    return a > 2 && b <= 3;
}

bool inequalities_2(int a, int b) // 5
{
    return a >= 0 || b < -2;
}

bool inequalities_3(int a, int b, int c) // 6
{
    return a < b && b < c;
}

template <class T>
bool inequalities_4(T a, T b, T c) // 7
{
    return a < b && b < c;
}

bool inequalities_5(int a, int b) // 8
{
    return a % 2 != 0 && b % 2 != 0;
}

bool one_is_not_even_1(int a, int b) // 9
{
    return a % 2 != 0 || b % 2 != 0;
}

bool one_is_not_even_2(int a, int b) // 10
{
    return a % 2 != 0 ^ b % 2 != 0;
}

template <class T>
bool same_parity(int a, int b) // 11
{
    return a % 7 == 0 && b % 7 == 0;
}

bool all_positiv(int a, int b, int c) // 12
{
    return a > 0 && b > 0 && c > 0;
}

bool one_positiv_1(int a, int b, int c) // 13
{
    return a > 0 || b > 0 || c > 0;
}

bool one_positiv_2(int a, int b, int c) // 14
{
    return a > 0 ^ b > 0 ^ c > 0;
}

bool one_positiv_3(int a, int b, int c) // 15
{
    return a > 0 && b > 0 ^ c > 0;
}

bool is_even_two_digit(int a) // 16
{
    return a % 2 == 0 && a > 9 && a < 100;
}

bool is_not_even_three_digits(int a) // 17
{
    return a % 2 != 0 && a > 99 && a < 1000;
}

bool pair1(int a, int b, int c) // 18
{
    return a == b || b == c || a == c;
}

bool mutually_opposite(int a, int b, int c) // 19
{
    return a == -b || b == -c || a == -c;
}

bool various_digits_number(int value) // 20
{
    int a = value % 10;
    int b = (value / 10) % 10;
    int c = (value / 100);
    return a != b && b != c;
}

bool increasing_follower(int value) // 21
{
    int a = value % 10;
    int b = (value / 10) % 10;
    int c = (value / 100);
    return c > b && b > a;
}

bool increasing_or_decreasing_follower_1(int value) // 22
{
    int a = value % 10;
    int b = (value / 10) % 10;
    int c = (value / 100);
    return c > b && b > a || c < b && b < a;
}

bool increasing_or_decreasing(int a) // 23
{
    int temp = a;
    int b = 0;
    while (temp != 0)
    {
          b = b * 10 + temp % 10;
          temp /= 10;
    }
    if (a == b)
    {
        return true;
    }
        return false;
}

bool bool_25 (int x, int y)
{
    return x < 0 && y > 0;
}

bool bool_26 (int x, int y)
{
    return x > 0 && y < 0;
}

bool bool_27 (int x, int y)
{
    return (x < 0 && y > 0) || (x < 0 && y < 0);
}
bool bool_28 (int x, int y)
{
    return (x > 0 && y > 0) || (x < 0 && y < 0);
}

bool bool_29 (int x, int y)
{
    int x1 = 1,y1 = 3,x2 = 6,y2 = 3;
    return(x > x1 && x < x2) && (y < y1 && y < y2);
}

bool bool_30 (int a, int b, int c)
{
    return a == b && b == c;
}

bool bool_31 (int a, int b, int c) // ???????? ?? ?????????
{
    return ((a == b) && (a != c)) || ((a = c) && (a != b)) || ((b == c) && (b != a));
}

bool bool_32 (int a, int b, int c)
{
    return (a + b == c) || (a + c == b) || (b + c == a);
}

bool bool_33 (int a, int b, int c)
{
    return ((a + b) > c) && ((a + c) > b) && ((c + b) > a);
}

bool bool_34 (int x, int y) // 34
{
    return (x + y) % 2 != 0;
}

bool bool_35 (int x, int y, int x1, int y1) // 35
{
    return ((x + y) % 2 != 0) && ((x1 + y1) % 2 != 0);
}

bool rook(int x, int y, int x1, int y1) // 36
{
    return x == x1 || y == y1;
}

bool king(int x, int y, int x1, int y1) // 37
{
    return abs(x - x1) == 1 && abs(y - y1) == 1;
}

bool elephant(int x, int y, int x1, int y1) // 38
{
    return abs(x - x1) == abs(y - y1);
}

bool queen(int x, int y, int x1, int y1) // 39
{
   return (x == x1 || y == y1) && abs(x - x1) == abs(y - y1);
}

bool horse(int x, int y, int x1, int y1) // 40
{
    return abs(x - x1) == 1 && abs(y - y1) == 2 || abs(x - x1) == 2 && abs(y - y1) == 1;
}

#endif // BOOLEAN_H_INCLUDED
