#ifndef LINE_H_INCLUDED
#define LINE_H_INCLUDED
#include "Point.h"

struct Line
{
    Point start;
    Point end;
    Line()= default;
    Line(Point start_, Point end_)
    {
        start = start_;
        end = end_;
    }
};


#endif // LINE_H_INCLUDED
