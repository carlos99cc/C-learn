#include <iostream>
#include <string>

using namespace std;

//定义一个类
class Persion
{
friend void test();
friend ostream& operator<<(ostream &cout,Persion &p2);
private:
int *m_b;
public:
   Persion(int a);
   ~Persion();
   Persion& operator=(Persion &p);
};

Persion::Persion(int a)
{
   m_b = new int(a);

}
Persion::~Persion()
{
   if (m_b != NULL)
   {
      delete m_b;
      m_b = NULL;
   }
   
}

//通过全局函数重载<<
ostream& operator<<(ostream &cout,Persion &p2)//可以是实现cout的链式编程，一直输出
{
   cout <<"   m_b = "<<p2.m_b;
   return cout;
}

Persion& Persion::operator=(Persion &p)
{
//    //编译器提供的是浅拷贝
//    //m_b = p.m_b;
//    //应该先判断是否有属性在堆区，如果有应先释放赶紧，然后再深拷贝
   if (m_b != NULL)
   {
      delete m_b;
      m_b = NULL;
   }
   m_b = new int(*p.m_b);
   return *this;
}

void test()
{
   Persion p1(18);
   cout<<"m_b =   "<<*p1.m_b<<endl;
   Persion p2(20);
   cout<<"m_b =   "<<*p2.m_b<<endl;
   p2 = p1;
   cout<<"m_b =   "<<*p2.m_b<<endl;
}

int main()
{
   test();
   system("pause");
   return 0;
}