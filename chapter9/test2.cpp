#include <iostream>
using namespace std;

void show(const int *,const int *);

int main()
{
    int valueArray[] = {90,56,67,89,100};
    show(valueArray,valueArray + 4);
}

void show(const int * begin,const int * end)
{
    for(const int* ptr = begin;ptr <= end;ptr++)
    {
        cout << *ptr << ",";
    }
}