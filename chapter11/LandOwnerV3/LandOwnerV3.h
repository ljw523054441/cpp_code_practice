#ifndef LANDOWNERV3_H
#define LANDOWNERV3_H

#include <iostream>
using namespace std;

//������ʾ��װ�Ļ�������

class LandOwnerV3
{
public:
	string name;
	long score;
	int cards[20];
	LandOwnerV3();
	~LandOwnerV3();

	void ShowScore();

//ʡ��private
};

#endif // !LANDOWNERV3_H
