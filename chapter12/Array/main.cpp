#include <iostream>
#include "Array.h"

using namespace std;

void TestArray();

int main()
{
    TestArray();
    return 0;
}

void TestArray()
{
    Array arr1(10);
    arr1[0] = 1234;
    cout << arr1 << endl;
}