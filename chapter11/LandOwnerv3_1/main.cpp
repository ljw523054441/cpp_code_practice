#include "LandOwnerV3.h"
#include <iostream>
using namespace std;
int main()
{
    LandOwnerV3 LandOwner3;
    LandOwnerV3.name = "巴依老爷";
    //注意：模拟为地主修改积分
    LandOwnerV3.score = 100;
    LandOwnerV3.ShowScore();
}