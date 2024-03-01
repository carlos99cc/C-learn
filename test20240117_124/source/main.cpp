#include <iostream>
#include <string>
//非常灵活，没有固定写法
using namespace std;
class MyAdd
{
public:
   int operator()(int num1,int num2)
   {
      return num1+num2;
   }
};

void test()
{
   MyAdd p1;
   int ret = p1(200,400);//非常形似函数回调，因此也叫仿函数
   cout<<"ret = "<<ret<<endl;
   //匿名函数对象
   cout<<MyAdd()(200,700)<<endl;//用完就被释放
}

int main()
{
   test();
   system("pause");
   return 0;
}