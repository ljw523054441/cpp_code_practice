#ifndef MYSTRING_H
#define MYSTRING_H
#include <iostream>
#include <cstring>
using namespace std;

//自定义的字符串包装类

class String
{
private:
    int m_length;//字符串的实际长度-不包括\0
    char * m_value;//实际存储字符的字符数组，因为不知道长度，所以我们这里定义一个指针
public:
    String();
    String(char *);
    ~String();
    
    friend ostream & operator<<(ostream &, const String &);
};

#endif