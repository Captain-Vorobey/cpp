#include <iostream>
#include <algorithm>
#define Array int M_array[3][3] {{1, 2, 3}, {1, 2, 3}, {1, 2, 3}};

struct Matrix
{
    Array;
    int column;
    int row;
    Matrix()
    {
        column = 3;
        row = 3;
        storage();
    }

    void storage()
    {
        M_array = new int* [column];
        for(int i = 0; i < column; ++i)
        {
            M_array[i] = new int [row];
        }
    }
    Matrix(int c, int r)
    {
        column = c;
        row = r;
        storage();
    }
    int& at(int c, int r)
    {
        return M_array[c][r];
    }
    void fill_matrix(int c, int r)
    {
        int temp = 0;
        for(int i = 0; i < c; ++i)
        {
            for(int j = 0; j < r; ++j)
            {
                M_array[i][j] = temp;
                ++temp;
            }
        }
    }
    void print_matrix()
    {
        for(int i = 0; i < column; ++i)
        {
            for(int j = 0; j < row; ++j)
            {
                std::cout << M_array[i][j] << " \t";
            }
            std::cout << std::endl;
        }
    }
    int sum_row(int index)
    {
        int result = 0;
        for(int i = 0; i < column; ++i)
        {
            result += M_array[index][i];
        }
        return result;
    }
    int sum_task()
    {
        int min_index = 0;
        int min_sum = sum_row(0);
        for(int i = 1; i < row + 1; ++i)
        {
            int temp = sum_row(i);
            if(temp < min_sum)
            {
                min_sum = temp;
                min_index = i;
            }
        }
        return min_index;
    }
    void fill_array()
    {
        int temp = rand() % 3 + 1;
        for(int i = 0; i < column; ++i)
        {
            for(int j = 0; j < row; ++j)
            {
                M_array[i][j] = rand();
            }
        }
    }
};

/*struct Matrix
{
    int** M_array;
    int column;
    int row;

    Matrix()
    {
        column = 10;
        row = 10;
        storage();
    }

    void storage()
    {
        M_array = new int* [column];
        for(int i = 0; i < column; ++i)
        {
            M_array[i] = new int [row];
        }
    }

    Matrix(int c, int r)
    {
        column = c;
        row = r;
        storage();
    }

    int& at(int c, int r)
    {
        return M_array[c][r];
    }

    void fill_matrix()
    {
        int temp = 0;
        for(int i = 0; i < column; ++i)
        {
            for(int j = 0; j < row; ++j)
            {
                M_array[i][j] = temp;
                ++temp;
            }
            std::cout << std::endl;
        }
    }

    void print_matrix()
    {
        for(int i = 0; i < column; ++i)
        {
            for(int j = 0; j < row; ++j)
            {
                std::cout << M_array[i][j] << std::endl;
            }
        }
    }
};*/

int main()
{
    int M_array[3][3] {{1, 2, 3}, {1, 2, 3}, {1, 2, 3}};
    Matrix a;
    a.print_matrix();
    a.fill_array();
    std::cout << a.sum_task() << std::endl;
    return 0;
}
