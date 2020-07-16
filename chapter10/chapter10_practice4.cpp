#include <iostream>
using namespace std;

//使用重载实现数组的排序

void Sort(int[],int);
void Sort(float[],int);//重载，函数名相同，参数列表（特征标）不同
void Sort(double[],int);

void Show(int[],int);
void Show(float[],int);
void Show(double[],int);


void Sort(int nums[],int len)
{
    int temp;
    for(int i = 0;i < len -1; i++)
    {
        for(int j = 0;j < len - i -1;j++)
        {
            if(nums[j]>nums[j+1])
            {
                temp = nums[j];
                nums[j] = nums[j+1];
                nums[j+1] = temp;
            }
        }
    }
}

void Sort(float nums[],int len)
{
    float temp;
    for(int i = 0;i < len -1; i++)
    {
        for(int j = 0;j < len - i -1;j++)
        {
            if(nums[j]>nums[j+1])
            {
                temp = nums[j];
                nums[j] = nums[j+1];
                nums[j+1] = temp;
            }
        }
    }
}

void Sort(double nums[],int len)
{
    double temp;
    for(int i = 0;i < len -1; i++)
    {
        for(int j = 0;j < len - i -1;j++)
        {
            if(nums[j]>nums[j+1])
            {
                temp = nums[j];
                nums[j] = nums[j+1];
                nums[j+1] = temp;
            }
        }
    }
}

void Show(int nums[],int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << nums[i] << ",";
    }
    cout << endl;
    
}

void Show(float nums[],int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << nums[i] << ",";
    }
    cout << endl;
    
}

void Show(double nums[],int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << nums[i] << ",";
    }
    cout << endl;
    
}

int main()
{
    int iNums[] = {56,54,12,89,43};
    float fNums[] = {78.0f,5.7f,42.8f,99.1f};
    double dNums[] = {78.9,23.6,77.8,98.5,33.3};

    cout << "排序前：";
    Show(iNums, sizeof(iNums)/sizeof(int));
    Sort(iNums, sizeof(iNums)/sizeof(int));
    cout << "排序后：";
    Show(iNums, sizeof(iNums)/sizeof(int));

    cout << "排序前：";
    Show(fNums, sizeof(fNums)/sizeof(float));
    Sort(fNums, sizeof(fNums)/sizeof(float));
    cout << "排序后：";
    Show(fNums, sizeof(fNums)/sizeof(float));

    cout << "排序前：";
    Show(dNums, sizeof(dNums)/sizeof(double));
    Sort(dNums, sizeof(dNums)/sizeof(double));
    cout << "排序后：";
    Show(dNums, sizeof(dNums)/sizeof(double));


}