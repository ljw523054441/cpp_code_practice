#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    //使用循环模拟拳皇对战
    /** A 的hp */
    int hp1 = 100;
    /** B 的hp */
    int hp2 = 100;
    /** A的攻击力 */
    int attack1 = 0;
    /** B的攻击力 */
    int attack2 = 0;

    int randNum;
    //用来存放玩家攻击先后的随机数变量

    srand(time(NULL)); //srand()生成随机种子，用时间来更新随机种子

    while (hp1 > 0 && hp2 > 0) //当双方都生存的时候，继续战斗过程
    {
        //1.模拟玩家出招：可以采用随机数是奇数/偶数的方式来决定谁先进行攻击
        //奇数-A先，偶数-B先
        randNum = rand();
        if (randNum % 2 == 1)
        { //奇数
            attack1 = (int)(5 + 10 * rand() / (RAND_MAX + 1.0));
            attack2 = (int)(5 + 10 * rand() / (RAND_MAX + 1.0));

            hp2 -= attack1; //互相掉血
            hp1 -= attack2;
        }
        else
        { //偶数
            attack1 = (int)(5 + 10 * rand() / (RAND_MAX + 1.0));
            attack2 = (int)(5 + 10 * rand() / (RAND_MAX + 1.0));

            hp1 -= attack2;
            hp2 -= attack1;
        }
    }
    //2.打印对战的最终结果
    cout << "A HP:" << hp1 << endl;
    cout << "B HP:" << hp2 << endl;
}