#ifndef LANDOWNERV3_H
#define LANDOWNERV3_H

#include <iostream>
using namespace std;

//用来演示封装的基本概念

class LandOwnerV3
{
public:
	string name;
	long score;
	int cards[20];
	LandOwnerV3();
	~LandOwnerV3();

	void ShowScore();

//省略private
};

#endif // !LANDOWNERV3_H
