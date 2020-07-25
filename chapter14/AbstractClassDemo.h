#ifndef ABSTRACTCLASSDEMO_H
#define ABSTRACTCLASSDEMO_H

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Point//自定义的坐标点类
{
private:
    int x;
    int y;
public:
    Point(){}
    Point(int _x, int _y) : x(_x),y(_y){}
    ~Point(){};

    int GetX(){return x;}
    int GetY(){return y;}
    void SetX(int x){this->x = x;}
    void SetY(int y){this->y = y;}

    friend ostream& operator<<(ostream& out,const Point& p)
    {
        out << "(" << p.x << "," << p.y << ")";
        return out;
    }
};


/**
 * 实现一个简单版的星际争霸游戏
 * 用来加深对多态以及抽象类的理解
 */

class BattleUnit//战斗单位类 - 抽象类
{
protected:
    string name;
    int maxHp;
    int curHp;
    Point position;//当前对象的坐标点
    int attDistance;//当前对象的攻击距离

public:
    BattleUnit(){}
    BattleUnit(const string& _name) : name(_name){
        maxHp = 100;
        curHp = 100;
        position.SetX(0);
        position.SetY(0);
        attDistance = 100;
    }
    ~BattleUnit(){};

    //设置某个方法为纯虚函数后，BattleUnit类就成了抽象类 - 只能被继承，无法实例化
    virtual void Fight(BattleUnit& other) = 0;

    virtual void Move(int x,int y) = 0;
    virtual void Move(Point& position) = 0;

    const string& GetName() const{
        return name;
    }
};

//我们可以提供抽象基类纯虚方法的默认实现
void BattleUnit::Fight(BattleUnit& other){
    cout << name << "正在攻击另一个战斗单位：" << other.GetName() << endl;
}
void BattleUnit::Move(int x, int y){
    position.SetX(x);
    position.SetY(y);
}

class Marine : public BattleUnit
{
public:
    Marine(){}
    Marine(const string& _name) : BattleUnit(_name){}//此处直接使用了父类构造
    ~Marine(){};
    
    void Fight(BattleUnit& other) override;
    //注意：如果父类public中有多个纯虚函数，如果子类中只重写了一个，子类还是会继承其余的纯虚函数，成为抽象类，无法实例化
    void Move(int x, int y) override{
        BattleUnit::Move(x,y);
        cout << "海军陆战队<" << GetName() << ">收到移动命令：" << position << endl;
    }
    void Move(Point& position) override{}

};

void Marine::Fight(BattleUnit& other)
{
    //在子类中调用父类的同名方法：
    BattleUnit::Fight(other);
    cout << "陆战队员" << GetName() << "正在攻击敌人：" << other.GetName() << endl;
}

class SiegeTank : public BattleUnit
{
public:
    SiegeTank(){}
    SiegeTank(const string& _name) : BattleUnit(_name){}
    ~SiegeTank(){}

    void Fight(BattleUnit& other) override{}
    void Move(int x, int y) override{
        BattleUnit::Move(x,y);
        cout << "工程坦克<" << GetName() << ">收到移动命令：" << position << endl;
    }
    void Move(Point& position) override{}
};

class Viking : public BattleUnit
{
public:
    Viking(){}
    Viking(const string& _name) : BattleUnit(_name){}
    ~Viking(){}

    void Fight(BattleUnit& other) override{}
    void Move(int x, int y) override{
        BattleUnit::Move(x,y);
        cout << "维京战机<" << GetName() << ">立即飞往坐标：" << position << endl;
    }
    void Move(Point& position) override{}
};

class Commander//指挥官类 - 模拟的是游戏中的核心业务类
{
public:
    Commander(){}
    ~Commander(){}

    //模拟指挥官的Rolling Thunder
    //一个指挥官同时移动了多个战斗单位
    void Move(vector<BattleUnit*> units, int x, int y){
        for(auto unit : units){
            unit->Move(x,y);
        }
    }
};



#endif