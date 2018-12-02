#ifndef CASE_H_INCLUDED
#define CASE_H_INCLUDED
#include <iostream>

void days_of_weak(int day) // 1
{
    switch(day)
    {
        case(1):
        {
            std::cout << "Monday" << " ";
            break;
        }
        case(2):
        {
            std::cout << "Tuesday" << " ";
            break;
        }
        case(3):
        {
            std::cout << "Wednesday" << " ";
            break;
        }
        case(4):
        {
            std::cout << "Thursday" << " ";
            break;
        }
        case(5):
        {
            std::cout << "Friday" << " ";
            break;
        }
        case(6):
        {
            std::cout << "Saturday" << " ";
            break;
        }
        case(7):
        {
            std::cout << "Sunday" << " ";
            break;
        }
        default:
            std::cout << "No such day";
    }
}

void ratings(int ratings) // 2
{
    switch(ratings)
    {
        case(1):
        {
            std::cout << "Bad" << " ";
            break;
        }
        case(2):
        {
            std::cout << "Unsatisfactory" << " ";
            break;
        }
        case(3):
        {
            std::cout << "Satisfactory" << " ";
            break;
        }
        case(4):
        {
            std::cout << "Good" << " ";
            break;
        }
        case(5):
        {
            std::cout << "Fine";
            break;
        }
        default:
            std::cout << "You made à mistake as Maloi who decided to be a programmer";
    }
}

void pores_of_the_year(int n) // 3
{
    switch(n)
    {
    case(1):
    {
        std::cout << "Winter";
        break;
    }
    case(2):
    {
        std::cout << "Winter";
        break;
    }
    case(3):
    {
        std::cout << "Spring";
        break;
    }
    case(4):
    {
        std::cout << "Spring";
        break;
    }
    case(5):
    {
        std::cout << "Spring";
        break;
    }
    case(6):
    {
        std::cout << "Summer";
        break;
    }
    case(7):
    {
        std::cout << "Summer";
        break;
    }
    case(8):
    {
        std::cout << "Summer";
        break;
    }
    case(9):
    {
        std::cout << "Autumn";
        break;
    }
    case(10):
    {
        std::cout << "Autumn";
        break;
    }
    case(11):
    {
        std::cout << "Autumn";
        break;
    }
    case(12):
    {
        std::cout << "Winter";
        break;
    }
    default:
        std::cout << "No such month";
    }
}

void days_of_month(int day) // 4
{
    switch(day)
    {
    case(1):
    {
        std::cout << "31 Days";
        break;
    }
    case(2):
    {
        std::cout << "28 Days";
        break;
    }
    case(3):
    {
        std::cout << "31 Days";
        break;
    }
    case(4):
    {
        std::cout << "30 Days";
        break;
    }
    case(5):
    {
        std::cout << "31 Days";
        break;
    }
    case(6):
    {
        std::cout << "30 Days";
        break;
    }
    case(7):
    {
        std::cout << "31 Days";
        break;
    }
    case(8):
    {
        std::cout << "31 Days";
        break;
    }
    case(9):
    {
        std::cout << "30 Days";
        break;
    }
    case(10):
    {
        std::cout << "31 Days";
        break;
    }
    case(11):
    {
        std::cout << "30 Days";
        break;
    }
    case(12):
    {
        std::cout << "31 Days";
        break;
    }
    default:
        std::cout << "No such month";
    }
}

void operations(double a, double b, int n) // 5
{
    switch(n)
    {
        case(1):
    {
        std::cout << "Sum " << a + b;
        break;
    }
    case(2):
    {
        std::cout << "Subtraction " << a - b;
        break;
    }
    case(3):
    {
        std::cout << "Mul " << a * b;
        break;
    }
    case(4):
    {
        std::cout << "Division " << a / b;
        break;
    }
    default :
        std::cout << "No such operation";
    }
}

void measures_of_length(double value, int n) // 6
{
    switch (n)
    {
        case(1):
        {
            std::cout << "Decimeter " << value / 10.0 ;
            break;
        }
        case(2):
        {
            std::cout << "Kilometer " << value / 1000.0 ;
            break;
        }
        case(3):
        {
            std::cout << "Meter " << value / 100.0 ;
            break;
        }
        case(4):
        {
            std::cout << "Millimeter " << value * 10.0 ;
            break;
        }
        case(5):
        {
            std::cout << "Centimeter " << value ;
            break;
        }
    }
}

void mass_units(double value, int n) // 7
{
    switch (n)
    {
        case(1):
        {
            std::cout << "Kilogram " << value * 1000.0 ;
            break;
        }
        case(2):
        {
            std::cout << "Milligram " << value / 1000.0 ;
            break;
        }
        case(3):
        {
            std::cout << "Gram " << value ;
            break;
        }
        case(4):
        {
            std::cout << "Ton " << value * 10000000.0 ;
            break;
        }
        case(5):
        {
            std::cout << "Centner " << value * 1000000.0 ;
            break;
        }
    }
}

void cards(int value, int suit) // 15
{
    switch(value)
    {
        case(1):
        {
            std::cout << "1" << " ";
            break;
        }
        case(2):
        {
            std::cout << "2" << " ";
            break;
        }
        case(3):
        {
            std::cout << "3" << " ";
            break;
        }
        case(4):
        {
            std::cout << "4" << " ";
            break;
        }
        case(5):
        {
            std::cout << "5" << " ";
            break;
        }
        case(6):
        {
            std::cout << "6" << " ";
            break;
        }
        case(7):
        {
            std::cout << "7" << " ";
            break;
        }
        case(8):
        {
            std::cout << "8" << " ";
            break;
        }
        case(9):
        {
            std::cout << "9" << " ";
            break;
        }
        case(10):
        {
            std::cout << "10" << " ";
            break;
        }
        case(11):
        {
            std::cout << "jack" << " ";
            break;
        }
        case(12):
        {
            std::cout << "queen" << " ";
            break;
        }
        case(13):
        {
            std::cout << "king" << " ";
            break;
        }
        case(14):
        {
            std::cout << "ace" << " ";
            break;
        }
    }

    switch(suit)
    {
        case(1):
        {
            std::cout << "h" << " ";
            break;
        }
        case(2):
        {
            std::cout << "d" << " ";
            break;
        }
        case(3):
        {
            std::cout << "s" << " ";
            break;
        }
        case(4):
        {
            std::cout << "c" << " ";
            break;
        }
    }
}

void numbers(int value)
{
    switch(value / 100)
    {
        case(1):
        {
            std::cout << "one" << " ";
            break;
        }
        case(2):
        {
            std::cout << "two" << " ";
            break;
        }
        case(3):
        {
            std::cout << "three" << " ";
            break;
        }
        case(4):
        {
            std::cout << "four" << " ";
            break;
        }
        case(5):
        {
            std::cout << "five" << " ";
            break;
        }
        case(6):
        {
            std::cout << "six" << " ";
            break;
        }
        case(7):
        {
            std::cout << "seven" << " ";
            break;
        }
        case(8):
        {
            std::cout << "eight" << " ";
            break;
        }
        case(9):
        {
            std::cout << "nine" << " ";
            break;
        }
    }
    if((value / 100) != 0)
    {
        std::cout << "hundred" << " ";
    }

    switch((value / 10) % 10)
    {
        case(2):
        {
            std::cout << "twenty" << " ";
            break;
        }
        case(3):
        {
            std::cout << "thirty" << " ";
            break;
        }
        case(4):
        {
            std::cout << "forty" << " ";
            break;
        }
        case(5):
        {
            std::cout << "fifty" << " ";
            break;
        }
        case(6):
        {
            std::cout << "sixty" << " ";
            break;
        }
        case(7):
        {
            std::cout << "seventy" << " ";
            break;
        }
        case(8):
        {
            std::cout << "eighty" << " ";
            break;
        }
        case(9):
        {
            std::cout << "ninety" << " ";
            break;
        }
    }

    if((value / 10) % 10 == 1)
    {
        switch(value % 10)
        {
            case(0):
            {
                std::cout << "ten" << " ";
                break;
            }
            case(1):
            {
                std::cout << "eleven" << " ";
                break;
            }
            case(2):
            {
                std::cout << "twelve" << " ";
                break;
            }
            case(3):
            {
                std::cout << "thirteen" << " ";
                break;
            }
            case(4):
            {
                std::cout << "fourteen" << " ";
                break;
            }
            case(5):
            {
                std::cout << "fifteen" << " ";
                break;
            }
            case(6):
            {
                std::cout << "sixteen" << " ";
                break;
            }
            case(7):
            {
                std::cout << "seventeen" << " ";
                break;
            }
            case(8):
            {
                std::cout << "eighteen" << " ";
                break;
            }
            case(9):
            {
                std::cout << "nineteen" << " ";
                break;
            }
        }
    }

    else
    {
        switch(value % 10)
        {
            case(1):
            {
                std::cout << "one" << " ";
                break;
            }
            case(2):
            {
                std::cout << "two" << " ";
                break;
            }
            case(3):
            {
                std::cout << "three" << " ";
                break;
            }
            case(4):
            {
                std::cout << "four" << " ";
                break;
            }
            case(5):
            {
                std::cout << "five" << " ";
                break;
            }
            case(6):
            {
                std::cout << "six" << " ";
                break;
            }
            case(7):
            {
                std::cout << "seven" << " ";
                break;
            }
            case(8):
            {
                std::cout << "eight" << " ";
                break;
            }
            case(9):
            {
                std::cout << "nine" << " ";
                break;
            }
        }
    }
}

void run_case()
{
    cards(3, 3);
    numbers(111);
};

#endif // CASE_H_INCLUDED
