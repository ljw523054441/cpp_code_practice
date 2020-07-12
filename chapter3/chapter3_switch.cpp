#include <iostream>

using namespace std;

int main()
{
    /**int choice = 123456;
    switch (choice)
    {
    
    case 1:
        cout << "您选择了战士！" << endl;
        // break;
    case 2:
        cout << "您选择了猎人！" << endl;
        break;
    case 3:
        cout << "您选择了术士！" << endl;
    case 4:
        cout << "您选择了牧师！" << endl;
    case 5:
        cout << "您选择了圣骑士！" << endl;
    default:
        cout << "您选择了退隐山林！" << endl;
        
    }*/
    //判断某月有几天
    int month = 8;
    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        cout << "31天" << endl;
        break;
    default:
        cout << "30天" << endl;
        break;
    }
}