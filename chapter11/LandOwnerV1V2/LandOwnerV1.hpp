#ifndef LANDOWNERV1_H
#define LANDOWNERV1_H

#include <iostream>
using namespace std;

/**
 * .hpp文件一般包含实现的内联函数，通常用于模板类这种声明与实现共存的情况
 * 建议：只要不是纯模板，一律使用.h文件作为头文件后缀，使用.cpp文件作为函数的实现文件
 */

class LandOwnerV1
{
private:
    string name;        //地主名称
    long score;         //地主积分
    int cards[20];      //地主手牌数组
public:
    LandOwnerV1(){};        //实现了默认的构造函数
    ~LandOwnerV1(){};       //析构函数的实现
    inline void TouchCard(int cardCount)//这里的inline是可以省略的，在定义类的时候直接实现成员函数，不论写不写inline都默认是inline
    {
        //暂时省略函数的实现
        cout << name << "开始摸了" << cardCount << "张牌" << endl;
    }
    void ShowScore()
    {
        cout << name << "当前的积分为：" << score << endl;
    }
};


#endif // LANDOWNERV1_H