#include <iostream>
#include "algorithm.h"



int main()
{
    Matrix a;
    int array5[3][3] {1, 2, 3}, {11, 22, 33}, {111, 222, 333};



    int array[10] {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int array1[5] {2, 4, 6, 8, 10};
    int array2[5] {3, 5, 7, 9, 11};
    int array3[10] {0};
    //int array4[10] {6, 2, 6, 3, 6, 7, 7, 6, 3, 3};
    //int res = *min_el(array, array + 10, [](int a, int b){return a > b;});
    int res1 = task_7(array, array + 10);
    //print_array(array, 10, res1);
    //std::cout << res2 << std::endl;
    //int result = new_array(array1, array1 + 5, array2, array2 + 5, array3, array3 + 10);
    //int result1 = max_amount(array4, 10);
    //std::cout << result << std::endl;
    std::cout << res1 << std::endl;
    /*for(int i = 0; i != 10; ++i)
    {
        std::cout<< array3[i] << " ";
    }*/
    return 0;
}
