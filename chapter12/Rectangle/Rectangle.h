#ifndef RACTANGLE_H
#define RACTANGLE_H
#include <iostream>
#include "Circle.h"
using namespace std;

class Rectangle
{
private:
    float width;
    float height;
public:
    // Rectangle();//默认无参构造
    // Rectangle(float width, float height);//带参构造
    Rectangle(const Rectangle & rect);//拷贝构造，由于Rectangle的私有成员中没有指针类型，所以这个拷贝构造要和不要无所谓
    // Rectangle(float width);//转换构造 - 将其他类型转换为当前类型时使用

    //将几个构造融合在一起的写法
    //有几个成员变量就可以在里面写几个值
    Rectangle(float width = 0,float height = 0) : width(width),height(height){}
    
    //把Rectangle类型转换成float类型
    operator float() const//因为转换的时候不希望修改它的内容，所以加了个const
    {
        return width;
    }

    //把Rectangle类型转换成Circle类型
    operator Circle() const
    {
        return Circle(width / 2);
    }
    
    void display(){
        cout << "width:" << width << "," << "height:" << height << endl;
    }


    ~Rectangle();
};

#endif