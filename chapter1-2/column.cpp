#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    /** 常数 */
    const float PI = 3.14f;//定义了一个float类型的常量
    /** 半径 */
    float radius = 5.2f;
    float height = 10.2;
    double volume;
    volume = pow(radius,2) * height * PI;

    cout << volume << endl;

    int num1 = 5, num2 = 2;
    double num3 = (double)num1 / num2;

    cout << num3 << endl;
}