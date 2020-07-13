#include <iostream>
using namespace std;
int main()
{
    int num =108;
    int& rel_num =num;
    rel_num = 118;
    cout << &num << '\t' << &rel_num << endl;

    double score[]{11,22,33,44,55};
    double* ptr_score = score;//数组名score就是数组的首地址，不用取址符&

    cout << "第3+1个元素是：" << score[3] << endl;
    cout << "第3+1个元素是：" << *(score + 3)<< endl;
    cout << "第3+1个元素的地址是：" << &score[3] << endl;
    cout << "第3+1个元素的地址是：" << score + 3 << endl;

    cout << sizeof(score) << '\t' << sizeof(ptr_score) << endl;
    //数组的数据类型是数据类型[],例如double[]，因此这里sizeof(score)是40，score[5]*8



}