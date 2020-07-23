#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>
#include <cstring>
using namespace std;

//自定义的数组类
class Array
{
private:
    int m_length;
    int * m_datas;
public:
    Array(int length = 0);//此处一个构造相当于实现了两个构造的作用
    //1. Array();
    //2. Array(int);

    //拷贝构造函数
    Array(const Array & arr);

    const Array & operator=(const Array & arr);

    // int operator[](int index);//这种重载方式是只读的，叫获取元素，无法写入
    int & operator[](int index);

    friend ostream & operator<<(ostream & out,const Array & arr);

    ~Array();
};


#endif