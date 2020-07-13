#include <iostream>
using namespace std;

int main()
{
    int arrays[]{15,23,30,40,50,60};
    int * p_arrays = arrays;

    for(int i = 0; i< 6;i++)
    {
        cout << *(p_arrays+i) << endl;
    }

    int * ptr_start = arrays;//指向第一个元素
    int * ptr_end = arrays + 5;//指向最后一个元素

    int temp;

    while (ptr_start <= ptr_end)
    {
        temp = *ptr_start;
        *ptr_start = *ptr_end;
        *ptr_end = temp;
        ptr_start++;
        ptr_end--;
    }
    for (int i = 0; i < 6; i++)
    {
        cout << arrays[i] << endl;
    }
    




}