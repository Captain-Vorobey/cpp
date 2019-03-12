#ifndef POINT_H_INCLUDED
#define POINT_H_INCLUDED

struct Point
{
    int x;
    int y;
    Point()
    {
        x = 0;
        y = 0;
    }
    Point(int x_, int y_)
    {
        x = x_;
        y = y_;
    }
};

#endif // POINT_H_INCLUDED
