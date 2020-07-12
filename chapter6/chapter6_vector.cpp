#include <iostream>
#include <vector>

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
    
}