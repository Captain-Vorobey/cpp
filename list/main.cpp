#include <iostream>

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

    Node* head = nullptr;
    List() = default;
    void push_back(int value)
    {
        Node* i = head;
        if(i == nullptr)
        {
            i = new Node(value);
        }
        else
        {
            while(i-> next)
            {
                i = i-> next;
            }
            i = new Node(value);
        }
    }

    void print_list()
    {
        Node* temp = head;
        while(temp-> next)
        {
            std::cout << temp-> next << std::endl;
            temp = temp-> next;
        }
    }
};

int main()
{
    List::Node* head = new List::Node(8);
    head-> next = new List::Node(7);
    head-> next -> next = new List::Node(4);
    head-> next -> next -> next = new List::Node(9);
    std::cout << head-> value << " " << head-> next-> value << " " << head-> next-> next-> value;
    List a;
    a.push_back(5);
    a.push_back(4);
    a.push_back(7);
    a.push_back(6);
    return 0;
}
