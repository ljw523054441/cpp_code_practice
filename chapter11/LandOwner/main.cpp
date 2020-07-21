#include <iostream>
#include "LandOwner.h"

using namespace std;

int main()
{
    LandOwner* ptr_LandOwner1 = new LandOwner();
    LandOwner* ptr_LandOwner2 = new LandOwner("专业斗地主");
    LandOwner* ptr_LandOwner3 = new LandOwner("周扒皮");

    ptr_LandOwner1->ShowInfo();
    ptr_LandOwner2->ShowInfo();
    ptr_LandOwner3->ShowInfo();

    delete ptr_LandOwner1;
    delete ptr_LandOwner2;
    delete ptr_LandOwner3;
}