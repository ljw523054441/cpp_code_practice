#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
using namespace std;

class Student
{
private:
    string _name;
    string _desc;
    int _age;

    float* scores;//学生的分数数组
    int scoreCount;//学生成绩的个数

public:
    //构造函数的重载规则与普通函数重载相同
    Student();
    Student(string,string);//带参构造,标准写法是不需要有参数名的，但是写了也没问题
    Student(int);
    ~Student();
    
    void ShowInfo();

    string GetName(){return _name;}
    void SetName(string name){_name = name;}//构造函数是用来初始化的，这里还需要setname是为了之后可以修改name
    string Getdesc(){return _desc;}
    void Setdesc(string desc){_desc = desc;}

    void InitScores();//初始化学生成绩数组，默认分配一个元素空间
    void AddScore(float);//向scores数组中添加一个分数

    //书写函数：要求返回学霸对象
    Student& GetSuperScholar(Student&);

    float GetTotel();
};

#endif