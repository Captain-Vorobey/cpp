#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>

struct String
{
    char* m_words;
    int m_size;
    int m_capacity;
    void push_back(char word)
    {
        if(m_size == m_capacity - 1)
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
        for(int i = 0; str[i] != 0; ++i)
        {
            //std::cout << str[i];
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
        String result;
        for(int i = 0; i < m_size; ++i)
        {
            result.push_back(m_words[i]);
        }
        for(int i = 0; i < str.m_size; ++i)
        {
            result.push_back(str[i]);
        }
        return result;
    }
};

String f(String a)
{
    std::vector<String> arr;
    String temp;
    for(int i = 0; i < a.size(); ++i)
    {
        if(a[i] == ')')
        {
            continue;
        }
        temp.push_back(a[i]);
        if(a[i] == '(')
        {
            arr.push_back(temp);
            ++i;
        }
    }
    String result;
    for(auto i = arr.begin(); i != arr.end(); ++i)
    {
        std::cout << i->m_words << std::endl;
        result = result + i->m_words;
    }
    return result;
}

int main()
{
    String a;
    String b = "DJHF)DHF(SK)";
    f(b);
    //std::cout << b.m_size;
    return 0;
}
