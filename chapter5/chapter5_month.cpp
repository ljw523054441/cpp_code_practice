#include <iostream>

using namespace std;

int main()
{
    //请使用循环打印1997年7月的月历
    //已知：1997年7月1日是星期二
    //1.定义变量
    //2.书写循环
    //3.书写循环体及循环体内的条件

    const int sum_day = 31;//7月一共31天
    int day_of_week = 2;//7月第一天是周二
    
    cout << "一\t二\t三\t四\t五\t六\t日" << endl;

    //打印\t  周几-1个
    for(int i = 0; i < day_of_week - 1; i++)
    {
        cout << '\t';
    }

    //打印日子,每次循环打印当前的日子
    for(int i = 1; i < sum_day; i++)
    {
        cout << i;
        //到底是\n还是\t需要根据i的值来判断
        if((i + day_of_week - 1) % 7 == 0)
        {
            cout << '\n';
        }
        else
        {
            cout << '\t';
        }
        
    }
}