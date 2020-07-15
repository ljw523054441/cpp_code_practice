#include <iostream>
#include "FuncPtr.h"

using namespace std;

int main()
{
    // int power(int,int);//头文件中的函数声明

    //声明函数指针,指针名为ptrPower，这与之前 int* ptrInt;是一样的道理
    int (*ptrPower)(int,int);
    //让声明的函数指针指向函数，以便调用
    ptrPower = power;//power函数名就是函数的首地址，这与之前都是一样的道理


    cout << power(3,4) << endl;//直接调用函数
    cout << ptrPower(3,4) << endl;//ptrPower已经是函数的首地址了，所以可以这么用
    cout << (*ptrPower)(3,4) << endl;//类似整型指针一样的道理
}