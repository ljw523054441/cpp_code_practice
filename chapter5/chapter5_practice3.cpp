#include <iostream>

using namespace std;

int main()
{
    //求1-100之间的偶数和
    int sum = 0;
    for(int i = 1; i <= 100; i++)
    {
        if(i % 2 != 0)
            continue;
        sum += i;
    }
    cout << sum << endl;
}