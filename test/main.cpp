#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>

struct Pair
{
    int first;
    int second;
    Pair() = default;
    Pair(int f, int s)
    {
        first = f;
        second = s;
    }
};

int* f(int* first, int* last)
{
    int res = new int[10] {0};
    for(; first != last; ++first)
    {
        ++res[*first];
    }
    return res;
}

std::vector<Pair> f(int* first, int* last)
{
    std::vector<Pair> result;
    for(; first != last; ++first)
    {
        std::vector<Pair>::iterator el = std::find_if(result.begin(), result.end(), [a = *first](Pair b)
        {
            return b.first == a;
        });
        if(el == result.end())
        {
            result.push_back(Pair(*first, 1));
        }
        else
        {
            el -> second++;
        }
    }
    return result;
}

template <class Iterator>
std::vector<std::pair> f1(Iterator first, Iterator last)
{
    std::vector<std::pair> result;
    for(; first != last; ++first)
    {
        auto el = std::find_if(result.begin(), result.end(), [a = *first](Pair b)
        {
            return b.first == a;
        });
    }
}

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


int main()
{
    int array[5] {1, 2, 2, 5, 8};
    std::vector<Pair> result = f(array, array + 5);
    std::for_each(result.begin(), result.end(), [](Pair a)
    {
        std::cout << a.first << " " << a.second << " " << std::endl;
    });
    return 0;
}
