#include <iostream>
#include "Rectangle.h"

using namespace std;

void TestRectangle();

int main()
{
    TestRectangle();
    return 0;
}

void TestRectangle()
{
    Rectangle rect1;//使用默认构造
    Rectangle rect2(25.0,50.5);//使用带参构造
    Rectangle rect3(rect1);//使用拷贝构造
    //能否与基本类型进行相互转换？
    Rectangle rect4 = 55;//这句话会调用一个参数的构造，我们称之为转换构造
    Rectangle rect5(55);//跟上一句相同
    rect4.display();
    
    float rect4_width = float(rect4);
    cout << "rect4_width = " << rect4_width << endl;
    Circle circle1 = Circle(rect2);
    cout << "圆的信息：" << circle1 << endl;

}