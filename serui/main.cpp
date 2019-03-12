#include <iostream>

double sum_digits(double value, double n)
{
    double sum = 0;
    for(double i = 1; i <= value; i = i + 0.1)
    {
        sum = sum + i * n;
    }
    std::cout << sum;
}

void power(int value, int pow)
{
    int temp = 1;
    for(int i = 0; i < pow; ++i)
    {
        temp = temp * value;
        std::cout << temp << std::endl;
    }

}

bool polindrom(int* array, int first, int last)
{
    --last;
    for(; first < last; ++first, --last)
    {
        if(array[first] != array[last])
        {
            return false;
        }
        return true;
    }
}

int main()
{
    int array[5] {1, 0, 3, 2, 1};
    std::cout << polindrom(array, 0, 5);
    //power(2, 5);
    return 0;
}
