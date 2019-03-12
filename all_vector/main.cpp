#include <iostream>

struct Vector
{
    unsigned size_type = unsigned long long int;
    using value_type = int;
    using reference = int&;
    using const_reference = const int&;
    using pointer = int*;
    size_type size;
    size_type capacity;
    pointer storage;
    vector();
    vector(std::initializer_list<int> l);
    reference operator[](value_type value);
    reference at();
    void push_back();
    void pop_back();
    void restore();
};

void vector::Vector(vector::size size, vector::size_type capacity, vector::pointer storage)
{
    size = s;
    capacity = c;
    storage = s;
}

void vector::Vector push_back(std::vector value)
{
    if(s == c)
    {
        c *= 2;
        restore();
    }
    storage[size++] = value;
}

namespace stu
{

struct vector
{
    //datatypes
    using size_type = unsigned long long int;
    using value_type = int;
    using reference = int&;
    using const_reference = const int&;
    using pointer = int*;
    //"filds"
    size_type m_size;
    size_type m_capacity;
    pointer storage;
    //ctors
    vector();
    vector(std::initializer_list<int> l);
    //functions
    //Element acces
    reference operator[](value_type value);
    reference at();

    void push_back(value_type value);
    void pop_back();
    void restore();
};

vector::vector(vector::size size, vector::size_type capacity, vector::pointer storage)
{
    m_size = size;
    m_capacity = capacity;
    m_storage = storage;
}

void restore(int& )
{

}

void vector::push_back(value_type value)
{
    if(m_size == m_capacity)
    {
        m_capacity *= 2;
        restore();
    }
    storage[size++] = value;
}

void vector::pop_back()
{
    --m_size;
}

reference vector::operator[](vector::size_type value)
{
    return
}

}

int main()
{
    Vector a;
    return 0;
}
