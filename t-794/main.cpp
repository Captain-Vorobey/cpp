#include <iostream>
#include "algorithms.h"


int main()
{
    int array1[10]{2, 8, 5, 1, 9, 3, 32, 6, 87, 10};
    int array2[10]{22, 88, 55, 11, 99, 33, 332, 66, 887, 110};
    std::cout << addres(array1, array1 + 10) << std::endl;
    std::cout << arr_swap(array1, array1 + 10, array2, array2 + 10) << std::endl;
    /*int array[10]{4, 8, 2, 3, 6, 1, 9, 34, 32, 69};
    Accum a;
    for(int i = 0; i < 10; ++i)
    {
        a.cal = (array[i]);
    }

    Fraction a;
    Fraction b;
    Fraction c = b.mul(a);
    b.num = 1;
    b.denum = 2;*/
    return 0;
}
