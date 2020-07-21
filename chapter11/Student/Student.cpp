#include "Student.h"

Student::Student()
{
    cout << "默认构造" << endl;
    initScores();
}

Student::Student(string name,string desc)
{
    SetName(name);
    //_name = name;与上面是等价写法
    Setdesc(desc);
    //_desc = desc;
    cout << "调用带参构造：Student(string name,string desc)" << endl;

    initScores();
}

//Student::Student(string name,string desc) : _name(name),_desc(desc)
//这种写法叫初始化参数列表

Student::Student(int age)
{
    _age = age;
    cout << "调用带参构造：Student(int age)" << endl;
    initScores();
}

void Student::initScores()
{
    this->scores = new float[1];

    this->scoreCount = 1;
}



void Student::ShowInfo()
{
    cout << _desc << _name << endl;
}

Student::~Student()
{
    cout << _name << "被释放" << endl;
    delete this->scores;
}