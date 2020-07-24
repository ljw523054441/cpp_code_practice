#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "Warrior.h"
#include "Archmage.h"


Warrior::Warrior() : Hero("默认战士",1,100,100)
{
    cout << "Warrior的默认构造" << endl;
}

Warrior::Warrior(const string& nickname,int physicalAttack) : Hero(nickname,1,100,100),m_physicalAttack(physicalAttack)
{
    
}

void Warrior::Move()
{
    // cout << "战士<" << m_NickName << ">背着一大堆近战武器正在赶路中" << endl; 
    //这样写会报错，因为m_NickName在Hero类中是私有的，派生类中不能直接调用基类的私有成员
    // 所以只能用公有的方法GetNickname()来进行访问
    cout << "战士<" << GetNickName() << ">背着一大堆近战武器正在赶路中" << endl;
}

void Warrior::XiaoQuanQuan(Warrior& other)
{
    cout << GetNickName() << "发出了一记：流星锤" << endl;
    cout << other.GetNickName() << "受伤" << endl;
    //对方掉血
    other.SetCurrLife(other.GetCurrLife()-10);
}

void Warrior::XiaoQuanQuan(Archmage& other)
{
    cout << GetNickName() << "冲上前去发出了一记：野蛮冲撞" << endl;
    cout << other.GetNickName() << "受伤" << endl;
    //对方掉血
    other.SetCurrLife(other.GetCurrLife()-10);
}

void Warrior::HiSunZi()
{
}

Warrior::~Warrior()
{

}
