#include "option.h"



//菜单界面
void showMenu()
{

    cout<<"********通讯录管理系统***********"<<endl;
    cout<<"*********************************"<<endl;
    cout<<"********1、添加联系人************"<<endl;
    cout<<"********2、显示联系人************"<<endl;
    cout<<"********3、删除联系人************"<<endl;
    cout<<"********4、查找联系人************"<<endl;
    cout<<"********5、修改联系人************"<<endl;
    cout<<"********6、清空联系人************"<<endl;
    cout<<"********0、退出通讯录************"<<endl;
    cout<<"*********************************"<<endl;

}
//添加联系人功能**************
void addPersion(Addressbooks *abs){
    //判断通讯录是否已满，无法添加！！！
    if(abs->m_Size == MAX){
        cout<<"通讯录已满，无法添加！！！"<<endl;
    }
    else
    {
        //1.添加具体联系人
        string name;
        cout<<"请输入姓名："<<endl;
        cin >> name;
        abs->persionArray[abs->m_Size].m_Name = name;


        cout<<"请输入性别："<<endl;
        cout<<"1 ------ 男"<<endl;
        cout<<"2 ------ 女"<<endl;
        int sex = 0;
        while(true)
        {
            cin >> sex;
            if (sex == 1 || sex == 2)
            {
            abs->persionArray[abs->m_Size].m_Sex = sex;
            break;
            }
        cout<<"输入有误，请重新输入！！！"<<endl;
        }
       ///////////////////////////////////////////////// 

        int age = 0;
        cout<<"请输入年龄："<<endl;
        while (true)
        {
            /* code */
            cin >> age;
            if (age >= 0 && age <=120 )
            {
                abs->persionArray[abs->m_Size].m_Age = age;
                break;
            }
             cout<<"输入有误，请重新输入！！！"<<endl;
       }
    
    }
        ///////////////////////////////////////////////
        string phone;
        cout<<"请输入联系电话："<<endl;
        cin >> phone;
        abs->persionArray[abs->m_Size].m_Phone = phone;


        ///////////////////////////////////////////////////

        string address;
        cout<<"请输入家庭住址："<<endl;
        cin >> address;
        abs->persionArray[abs->m_Size].m_Addr = address;

        ////////////////更新通讯录人数
        abs->m_Size++;

        cout<<"信息录入成功！！！"<<endl;

        system("pause");
        system("cls");

}

/////////2.显示联系人

void showPersion(Addressbooks *abs)
{
     if (abs->m_Size == 0)
     {
        cout<<"当前记录为空"<<endl;
     }
     else
     {
        for (int i = 0; i < abs->m_Size; i++)
        {
            /* code */
            cout<<"姓名： "<<abs->persionArray[i].m_Name<<"\t";
            cout<<"性别： "<<(abs->persionArray[i].m_Sex == 1 ? "男" : "女")<<"\t";
            cout<<"年龄： "<<abs->persionArray[i].m_Age<<"\t";
            cout<<"电话： "<<abs->persionArray[i].m_Phone<<"\t";
            cout<<"住址： "<<abs->persionArray[i].m_Addr<<endl;
        }
        
     }
     system("pause");
     system("cls");
     
}

/////////////////////检测联系人是否存在
int isExist(Addressbooks *abs , string name)
{
        for (int i = 0; i < abs->m_Size; i++)
        {
                /* 判断是否找到此人 */
                if (abs->persionArray[i].m_Name == name)
                {
                        /* code */
                        return i;
                }
                
        }
        cout<<"查无此人"<<endl;
        return -1;
}

/////////////////3.删除联系人
void delectPersion(Addressbooks *abs)
{
    cout<<"请输入您要删除的联系人名字："<<endl;

    string name;
    cin >> name;
    int ret = isExist(abs,name);
    /* 检查是否查到此人*/
    if (ret != -1)
    {
        //查到此人，要进行删除操作
        for (int i = ret; i < abs->m_Size; i++)
        {
            /* 数据迁移，后面的人向前一格，覆盖掉要删除的联系人*/
            abs->persionArray[i] = abs->persionArray[i+1];
        }
        abs->m_Size--;//更新通讯录中的人员数
        cout<<"删除成功"<<endl;
        
    }
    system("pause");
    system("cls");
}

///////////////////4.查找联系人
void findPersion(Addressbooks *abs)
{
    cout<<"请输入您要查找的联系人姓名："<<endl;
    string name;
    cin >> name;
    //判断是否找到联系人
    int ret = isExist(abs,name);
    if (ret != -1)//找到联系人
    {
        /* code */
        cout<<"姓名： "<<abs->persionArray[ret].m_Name<<"\t";
        cout<<"性别： "<<(abs->persionArray[ret].m_Sex == 1 ? "男" : "女")<<"\t";
        cout<<"年龄： "<<abs->persionArray[ret].m_Age<<"\t";
        cout<<"电话： "<<abs->persionArray[ret].m_Phone<<"\t";
        cout<<"住址： "<<abs->persionArray[ret].m_Addr<<endl;
    }
    else
    {
        //cout<<"查无此人!!"<<endl;
    }
    
    system("pause");
    system("cls");
}

//////////////////////////////////5.修改联系人
void modifyPersion(Addressbooks *abs)
{
    cout<<"请输入您要修改的联系人姓名："<<endl;
    string name;
    cin >> name;
        //判断是否找到联系人
    int ret = isExist(abs,name);
     if (ret != -1)//找到联系人
    {
        /* code */
        cout<<"请输入修改后的姓名："<<endl;
        string name2;
        cin >> name2;
        abs->persionArray[ret].m_Name = name2;


        cout<<"请输入性别："<<endl;
        cout<<"1 ------ 男"<<endl;
        cout<<"2 ------ 女"<<endl;
        int sex = 0;
        while(true)
        {
            cin >> sex;
            if (sex == 1 || sex == 2)
            {
            abs->persionArray[ret].m_Sex = sex;
            break;
            }
        cout<<"输入有误，请重新输入！！！"<<endl;
        }
       ///////////////////////////////////////////////// 

        int age = 0;
        cout<<"请输入年龄："<<endl;
        while (true)
        {
            /* code */
            cin >> age;
            if (age >= 0 && age <=120 )
            {
                abs->persionArray[ret].m_Age = age;
                break;
            }
             cout<<"输入有误，请重新输入！！！"<<endl;
       }
    
    
        ///////////////////////////////////////////////
        string phone;
        cout<<"请输入联系电话："<<endl;
        cin >> phone;
        abs->persionArray[ret].m_Phone = phone;


        ///////////////////////////////////////////////////

        string address;
        cout<<"请输入家庭住址："<<endl;
        cin >> address;
        abs->persionArray[ret].m_Addr = address;


        cout<<"信息修改成功！！！"<<endl;
    
  
    }
        system("pause");
        system("cls");

}

///////////////////////6.清空联系人
void cleanPersion(Addressbooks *abs)
{
    char opt;
    cout<<"确定将通讯录全部清除吗?请输入Y或者N"<<endl;
    while(true)
    {
        cin >> opt;
        if (opt == 'Y'|| opt == 'y')
        {
            /* 清空操作 */
            abs->m_Size = 0;
            cout<<"通讯录已经全部清空！！！"<<endl;
            break;
        }
        cout<<"请按要求重新输入！！！"<<endl;

    }
        system("pause");
        system("cls");
}