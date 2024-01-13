#ifndef _OPTION_H_

#define _OPTION_H_

#include <iostream>
#include<string>
using namespace std;
 
 #define MAX 1000


struct Persion 
{

    string m_Name;
    int m_Sex;
    int m_Age;
    string m_Phone;
    string m_Addr;
    
};

struct Addressbooks
{
    //通讯录保存的联系人数组
    struct Persion persionArray[MAX];
    //通讯录中当前记录联系人的个数
    int m_Size;

};

void showMenu();
void addPersion(Addressbooks *abs);
void showPersion(Addressbooks *abs);
int isExist(Addressbooks *abs , string name);
void delectPersion(Addressbooks *abs);
void findPersion(Addressbooks *abs);
void cleanPersion(Addressbooks *abs);
void modifyPersion(Addressbooks *abs);


#endif 