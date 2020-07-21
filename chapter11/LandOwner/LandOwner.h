#ifndef LANDOWNER_H
#define LANDOWNER_H
#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <cstdlib>
#include <ctime>
using namespace std;

/* 地主类 */
class LandOwner
{
private://私有的属性和方法只能是在本类中使用，在main函数中无法调用
    string _nickname;
    string _sex;
    int _gold;
    long _exp;

    vector<int> currCards;//当前玩家的手牌数组
    vector<int> packCards;//默认的整个牌堆54张，1—54
    vector<int> surplusCards;//摸牌后剩余的牌堆

    bool isContains(int);//剩余牌集合中是否包含cardNum这个牌面
    void deleteCard(vector<int>&,int);//从剩余牌集合中删除掉这张抽到的牌

    string getColor(int);//获得牌的花色
    string getValue(int);//获得牌面

public://大家都可以使用
    LandOwner();
    LandOwner(string);
    LandOwner(string,string,int,long);
    ~LandOwner();

    string GetNickname(){return _nickname;}
    void SetNickname(string nickname){
        _nickname = nickname;
    }
    string GetSex(){return _sex;}
    void SetSex(string sex){
        _sex = sex;
    }
    int GetGold(){return _gold;}
    void SetGold(int gold){
        _gold = gold;
    }
    long GetExp(){return _exp;}
    void SetExp(int exp){
        _exp = exp;
    }

    void ShowInfo();
    /* 定义摸牌函数 */
    void TouchCard(int);
    /* 初始化packCards和surplusCards和currCards*/
    void InitCards();
    /* 显示集合中的牌面 */
    void ShowCards(const vector<int>&);

};

#endif
