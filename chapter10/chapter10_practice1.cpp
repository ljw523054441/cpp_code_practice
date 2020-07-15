#include <iostream>
using namespace std;

void Swap1(int,int);
void Swap2(int*,int*);
void Swap3(int&,int&);

int main()
{
    int num1 = 10,num2 = 5;
    Swap1(num1,num2);
    cout << "执行Swap1后：" << num1 << '\t' << num2 << endl;
    //此时的结果还是num1是10，num2是5，因为在传递给函数时，是传递的变量的副本，副本经过函数发生改变，但原来的值没变

    Swap2(&num1,&num2);
    cout << "执行Swap1后：" << num1 << '\t' << num2 << endl;
    //此时的结果还是num1是5，num2是10，因为这次是交换的根据int* p1 和int* p2这两个地址所指向的值，p1和p2这两个地址本身没有变

    Swap3(num1,num2);
    cout << "执行Swap1后：" << num1 << '\t' << num2 << endl;
    //此时的结果变为num1是10，num2是5，是因为上面Swap2已经交换过一次了，所以Swap3又交换回来了
    //可以看出使用引用的理由：
    //1.可以更加简便的书写代码，相较于用指针的方式
    //2.可以直接传递某个对象，而不只是把对象复制一份

}

void Swap1(int num1,int num2)
{
    int temp;
    temp = num1;
    num1 = num2;
    num2 = temp;
}

void Swap2(int* p1,int* p2)
{
    int temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

void Swap3(int& ref1,int& ref2)
{
    int temp;
    temp = ref1;
    ref1 = ref2;
    ref2 = temp;
}