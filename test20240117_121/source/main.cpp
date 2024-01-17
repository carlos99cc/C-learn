#include <iostream>
#include <string>

using namespace std;
//想实现的功能：
//1.通过成员函数来实现运算符+的重载
//2.通过全局函数来实现运算符+的重载

//定义一个类
class Persion
{
public:
int m_a;
int m_b;
public:
   Persion(const Persion &p);
   Persion();
   ~Persion();
  // Persion operator+ (Persion &p);//通过成员函数来实现运算符+的重载
};

Persion::Persion(const Persion &p)//拷贝构造函数的定义
{
   m_a = p.m_a;
   m_b = p.m_b;
}

Persion::Persion()
{

}

Persion::~Persion()
{
}

// Persion Persion::operator+ (Persion &p)
// {
//    Persion temp;
//    temp.m_a = this->m_a + p.m_a;
//    temp.m_b = this->m_b + p.m_b;
//    return temp;
// }

//通过全局函数重载+
Persion operator+(Persion &p1,Persion &p2)
{
      Persion temp;
      temp.m_a = p1.m_a + p2.m_a;
      temp.m_b = p1.m_b + p2.m_b;
      return temp;
}

Persion operator+(Persion &p1,int num)//运算符+的重载
{
      Persion temp;
      temp.m_a = p1.m_a + num;
      temp.m_b = p1.m_b + num;
      return temp;
}

void test()
{
   Persion p1;
   p1.m_a = 10;
   p1.m_b = 20;
   Persion p2(p1);
   cout<<"p1.m_a = "<<p1.m_a<<endl;
   cout<<"p1.m_b = "<<p1.m_b<<endl;
   cout<<"p2.m_a = "<<p2.m_a<<endl;
   cout<<"p2.m_b = "<<p2.m_b<<endl;
   Persion p3 = p1+p2;//等价于 Persion p3 = p1.operator+(p2)//Persion p3 = operator+(p1,p2)
   cout<<"p3.m_a = "<<p3.m_a<<endl;
   cout<<"p3.m_b = "<<p3.m_b<<endl;
   Persion p4 = p1+100;//等价于 Persion p3 = p1.operator+(p2)//Persion p3 = operator+(p1,p2)
   cout<<"p3.m_a = "<<p4.m_a<<endl;
   cout<<"p3.m_b = "<<p4.m_b<<endl;
}

int main()
{
   test();
   system("pause");
   return 0;
}