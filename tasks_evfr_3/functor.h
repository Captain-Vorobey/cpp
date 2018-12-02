#ifndef FUNCTOR_H_INCLUDED
#define FUNCTOR_H_INCLUDED

struct Even_find
{
    bool counter = true;
    bool operator()(int a, int b)
    {
        if(counter)
        {
            counter = false;
            return a < b;
        }
        else
        {
            counter = true;
            return false;
        }
    }
};

struct Test
{
    bool counter = true;

    void operator()()
    {
        if(counter)
        {
            counter = false;
            std::cout << "yes" << std::endl;
        }
        else
        {
            counter = true;
            std::cout << "no" << std::endl;
        }
    }


};

#endif // FUNCTOR_H_INCLUDED
