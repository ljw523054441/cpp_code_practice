#include <iostream>
#include <string>
#include "Hero.h"
#include "Warrior.h"
#include "Archmage.h"

using namespace std;

void HeroTest();
void WarriorTest();

int main()
{
    // HeroTest();
    WarriorTest();
    return 0;
}

void HeroTest()
{
    Hero hero1;
    cout << hero1 << endl;
    hero1.Move();
    cout << endl;
    Hero * hero2 = new Hero("测试英雄2",999,5000,5000);
    cout << *hero2 << endl;
    hero2->Move();
    //(*hero2).Move();这一语句与上面的语句等价
}

void WarriorTest()
{
    //创建派生类对象时，程序首先会调用基类构造，然后再调用派生类构造，基类构造负责初始化被继承的数据成员，派生类构造负责初始化新增的数据成员
    //析构的时候就是相反，先调用派生类的析构，然后再调用基类的析构
    // Warrior warrior1;
    // 对于子类对象，有以下两种情况
    // 情况1. 派生类中如果不实现Move方法，默认会调用基类实现;
    // 情况2. 派生类中如果有实现了move方法（相当于覆盖了基类实现），就会调用派生类中的move方法而不会调用基类中的。
    // warrior1.Move();

    // Hero * hero = new Warrior(); //基类指针指向派生类 - 标准的多态
    // hero->Move();//思考：调用的是基类实现还是子类实现？答案是调用了基类实现
    // delete hero;

    Warrior warrior1("吕布",50);
    Warrior warrior2("张飞",50);
    warrior1.XiaoQuanQuan(warrior2);
    cout << warrior2 << endl;

    cout << endl;

    // Archmage archmage2("关于");
    // archmage2.BiuBiuBiu(warrior1);
    // cout << warrior1 << endl;

    Archmage * archmage1 = new Archmage("貂蝉");
    warrior1.XiaoQuanQuan(*archmage1);
    cout << *archmage1 << endl;
}