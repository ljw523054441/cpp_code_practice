#include <iostream>

using namespace std;

int main(){
    //使用循环计算1-100的累加和
    //需要循环变量
    //需要累加和变量

    int i = 1;
    int sum = 0 ;

    while (i<=100)
    {
        cout << sum << endl;
        sum +=i;
        i++;
    }
    cout << sum << endl;
}