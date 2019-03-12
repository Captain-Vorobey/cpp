#include <iostream>
#include <cmath>
#include <set>
#include <map>

using BO = int(*)(int, int);
using UO = int(*)(int);

struct Calculator
{
    std::map<std::string, BO> operations1;
    std::map<std::string, UO> operations2;
    Calculator()
    {
        operations1.insert(std::pair<std::string, BO> ("add", [](auto a, auto b){return a + b;}));
        operations1.insert(std::pair<std::string, BO> ("difference", [](auto a, auto b){return a - b;}));
        operations1.insert(std::pair<std::string, BO> ("div", [](auto a, auto b){return a / b;}));
        operations1.insert(std::pair<std::string, BO> ("mul", [](auto a, auto b){return a * b;}));
        operations2.insert(std::pair<std::string, UO> ("cos", [](auto a){return std::cos(a);}));
    }
};

int main()
{
    Calculator a;
    auto result1 = a.operations1["add"](4, 4);
    auto result2 = a.operations1["difference"](10, 5);
    auto result3 = a.operations1["div"](100, 4);
    auto result4 = a.operations1["mul"](142.2, -84.8);
    auto result5 = a.operations2["cos"](100);
    std::cout << result5 << " ";
    return 0;
}
