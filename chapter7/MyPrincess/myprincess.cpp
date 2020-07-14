/***************************************
 * 文件名
 * 创建人
 * 日期
 * 描述
 * 修改人
 * 日期
 * 版本
 * Copyright(c) 2006-2020
***************************************/
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <array>

using namespace std;

int main()
{
    //1.为父女取名字

    /** 父亲的姓名 */
    string value_father_name;
    /** 女儿的姓名 */
    string value_daughter_name;

    //2.为女儿录入初始信息

    /** 女儿生日的月份 */
    int value_birth_month;
    /** 女儿生日的日期*/
    int value_birth_date;
    /** 女儿的星座 */
    string value_daughter_constell;
    /** 星座二维数组 */
    string constell_names[12][2] = {
        {"摩羯座","水瓶座"},//一月
        {"水瓶座","双鱼座"},//二月
        {"双鱼座","白羊座"},//三月
        {"白羊座","金牛座"},//四月
        {"金牛座","双子座"},//五月
        {"双子座","巨蟹座"},//六月
        {"巨蟹座","狮子座"},//七月
        {"狮子座","处女座"},//八月
        {"处女座","天秤座"},//九月
        {"天秤座","天蝎座"},//十月
        {"天蝎座","射手座"},//十一月
        {"射手座","摩羯座"}//十二月
    };
    /** 各月份的跨星座日期 */
    int constell_dates[] = {20,19,21,20,21,22,23,23,23,24,23,22};

    /** 女儿的五项基本信息：体力，智力，魅力，道德，气质 */
    array<int,5> value_daughter_baseinfos;
    /** 五项基本属性名 */
    array<string,5> value_baseinfo_names = {"体力","智力","魅力","道德","气质"};
    //动态分配内存的数组
    //vector<int> value_daughter_baseinfos;
    //使用vector的话，后面在加值的时候是value_daughter_baseinfos.push_back(n)
    //但是vector，如果有添加除这5项之外的更多项或者少添加的时候，可能会报错
    //所以建议使用array，array就是普通数组，与int value[5]是相同的，但array是动态的

    /** 金币数量 */
    int value_daughter_gold = 500;

    int choice,temp1,temp2,temp3;

    cout << "父亲的姓名：";
    cin >> value_father_name;
    cout << "女儿的姓名：";
    cin >> value_daughter_name;
    cout << "女儿的生日（MM/DD）：";
    cin >> value_birth_month >> value_birth_date;

    value_daughter_constell = constell_names[value_birth_month-1][value_birth_date/constell_dates[value_birth_month-1]];

    cout << "女儿的信息：" << endl;
    cout << "姓名：" << value_daughter_name << endl;
    cout << "生日：1659-" << value_birth_month << "-" << value_birth_date << endl;
    cout << "星座：" << value_daughter_constell << endl;

    //根据女儿的星座，设置游戏的基本参数（体力，智力，魅力，道德，气质）
    if(value_daughter_constell == "白羊座")
    {
        value_daughter_baseinfos[0] = 80;
        value_daughter_baseinfos[1] = 15;
        value_daughter_baseinfos[2] = 15;
        value_daughter_baseinfos[3] = 11;
        value_daughter_baseinfos[4] = 21;
    }
    else if(value_daughter_constell == "金牛座")
    {
        value_daughter_baseinfos[0] = 46;
        value_daughter_baseinfos[1] = 30;
        value_daughter_baseinfos[2] = 28;
        value_daughter_baseinfos[3] = 20;
        value_daughter_baseinfos[4] = 29;
    }
    else if(value_daughter_constell == "双子座")
    {
        value_daughter_baseinfos[0] = 50;
        value_daughter_baseinfos[1] = 35;
        value_daughter_baseinfos[2] = 23;
        value_daughter_baseinfos[3] = 8;
        value_daughter_baseinfos[4] = 20;
    }
    else if(value_daughter_constell == "巨蟹座")
    {
        value_daughter_baseinfos[0] = 40;
        value_daughter_baseinfos[1] = 31;
        value_daughter_baseinfos[2] = 33;
        value_daughter_baseinfos[3] = 17;
        value_daughter_baseinfos[4] = 33;
    }
    else if(value_daughter_constell == "狮子座")
    {
        value_daughter_baseinfos[0] = 85;
        value_daughter_baseinfos[1] = 9;
        value_daughter_baseinfos[2] = 11;
        value_daughter_baseinfos[3] = 20;
        value_daughter_baseinfos[4] = 37;
    }
    else if(value_daughter_constell == "处女座")
    {
        value_daughter_baseinfos[0] = 35;
        value_daughter_baseinfos[1] = 28;
        value_daughter_baseinfos[2] = 36;
        value_daughter_baseinfos[3] = 18;
        value_daughter_baseinfos[4] = 40;
    }
    else if(value_daughter_constell == "天秤座")
    {
        value_daughter_baseinfos[0] = 42;
        value_daughter_baseinfos[1] = 33;
        value_daughter_baseinfos[2] = 25;
        value_daughter_baseinfos[3] = 32;
        value_daughter_baseinfos[4] = 28;
    }
    else if(value_daughter_constell == "天蝎座")
    {
        value_daughter_baseinfos[0] = 50;
        value_daughter_baseinfos[1] = 25;
        value_daughter_baseinfos[2] = 40;
        value_daughter_baseinfos[3] = 18;
        value_daughter_baseinfos[4] = 17;
    }
    else if(value_daughter_constell == "射手座")
    {
        value_daughter_baseinfos[0] = 57;
        value_daughter_baseinfos[1] = 31;
        value_daughter_baseinfos[2] = 15;
        value_daughter_baseinfos[3] = 19;
        value_daughter_baseinfos[4] = 20;
    }
    else if(value_daughter_constell == "摩羯座")
    {
        value_daughter_baseinfos[0] = 56;
        value_daughter_baseinfos[1] = 21;
        value_daughter_baseinfos[2] = 16;
        value_daughter_baseinfos[3] = 25;
        value_daughter_baseinfos[4] = 23;
    }
    else if(value_daughter_constell == "水瓶座")
    {
        value_daughter_baseinfos[0] = 43;
        value_daughter_baseinfos[1] = 43;
        value_daughter_baseinfos[2] = 20;
        value_daughter_baseinfos[3] = 23;
        value_daughter_baseinfos[4] = 17;
    }
    else if(value_daughter_constell == "双鱼座")
    {
        value_daughter_baseinfos[0] = 41;
        value_daughter_baseinfos[1] = 20;
        value_daughter_baseinfos[2] = 29;
        value_daughter_baseinfos[3] = 23;
        value_daughter_baseinfos[4] = 32;
    }
    //3.开始游戏大循环

    //游戏从1659年6月开始
    for(int year = 1659;year < 1659+7;year++)
    {
        for(int month = (year == 1659) ? 6 : 1; month <=12; month++)//三目运算符
        {
            cout << "当前是" << month << "月份" << endl;
            //判断本月是否是女儿的生日
            if(month == value_birth_month)
            {
                cout << "本月是" << value_daughter_name << "的生日，要不要送礼物呢？" << endl;
                //根据用户的输入进行判断
            }
            //显示游戏主菜单
            bool flag = true;
            while(flag == true)
            {
                cout << "\n1.查看状态\n2.安排行程\n3.亲子谈话\n4.存档\n5.读档\n6.进入下一个月" << endl;
                cin >> choice;
                switch (choice)
                {
                case 1://查看状态
                    cout << "女儿的信息：" << endl;
                    cout << "姓名：" << value_daughter_name << endl;
                    cout << "生日：1659-" << value_birth_month << "-" << value_birth_date << endl;
                    cout << "星座：" << value_daughter_constell << endl;
                    cout << "金币：" << value_daughter_gold << endl; 
                    cout << "当前是" << month << "月份" << endl;
                    //打印核心属性
                    cout << left;//让所有打印左对齐
                    for(int i =0;i<5;i++)
                    {
                        cout << value_baseinfo_names[i] << ":" << setw(2) << value_daughter_baseinfos[i] << "  ";
                        /** 实心方框的数量 */
                        int solid_count = value_daughter_baseinfos[i]/10;
                        for(int j = 0; j<10;j++)
                        {
                            if(j<solid_count)
                            {
                                cout << "■";
                            }
                            else
                            {
                                cout << "□";
                            }
                        }
                        cout << endl;
                    }
                    break;
                case 2://安排行程，一个月最多安排三个行程
                    {
                        string month_parts[] = {"上旬","中旬","下旬"};
                        int i = 0;
                        if(flag != false)
                        {
                            do
                            {
                                cout << "--" << month << "--" << month_parts[i] << endl;
                                cout << "1.学习武艺\n2.上私塾\n3.学习礼法\n4.出城修行\n5.打工赚钱" << endl;
                                cout << "请选择：";
                                cin >> choice;
                                srand(time(NULL));
                                if (choice == 1)//+体力+魅力-金钱
                                {
                                    value_daughter_baseinfos[0] += temp1 = rand() % 11;
                                    value_daughter_baseinfos[2] += temp2 = rand() % 11;
                                    value_daughter_gold -= temp3 = rand() %51;
                                    cout << "学习张无忌好榜样" << endl;
                                    cout << value_baseinfo_names[0] << "+" << temp1 << "," << value_baseinfo_names[2] << "+" << temp2 << "," << "金币-" << temp3 << endl;
                                    i++;
                                }
                                else if (choice ==5)
                                {
                                    value_daughter_gold += temp3 = rand() % 101;
                                    cout << "通过努力打工，赚到了" << temp3 << "个金币" << endl;
                                    i++;
                                }
                            } while (i<3);
                            cout << "没有体力了" << endl;
                            flag = false;
                            break;
                        }
                        else 
                        {
                            cout << "没有体力了" << endl;
                        }
                    }
                case 3:
                    break;
                case 4:
                    break;
                case 5:
                    break;
                case 6:
                    flag = false;
                
                default:
                    break;
                }
            }
        }
    }
    //4.根据各项参数，判定游戏结果
    int sum = 0;
    for(int i = 0; i<5;i++)
    {
        sum += value_daughter_baseinfos[i];
    }
    if(sum >=2000)
    {
        cout << "最优游戏结果" << endl;
    }
    else if (sum>=1800 && sum < 2000)
    {
        cout << "次优游戏结果" << endl;
    }
    else if (sum >= 1200 && sum < 1600)
    {
        int max_value = value_daughter_baseinfos[0];
        int max_index = 0;
        for (int i = 1; i < 5; i++)
        {
            if(max_value<value_daughter_baseinfos[i])
            {
                max_value = value_daughter_baseinfos[i];
                max_index = i;
            }
        }
        if("道德" == value_baseinfo_names[max_index] && value_daughter_baseinfos[2] > value_daughter_baseinfos[4])
        {
            //高级祭祀  属性总数1200-1600，道德最高，且魅力>气质
            cout << value_daughter_name << "成为高级祭祀" << endl;
        }
    }
    


}