#include "Integer.h"

//调用默认构造函数时，会为私有成员属性m_value赋值一个默认值0
//与在构造函数中，m_value = 0;写法作用相同
Integer::Integer() : m_value(0)
{

}

//重载+号运算符
const Integer Integer::operator+(const Integer & other) const
{
    Integer result(this->m_value + other.m_value);     //用来返回的结果对象
    //当前的m_value加上other的m_value，两个对象的私有成员在相加
    return result;
}

const Integer Integer::operator-(const Integer & other) const
{
    return Integer(this->m_value - other.m_value);
}

const Integer Integer::operator*(const Integer & other) const
{
    return Integer(this->m_value * other.m_value);
}

const Integer Integer::operator/(const Integer & other) const
{
    return Integer(this->m_value / other.m_value);
}

const Integer Integer::operator%(const Integer & other) const
{
    return Integer(this->m_value % other.m_value);
}

const Integer & Integer::operator=(const Integer & other)
{
    this->m_value = other.m_value;
    return *this;//this是指向当前对象的指针，*this就是当前对象的值
}

//友元函数不需要使用域运算符
const Integer operator+(int intValue,const Integer & other)
{
    return Integer(intValue + other.m_value);
}

//重载<<流运算符的实现
ostream & operator<<(ostream & out,const Integer & num)
{
    out << num.m_value;
    return out;
}
//重载>>流运算符的实现
istream & operator>>(istream & in,Integer & num)
{
    cout << "请输入一个整数：" << endl;
    in >> num.m_value;
    return in;
}

Integer::~Integer()
{
}