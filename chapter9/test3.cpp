#include <iostream>
#include "arrayDemo.h"
using namespace std;

int main()
{
    double powers[3][5] = {
        {45.5,55.6,88.9,66.6,78},
        {98.2,69.1,33.7,49.3,58},
        {78.2,58.5,12.8,37.8,43},
    };
    show(powers,3);
}



// void show(double(*)[5],int);

// int main()
// {
//     double powers[3][5] = {
//         {45.5,55.6,88.9,66.6,78},
//         {98.2,69.1,33.7,49.3,58},
//         {78.2,58.5,12.8,37.8,43},
//     };
//     show(powers,3);
// }

// void show(double (*arr)[5],int len)
// {
//     for(int i = 0;i<len;i++)
//     {
//         for (int  j = 0; j < 4; j++)
//         {
//             cout << *((arr+i)+j) << ",";
//             //cout << arr[i][j] << ",";
//         }
//         cout << endl;
//     }
// }
