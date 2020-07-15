#ifndef GZDEMO_H_INCLUDED
#define GZDEMO_H_INCLUDED
//使用函数升级《小公主养成记》中的基本属性录入及排序功能
//基本属性：体力，智力，魅力，道德，气质
#include <iostream>
using namespace std;

//函数定义
void input(int [],int);//在传入数组时，建议一定顺便传入数组长度，因为这里实际上是传入的数组的地址
void print(int [],int);
void change(int [],int,string,int);

//函数实现
/** 输入数值 */
void input(int values[],int len)
{
    if(len>5)
    {
        cout << "数组长度只能是5以内！" << endl;
        return;//退出返回值为void的函数
    }
    string value_names[] = {"体力","智力","魅力","道德","气质"};
    for (int i = 0; i < 5; i++)
    {
        cout << value_names[i] << endl;
        cin >> values[i];
    }
    
}
/** 打印数值 */
void print(int values[],int len)
{
    string value_names[] = {"体力","智力","魅力","道德","气质"};
    for (int i = 0; i < len; i++)
    {
        cout << value_names[i] << ":" << values[i] << endl;
    }
    
}
/** 修改数值 */
void change(int values[],int len,string name,int value)
{
    string value_names[] = {"体力","智力","魅力","道德","气质"};
    int temp = -1;
    for(int i = 0;i < len;i++)
    {
        if(name == value_names[i])
        {
            temp = i;
            break;
        }
        else
        {
            cout << "不存在" << endl;
        }
    }
    values[temp] = value;
}

#endif //GZDEMO_H_INCLUDED