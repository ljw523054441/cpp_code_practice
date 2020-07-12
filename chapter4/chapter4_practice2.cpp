#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    //使用循环实现三次密码输入错误退出系统
    string password;
    cout << "请输入密码：" << endl;
    cin >> password;
    cout << "您输入的密码是" << password << endl;

    int i = 0;//循环变量用于控制循环次数
    string your_password;

    while (i<3)
    {
        cout << "请输入密码：" << endl;
        cin >> your_password;
        i++;
        //判断用户输入是否正确
        if(your_password != password){
            cout << "密码错误，还有" << 3-i << "次机会" << endl;
            if(i == 3){
                cout << "3次密码输入错误，系统强制退出" << endl;
                exit(0);//退出进程，并返回值作为函数是否正常运行的标志
            }
        }
        else{
            cout << "密码正确" << endl;
            break;
        }
    }
}