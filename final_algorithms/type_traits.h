#ifndef TYPE_TRAITS_H_INCLUDED
#define TYPE_TRAITS_H_INCLUDED

namespace stu
{

template <class T>
struct is_pointer
{
    static const bool value = false;
};

template <class T>
struct is_pointer<T*>
{
    static bool const value = true;
};

}

#endif // TYPE_TRAITS_H_INCLUDED
