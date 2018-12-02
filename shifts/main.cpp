#include <iostream>
#include <list>
#include "print_line.h"

struct Value
{
    int byte[8];
    int cf = 0;
    Value(std::initializer_list<int> list)
    {
        int j = 0;
        for(auto i = list.begin(); i != list.end(); ++i)
        {
            byte[j++] = *i;
        }
    }

    void print()
    {
        print_bytes_number();
        for(int i = 0; i < 8; ++i)
        {
        std::cout << byte[i] << " ";
        }
        std::cout << "  " << cf;
        std::cout << std::endl;
        std::cout << std::endl;
        std::cout << std::endl;
    }

    void shr()
    {
        cf = byte[0];
        for(int i = 0; i < 8; ++i)
        {
            byte[i] = byte[i + 1];
        }
        byte[7] = 0;
    }

    void sar()
    {
        int temp = byte[7];
        shr();
        byte[7] = temp;
    }

    void shl()
    {
        cf = byte[7];
        for(int i = 8; i > -1; --i)
        {
            byte[i] = byte[i - 1];
        }
        byte[0] = 0;
    }

    void sal()
    {
        shl();
    }
};

int main()
{
    Value a = {1, 2, 3, 4, 5, 6, 7, 8};
    a.shr();
    a.print();
    Value b = {1, 2, 3, 4, 5, 6, 7, 8};
    b.sar();
    b.print();
    b.sar();
    b.print();
    b.sal();
    b.print();
    return 0;
}
