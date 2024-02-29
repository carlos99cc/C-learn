#include <iostream>
#include <string>
#include <fstream>

using namespace std;
//利用模板提供通用交换函数
template<typename T>
void swapData(T &a,T&b)
{
   T temp;
   temp = a;
   a = b;
   b = temp;
}
void test01()
{
   int a=50;
   int b=100;
   //利用模板实现交换
   //1.自动推导型
   //swapData(a,b);
   swapData<int>(a,b);
   //2.显示指定类型
   cout <<"a = "<<a<<endl;
   cout<< "b = "<<b<<endl;
}
int main()
{
   test01();
   system("pause");
   return 0;
}
