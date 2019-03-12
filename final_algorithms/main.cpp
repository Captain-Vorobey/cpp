#include <iostream>
#include "algorithm.h"
/*
struct List
{
    struct Node
    {
        int value;
        Node* next = nullptr;
        Node() = default;
        Node(int v)
        {
            value = v;
        }
        Node* head = nullptr;
        List() = default;
        void push_back()
        {
            Node* i = nullptr;
            if(i == nullptr)
            {
                i = new Node(value);
            }
            else
            {
                while(i -> next)
                {
                    i = i -> next;
                }
                i = new Node(value);
            }
        }
    };
};
*/

template <class Iterator>
void insertion_sort(Iterator first, Iterator last)
{
    for(; first != last; ++first)
    {
        std::iter_swap(first, std::min_element(first, last));
    }
}

int main()
{
    int array[5]{11, 22, 3, -4, 25};
    //std::cout << stu::is_pointer<int*>::value << std::endl;
    //std::cout << stu::my_binary_search(array, 0, 5, 3);
    insertion_sort(array, array + 5);
    std::for_each(array, array + 5, [](int a){std::cout << a << " ";});
    return 0;
}
