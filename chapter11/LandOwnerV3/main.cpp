#include <iostream>
#include "LandOwnerV3.h"

using namespace std;

int main()
{
	LandOwnerV3 landOwner3;
	landOwner3.name = "巴依老爷";
	//注意：模拟为地主修改积分
	landOwner3.score = 100;
	landOwner3.ShowScore();
}