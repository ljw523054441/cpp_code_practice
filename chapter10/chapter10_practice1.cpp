#include <iostream>
using namespace std;

void Swap1(int,int);
void Swap2(int*,int*);
void Swap3(int&,int&);

int main()
{
    int num1 = 10,num2 = 5;
    Swap1(num1,num2);
    cout << "执行Swap1后：" 

}

void Swap1(int num1,int num2)
{
    int temp;
    temp = num1;
    num1 = num2;
    num2 = temp;
}