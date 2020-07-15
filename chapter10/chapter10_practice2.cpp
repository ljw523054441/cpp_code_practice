#include <iostream>
#include "part2.h"
using namespace std;

/*
int& sum()//这是一个返回引用类型的函数
{
    int num =10;
    int& rNum = num;//注意rNum是在sum()函数中定义的，所以叫局部变量
    //rNum的生存周期只在sum()函数中
    return rNum;//返回了一个局部的引用类型的变量
}

//函数中的局部变量在函数结束后会被内存回收
//所谓的内存回收并不是把内存保存的数值清零
//而是指内存中你的程序申请的这块内存已经不是你的了
//当其他函数运行之后，这块被回收的内存可能被别的函数利用，它的值可能就不是当初的num局部变量了
//所以不要返回局部变量的引用

void test()
{
    int x = 1,y=2,z=3;
}

int main()
{
    int& result = sum();//result在这里实际上是引用了一个局部变量num
    test();//新的函数可能覆盖先前函数栈上的数据
    cout << "result = " << result << endl;
}
*/

/*
int& sum(int& num1,int& num2)
{
    num1++;
    num2++;
    //没有返回值，默认返回最后一个修改更新的引用 参数
}
int main()
{
    int num1 =10,num2 = 15;
    int& result = sum(num1,num2);
    cout << "result = " << result << endl;
}
*/


int& sum(int& num)
{
    num++;
    return num;
}
int main()
{
    int num1 = 10;
    int& result = sum(num1);
    sum(num1) = 55;//c++允许给函数赋值，这里修改sum，相当于在修改result，因为result和sum是一个东西
    cout << "result = " << result << endl;
}
