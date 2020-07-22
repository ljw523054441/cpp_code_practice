#ifndef INTEGER_H
#define INTEGER_H
#include <iostream>

using namespace std;

//我们自己定义的整型类，将整型封装成类，以便实现面向对象的封装

class Integer
{
private:
    int m_value;//实际的整型数字(m表示member，成员的意思)
public:
    Integer();
    Integer(int value) : m_value(value){}//定义有参构造并直接实现
    
    //重载+号运算符
    Integer operator+(Integer other);//这样写，其实整个最原始的重载已经写完了，类型 函数名(参数)
    //const Integer operator+(const Integer & other) const;
    //这里可见ConstDemo.h里的4和5
    //第一个const是为了更加有效率，同时这里并不能返回一个引用，因为函数return的是一个局部变量，局部变量不能返回它的引用，详见该重载的定义部分
    //第二个const是为了使这个函数本身不修改这个传入的参数，同样传递引用是为了提高效率
    //最后一个const表示这个函数不修改当前这个类的成员变量

    int GetValue(){return m_value;}

    ~Integer();
};


#endif