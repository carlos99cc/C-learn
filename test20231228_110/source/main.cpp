#include<iostream>
#include<string>
#include"circle.h"
using namespace std;

class persion
{
    
public:
 int m_age;
 int *m_height;
 persion()
 {
    cout<<"persion的无参构造函数"<<endl;
 }
  persion(int age,int height)
 {
    m_age = age;
    m_height = new int(height);
    cout<<"persion的有参构造函数"<<endl;
 }
  persion(const persion &p)
 {
    m_age = p.m_age;
    //m_height = p.m_height;//编译器默认会生成上面两行代码
    //深拷贝操作
    m_height = new int(*p.m_height);

    cout<<"persion的拷贝构造函数"<<endl;
 }
 ~persion()
 {
   //析构函数的作用：将堆区开辟的数据做释放操作
    cout<<"persion的析构函数"<<endl;
    if (m_height != NULL)
    {
         delete m_height;
         m_height = NULL;//注意：这里m_height就是一个指针变量
    }
    
 }
};   
void test()
{
    persion p1(18,125);
    cout<<"pl的年龄为"<<p1.m_age<<endl;
    persion p2(p1);
    cout<<"p2的年龄为"<<p1.m_age<<endl;
    
}

int main()
{
    test();
    system("pause");
    return 0;
}

