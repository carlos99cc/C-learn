#include <iostream>
#include <string>
#include<string>
#include<vector>
#include<algorithm>//标准算法头文件

using namespace std;

void PrintVector(vector<int>&val)
{
   for (vector<int>::iterator it = val.begin() ; it < val.end(); it++)
   {
      cout<<(*it)<<"  ";
   }
   cout<<endl;
}
void test01()
{
   vector<int>v1;
   for (int i = 0; i < 10; i++)
   {
      v1.push_back(i);
   }
   PrintVector(v1);
   //赋值操作 operator=
   vector<int>v2;
   v2=v1;
   PrintVector(v2);
   //assign
   vector<int>v3;
   v3.assign(v1.begin(),v1.end());
   PrintVector(v3);
   //n个enem方式赋值
   vector<int>v4;
   v4.assign(10,1000);
   PrintVector(v4);
   
}
int main()
{
   test01();
   system("pause");
   return 0;
}
