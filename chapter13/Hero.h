#ifndef HERO_H
#define HERO_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>
using namespace std;

/**
 * 英雄基类/父类
 */

class Hero
{
private:
	string m_NickName;

	int m_Level;

	int m_MaxLife;

	int m_CurrLife;

	int x;

	int y;


public:
	Hero();
	Hero(const string & nickName);
	Hero(const string & nickName, int level);
	Hero(const string & nickName, int level, int maxLife, int currLife);

	~Hero();
	
	/** 基类中的移动方法*/
	void Move();

	friend ostream& operator<<(ostream & out, const Hero& hero);

	/* 关于const关键字：
		1.在方法前加const，表示返回值是一个常量，相当于你得到我这个返回值之后，外边的程序是没法修改这个返回值的，就相当于是一个只读的
		2.在方法后加const，表示方法不可以修改类成员的值
		建议：尽量使用引用，尽量在代码早期根据情况使用const
		使用引用：跟指针的效率一样，关键是不会单独占用一个地址，并且还多了编译器检测
	 */

	const string& GetNickName() const
	{
		return this->m_NickName;
	}
	int GetLevel() const{return m_Level;}
	int GetMaxLife() const{return m_MaxLife;}
	int GetCurrLife() const{return m_CurrLife;}

	void SetNickname(const string & nickName){
		this->m_NickName = nickName;
	}
	void SetLevel(int level){
		this->m_Level = level;
	}
	void SetMaxLife(int maxLife)
	{
		this->m_MaxLife = maxLife;
	}
	void SetCurrLife(int currLife)
	{
		this->m_CurrLife = currLife;
	}

};
#endif
