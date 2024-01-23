#include <iostream>
#include <string>

using namespace std;

//定义一个类
class Persion
{
public:
string m_a;
int m_b;
public:
   Persion(string a,int b);
   ~Persion();
   bool operator==(Persion &p)
{
   if (this->m_a == p.m_a && this->m_b == p.m_b)
   {
      return true;
   }
   else
   {
      return false;
   }
   
}
};

Persion::Persion(string a,int b)
{
   m_a = a;
   m_b = b;
}

Persion::~Persion()
{
}

//通过全局函数重载<<
ostream& operator<<(ostream &cout,Persion &p2)//可以是实现cout的链式编程，一直输出
{
   cout << "m_a = "<<p2.m_a<<"   m_b = "<<p2.m_b;
   return cout;
}

void test()
{
   Persion p1("li",20);
   Persion p2("孙",20);
   cout<<p1<<"hello,world! "<<endl;
   cout<<p2<<"hello,world! "<<endl;
   if (p1 == p2)
   {
      cout<<"p1 和p2相等"<<endl;
   }
   else
   {
      cout<<"p1和p2不相等"<<endl;
   }
}

int main()
{
   test();
   system("pause");
   return 0;
}