#ifndef MYCALCULATOR_H_INCLUDED
#define MYCALCULATOR_H_INCLUDED
//自定义计算器，使用函数指针

#include <iostream>
using namespace std;

//函数定义

/** 加法 */
double addition(double,double);
/**减法 */
double substraction(double,double);
/**乘法 */
double multiplication(double,double);
/**除法 */
double division(double,double);
/** 打印结果 */
void print_result(double (*)(double,double),double,double);//这个print_result函数有三个参数。第一个参数是一个函数指针。
//这个函数的功能是把后两个double类型的值传入函数指针


//函数实现

void print_result(double (*ptrCalc)(double,double),double num1,double num2)
{
    double result = ptrCalc(num1,num2);
    cout << "运算结果是：" << result << endl;
}

double addition(double num1,double num2)
{
    return num1 + num2;
}

double substraction(double num1,double num2)
{
    return num1 - num2;
}

double multiplication(double num1,double num2)
{
    return num1 * num2;
}

double division(double num1,double num2)
{
    if(num2 == 0){
        cout << "除数不能为0" << endl;
        return 0;
    }
    return num1 / num2;
}

#endif // MYCALCULATOR_H_INCLUDED