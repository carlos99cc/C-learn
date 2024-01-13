#include<iostream>
#include"option.h"

using namespace std;



int main()
{
    //创建通讯录结构体的变量
    Addressbooks abs;
    abs.m_Size = 0;
    int select = 0;//创建用户选择的输入变量
    while(true)
    {
            showMenu();
            cin>>select;
            switch (select)
            {
                case 1:
                    /* 添加联系人 */
                    addPersion(&abs);
                    break;
                case 2:
                /* 显示联系人 */
                    showPersion(&abs);
                        break;
                case 3:
                /* 删除联系人 */
                    delectPersion(&abs);
                        break;
                case 4:
                /* 查找联系人*/
                    findPersion(&abs);
                        break;
                case 5:
                /* 修改联系人 */
                    modifyPersion(&abs);
                        break;
                case 6:
                /* 清空联系人 */
                     cleanPersion(&abs);
                        break;
                case 0:
                /* 退出通讯录 */
                        cout<<"欢迎下次使用！！！"<<endl;
                        break;
                default:
                        cout<<"请输入正确功能选项！！！"<<endl;
                      break;
            }
    }

    system("pause");
    return 0;
}

