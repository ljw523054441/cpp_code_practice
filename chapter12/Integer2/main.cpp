#include <iostream>
#include "Integer.h"
using namespace std;

void TestInteger()
{
    Integer int1(1024),int2(2048),int3;
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
}

int main()
{
    TestInteger();

    return 0;
}

