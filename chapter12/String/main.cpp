#include <iostream>
#include "MyString.h"

using namespace std;

void TestString();

int main()
{
    TestString();
    return 0;
}

void TestString()
{
    String str1("abc");
    cout << str1 << endl;
}
