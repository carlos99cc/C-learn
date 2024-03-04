#include <iostream>
#include <string>
#include <fstream>
using namespace std;
//提前告诉编译器下面那个Persion类
template<class T1, class T2>
class Persion;
//类外实现要将友元函数写在前面
template<class T1,class T2>
void Print(Persion<T1,T2> p)
{
   cout<<"姓名："<<p.m_name<<"  年龄："<<p.m_age<<endl;
}
template<class T1,class T2>
class Persion
{
private:
   T1 m_name;
   T2 m_age;
public:
   Persion(T1 name,T2 age);
   //1.全局函数 类内实现
//    friend void Print(Persion<T1,T2> p)
//    {
//       cout<<"姓名："<<p.m_name<<"  年龄："<<p.m_age<<endl;
//    }
//类外实现
      friend void Print<>(Persion<T1,T2> p);
};
template<class T1,class T2>
Persion<T1,T2>::Persion(T1 name,T2 age)
{
   m_age = age;
   m_name = name;
}
void test01()
{
   Persion<string,int> p("王五",55);
   Print(p);
}

int main()
{
   test01();
   system("pause");
   return 0;
}
