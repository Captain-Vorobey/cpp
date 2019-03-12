#ifndef STRING_H_INCLUDED
#define STRING_H_INCLUDED

struct String
{
    char* str;
    int m_size;
    int m_capacity;
    String()
    {
        m_size = 0;
        m_capacity = 10;
        str = new char [m_capacity];
    }
    void push_back(char word)
    {
        if(m_size == m_capacity)
        {
            m_capacity * 2;
        }
        resize();
        str[m_size++] = word;
    }
     void resize()
    {
        char* temp = new char[m_capacity];
        std::copy(str, str + m_capacity, temp);
        delete[]str;
        str = temp;
    }
};


#endif // STRING_H_INCLUDED
