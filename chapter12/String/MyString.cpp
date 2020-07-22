#include "MyString.h"

String::String() : m_length(0)//在构造函数中，设置m_length默认值为0
{
    this->m_value = new char[1];//同时设置m_ptrValue这个指针，指向一个长度为0+1的char数组
    this->m_value[0] = '\0';//字符数组长度为0，但实际的字符数组中会存在唯一的元素\0
    //干的活相当于 char * str = &"";
}

String::String(char * str)
{
    //将传入的字符串str的值赋给当前对象中的m_ptrValue
    if(NULL == str)//如果传入的是个空字符串，则做法同上面的默认构造
    {
        this->m_value = new char[1];
        this->m_value[0] = '\0';
        return;
    }
    m_length = strlen(str);
    m_value = new char[m_length+1];//注意加一是给\0留出一个空间
    strcpy(m_value,str);//字符串赋值用strcpy，把str的值赋给m_ptrValue
}

ostream & operator<<(ostream & out, const String & str)
{
    out << str.m_value << '\n';
    // cout << "m_value的长度：" << str.m_value;
    return out;
}

String::~String()
{
    //析构时，释放字符数组所指向的空间
    delete[] m_value;
}