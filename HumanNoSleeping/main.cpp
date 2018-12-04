#include <iostream>
#include <set>

std::set<int> andl(std::set<int> a, std::set<int> b)
{
    std::set<int> result;
    for(std::set<int>::iterator i = a.begin(); i != a.end(); ++i)
    {
        if(*b.find(*i) == *i)
        {
            std::cout << *i << std::endl;
            result.insert(*i);
        }
    }
    return result;
}

std::set<int> orl(std::set<int> a, std::set<int> b)
{
    std::set<int> result;
    for(auto i = a.begin(); i != a.end(); ++i)
    {
        result.insert(*i);
    }

    for(auto j = b.begin(); j != b.end(); ++j)
    {
        result.insert(*j);
    }
    return result;
}

std::set<int> xor(std::set<int> a, std::set<int> b)
{
    std::set<int> result;
    for(std::set<int>::iterator i = a.begin(); i != a.end(); ++i)
    {
        if(*b.find(*i) == b.end())
        {
            std::cout << *i << std::endl;
            result.insert(*i);
        }
    }
    return result;
}

int main()
{
    std::set<int> a{1, 43, 43, 9, 11, 12, 13};
    std::set<int> b{7, 7, 92, 11, 12, 13};
    andl(a, b);
    /*for(auto i = a.begin(); i != a.end(); ++i)
    {
        std::cout << *i << std::endl;
    }*/
    return 0;
}
