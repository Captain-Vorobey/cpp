#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

struct Point
{
    int x;
    int y;
    Point() = default;
    Point(int x_, int y_)
    {
        x = x_;
        y = y_;
    }
    void print()
    {

    }
};

/*struct Functor
{
    std::vector<Point> a;
    int counter = 0;
    int result = 0;
    operato()(int value)
    {
        result += value;
        ++counter;
    }
    void push_back(Point& value)
    {
        a.push_back(value);
    }
};*/

struct Functor
{
    int counter = 0;
    int result = 0;
    void sum(int value)
    {
        result += value;
        ++counter;
    }
};

char f(char v, int key)
{
    return v ^ key;
}

template <class Iterator>
std::string crypt(Iterator message, int key)
{
    std::string result;
    for(auto i = message.begin(); i != message.end(); ++i)
    {
        result.push_back(f(*i, key));
    }
    return result;
}

int* function_(int* first, int* last)
{
    int* result = new int[10]{0};
    for(; first != last; ++first)
    {
        ++result[*first];
    }
    return result;
}

void arr(int (*array)[2], int col, int row)
{
    for(int i = 0; i < col * row; ++i)
    {
            std::cout << array[0][i] << " ";
    }
}

int sum_arr(int** arr1, int col, int row)
{
    int temp = 0;
    for(int i = 0; i < col; ++i)
    {
        for(int j = 0; j < row; ++j)
        {
            temp += arr1[i][j];
        }
    }
    return temp;
}

int get_n(int** arr2, int row, int col)
{
    for(int i = 0; i < row; ++i)
    {
        if(std::all_of(arr2[i], arr2[i] + col, [](int a){return a > 0;}))
            {
                return i;
            }
    }
    return -1;
}

struct Figure
{
    int colour;
    virtual double square() = 0;
    virtual double perimeter() = 0;

};

struct Rectungle:Figure
{
    int a;
    int b;
    double square() override
    {
        return a * b;
    }
    double perimeter() override
    {
        return a + a;
    }
};

struct Square:Figure
{
    int a;
    double square() override
    {
        return a * a;
    }

    double perimeter() override
    {
        return 2 * (a + a);
    }
};

struct Circle:Figure
{
    int r;

};

/*int accumulate(Figure* first, Figure* last, int init)
{
    for(; first != last; ++first)
    {
        temp += Figure -> Square();
    }
    return init;
}*/

int main()
{
    /*int array[10]{0,1,1,2,3,4,3,5,5,7};
    for(int i = 0; i != 10; ++i);
    Point a(1, 3);
    std::cout << a.x << " " << a.y << std::endl;
    Functor c;
    c.sum(5);
    c.sum(6);
    std::cout << c.result << " " << c.counter;
    std::string s = "Hello";
    std::string b = crypt(s, 45456);
    std::cout << s << " " << b << std::endl;
    std::cout << function_(array, array + 10);
    int (*array)[2] = new int[2][2]{{1, 2}, {3, 4}};
    int array1[2][2]{{1, 2}, {3, 4}};
    arr(array, 2, 2);*/
    int** arr1 = new int*[2];
    std::cout << sum_arr(arr1, 2, 4);
    /*for(int i = 0; i < 2; ++i)
    {
        arr1[i] = new int[2]{{1, 2}, {3, 4}};
    }*/
    //Figure* f = new circle;
    Figure* f1 = new Rectangle;
    Figure* f2 = new Square;
    Figure* f3 = new Trictangle;
    Figure* array[3]{new Square(4}, new Rectungle(4, 3), new Circle(2)};
    return 0;
}
