#include <iostream>
#include "Integer.h"
#include "ConstDemo.h"

using namespace std;

void TestInteger();

int main()
{
    // TestInteger();
    ConstDemo1();
    return 0;
}

void TestInteger()
{
    Integer int1(1024),int2(2048),int3;
    int3 = int1 + int2;
    cout << "int3 = int1 + int2 的值为" << int3.GetValue() <<endl;
}