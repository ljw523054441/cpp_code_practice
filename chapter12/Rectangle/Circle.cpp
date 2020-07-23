#include "Circle.h"

ostream & operator<<(ostream & out, const Circle & circle)
{
    out << circle.radius << endl;
    return out;
}

Circle::~Circle()
{
}