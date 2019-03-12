#include <iostream>
#include <algorithm>

struct List
{
    struct Node
    {
        Node* next = nullptr;
        int value;
        Node() = default;
        Node(int v)
        {
            value = v;
        }
    };

    List() = default;
    Node* head = nullptr;

    int get_last_Node(int value)
    {
        Node* i = nullptr;
        if(head == nullptr)
        {
            i = new Node(value);
        }
        else
        {
            while(i -> next)
            {
                i = i -> next;
            }
            i = new Node(value;)
        }
        return i;
    }

    void push_back(int value)
    {
        get_last_Node();
    }
};

//********************************************************************************



//********************************************************************************

template <class T>
T sum(T a, T b)
{
    return a + b;
}

template <class T, class Iterator>
T accumulate_(Iterator first, Iterator last, T init)
{
    for(; first != last; ++first)
    {
        init += *first;
    }
    return init;
}

/*template <class T, class Iterator>
T find_(Iterator first, Iterator last, T value)
{
    for(; first != last; ++first)
    {
        if(*first == value)
        {
            return first;
        }
    }
    return first;
}*/

char f(char str, int key)
{
    return str ^ key;
}

std::string crypt(std::string message, int key)
{
    std::string result;
    for(auto i = message.begin(); i < message.end(); ++i)
    {
        result.push_back(f(*i, key));
    }
    return result;
}

int main()
{
    List::Node* head = new List::Node(8);
    head-> next = new List::Node(7);
    head-> next -> next = new List::Node(4);
    head-> next -> next -> next = new List::Node(9);
    std::cout << head-> value << " " << head-> next-> value << " " << head-> next-> next-> value << std::endl;
    List a;
    a.push_back(5);
    a.push_back(4);
    a.push_back(7);
    a.push_back(6);
    int array[10] {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    //int I1 = find_(array, array + 10, 1);
    //int I2 = find_(array, I1 + 1, 2);
    //std::cout << accumulate_(array, array + 10, 0, I1);
    return 0;
}
