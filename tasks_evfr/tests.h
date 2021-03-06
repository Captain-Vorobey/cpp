#ifndef tests_h
#define tests_h
#define Vector std::vector<int> v{1,2,3,4,5,6,7,8,9,10}
#include <vector>
#include <cassert>
#include "Header.h"

void find_element_test()
{
    Vector;
    auto f = find_element(v.begin(),v.end(),[](int a,int b){return a<b;});
    auto f1 = find_element(v.begin(),v.end(),[](int a,int b){return a>b;});
    assert(*f == 1);
    assert(*f1 == 10);
}

void run_tests()
{
    find_element_test();

}

#endif // TESTS_H_INCLUDED
