#include <iostream>
using namespace std;

//书写函数模板
template <typename T>
void Sort(T tArray[], int len);
template <typename T>
void Show(T tArray[], int len); //T只在这个函数内部有效，因此可以循环使用

int main()
{
    int iNums[] = {56, 54, 12, 89, 43};
    float fNums[] = {78.0f, 5.7f, 42.8f, 99.1f};
    double dNums[] = {78.9, 23.6, 77.8, 98.5, 33.3};

    cout << "排序前：";
    Show(iNums, sizeof(iNums) / sizeof(int));
    Sort(iNums, sizeof(iNums) / sizeof(int));
    cout << "排序后：";
    Show(iNums, sizeof(iNums) / sizeof(int));

    cout << "排序前：";
    Show(fNums, sizeof(fNums) / sizeof(float));
    Sort(fNums, sizeof(fNums) / sizeof(float));
    cout << "排序后：";
    Show(fNums, sizeof(fNums) / sizeof(float));

    cout << "排序前：";
    Show(dNums, sizeof(dNums) / sizeof(double));
    Sort(dNums, sizeof(dNums) / sizeof(double));
    cout << "排序后：";
    Show(dNums, sizeof(dNums) / sizeof(double));
}

template <typename T>
void Sort(T tArray[], int len)
{
    T temp;
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = 0; j < len - i - 1; j++)
        {
            if (tArray[j] > tArray[j + 1])
            {
                temp = tArray[j];
                tArray[j] = tArray[j + 1];
                tArray[j + 1] = temp;
            }
        }
    }
}

template <typename T>
void Show(T tArray[], int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << tArray[i] << ",";
    }
    cout << endl;
}