#ifndef LANDOWNERV4_H
#define LANDOWNERV4_H
#include <iostream>
#include <memory.h>

using namespace std;

class LandOwnerV4
{
public:
    LandOwnerV4();
    virtual ~LandOwnerV4();

    long Getscore(){return _score;}
    void Setscore(long val)
    {
        if(val < 0) _score = 0;
                    _score = val;
    }
    string Getname(){ return _name;}
    void Setname(string name){ _name = name;}
    //int Getcards[20] { return cards[20];}
    //void Setcards[20](int val){cards[20] = val;}
};

LandOwnerV4::LandOwnerV4(/* args */)
{
}

LandOwnerV4::~LandOwnerV4()
{
}

#endif LANDOWNERV4_H