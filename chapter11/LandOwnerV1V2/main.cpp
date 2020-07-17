#include <iostream>
#include "LandOwnerV1.hpp"//如果要使用类，那么必须包含类的头文件，同文件路径下用""即可，不用<>
#include "LandOwnerV2.h"
// #include "LandOwnerV2.cpp"

using namespace std;

int main()
{
    /*
    //数据类型 变量名
    int num;
    num = 0;

    LandOwnerV1 landOwner1;//声明了一个LandOwnerV1类型的变量，landOwner1
    //调用对象的成员方法
    // landOwner1.cards[0] = 9;//不能直接使用对象的私有成员

    landOwner1.TouchCard(100);
    */

    LandOwnerV2 landOwner2;
    landOwner2.name = "于谦";
    landOwner2.TouchCard(20);

}