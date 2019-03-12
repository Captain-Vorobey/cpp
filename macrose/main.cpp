#include <iostream>
#define PI 3.14
#define mul(a, b) (a) * (b)
#define FUNCTION(name, a) int name() {return a;}
#define CREATE_VAR(type, name) type name

FUNCTION(get_4, 4);


int main()
{
    int res = mul(2 + 3, 10);
    std::cout << get_4() << " ";
    CREATE_VAR(int, a);

    std::cout << res;
    return 0;
}
