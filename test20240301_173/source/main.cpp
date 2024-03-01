#include <iostream>
#include <string>
#include <fstream>
using namespace std;
template<typename T>
bool Compare(T &a,T &b)
{
   if (a == b)
   {
      return true;
   }
   else
   {
      return false;
   }
}
class Persion
{
public:
   string m_name;
   int m_age;
   Persion(string a,int b)
   {
      m_age = b;
      m_name = a;
   }
};
//重载
template<> bool Compare(Persion &a,Persion &b)
{
   if (a.m_age==b.m_age && a.m_name==b.m_name)
   {
      return true;
   }
   else
   {
      return false;
   }
   
   
}
void test01()
{
   Persion p1("张三",20);
   Persion p2("张三",20);
   bool ret = Compare(p1,p2);
   if (ret)
   {
      cout<<"两者相等！"<<endl;
   }
   else
   {
      cout<<"不等"<<endl;
   }
}
int main()
{
   test01();
   system("pause");
   return 0;
}
