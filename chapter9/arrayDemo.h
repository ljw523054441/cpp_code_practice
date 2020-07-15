#ifndef ARRAYDEMO_H_INCLUDED
#define ARRAYDEMO_H_INCLUDED

//二维数组的传参

#include <iostream>
using namespace std;

void show(double (*)[5],int);

void show(double (*arrs)[5],int len)
{
    for(int i = 0;i < len;i++)
    {
        for(int j = 0; j < 5;j++)
        {
            // cout << arrs[i][j] << '\t';
            cout << *(*(arrs+i)+j) << '\t';
        }
        cout << endl;
    }
}

#endif // ARRAYDEMO_H_INCLUDED