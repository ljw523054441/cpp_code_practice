#include <iostream>
#include "GzDemo.h"
using namespace std;

int main()
{
    int values[5];
    //input(values,sizeof(values)/sizeof(int));
    input(values,5);
    print(values,5);
    change(values,5,"体力",90);
    print(values,5);
}