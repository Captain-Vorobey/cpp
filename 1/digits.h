#ifndef DIGITS_H_INCLUDED
#define DIGITS_H_INCLUDED
#include <algorithm>

std::array<int, 10> count_digits(int value)
{
    std::array<int, 10> result{0};
    for(; value / 10;)
    {
        result[value % 10]++;
    }
    return result;
}

std::vector f(int* first, int* last)
{
    std::vector<int> result;
    for(auto i = result.begin(); i != result.end(); ++i)
    {
        result[*first]++;
    }
    return result;
}

bool digits_is_equal_n(int value, int n)
{
    auto result = count_gidits(value);
    int counter = 0;
    for(auto i = result.begin(); i != result.end(); ++i)
    {
        if(*i > n)
        {
            return false;
        }
        if(*i == n)
        {
            ++counter;
        }
        if(counter > 1)
        {
            return false;
        }
        return counter == 1;
    }
}

int sum_digits_between(int value, int first, int last)
{
    int temp = value / std::pow(10, first);
    int sum = 0;
    for(int i = last; i != 0; --i, temp = temp / 10)
    {
        sum += temp % 10;
    }
    return sum;
}

int reverse_digit(int value)
{
    int result = 0;
    for(; value; value /= 10)
    {
        result *= 10;
        result = result + value % 10;
    }
    return result;
}

bool is_polindrom()

#endif // DIGITS_H_INCLUDED
