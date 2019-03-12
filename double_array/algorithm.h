#ifndef ALGORITHM_H_INCLUDED
#define ALGORITHM_H_INCLUDED

template <typename T>
bool less_(T a, T b)
{
    return a > b;
}

template <class Iterator>
Iterator min_el(Iterator first, Iterator last)
{
    Iterator min_el = first;
    for(; first != last; ++first)
    {
        if(*min_el > *first)
        {
            min_el = first;
        }
    }
    return min_el;
}

template <class Iterator>
int task_7(Iterator first, Iterator last)
{
    int temp = *min_el(first, last);
            for_each(first, last, [temp](int& a)
    {
        if(a > 0)
        {
            a = temp;
        }
    });
}

void print_array(int* array, int first, int last)
{
    for(; first != last; ++first)
    {
        std::cout << array[first] << " ";
    }
}

template <class Iterator1, class Iterator2, class Iterator3>
int new_array(Iterator1 first1, Iterator1 last1, Iterator2 first2, Iterator2 last2, Iterator3 first3, Iterator3 last3)
{
    for(; first3 != last3; ++first3)
    {
        if(*first1 < *first2)
        {
            *first3 = *first1;
            ++first1;
        }
        else
        {
            *first3 = *first2;
            ++first2;
        }
        std::cout << *first3 << " ";
    }
}

int max_amount(int* array4, int size1)
{
    int temp = 0;
    int temp1 = 0;
    for(int i = 0; i != size1; ++i)
    {
        for(int j = 0; j != size1; ++j)
        {
            if(array4[i] == array4[j])
            {
                ++temp;
            }
        }
        if(temp1 < temp)
        {
            temp1 = temp;
            temp = 0;
        }
        else
        {
            temp = 0;
        }
    }
    return temp1;
}

/*int i = 0;
int j = 0;
for(int k = 0; k < 10; ++k)
{
    if(a1[i] < a2[j] && i < 5)
    {
        result[k] = a1[i];
        ++i;
        continue;
    }
    if(a2[j] < a1[i])
    {

    }
}*/

#endif // ALGORITHM_H_INCLUDED
