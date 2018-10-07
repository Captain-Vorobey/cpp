#ifndef ARRAYS_NEW_METHOD_H_INCLUDED
#define ARRAYS_NEW_METHOD_H_INCLUDED

using UnaryPredicate = bool(*) (int);
enum Direction {Straight, Back};
enum Colours {red, green, yellow};

void fill_array(int* first, int* last, int start, int step)
{
    for(; first != last; ++first, start += step)
    {
        *first = start;

    }
}

void fill_array_not_even_numbers(int* first, int* last, int start)
{
    if(is_even(start))
    {
        ++start;
    }
    fill_array(first, last, start, 2);
}

void print_array(int* first, int* last)
{
    for(; first != last; ++first)
    {
        std::cout << *first << std::endl;
    }
}

void fill_powers_2(int* first, int* last, int value)
{
    for(int i = 0; first != last; ++first, ++i)
    {
        *first = pow(value, i);
    }
}

void array3(int* first, int* last, int a, int d)
{
    for(int i = 0; first != last; ++i, ++first)
    {
        *first = a + i * d;
    }
}

void array4(int* first, int* last, int a, int d)
{
    for(int i = 1; first != last; ++first, ++i)
    {
        *first = a * pow(d, i);
    }
}

void digits_fibonacci(int* first, int* last)
{
    *(first++) = 0;
    *(first++) = 1;
    for(; first != last; ++first)
    {
        *first = *(first - 1) + *(first - 2);
    }
}

void array6(int* first, int* last, int a, int b)
{
    *(first++) = a;
    *(first++) = b;
    int temp = a + b;
    for(; first != last; ++first)
    {
        *first = temp;
        temp = temp + *first;
    }
}

void array7(int* first, int* last)
{
    for(; first != last; --first)
    {
        std::cout << *first << std::endl;
    }
}

int print_if_straight(int* first, int* last, UnaryPredicate p)
{
    int temp = 0;
    for(; first != last; ++first)
    {
        if(p(*first))
        {
            std::cout << *first << std::endl;
            ++temp;
        }
    }
    return temp;
}

int print_if_back(int* first, int* last, UnaryPredicate p)
{
    int temp = 0;
    for(; first != last; --first)
    {
        if(p(*first))
        {
            std::cout << *first << std::endl;
            ++temp;
        }
    }
    return temp;
}

int array8(int* first, int* last, UnaryPredicate p, Direction direct)
{
    if(direct == Direction::Straight)
    {
        return print_if_straight(first, last, p);
    }
    return print_if_back(first, last, p);
}

void print_colours(int c)
{
    if(c == 0)
    {
        std::cout << "red" << std::endl;
    }

    if(c == 1)
    {
        std::cout << "green" << std::endl;
    }
    if(c == 2)
    {
        std::cout << "yellow" << std::endl;
    }
}

void print_colours(Colours c)
{
    if(c == Colours::red)
    {
        std::cout << "red" << std::endl;
    }

    if(c == Colours::green)
    {
        std::cout << "green" << std::endl;
    }
    if(c == Colours::yellow)
    {
        std::cout << "yellow" << std::endl;
    }
}



#endif // ARRAYS_NEW_METHOD_H_INCLUDED
