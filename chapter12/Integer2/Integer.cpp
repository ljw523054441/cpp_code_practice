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

Integer::~Integer()
{
}