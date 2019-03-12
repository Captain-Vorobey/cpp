#ifndef TASKS_H_INCLUDED
#define TASKS_H_INCLUDED
#include <iostream>
#include <vector>
#include <algorithm>
#include "tasks.h"

using BO = int(*)(int, int);

void swap(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}

void increase(int& a, int& b, int& c)
{
    std::vector<int> arr;
    arr.push_back(a);
    arr.push_back(b);
    arr.push_back(c);
    std::sort(arr.begin(), arr.end(), [](int a, int b){
              return a > b;});
    a = arr[0];
    b = arr[1];
    c = arr[2];
}


int get_after_point(double a, int k)
{
    a = a - (int)a;
    return a * pow(10, k);
}

int counter(double a, int k)
{
    int temp = 0;
    int a1 = get_after_point(a, k);
    while(a1)
    {
       if(a1 % 10 == 9)
       {
           ++temp;
       }
       a1 /= 10;
    }
    return temp;
}

bool arithmetic_progression(double a)
{
    int a1 = get_after_point(a, 8);
    int d = (a1 / 10) % 10 - a1 % 10;
    while(a1)
    {
        if((a1 / 10) % 10 - (a1 % 10) != d)
        {
            return false;
        }
        a1 = a1 / 10;

    }
    return true;
}

double pow_(int a)
{
    return pow(a, 2);
}

int decreasing_sequence(int* arr, int size)
{
    int temp = 0;
    int temp1 = 0;
    for(int i = 0; i < size; ++i)
    {
        if((arr[i] / 5) == arr[i + 1])
        {
            ++temp;
            if(temp1 < temp)
            {
                temp1 = temp;
            }
            else
            {
                temp = 0;
            }
        }
    }
    return temp1;
}

/*bool is_exist(int value, std::vector<int> a)
{
    return find(a.begin(), a.end(), [value](Pair temp){return temp.first == value;}) != a.end();
}*/

struct Pair
{
    int m_first = 0;
    int m_second = 0;
    Pair(int first, int second)
    {
        m_first = first;
        m_second = second;
    }
};

std::ostream& operator << (std::ostream& out, const Pair& p)
{
    return out << "first: " << p.m_first << " second " << p.m_second;
}

/*void f(int* first, int* last)
{
    std::vector<Pair> res;
    for(; first != last; ++first)
    {
        if(!is_exist(*first, res))
        {
            res.push_back(Pair(*first, 1));
        }
    }
        else
    {
        auto temp = find_if(a.begin, a.end(), [value](Pair temp){return m.first == value;});
        temp -> m_second++;
    }
    for(auto i = res.begin()); i < res.end(); ++i)
    {
        std::cout << *i << std::endl;
    }
}*/

struct Node
{
    int value;
    Node* next;
    Node()
    {
        value = 0;
        next = nullptr;
    }
    Node(int v)
    {
        value = v;
        next = nullptr;
    }
};

struct List
{
    Node* head = nullptr;
    List() = default;

    void push_back(int value)
    {
        if(head == nullptr)
        {
            head = new Node(value);
        }
        else
        {
            Node* i = head;
            for(; i -> next != nullptr; i = i -> next)
            {
                i -> next = new Node(value);
            }
        }
        void print_list()
        {
            Node* temp = head;
            for(; i -> next != nullptr; i = i -> next)
            {
                std::cout << i -> value << " ";
            }
        }
    }
};

struct Calculator
{
    std::map<std::string, BO> operations;
    Calculator()
    {
        operations.insert(std::pair<std::string, BO("add", [](int a, int b]{return a + b;}));
        operations.insert(std::pair<std::string, BO("sub", [](int a, int b]{return a - b;}));
    }
};

int calc(int op1, int op2, int operations)
{
    switch(operations)
    {
        case(0):
        {
            op1 + op2;
        }
        case(1):
        {
            op1 - op2;
        }
        case(2):
        {
            op1 * op2;
        }
        case(3):
        {
            op1 / op2;
        }
        default:
            return -1;
    }
}

std::set<int> f(int* first, int* last)
{
    std::set<int> result;
    for(; first != last; ++first)
    {
        result.insert(*first);
    }
    return result;
}

#endif // TASKS_H_INCLUDED
