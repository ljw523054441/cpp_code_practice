#include <iostream>
using namespace std;
int main()
{
    int * p = new int[10];
    //使用指针创建二维数组
    int arrays[5][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9},
        {10,11,12},
        {13,14,15}
    };

    int (*p2)[3] = arrays;

    for(int i = 0;i<5;i++)
    {
        for(int j = 0;j<3;j++)
        {
            cout << *(*(p2+i)+j) << ',';
        }
        cout << endl;
    }

    cout << arrays[1][0] << endl;

    for(int i=0;i<5;i++)
    {
        cout << p2+i << endl;
    }
}