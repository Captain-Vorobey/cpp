#include <iostream>
#include <algorithm>
#include <vector>
#include <list>

int gcd_(int a, int b)
{
    if(a < b)
    {
        std::swap(a, b);
    }
    int c;
    while(c = a % b)
    {
        a = b;
        b = c;
    }
    return b;
}

int gcd_recursion(int a, int b)
{
    if(a % b == 0)
    {
        return b;
    }
    return gcd_(b, a % b);
}

int f(int x)
{
    if(x == 0)
    {
        //std::cout << "return 1" << std::endl;
        return 1;
    }

    if(x % 10 >= 7)
    {
        //std::cout << "return 1 * f(x / 10), x = " << x << std::endl;
        return f(x / 10);
    }

    //std::cout << "return x % 10 * f(x / 10), x = " << x << std::endl;
    return x % 10 * f(x / 10);
}

struct String
{
    char* words;
    int size;
    int capacity;
    void push_back(char word)
    {
        words[size++] = word;
    }
    String()
    {
       size = 0;
       capacity = 100;
    }

    String(const char* str)
    {
        for(int i = 0; str[i] != 0; ++i)
        {
            push_back(str[i]);
        }
    }
};

void f1(std::list<int>& a)
{
    auto min_el = std::min_element(a.begin(), a.end());
    auto not_pos = std::find_if(a.rbegin(), a.rend(), [](int a){return a < 0;});
    a.insert(min_el, *not_pos);
}

int main()
{
    //String a;
    //String b = "Hello World";
    //std::cout << b.words;
    //std::cout << gcd_(555, 45) << std::endl;
    //std::cout << gcd_recursion(45, 5 % 45) << std::endl;
    std::cout << f(89) << std::endl;
    /*std::list<int> x{-1, 2, 3, 4, -51, 6, -7, 8, 9};
    std::for_each(x.begin(), x.end(), [](int a){std::cout << a << " ";});
    f(x);
    std::cout << std::endl;
    std::for_each(x.begin(), x.end(), [](int a){std::cout << a << " ";});*/
    return 0;
}
