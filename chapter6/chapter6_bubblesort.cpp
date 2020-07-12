#include <iostream>
using namespace std;
int main()
{
    int temp;
    int nums[] = {15, 25, 90, 23, 9};
    int sizeofnums = sizeof(nums) / sizeof(int);
    for (int i = 0; i < sizeofnums - 1; i++)
    {
        for (int j = 0; j < sizeofnums - i; j++)
        {
            if (nums[j] < nums[j + 1])
            {
                temp = nums[j + 1];
                nums[j + 1] = nums[j];
                nums[j] = temp;
            }
        }
    }
    cout << nums[0] << endl;
}