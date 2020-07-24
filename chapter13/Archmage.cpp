#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "Archmage.h"
#include "Warrior.h"

Archmage::Archmage(): Hero("默认法师",1,100,100)
{
    cout << "Archmage的默认构造" << endl;
}

Archmage::Archmage(const string& nickname):Hero(nickname,1,100,100)
{

}


void Archmage::BiuBiuBiu(Warrior & other)
{
    cout << GetNickName() << "冲上前去发出了一记：biubiubiu" << endl;
    cout << other.GetNickName() << "受伤" << endl;
    //对方掉血
    other.SetCurrLife(other.GetCurrLife()-10);
}

void Archmage::Teleportation()
{
}

Archmage::~Archmage()
{

}
