#include <iostream>
#include <vector>

std::vector<int> f(int* first, int* last)
{
    std::vector<int> result;
    for(auto i = result.begin(); i != result.end(); ++i)
    {
        result[*first % 10]++;
    }
    return result;
}

int main()
{
    int array[10]{1, 1, 1, 1, 5, 7, 7, 3, 9, 9};
    auto res = f(array, array + 10);
    std::cout << res;
    return 0;
}
