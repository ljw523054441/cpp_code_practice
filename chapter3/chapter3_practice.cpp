#include <iostream>

using namespace std;

int main()
{
    //使用程序判断用户输入的字符是否是合法的键盘盘符
    char pan = '\0';//默认值设置为空字符，ASCII码为0的字符是空字符，直接不填，编译不会通过
    cout << "请输入一个字符，我来判断是否合法：";
    cin >> pan;
    //'A'-'Z'
    //if(pan >= 65 && pan <= 65+25)
    if(pan >= 'A' && pan <= 'Z')
    {
        cout << "是合法盘符！" << endl;
    }
    else
    {
        cout << "不是合法盘符！" <<endl;
    }
    

}