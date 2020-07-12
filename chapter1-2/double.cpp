#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    //控制cout的显示精度
    //1.强制以小数的方式显示
    cout << fixed;
    //2.控制显示的精度
    cout << setprecision(2);
    //输出double类型的数据
    double doubleNum = 10.0/3.0;

    cout << doubleNum << endl;
}