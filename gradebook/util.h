#ifndef UTIL_H_INCLUDED
#define UTIL_H_INCLUDED
#include <algorithm>

std::string int_to_string (int value)
{
    std::string result ;
    for(; value; value = value / 10)
    {
        result.push_back(value % 10 + '0');

    }
      std::reverse(result.begin(),result.end());
      return result;
}

#endif // UTIL_H_INCLUDED
