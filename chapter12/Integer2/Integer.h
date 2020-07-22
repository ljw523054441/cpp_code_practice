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

    //重载赋值符号，不需要最后的const来修饰函数,因为后面的函数实现里会修改成员变量的值
    const Integer & operator=(const Integer & other);

    //友元函数，重载+号运算符，可以只保留友元函数这一个，也可以两个都保留
    friend const Integer operator+(int,const Integer &);

    //重载<<流运算符，一般只能使用友元函数的方式
    //今后就可以直接重载流运算符，以便封装某个对象的打印格式
    friend ostream & operator<<(ostream &,const Integer &);

    //重载>>流运算符
    friend istream & operator>>(istream &,Integer &);//因为会要修改这个Integer变量的值，所以不需要const

    void SetValue(int value){m_value = value;}
    int GetValue(){return m_value;}

    ~Integer();
};


#endif