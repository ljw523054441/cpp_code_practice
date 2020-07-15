#include <iostream>
#include "MyCalculator.h"

using namespace std;

int main()
{
    double num1,num2;
    char op;

    //定义函数指针
    double (*ptrCalc)(double,double);
    //double (*ptrCalc[])(double,double);//这是定义了一个函数指针数组

    cout << "请输入两个操作数：";
    cin >> num1 >> num2;
    cout << "请输入运算符：";
    cin >> op;
    switch (op)
    {
    case '+':
        //调用加法函数
        ptrCalc = addition;//函数指针指向函数
        break;
    case '-':
        //调用减法函数
        ptrCalc = substraction;//函数指针指向函数
        break;
    case '*':
        //调用乘法函数
        ptrCalc = multiplication;//函数指针指向函数
        break;
    case '/':
        //调用除法函数
        ptrCalc = division;//函数指针指向函数
        break;
    }
    //调用print_result函数
    print_result(ptrCalc,num1,num2);//相当于通过函数指针调用相对应的函数来得到运算结果
}