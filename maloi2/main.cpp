#include <iostream>

using namespace std;

int min_(int a,int b)
{
    if(a<b)
    {
        return a;
    }
    return b;
}

template <class Iterator>
void min_element(Iterator arr,int size)
{
    int i = 0;
    for(; i!= size-1; ++i )
    {

        if(arr[i]<arr[i+1])
        {
            int temp = arr[i];
            std::cout << temp << std::endl;
        }
    }
}




int main()
{
    int arr[10] {10,7,6,5,4,1,2,3,5,8};
    std::cout<<min_(10,20)<<std::endl;
     min_element(arr,10);
    return 0;
}
