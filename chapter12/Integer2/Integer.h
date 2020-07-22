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
    const Integer operator+(const Integer & other) const;
    const Integer operator-(const Integer & other) const;
    const Integer operator*(const Integer & other) const;
    const Integer operator/(const Integer & other) const;
    const Integer operator%(const Integer & other) const;

    int GetValue(){return m_value;}

    ~Integer();
};


#endif