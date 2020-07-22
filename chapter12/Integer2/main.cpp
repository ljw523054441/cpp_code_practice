#include <iostream>
#include "Integer.h"
using namespace std;

void TestInteger()
{
    Integer int1(1024),int2(2048),int3,int4;
    int3 = int1 + int2;
    cout << "int3 = int1 + int2 的值是" << int3.GetValue() << endl;
    int3 = int1 - int2;
    cout << "int3 = int1 - int2 的值是" << int3.GetValue() << endl;
    int3 = int1 * int2;
    cout << "int3 = int1 * int2 的值是" << int3.GetValue() << endl;
    int3 = int1 / int2;
    cout << "int3 = int1 / int2 的值是" << int3.GetValue() << endl;
    int3 = int1 % int2;
    cout << "int3 = int1 % int2 的值是" << int3.GetValue() << endl;

    int4 = int3;
    cout << "int4 = int3 值是" << int4.GetValue() << endl;

    Integer int5;
    int5 = 1024 + int4;
    cout << "int5 = " << int5.GetValue() << endl;


    cout << "重载了<<运算符后，可以直接打印对象" << int5 << endl;

    Integer int6;
    cin >> int6;
    cout << "输入的int6为：" << int6 << endl;

}

int main()
{
    TestInteger();

    return 0;
}

