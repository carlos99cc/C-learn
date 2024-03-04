#include <iostream>
#include <string>
#include<string>
#include"MyArray.hpp"
using namespace std;

class Persion
{

public:
   string m_name;
   int age;
   Persion(string name,int age) 
   {
      this->m_name=name;
      this->age=age;
   }
   Persion(){}

};
void PrintInt(MyArray<int>&p)
{
   for (int i = 0; i < p.GetSize(); i++)
   {
      cout<<p[i]<<endl;
   }
   
}
void PrintPersion(MyArray<Persion> &p)
{
   for (int i = 0; i < p.GetSize(); i++)
   {
      cout<<"姓名："<<p[i].m_name<<"   年龄："<<p[i].age<<endl;
   }
   
}
void test01()
{
   MyArray<int> arr1(5);
   MyArray<int> arr2(arr1);
   MyArray<int> arr3(500);
   arr1=arr3;
}
void test02()
{
   MyArray<int> arr1(10);
   for (int i = 0; i < 5; i++)
   {
      arr1.PushBack(i);
   }
   cout<<"arr1的打印输出为："<<endl;
   PrintInt(arr1);
   cout<<"容量："<<arr1.GetCapacity()<<endl;
   cout<<"大小："<<arr1.GetSize()<<endl;
}
void test03()
{
   MyArray<Persion>arr(10);
   Persion p1("孙悟空",100);
   Persion p2("猪八戒",200);
   Persion p3("沙和尚",300);
   Persion p4("唐僧",400);
   Persion p5("白龙马",500);
   //插入数据
   arr.PushBack(p1);
   arr.PushBack(p2);
   arr.PushBack(p3);
   arr.PushBack(p4);
   arr.PushBack(p5);
   cout<<"arr的打印输出为："<<endl;
   PrintPersion(arr);
   cout<<"容量："<<arr.GetCapacity()<<endl;
   cout<<"大小："<<arr.GetSize()<<endl;
}
int main()
{
   test03();
   system("pause");
   return 0;
}
