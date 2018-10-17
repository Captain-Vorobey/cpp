#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
    std::vector<int> v{4, 2, 6, 8, 2, 3, 5, 7, 3, 25, 89, 38, 68};

    auto print = [](int &n) { std::cout << n << " "; };

    std::for_each(v.begin(), v.end(), print);
    std::cout << std::endl;

    std::for_each(v.begin(), v.end(), [](int &n){ ++n; });
    std::for_each(v.begin(), v.end(), print);

    return 0;
}
