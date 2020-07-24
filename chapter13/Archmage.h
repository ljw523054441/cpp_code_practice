#ifndef ARCHMAGE_H
#define ARCHMAGE_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "Hero.h"
#include "Warrior.h"
using namespace std;

class Archmage : public Hero
{
private:
	int m_magicalAttack;


public:
	Archmage();
	Archmage(const string& nickname);
	~Archmage();

	void BiuBiuBiu(Warrior & other);

	void Teleportation();

};
#endif
