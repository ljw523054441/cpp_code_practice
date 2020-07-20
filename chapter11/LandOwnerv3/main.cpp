#include "LandOwnerV3.h"
#include <iostream>
using namespace std;
int main()
{
    LandOwnerV3 LandOwner3;
    // LandOwner3.name = "巴依老爷";
    LandOwner3.SetName("巴依老爷");
    //注意：模拟为地主修改积分
    //LandOwner3.score = -100;
    LandOwner3.SetScore(-100);
    LandOwner3.ShowScore();
}