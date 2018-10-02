#include <iostream>


bool f10(bool a, bool b, bool c)
{
    return !(a && b && c) && (a ^ b ^ c);
}

int main()
{
    for(int i = 0; i < 2; ++i)
    {
        for(int j = 0; j < 2; ++j)
        {
            for(int k = 0; k < 2; ++k)
            {
                std::cout << " i " << i << " j " << j << " k " << k << " result " << f10(i, j, k) << std::endl;
            }
        }
    }
    return 0;
}
