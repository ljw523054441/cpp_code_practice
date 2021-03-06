//全篇内容请结合https://blog.csdn.net/eric_jo/article/details/4138548一起看

#ifndef CONSTDEMO_H
#define CONSTDEMO_H

#include <iostream>
using namespace std;

//1.const修饰成员变量
void ConstDemo1()
{
    int num1 = 1024;
    const int num2 = num1;
    //assignment(分配) of read-only varible 'num2'，意思是num2这个变量是只读的
    // num2 = 2048;//这样写是会报错的

    cout << num2 << endl;
}

//2.const修饰指针变量
void ConstDemo2()
{
    int num1 = 1024;
    const int num2 = 1111;
    
    const int * ptr1_num1 = &num1;
    int const * ptr2_num1 = &num1;//const与类型换位置也可以
    ptr1_num1 = &num2;//合法
    // *ptr1_num1 = 1234;//不合法

    int * const ptr3_num1 = &num1;
    // ptr3_num1 = ptr1_num1;//不合法
    *ptr3_num1 = 789;//合法

    //1.只有一个const时，如果const位于*号的左侧：表示指针所指的数据是常量，不能通过该指针修改实际数据；指针本身是变量，可以指向其他内存单元
    //2.只有一个const时，如果const位于*号的右侧：表示指针本身是常量，不能指向其他内存单元；所指向的数据可以修改
    //3.如果有两个const位于*号的左右：表示指针和指针所指向的数据都不能修改
}

//3.const修饰函数参数
void ConstDemo3(const int num)
{
    // num = 123;//不合法，传递来的参数在函数体内不可以改变，这与修饰变量时候的性质一致
}


//自定义类型的参数传递，需要临时对象复制参数，对于临时对象的构造，需要调用构造函数，比较浪费时间
//因此我们采取 const 外加引用传递的方法。并且对于一般的 int、double 等内置类型，我们不采用引用的传递方式。
class Computer
{
private:
    int m_core;
public:
    Computer();
    Computer(int core){m_core = core;}
    ~Computer();
    void buy() const {}
    void buy(int core){}

    void SetCore(int core){m_core = core;}
    int GetCore() const {return m_core;}
};
void ConstDemo4(const Computer & computer)
{
    computer.buy();//合法，因为const成员函数只能调用const成员函数，不能调用非const成员函数
    // computer.buy(12);//不合法
    //使用const传递对象的引用时，目的是为了**增加效率同时防止修改**，不能修改引用对象的任何成员。
    //而传递引用的好处是可以保护传递参数，并且不需要一个新的参数副本（copy）
}

//4.const修饰返回值
//强调：使用const修饰引用类型的一个常见的原因是：提高效率
const Computer & GetMax(const Computer & com1,const Computer & com2)
{
    if(com1.GetCore() > com2.GetCore())
    {
        return com1;
    }
    return com2;
}

//如果函数要返回局部对象，就应该直接返回这个对象，而不要返回对象的引用,例如下面的com3
//在可以返回对象，也可以返回引用时，就应该直接首选引用，因为效率高
// const Computer GetMax(const Computer & com1,const Computer & com2)
// {
//     Computer com3;
//     if(com1.GetCore() > com2.GetCore())
//     {
//         com3 = com1;
//         return com3;
//     }
//     com3 = com2;
//     return com2;
// }

//5.const修饰函数，如果const修饰函数，说明函数不会修改成员变量的值
class TestClass
{
public:
    int value;
    void ModifyValue() const{
        value = 1111;//有const会报错，因为函数修改了成员变量的值
    }
};
//const对象只能调用const函数

#endif