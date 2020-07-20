#ifndef LANDOWNERV4_H
#define LANDOWNERV4_H
#include <iostream>
#include <memory.h>

//Get 与 Set方法 

using namespace std;

class LandOwnerV4
{
public:
    LandOwnerV4();
    virtual ~LandOwnerV4();

    long Getscore(){return _score;}
    void Setscore(long score)
    {
        if(score < 0) score = 0;
                    _score = score;
    }
    string Getname(){ return _name;}
    void Setname(string name){ _name = name;}
    
private:
    long _score;//一般私有的前面加下划线
    string _name;
    int _cards[20];
};


#endif //LANDOWNERV4_H