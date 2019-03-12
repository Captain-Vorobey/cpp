#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>

struct String
{
    char* m_words;
    int m_size;
    int m_capacity;
    void push_back(char word)
    {
        if(m_size == m_capacity)
        {
            m_capacity = m_capacity * 2;
            resize();
        }
        m_words[m_size++] = word;
        m_words[m_size] = 0;
    }

    String()
    {
        m_size = 0;
        m_capacity = 100;
        m_words = new char[m_capacity];
    }

    String(const char* str)
    {
        m_size = 0;
        m_capacity = std::strlen(str) * 2;
        m_words = new char[m_capacity];
        for(int i = 0; str != 0; ++i)
        {
            push_back(str[i]);
        }
    }

    void resize()
    {
        char* temp = new char[m_capacity];
        std::copy(m_words, m_words + m_size + 1, temp);
        delete[] m_words;
        m_words = temp;
    }

    int size()
    {
        return m_size;
    }

    char& operator[](int index)
    {
        return m_words[index];
    }

    String operator+(String str)
    {

    }
};

struct Pair
{
    int first;
    int last;
    Pair() = default;
    Pair(int f, int l)
    {
        first = f;
        last = l;
    }
};
/*
std::vector<Pair> f(int* first, int* last)
{
    std::vector<Pair> result;
    for(; first != last; ++first)
    {
        //auto el = std::find_if(result.begin(), result.end(), [first](Pair p){return p.first == *first});
        /*if(el == result.end())
        {
            result.push_back(Pair(*first, 1));
        }
        else
        {
            el -> last++;
        }
    }
    return result;
}*/

int main()
{
    int arr[10]{1, 2, 1, 2, 5, 3, 7, 5, 9, 6};
    std::vector<int> v{1, 2, 3, 3, 3, 2, 6, 7, 6, 8};
    for_each(v.begin(), v.end(), [](int a){std::cout << a << std::endl;});
    String a;
    String b = "Hello World";
    return 0;
}
