#include <iostream>
using namespace std;

int main()
{
    double num = 1024.5;
    //声明一个指针，指向num变量
    double* ptr_num = &num;
    cout << "ptr_num的值：" << ptr_num << endl;
    cout << "ptr_num指向空间的值是：" << *ptr_num << endl;

    char ch = 'a';
    char* ptr_ch = &ch;
    cout << ptr_ch << endl;
    //思考：打印的结果是什么？地址？还是ch的值？
    //char型指针在c语言C++里面，已经把它当做是字符串了，所以会把char型指针当做字符串来打印的
    cout << (void*)ptr_ch << endl;//void*表示任意类型，这里需要把char型指针转换一下，才能打印出内存地址


}