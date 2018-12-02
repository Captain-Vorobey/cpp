#ifndef algorithms_h
#define algorithms_h
#include "Header.h"
#include "predicates.h"
#define Containers std::vector<int> v{5,-240,3,34,-5,6,7,23,250,10}
#include <algorithm>

void task_68(){
    Containers;
    swap(*find_element(v.begin(), v.end(),[](int a, int b){return a < b;}),
              *find_element(v.begin(), v.end(), [](int a,int b){return a > b;}) );
    for_each(v.begin(), v.end(), [](int a){ std::cout << a << " "; });
}

void task_70(){
    Containers;
    swap_rangers(v.begin(), v.begin() + 5, v.begin() + 5);
    for_each(v.begin(),v.end(),[](int a){std::cout << a << " ";});
}

void task_71(){
    Containers;
    reverse(v.begin(), v.end());
    for_each(v.begin(),v.end(),[](int a){std::cout << a << " ";});
}

void task_74(){
    Containers;
    auto min_el = stu::find_element(v.begin(),v.end(),stu::less);
    auto max_el = stu::find_element(v.begin(),v.end(),stu::greater);

    for_each(min_el,max_el,[](int& a){ a=0 ;});
    for_each(v.begin(),v.end(),[](int a){std::cout << a << " ";});
}

void task_76(){
    Containers;
    stu::zero_local_max(v.begin(),v.end(),stu::is_local_max);
    for_each(v.begin(),v.end(),[](int a){std::cout << a << " ";});







}

#endif // ALGORITHMS_H_INCLUDED
