#include <iostream>
#include "algoritms.h"

namespace stu
{
    struct Vector
    {
        int* m_arr;
        int m_capacity;
        int m_size;
        Vector()
        {
             m_size = 0;
             m_capacity = 50;
             m_arr = new int[m_capacity];
        }
        void push_back(int value)
        {
            m_arr[m_size++] = value;
        }
        int& at(int index)
        {
            return m_arr[index];
        }
    };
}

int main()
{
    stu::Vector arr;
    arr.push_back(5);
    arr.push_back(51);
    arr.at(1) = 99;
    for(int i = 0; i < arr.m_size; ++i)
    {
        std::cout << arr.at(i) << std::endl;

    }
    return 0;
}
