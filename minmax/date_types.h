#ifndef DATE_TYPES_H_INCLUDED
#define DATE_TYPES_H_INCLUDED

struct Pair
{
    int first;
    int second;
    Pair() = default;
    Pair(int _first, int _second)
         {
             first = _first;
             second = _second;
         }
};

int less_sqrt(Pair a, Pair b)
{
    return a.first * a.second < b.first * b.second;
}

int greater_sqrt(Pair a, Pair b)
{
    return a.first * a.second > b.first * b.second;
}

int max_density(Pair a, Pair b)
{
    return a.first / a.second > b.first / b.second;
}

#endif // DATE_TYPES_H_INCLUDED
