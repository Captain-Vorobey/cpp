#ifndef ALGORITHMS_H_INCLUDED
#define ALGORITHMS_H_INCLUDED
#include <algorithm>

template <class Iterator>
Iterator addres(Iterator first, Iterator last)
{
    Iterator addres_ = first;
    int min_el = *first;
    for(; first != last; ++first)
    {
        if(min_el > *first)
        {
            min_el = *first;
            addres_ = first;
        }
    }
    return addres_;
}

void swap(int& a, int& b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void arrays_swap(int* array1, int* array2, int size)
{
    for(int i = 0; i != size; ++i)
    {
        swap(array1[i], array2[i]);
    }
}


void arr_swap(int* array1, int* array2)
{
    int* temp = array1;
    array1 = array2;
    array2 = temp;
}


struct Fraction
{
    int m_num;
    int m_denum;
    Fraction(int num, int denum)
    {
        m_num = num;
        m_denum = denum;
    }
    Fraction mul(/*Fraction*/ this, Fraction that)
    {
        Fraction result;
        result.num = (*this).num * that.num;
        result.denum = (*this).denum * that.denum;
        return result;
    }
};

struct Accum;
{
    int result = 0;
    void calc(int value)
    {
        result += value;
    }
};

struct Find_el
{
    int result;
    Find_el(int value)
    {
        result = value;
    }
    calc(int value)
    {
        if(result < value)
        {
            result = value;
        }
    }
};


int gcd(int a, int b)
{
    int c;
    while(c = a % b)
    {
        a = b;
        b = c;
    }
}

Fraction operator*
{
    Fraction result;
    result.num = a.num * b.num;
    result.denum = a.denum * b.denum;
    result.normalize()
    {
        int gcd;
    }
    return result;
}

struct Human
{
    std::string first_name;
    std::string second_name;
    Human(){};
    Human(std::string f, std::string s)
    {
        first_name = f;
        second_name = s;
    }
};

Human arr[3]
{
    Human("Nikita", "Rost"),
    Human("Egor", "Vorobey"),
    Human("BigLittleBoss", "Maloy");
}

arr[1].first_name

int gcd(int a, int b)
{
    if(a < b)
    {
        std::swap(a, b);
    }
    while(int c = a % b)
    {
        a = b;
        b = c;
    }
    return b;
}

int lcm(int a, int b)
{
    return (a * b) / stu::gcd(a, b);
}

#endif // ALGORITHMS_H_INCLUDED
