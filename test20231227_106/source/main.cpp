#include<iostream>
#include<string>
#include"circle.h"
using namespace std;

class persion
{
private:
    int m_age;
public:
 persion()
 {
    cout<<"persion的无参构造函数"<<endl;
 }
  persion(int age)
 {
    m_age = age;
    cout<<"persion的有参构造函数"<<endl;
 }
  persion(const persion &p)
 {
    m_age = p.m_age;
    cout<<"persion的拷贝构造函数"<<endl;
 }
 ~persion()
 {
    cout<<"persion的析构函数"<<endl;
 }
};
void test()
{
    persion p1(20);
    persion p2(p1);
}
//2.值传递的方式给参数传值
void dowork(persion p)//这个p与下面的p不是一个东西，函数值传递，会临时拷贝其数据，相当于一个拷贝构造函数
{
    cout<<(long long)&p<<endl;
}
void test01()
{
    persion p1;
    cout<<(long long)&p1<<endl;
    dowork(p1);
}
//3. 值方式返回局部对象
persion dowork2()
{
    persion p1;
    cout<<(long long)&p1<<endl;
    return p1;

}
void test02()
{
    persion p = dowork2();
    cout<<(long long)&p<<endl;
    
}
int main()
{
    test02();
    system("pause");
    return 0;
}

