#include <iostream>

int pol(int* array, int first, int last)
{
    --last;
    for(; first != last; ++first, --last)
    {
        if(array[first] != array[last])
        {
            return false;
        }
    }
    return true;
}

int min_el(int* array, int first, int last)
{
    int min_el = array[first];
    for(; first != last - 1; ++first)
    {
        if(min_el < array[first + 1])
        {
            min_el = array[first + 1];
        }
    }
    return min_el;
}

int accumulate(int* array, int first, int last)
{
    int temp = 1;
    for(; first != last - 1; ++first)
    {
        temp *= array[first];
    }
    return temp;
}

void fill_array(int* array, int first, int last)
{
    int temp = 1;
    for(; first != last; ++first, temp += 2)
    {
        array[first] += temp;
        std::cout << temp << std::endl;
    }
}

void swap(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}

int factorial(int value)
{
    int temp = 1;
    int temp1 = 1;
    for(int i = 0; i < value - 1; ++i)
    {
        temp += temp * temp1;
        ++temp1;
    }
    return temp;
}

double f(double value)
{
    double temp = 0;
    for(double i = 1.1; i < value; i += 0.1)
    {
        //temp += i * temp1;
    }
    return temp;
}

void fibonacci(int value)
{
    int temp1 = 0;
    int temp2 = 1;
    for(int i = 2; i <= value; ++i)
    {
        temp1 += temp2;
        temp2 = temp1 - temp2;
        std::cout << temp2 << " ";
    }
}

int main()
{
    //fibonacci(13);
    //int value1 = 4;
    //int value2 = 6;
    int array[5]{};
    //std::cout << pol(array, 0, 5) << std::endl;
    //std::cout << min_el(array, 0, 5) << std::endl;
    //std::cout << accumulate(array, 0, 5) << std::endl;
    //fill_array(array, 0, 5);
    //swap(value1, value2);
    std::cout << factorial(5) << std::endl;
    //std::cout << f(2) << std::endl;
    return 0;
}
