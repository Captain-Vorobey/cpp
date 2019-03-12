#include <iostream>
#include <initializer_list>

struct Vector{
    int* arr;
    size_t size;
    size_t capacity;
    Vector(){
        size = 0;
        capacity = 10;
        arr = new int[capacity];
    }
    Vector(std::initializer_list<int> l){
        size = l.size();
        capacity = l.size();

        for(auto i = l.begin() ; i < l.end() ; ++i){
            std::cout << *i << " " ;
        }
    }
};

struct Matrix{
    int** arr;
    int row;
    int column;

    Matrix(int r,int c)
    {
        row = r;
        column = c;
        alocate();
    }

    void print_matrix(){
        for(int i = 0 ; i < row ; ++i){
            for(int j = 0 ; j < column ; ++j){
                std::cout << arr[i][j] << " ";
            }
            std::cout << std::endl;
        }
    }

    void insert(int row,int column,int value){
        arr[row][column] = value;
    }
    void alocate(){
        arr = new int*[row];
        for(int i = 0 ; i < row ; ++i){
            *(arr + i) = new int[column];
        }
    }

    int& at(int column,int row){
        return arr[column][row];
    }

    Matrix operator*(int value){
        Matrix result = *this;

        for(int i = 0 ; i < row ; ++i){
            for(int j = 0 ; j < column ; ++j){
                result.arr[i][j] *= value;
            }
        }
        return result;
    }

    Matrix(std::initializer_list<std::initializer_list<int>> il){
        row = il.size();
        std::cout << "row " << row << " " << std::endl;
        column = (*il.begin()).size();
        std::cout << "column " << column << " " << std::endl;
        alocate();
        int i1 = 0;
        for(auto i = il.begin() ; i < il.end() ; ++i,++i1){
            int j1 = 0;
            for(auto j = i->begin() ; j != i->end() ; ++j,++j1){
                std::cout << *j << " " ;
                arr[i1][j1] = *j;
            }
            std::cout << std::endl;
        }
    }
};

int main()
{
    /* int arr[2][5];
    Matrix a(2,5);
    a.insert(0, 0, 1);
    a.insert(0, 1, 2);
    a.insert(1, 2, 4);
    //a.print_matrix();
    auto l = {1,2,3,4,5};
    std::initializer_list<int> l1{1,2,3,4,5};
    for(auto i = l1.begin() ; i < l1.end() ; ++i){
        std::cout << *i << " " ;
    }
    std::cout << std::endl;
     */
    //Vector b{1,2,3,4,5,6,7};
    Matrix a{{1,3,5,7},{2,4,6,8},{0,0,0,0}};
    a.at(0,0) = 99;
    //a.print_matrix();
    a = a * 3;
    a.print_matrix();
    //std::cout << a.at(1, 2);
    return 0;
}
