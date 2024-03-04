#include <iostream>
#include <string>
#include<string>
#include<vector>
#include<algorithm>//标准算法头文件

using namespace std;

class Persion
{
public:
   string m_name;
   int m_age;
   Persion(string name,int age) 
   {
      this->m_age=age;
      this->m_name=name;
   }
};
void MyPrint(Persion val)
{
   cout<<val.m_name<<val.m_age<<endl;
}
//vector容器存放自定义数据类型
void test01()
{
   //创建一个vector容器，数组
   vector<Persion> v;
   Persion p1("aaa",10);
   Persion p2("bbb",20);
   Persion p3("ccc",30);
   Persion p4("ddd",40);
   //向容器中插入数据
   v.push_back(p1);
   v.push_back(p2);
   v.push_back(p3);
   v.push_back(p4);

   //第一种遍历方式
   for (vector<Persion>::iterator it = v.begin();it != v.end(); it++)
   {
      cout<<(*it).m_name<<(*it).m_age<<endl;//it可以用指针的方式调出数据
   }
   //第二种遍历方式  利用STL提供的遍历算法
   // for_each(v.begin(),v.end(),MyPrint);
}
int main()
{
   test01();
   system("pause");
   return 0;
}
