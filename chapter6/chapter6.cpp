#include <iostream>
using namespace std;
int main()
{
    int nums[] = {8, 4, 2, 1, 23, 344, 12};
    int numsLen = sizeof(nums) / sizeof(int);

    int max = nums[0];
    int min = nums[0];
    for (int i = 1; i < numsLen; i++)
    {
        if (max < nums[i])
        {
            max = nums[i];
        }
        if (min > nums[i])
        {
            min = nums[i];
        }
    }
    cout << max << endl;
    cout << min << endl;
}