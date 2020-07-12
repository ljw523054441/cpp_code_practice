#include <iostream>
using namespace std;
int main()
{
    //实现数组元素的删除和插入
    double power[99];   //数组的大小一旦确定了，就不能再更改了
    int powerCount = 0; //当前数组中的元素个数
    power[powerCount++] = 45771;
    power[powerCount++] = 42322;
    power[powerCount++] = 40907;
    power[powerCount++] = 40706;

    double insertPower;
    int insertIndex = 0; //从大到小排列应该默认设置为插入到最后一个，但是由于在开始的时候不知道数组的大小，所以先设置为零

    double temp;
    for (int i = 0; i < powerCount; i++)
    {
        for (int j = 0; j < powerCount - i - 1; j++)
        {
            if (power[j] < power[j + 1])
            {
                temp = power[j];
                power[j] = power[j + 1];
                power[j + 1] = temp;
            }
        }
    }
    cout << "排序后：" << endl;
    for (int i = 0; i < powerCount; i++)
    {
        cout << power[i] << '\t';
    }

    //排序后要插入
    cout << "请输入要插入的数字：" << endl;
    cin >> insertPower;
    //要插入后保证数组仍是有序的
    //1.把数字放到数组末尾，重新进行排序

    //2.找到第一个比插入数字大的位置，假设是insertIndex，

    for (int i = 0; i < powerCount; i++)
    {
        if (insertPower > power[i])
        {
            insertIndex = i;
            break;
        }
        else
        {
            insertIndex = powerCount; //如果没有比插入的数字小的，就把要插入的数字放到数组的最后
        }
    }
    //从最后一个元素开始，将数字赋值到后面一个位置上。
    for (int i = powerCount - 1; i >= insertIndex; i--)
    {
        power[i + 1] = power[i];
    }
    //把要插入的元素放到insertIndex位置上
    power[insertIndex] = insertPower;
    //将数组的总长度加一
    powerCount++;
    cout << "插入后：" << endl;
    for (int i = 0; i < powerCount; i++)
    {
        cout << power[i] << '\t';
    }

    //删除
    double deletePower;
    int deleteIndex = -1; //表示如果没找到这个元素，则不删除
    cout << "要删除的元素是：" << endl;
    cin >> deletePower;

    //1.找到要删除的元素下标
    for (int i = 0; i < powerCount; i++)
    {
        if (deletePower == power[i])
        {
            deleteIndex = i;
            break;
        }
    }

    if (deleteIndex == -1)
    {
        cout << "没有找到要删除的元素，删除失败" << endl;
    }
    else
    {
        //2.从找到的下标开始，后面一个元素赋值给前面一个元素
        for (int i = deleteIndex; i < powerCount - 1; i++)
        {
            power[i] = power[i + 1];
        }

        //3.数组长度-1
        powerCount--;
        cout << "删除后：" << endl;
        for (int i = 0; i < powerCount; i++)
        {
            cout << power[i] << '\t';
        }
    }
}