#include <iostream>
using namespace std;
int main()
{
    string stuNames[]{"刘备", "关羽", "张飞"};
    string courseNames[]{"语文", "数学", "英语"};
    const int ROW = sizeof(stuNames) / sizeof(stuNames[0]);
    const int COL = sizeof(courseNames) / sizeof(courseNames[0]);

    double scores[ROW][COL];

    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            cout << stuNames[i] << "的" << courseNames[j] << "成绩：";
            cin >> scores[i][j];
        }
    }
}