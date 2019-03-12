#include <iostream>
#include <cmath>
#define PI 3.94

struct Figure
{
    virtual double square() = 0;
    virtual double perimeter() = 0;
};

struct Rectungle:Figure
{
    double a;
    double b;
    double square() override
    {
        return a * b;
    }
};

struct Square:Figure
{
    int a;
    double square() override
    {
        return a * a;
    }
};

struct Circle:Figure
{
    int r;
    double square() override
    {
        return PI * std::pow(r, 2);
    }
};

int main()
{
    //Figure* f = new Circle(4);
    Rectungle a;
    Rectungle.a = 2;
    Rectungle.a = 3;
    //Figure:Rectungle.a = 4;
    //Rectungle.b = 4;
    //Square();
    Figure* Square;
    Square.a = 4;
    Figure* Trictangle;
    return 0;
}
