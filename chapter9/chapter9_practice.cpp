#include <iostream>
#include <cmath>
using namespace std;


//计算两个数字之和
int sum(int,int);//函数原型

//计算长方体体积
void calc_cuboid();

//计算圆柱体体积
void calc_cylinder();

//计算圆锥体体积
void calc_cone();

int main()
{
    //调用函数
    // int result = sum(5,6);
    // cout << "结果为" << result << endl;
    cout << "结果为" << sum(5,6) << endl;//由于函数是有返回值的，因此可以直接调用

    
    int choice = -1;
    
    while (choice)
    {
        cout << "请选择：" << endl;
        cout << "1.长方体" << "2.圆柱体" << "3.圆锥体" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            calc_cuboid();
            break;
        case 2:
            calc_cylinder();
            break;
        case 3:
            calc_cone();
            break;
        
        default:
            choice = 0;
        }
    }
    


    return 0;
}

int sum(int num1,int num2)
{
    //1.计算两个数字
    int result = num1 + num2;
    //2.返回计算结果
    return result;
}

void calc_cuboid()
{
    double length,width,height;
    cout << "请输入长宽高：";
    cin >> length >> width >> height;

    double volume = length * width * height;

    cout << "长方体的体积为：" << volume << endl;
}

void calc_cylinder()
{
    double radius,height;
    cout << "请输入半径和高：";
    cin >> radius >> height;

    double pi = 4 * atan(1.0);
    double volume = pi * pow(radius,2) * height;

    cout << "圆柱体的值为：" << volume << endl;
}

void calc_cone()
{
    double radius,height;
    cout << "请输入半径和高：";
    cin >> radius >> height;

    double pi = 4 * atan(1.0);
    double volume = pi * pow(radius,2) * height / 3;

    cout << "圆锥体的值为：" << volume << endl;
}