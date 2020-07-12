#include <iostream>

using namespace std;

int main()
{
    
    //绘制星星三角形
    // for(int i = 0; i < 4; i++)
    // {
    //     for(int j = 0; j <= 2 - i; j++)
    //     {
    //         cout << " ";
    //     }
    //     for(int j = 0; j <= 2 * i; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
    
    
    /*
    //ABCD三角形
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j <= 2 - i; j++)
        {
            cout << " ";
        }
        for(int j = 0; j <= 2 * i; j++)
        {
            cout << (char)('A' + i);
        }
        cout << endl;
    }
    */
    
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j <= 2 - i; j++)
        {
            cout << " ";
        }
        for(int j = 0; j <= 2 * i; j++)
        {
            if(j == 0 || j == 2 * i)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
            
        }
        cout << endl;
    }

}