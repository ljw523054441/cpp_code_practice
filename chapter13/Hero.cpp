#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "Hero.h"

Hero::Hero() : m_NickName("默认英雄"), m_Level(1), m_MaxLife(100), m_CurrLife(100)
{
    cout << "调用了Hero的默认构造" << endl;
}
Hero::Hero(const string & nickName) : m_NickName(nickName), m_Level(1), m_MaxLife(100), m_CurrLife(100)
{
    cout << "调用了Hero的1个参数版本的构造" << endl;
}
Hero::Hero(const string & nickName, int level) : m_NickName(nickName), m_Level(level), m_MaxLife(100), m_CurrLife(100)
{
    cout << "调用了Hero的2个参数版本的构造" << endl;
}
Hero::Hero(const string & nickName, int level, int maxLife, int currLife) : m_NickName(nickName), m_Level(level), m_MaxLife(maxLife), m_CurrLife(currLife)
{
    cout << "调用了Hero的4个参数版本的构造" << endl;
}


void Hero::Move()
{
    cout << "普通英雄" << m_NickName << "正在奔跑在艾泽拉斯大陆上" << endl;
}

ostream& operator<<(ostream& out,const Hero& hero)
{
    out << "昵称:" << hero.GetNickName() << '\n';
    out << "等级:" << hero.GetLevel() << '\n';
    out << "最大生命:" << hero.GetMaxLife() << '\n';
    out << "当前生命:" << hero.GetCurrLife();
    return out;
}

Hero::~Hero()
{

}