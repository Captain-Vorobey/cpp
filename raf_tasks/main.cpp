#include <iostream>
#include <vector>
#include <algorithm>
#include "tasks.h"

int main()
{
    int s = counter(25.0090999990, 9);
    int a = 5;
    int b = 10;
    int c = 15;
    bool res = arithmetic_progression(25.12345678);
    increase(a, b, c);
    std::vector<int> arr{625, 125, 25, 5, 1, 8, 4, 25, 5, 7},
    bool res1 = is_exist(125, arr);
    std::cout << res1;
    Pair a(5, 2);
    std::cout << a << " ";
    Node* head;
    head = new Node(5);
    head -> next = new Node(6);
    head -> next -> next = new Node(7);
    while(head != nullptr)
    {
        std::cout << head -> value << std::endl;
        head = head -> next;
    }
    List a;
    a.push_back(1);
    a.push_back(12);
    a.push_back(13);
    a.push_back(4);
    a.print_list();
    Calculator b;
    int res = b.operations["add"](1, 2);
    using Pair = std::pair<std::string, int>;
    std::map<std::string, int> test{std::pair<std::string, int>("watermelon", 5}, Pair("potato", 2)};
    std::cout << test["watermelon"] << " " << test["potato"] << std::endl;
    return 0;
}
