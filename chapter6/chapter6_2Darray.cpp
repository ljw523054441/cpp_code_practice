#include <iostream>
using namespace std;
int main()
{
    string stuNames[]={"刘备", "关羽", "张飞"};
    string courseNames[]={"语文", "数学", "英语"};
    const int ROW = sizeof(stuNames) / sizeof(stuNames[0]);
    const int COL = sizeof(courseNames) / sizeof(courseNames[0]);

    double scores[ROW][COL];

    for (int i = 0; i < ROW; i++)//外层循环控制学生
    {
        for (int j = 0; j < COL; j++)//内层循环控制课程
        {
            cout << stuNames[i] << "的" << courseNames[j] << "成绩：";
            cin >> scores[i][j];
        }
    }

    cout << '\t';
    for (int i = 0; i < COL; i++)
    {
        cout << courseNames[i] << '\t';
    }
    cout << endl;
    
    for(int i = 0;i<COL;i++)
    {
        cout << stuNames[i] << '\t';
        for(int j=0;j<ROW;j++)
        {
            cout << scores[i][j] << '\t';
        }
        cout << endl;
    }
}