#include <iostream>
#include <string>
#include <fstream>
using namespace std;
//1.普通函数和函数模板都可以调用，则优先调用普通函数
//2.可以通过空模板参数列表来强制调用函数模板
//3.函数模板可以发生重载
//4.若函数模板可以产生更好的匹配，则优先调用函数模板
void Print(int a, int b)
{
   cout<<"调用的普通函数"<<endl;
}
template<typename T>
void Print(T a, T b)
{
   cout<<"调用的函数模板"<<endl;
}
template<typename T>
void Print(T a, T b, T c)
{
   cout<<"调用重载的函数模板"<<endl;
}
void test01()
{
   int a=10;
   int b = 20;
   // Print(a,b);
   //通过空模板参数列表强制调用函数模板
   Print<>(a,b);
   Print(a,b,100);
   //第四点，调用模板就不用发生隐式类型转换
   char c = 'a';
   char d = 'd';
   Print(c,d);
}
int main()
{
   test01();
   system("pause");
   return 0;
}
