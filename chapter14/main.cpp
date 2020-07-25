#include <iostream>
#include <vector>
#include "AbstractClassDemo.h"

using namespace std;

void AbstractClassTest();

int main()
{
    AbstractClassTest();
    return 0;
}

void AbstractClassTest()
{
    //尝试实例化一个抽象类 - 编译器会报错
    // BattleUnit unit;
    Marine marine1("巫妖王");
    Marine marine2("死亡骑士");
    marine1.Fight(marine2);
    SiegeTank tank1("坦克1");
    tank1.Move(10,20);
    Viking viking1("北欧海盗");

    vector<BattleUnit*> units;
    units.push_back(&marine1);
    units.push_back(&marine2);
    units.push_back(&tank1);
    units.push_back(&viking1);

    Commander commander;
    cout << "让指挥官移动多个不同类型的战斗单位" << endl;
    commander.Move(units,50,50);
}