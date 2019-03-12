#ifndef VECTOR_H_INCLUDED
#define VECTOR_H_INCLUDED
#include <algorithm>
class Vector
{
    int* arr;
    int m_size;
    int m_capacity;
    Vector()
    {
        m_size = 0;
        m_capacity = 10;
        arr = new int[m_capacity];
    }
    void pushback(int value)
    {   if(m_capacity = m_size)
        {
            m_capacity * 2;
        }
        resize();
        arr[m_size++] = value;

    }
    void resize()
    {
        int* temp = new int[m_capacity];
        std::copy(arr, arr + m_capacity, temp);
        delete[]arr;
        arr = temp;
    }

};

#endif // VECTOR_H_INCLUDED
