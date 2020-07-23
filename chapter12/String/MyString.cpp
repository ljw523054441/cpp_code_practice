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

String::String(const String & str)
{
    m_length = strlen(str.m_value);
    m_value = new char[m_length + 1];
    strcpy(m_value, str.m_value);
}

ostream & operator<<(ostream & out, const String & str)
{
    out << str.m_value << '\n';
    // cout << "m_value的长度：" << str.m_value;
    printf("%p",str.m_value);
    return out;
}

//当重载赋值运算符时，务必确定将一个对象中的所有数据都复制到另一个对象中（特别是有指针时）
//如果包含多个成员，那么每个成员都需要复制到内存对象中 - 深复制
//如果一个类，拥有指针类型的成员，那么大部分情况下，都需要使用深复制，这样才能将指针指向的内容复制一份出来，让原来的对象和新对象相互独立
//如果类的成员没有指针，那么一般浅复制足以
const String & String::operator=(const String & str)
{
    if(this == &str) return *this;
    delete[] m_value;//首先释放字符串的原始空间
    m_length = str.m_length;
    m_value = new char[m_length + 1];
    strcpy(m_value,str.m_value);
    return *this;
}

String::~String()
{
    //析构时，释放字符数组所指向的空间
    delete[] m_value;
}