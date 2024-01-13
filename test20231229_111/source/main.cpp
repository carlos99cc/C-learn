#include<iostream>
#include<string>

using namespace std;
class persion
{
public:
static int m_a;
int m_b;
int m_c;

 persion()
 {
    cout<<"persion的构造函数"<<endl;
 }
 ~persion()
 {
    cout<<"persion的析构函数"<<endl;
 }
static void func()
{
    cout<<"func的函数调用"<<endl;
    m_a = 500;
   // m_b = 300;
}
};

int persion::m_a = 100;
void test()
{
   persion p1;
    cout<<"pl.m-a="<<p1.m_a<<endl;
    cout<<"p1.m-b="<<p1.m_b<<endl;
    cout<<"p1.m-c="<<p1.m_c<<endl;
    persion p2;
    p2.m_a = 200;
    cout<<"pl.m-a="<<p1.m_a<<endl;
    //1. 通过创建对象来访问
    p2.func();
    
}

int main()
{
    test();
    //2.通过类名来访问
    persion::func();
    cout<<"p.m-a="<<persion::m_a<<endl;
    system("pause");
    return 0;
}

