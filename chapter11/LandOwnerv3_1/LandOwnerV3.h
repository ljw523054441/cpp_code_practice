#ifndef LANDOWNERV4_H
#define LANDOWNERV4_H

#include <iostream>
//用来掩饰封装的基本概念

using namespace std;

class LandOwnerV3
{
    //省略了private
    
    public:
        string name;
        long score;
        int cards[20];
        LandOwnerV3(/* args */);
        ~LandOwnerV3();

        void ShowScore();
};

LandOwnerV3::LandOwnerV3(/* args */)
{
}

LandOwnerV3::~LandOwnerV3()
{
}


#endif // LANDOWNERV4_H