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
    String str1("这里是中文");
    String str2 = "abcdefg";
    cout << str1 << endl;
    cout << str2 << endl;

    str1 = str2;
    cout << str1 << endl;
    cout << str2 << endl;
}
