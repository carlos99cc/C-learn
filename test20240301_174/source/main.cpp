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
};

void test01()
{
   Persion<string,int> p1("tyu",20);
   cout<<p1.m_age<<p1.m_name<<endl;
}
int main()
{
   test01();
   system("pause");
   return 0;
}
