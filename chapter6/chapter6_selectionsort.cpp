#include <iostream>
using namespace std;
int main()
{
    int temp;
    int nums[] = {45, 32, 56, 1, 90, 21};
    int sizeofnums = sizeof(nums) / sizeof(int);

    int min = nums[0]; //假设第一个元素是最小值
    int min_index = 0;

    for (int i = 0; i < sizeofnums; i++)
    {
        min = nums[i]; //假设第i个元素是最小值
        min_index = i;
        for (int j = i + 1; j < sizeofnums; j++) //跟后面的数比较
        {
            //打擂台
            if (min > nums[j])
            {
                min = nums[j];
                min_index = j;
            }
        }
        //交换数字位置
        temp = nums[min_index];
        nums[min_index] = nums[i];
        nums[i] = temp;
    }
    for (int i = 0; i < sizeofnums; i++)
    {
        cout << nums[i] << '\t';
    }

    cout << endl;
    //逆序
    for (int i = 0; i < sizeofnums / 2; i++)
    {
        temp = nums[i];
        nums[i] = nums[sizeofnums - i - 1];
        nums[sizeofnums - i - 1] = temp;
    }
    for (int i = 0; i < sizeofnums; i++)
    {
        cout << nums[i] << '\t';
    }
}