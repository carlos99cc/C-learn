#include<iostream>
#include<string>

using namespace std;
class Building;
class GoodGay
{
public:
   Building *b;
   /* data */
   GoodGay(/* args */);
   ~GoodGay();
   void visit();
};
class Building
{
friend class GoodGay;
public:
string m_sittingroom;
private:
string m_bedroom;
public:

   Building()//类的构造函数
   {
      m_sittingroom="客厅";
      m_bedroom="卧室";
   }
   ~Building()
   {

   }

};

//函数也可以类外写
GoodGay::GoodGay(/* args */)
{
   //创建建筑物的对象
   b = new Building;//坐边的是Buuliding创建的对象指针，右边new的是一个Buliding类大小的堆内存，这个就是拷贝构造的隐式转换法
}

GoodGay::~GoodGay()
{
   if (b != NULL)
   {
      /* code */
      delete b;
      b = NULL;
   }
   
}
void GoodGay::visit()
{
   cout<<"老朋友全局函数 正在访问 ："<<b->m_sittingroom<<endl;
   cout<<"老朋友全局函数 正在访问 ："<<b->m_bedroom<<endl;
}
void test()
{
   GoodGay gg;
   gg.visit();
}

int main()
{
   test();
    system("pause");
    return 0;
}

