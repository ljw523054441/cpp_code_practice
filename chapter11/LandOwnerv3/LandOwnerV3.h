#ifndef LANDOWNERV3_H
#define LANDOWNERV3_H

#include <iostream>
//用来掩饰封装的基本概念
using namespace std;

class LandOwnerV3
{
private:
    string name;
    long score;     //为了解决积分被赋值为负数的错误的方法：将成员变量score进行隐藏并封装
    int cards[20];
public:
    LandOwnerV3();
    ~LandOwnerV3();

    void ShowScore();

    //使用方法实现对成员变量的封装。Get/Set方法
    void SetName(string lname)
    {
        name = lname;
    }

    string GetName()
    {
        return name;
    }


    void SetScore(long lscore)
    {
        if(lscore <0){
            //如果传入的积分是非法情况，那么积分默认为0
            score = 0;
        }else
        {
            //积分为正数是才进行赋值操作 - 这里就通过条件判断，封装了score的默值过程
            score = lscore;
        }
    }

    long GetScore()
    {
        return score;
    }
};

#endif // LANDOWNERV3_H