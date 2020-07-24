#ifndef WARRIOR_H
#define WARRIOR_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "Hero.h"
#include "Archmage.h"
using namespace std;

class Warrior : public Hero//公有继承 - 最长见的继承方式，is-a关系
{
private:
	int m_physicalAttack;//战士类独有的成员:物理攻击力


public:
	Warrior();
	Warrior(const string& nickname,int physicalAttack);
	~Warrior();

	void Move();//在派生类中实现派生类版本的move方法

	void XiaoQuanQuan(Warrior & other);//攻击传入的另一个战士对象的引用
	void XiaoQuanQuan(Archmage & other);//攻击传入的另一个法师对象的引用

	void HiSunZi();

};
#endif
