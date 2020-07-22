#include <iostream>
#include "Student.h"

using namespace std;

int main()
{
    Student stu1;//在栈内存中直接分配空间，跟之前的int num;是一样的道理，内存直接分配在宝贵的栈内存中
    Student stu2("马化腾","普通家庭");
    // Student stu3(45);
    //可见，在给构造函数传的参数不同的时候，实际上编译器会自动的去找到对应的构造函数
    //这是构造函数的重载
    // Student stu4 = 50;
    //注意，如果构造函数只有一个是带唯一的参数，可以这样调用

    stu2.ShowInfo();

    Student* stu5 = new Student("杰克马","悔创阿里");//Student* 是Student类型的指针，这里是使用new给指针动态分配内存，同时调用Student的构造函数
    //这里其实就是在堆内存里新分配了一个空间，而这个指针是指向这个堆内存的

    stu5 -> ShowInfo();//指针变量里面的成员函数必须通过->来访问，相当于(*stu5).ShowInfo();

    Student* ptrStu1 = new Student("迪热巴","微胖女孩");

    ptrStu1->AddScore(78.9f);
    ptrStu1->AddScore(78.9f);
    ptrStu1->AddScore(78.9f);
    ptrStu1->ShowInfo();

    Student stu6("刘强东","不知妻美");
    stu6.AddScore(45.2);
    stu6.AddScore(45.2);
    stu6.AddScore(45);
    stu6.AddScore(45);
    stu6.AddScore(45);
    stu6.AddScore(45);
    stu6.ShowInfo();

    Student& Scholar1 = stu2.GetSuperScholar(*ptrStu1);
    Student& Scholar2 = ptrStu1->GetSuperScholar(stu2);

    cout << "学霸是：" << Scholar1.GetName() << endl;
    cout << "学霸是：" << Scholar2.GetName() << endl;

    delete ptrStu1;
    delete stu5;
}
