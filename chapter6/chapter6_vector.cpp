#include <iostream>
#include <vector>
#include <algorithm>//sort函数所在的头文件

using namespace std;

int main()
{
    vector<double> vec_double = {98.5,67.9,43.6,32.9};
    //向vector中插入数字
    vec_double.push_back(100.8);//在数组的尾部插入一个数字，python的append()
    //遍历
    for (int i = 0; i < vec_double.size(); i++)
    {
        cout << vec_double[i] << endl;
    }
    
    //vector的通用遍历方法：使用迭代器iterator
    //以下是迭代器的基本用房
    vector<double>::iterator it;//得到迭代器对象，要得到vector<double>类型的这样一个迭代器，需要用到一个域运算符iterator,实际上是一个指针对象！
    //it.begin()
    for (it = vec_double.begin(); it != vec_double.end(); ++it)
    {
        cout << *it << endl;
    }

    //排序
    sort(vec_double.begin(),vec_double.end());
    //逆序
    // reverse(vec_double.begin(),vec_double.end());
    for (it = vec_double.begin(); it != vec_double.end(); ++it)
    {
        cout << *it << endl;
    }

}