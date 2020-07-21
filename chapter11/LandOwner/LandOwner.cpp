#include "LandOwner.h"

LandOwner::LandOwner()
{
    SetNickname("默认地主");
    SetSex("保密");
    SetGold(1000);
    SetExp(0);
    cout << "默认构造LandOwner()" << endl;
    InitCards();
    ShowCards(packCards);
}

LandOwner::LandOwner(string nickname):_nickname(nickname)
{
    SetSex("保密");
    SetGold(1000);
    SetExp(0);
    cout << "默认构造LandOwner(string nickname)" << endl;
    InitCards();
    ShowCards(packCards);
}

LandOwner::LandOwner(string nickname,string sex,int gold,long exp):_nickname(nickname),_sex(sex),_gold(gold),_exp(exp)
{
    cout << "默认构造LandOwner(string nickname,string sex,int gold,long exp) " << endl;
    InitCards();
    ShowCards(packCards);
}

void LandOwner::ShowInfo()
{
    cout << "昵称:" << GetNickname() << endl;
    cout << "性别:" << GetSex() << endl;
    cout << "金币数量:" << GetGold() << endl;
    cout << "经验值:" << GetExp() << endl;
}

/* 初始化packCards和surplusCards和currCards*/
void LandOwner::InitCards()
{
    //生成默认的一副牌
    for(int i = 0; i<54;i++)
    {
        packCards.push_back(i+1);
        surplusCards.push_back(packCards.at(i));
    }
    currCards.clear();
}

void LandOwner::ShowCards(const vector<int>& cards)//传递引用提高内存的利用效率，并且为了防止引用被更改，加上const
{
    /*c语言的习惯
    for (int i = 0; i < cards.size(); i++)
    {
        cout << cards[i] << ",";
    }
    cout << endl;*/

    /*使用迭代器
    for(vector<int>::const_iterator iter = cards.begin();iter != cards.end();iter++)//const_iterator是不可修改的，而iterator是可修改的
    //vector<int>::const_iterator iter 是声明迭代器，iter实际上是一个指针
    {
        cout << *iter << ",";
    }
    cout << endl;*/

    /* 使用c++11的类型推断 */
    for(auto iter = cards.begin();iter != cards.end();iter++)//const_iterator是不可修改的，而iterator是可修改的
    //vector<int>::const_iterator iter 是声明迭代器，iter实际上是一个指针
    {
        cout << getColor(*iter) << " " << getValue(*iter) << ",";
    }
    cout << endl;

    /* 使用for区间遍历 - c++11 
    for(auto card : cards)
    {
        cout << card << ",";
    }
    cout << endl;*/

    /* 使用算法的方式，将容器的内容复制到cout绑定的迭代器中 
    //首先先导入 #include <iterator> 和 #include <algorithm> 两个头文件
    copy(cards.cbegin(),cards.cend(),ostream_iterator<int>(cout,","));
    //从card.cbegin()到cards.cend()，拷贝到ostream_iterator输出迭代器中去，输出类型为整型，对象是cout，分隔符是，
    //cbegin()与cend(),是c++11后升级的，跟begin()差不多
    cout << endl;*/


}

void LandOwner::TouchCard(int cardCount)
{
    //随机生成一张剩余牌堆中有的牌，添加到currCards集合中，从surplusCards中删除这张牌
    //需要随机生成
    srand(time(NULL));//时间种子
    for (int i = 0; i < cardCount; i++)
    {
        int randIndex = rand() % 54;//0到53之间的随机数字
        //判断：随机生成的这张牌是否在剩余牌集合中
        if(isContains(packCards[randIndex]))
        {
            currCards.push_back(packCards[randIndex]);//如果在，就将这张牌放入手牌
            //在剩余牌集合中删除这张牌
            deleteCard(surplusCards,packCards[randIndex]);
        }else
        {
            i--;//重新进行本次摸牌
        }
    }
    cout << "<地主摸牌> - 当前手牌如下" <<endl;
    ShowCards(currCards);
    cout << "<地主摸牌后> - 剩余牌面如下" <<endl;
    ShowCards(surplusCards);
    
}

bool LandOwner::isContains(int cardNum)
{
    //使用算法查找
    vector<int>::iterator iter = find(surplusCards.begin(),surplusCards.end(),cardNum);
    if (iter == surplusCards.end())
    {
        return false;
    }else
    {
        return true;
    }
    
    /* 普通青年的做法 
    for (int i = 0; i < surplusCards.size(); i++)
    {
        if(surplusCards[i] == cardNum)
        {
            return false;
        }else
        {
            return true;
        }
    }*/
}

void LandOwner::deleteCard(vector<int>& cardVec, int card)
{
    /* 普通青年的做法
    for (auto iter = cardVec.begin(); iter != cardVec.end();)
    {
        if(*iter == card)//如果找到就删除元素
        {
            iter = cardVec.erase(iter);//这里的返回值指向已删除元素的下一个元素
        }else
        {
            ++iter;//继续判断下一个元素是否相同
        }
    } */
    //使用算法删除
    auto iter = find(cardVec.begin(),cardVec.end(),card);
    if(iter != cardVec.end())
    {
        cardVec.erase(iter);
    }
    
}

string LandOwner::getColor(int card)//注意这里card不是下标，而是牌面
{
    if(card == 53) return "小王";
    if(card == 54) return "大王";
    string colors[] = {
        "黑桃","红心","梅花","方片"
    };
    return colors[(card-1)/13];
}

string LandOwner::getValue(int card)
{
    if(card == 53) return "Black Joker";
    if(card == 54) return "Red Joker";
    string values[] = {
        "A","2","3","4","5","6","7","8","9","10","J","Q","K"
    };
    return values[(card-1)%13];
}

LandOwner::~LandOwner()
{
    cout << GetNickname() << "被释放" << endl;
}