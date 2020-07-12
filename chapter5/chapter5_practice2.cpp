#include <iostream>

using namespace std;

int main()
{
    //循环输入5个玩家的消费，统计消费额低于500的玩家数量
    double money;//玩家的消费
    int count = 0;//低于500玩家的数量（计数器）
    for(int i = 0; i <5; i++)
    {
        cout << "请输入当前玩家的消费额：";
        cin >> money;
        //跳过500以上的情况
        if(money >= 500)
            continue;
        count++;
    }
    cout << "消费低于500的玩家数量是：" << count << endl;
}