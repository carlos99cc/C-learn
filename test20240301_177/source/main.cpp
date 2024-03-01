#include <iostream>
#include <string>
#include <fstream>
using namespace std;

template<class T1,class T2>
class Persion     
{
public:
   T1 m_name;
   T2 m_age;
   Persion(T1 a,T2 b)
   {
      m_name = a;
      m_age = b;
   }
   void Print()
   {
      cout<<"姓名："<<m_name<<" 年龄："<<m_age<<endl;
   }
};
//1.指定传入类型
void PrintPersion1(Persion<string,int> &p)
{
   p.Print();
}
void test01()
{
   Persion<string,int> p1("孙悟空",200);
   PrintPersion1(p1);
}
//2.参数模板化
template<typename T1,typename T2>
void PrintPersion2(Persion<T1,T2> &p)
{
   p.Print();
   cout<<"T1 的类型为："<<typeid(T1).name()<<endl;//查询模板中具体的虚拟类型
   cout<<"T2 的类型为："<<typeid(T2).name()<<endl;
}
void test02()
{
   Persion<string,int> p2("猪八戒",300);
   PrintPersion2(p2);
}
//3.整个类模板化
template<typename T>
void PrintPersion3(T &p)
{
   p.Print();
}
void test03()
{
   Persion<string,int> p3("沙和尚",400);
   PrintPersion3(p3);
}
int main()
{
   test01();
   test02();
   test03();
   system("pause");
   return 0;
}
