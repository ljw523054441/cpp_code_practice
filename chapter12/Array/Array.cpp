#include "Array.h"


Array::Array(int length) : m_length(length)
{
    if(m_length == 0)
    {
        m_datas = NULL;
    }else{
        m_datas = new int[m_length];
    }
}

Array::Array(const Array & arr)
{
    if(arr.m_length == 0) return;
    m_length = arr.m_length;
    m_datas = new int[m_length];
    //1.使用循环逐个元素赋值
    //2.使用memcpy
    memcpy(m_datas,arr.m_datas, m_length * sizeof(int));
}

const Array & Array::operator=(const Array & arr)
{
    if(this == &arr) return *this;
    if(arr.m_length == 0) return *this;
    m_length = arr.m_length;
    m_datas = new int[m_length];
    //1.使用循环逐个元素赋值
    //2.使用memcpy
    memcpy(m_datas,arr.m_datas, m_length * sizeof(int));
    return *this;
}

ostream & operator<<(ostream & out,const Array & arr)
{
    for (int i = 0; i < arr.m_length; i++)
    {
        out << arr.m_datas[i] << ",";
    }
    cout << endl;
    return out;
    
}

// int Array::operator[](int index)
// {
//     if(m_length == 0)
//     {
//         cerr << "数组为空，访问失败！" << endl;
//     }
//     if(index < 0 || index >= m_length)
//     {
//         cerr << "数组下标越界！" << endl;
//     }
//     return m_datas[index];//返回了某一个元素，实际上是返回了它的副本
// }

int & Array::operator[](int index)
{
    if(m_length == 0)
    {
        cerr << "数组为空，访问失败！" << endl;
    }
    if(index < 0 || index >= m_length)
    {
        cerr << "数组下标越界！" << endl;
    }
    return m_datas[index];//返回了某一个元素的引用，此时在外部就可以直接修改它的值
}

Array::~Array()
{
    delete[] m_datas;
}
