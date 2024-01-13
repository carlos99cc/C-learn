#include<iostream>
#include<string>

using namespace std;

#define PI 3.1415926

class student
{
//访问权限
public:    ///公共权限
//属性
//半径
int card;
string name;
//行为
//获取圆的周长
void showstudent ()
{
    cout<<"姓名： "<<name<<"\t"<<"学号 : "<<card<<endl;
}
void setcard(int id)
{
    card=id;
}


};
int main()
{
    //通过类 创造具体的学生（对象）
    student s1;
    s1.name = "张三";
    s1.card = 2346;
    s1.showstudent();
    s1.setcard(15);
    s1.showstudent();
    system("pause");
    return 0;
}

