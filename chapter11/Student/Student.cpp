#include "Student.h"

Student::Student()
{
    cout << "默认构造" << endl;
    InitScores();
}

Student::Student(string name,string desc)
{
    SetName(name);
    //_name = name;与上面是等价写法
    Setdesc(desc);
    //_desc = desc;
    cout << "调用带参构造：Student(string name,string desc)" << endl;

    InitScores();
}

//Student::Student(string name,string desc) : _name(name),_desc(desc)
//这种写法叫初始化参数列表

Student::Student(int age)
{
    _age = age;
    cout << "调用带参构造：Student(int age)" << endl;
    InitScores();
}

void Student::InitScores()
{
    this->scores = new float[1];

    this->scoreCount = 1;
}

void Student::AddScore(float score)
{
    // scores[scoreCount-1] = score;
    this->scores[scoreCount-1] = score;
    //1.创建一个新数组，分配scoreCount+1个空间
    //2.复制原数组中的内容到新数组中
    //3.scoreCount++
    //4.scores指向新数组

    float* newScores = new float[scoreCount+1];
    float* oldScores = scores;
    memcpy(newScores,scores,sizeof(float) * scoreCount);
    scoreCount++;
    scores = newScores;
    delete oldScores;
}


void Student::ShowInfo()
{
    cout << _desc << _name << endl;
    for(int i =0;i<scoreCount-1;i++)
    {
        cout << this->scores[i] << '\t';
    }
    cout << endl;
}

/**
 * 返回学霸对象
 * @param otherStu 要对比的另外一个学生对象
 * @return 返回总分比较大的那个学生对象
 */
Student& Student::GetSuperScholar(Student& otherStu)
{
    //分别计算两个学生的总分
    if(this->GetTotel() > otherStu.GetTotel()){//当前对象的总分，用this指针和尖角号来表示；传进来的另一个对象的引用，用.来表示
        return *this;//返回当前对象的引用
    }else
    {
        return otherStu;
    }
    
}

float Student::GetTotel()
{
    float sum;
    for (int i = 0; i < scoreCount; i++)
    {
        sum += scores[i];
    }
    return sum;
    
}

Student::~Student()
{
    cout << _name << "被释放" << endl;
    delete this->scores;
}