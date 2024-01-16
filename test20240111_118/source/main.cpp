#include<iostream>
#include<string>

using  namespace std;

class Building;
class Godgay
{
public:
   Building *b; //另一个类的对象作为本类的成员，这里是对象的指针
public:
   Godgay(/* args */);
   ~Godgay();
   void visit(); //这个visit函数可以访问另一个类的私有成员
   void visit2(); //这个visit2不可以访问另一个类的私有成员
};

class Building 
{
friend void Godgay::visit();
private:
   string m_bedRoom;
public:
   string m_sittingRoom;
public:
 Building (/* args */);
 ~Building ();
};
 Building::Building (/* args */)
{
   m_sittingRoom = "客厅";
   m_bedRoom = "卧室";
}
 Building :: ~Building ()
{
}

//都用类内声明，类外定义的方式
Godgay::Godgay(/* args */)
{
   b = new Building;//在堆区开辟一个数据，将其指针赋给b
}

Godgay::~Godgay()
{
   if (b!= NULL) //对象使用完毕后，在析构函数里进行内存数据的释放
   {
      /* code */
      delete b;
      b = NULL;

   }
   
}

void Godgay::visit()
{
   cout<<"visit 正在访问 ："<<b->m_sittingRoom<<endl;
   cout<<"visit 正在访问 ："<<b->m_bedRoom<<endl;//加入了友元，可以访问其他类的私有成员
}

void Godgay::visit2()
{
   cout<<"visit 正在访问 ："<<b->m_sittingRoom<<endl;
   //cout<<"visit 正在访问 ："<<b->m_bedRoom<<endl; ////没有加入了友元，不可以访问其他类的私有成员
}

void test()
{
   Godgay gg;
   gg.visit();
   gg.visit2();
}
int main()
{
   test();
    system("pause");
    return 0;
}

