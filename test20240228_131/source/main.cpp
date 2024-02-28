#include <iostream>
#include <string>

using namespace std;
class Base
{
public:
   static int m_a;
   Base(/* args */);
   ~Base();
};
int Base::m_a;//类内声明，类外访问
Base::Base(/* args */)
{
   m_a=100;
}

Base::~Base()
{
}
class Son : public Base
{
public:
  static int m_a;
   Son(/* args */);
   ~Son();
};
int Son::m_a;//类内声明，类外访问
Son::Son(/* args */)
{
   m_a=200;
}

Son::~Son()
{
}
void test()
{
   cout<<"1.通过对象来访问："<<endl;
   Son s;
   cout<<"son 中 m_a = "<<s.m_a<<endl;
   //如果通过子类对象 访问到父类中的同名成员 ，需要加加作用域。
   cout<<"base 中 m_a = "<<s.Base::m_a<<endl;
   cout<<"2.通过类名来访问："<<endl;
   cout<<"son 中 m_a= "<<Son::m_a<<endl;
   //第一个：：代表通过类名来访问  第二个：：代表 访问父类的作用域下
   cout<<"base 中 m_a= "<<Son::Base::m_a<<endl;
}

int main()
{
   test();
   system("pause");
   return 0;
}