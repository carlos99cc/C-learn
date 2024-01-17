#include <iostream>
#include <string>

using namespace std;
//想实现的功能：
//通过全局函数来实现运算符<<的重载

//定义一个类
class Persion
{
public:
int m_a;
int m_b;
public:
   Persion(int a,int b);
   ~Persion();
};

Persion::Persion(int a,int b)
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
   Persion p1(10,20);
   cout<<p1<<"hello,world!"<<endl;
}

int main()
{
   test();
   system("pause");
   return 0;
}