#ifndef CIRCLE_H
#define CIRCLE_H
#include <iostream>
using namespace std;

class Circle
{
private:
    float radius;
    float area;
public:
    
    Circle(float radius = 0) : radius(radius){}
    ~Circle();

    friend ostream & operator<<(ostream & out, const Circle & circle);
};




#endif