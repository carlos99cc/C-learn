#include <iostream>
#include <string>

using namespace std;

class Base
{
public:
   //只要有一个纯虚函数，这个类就被称为抽象类
   //抽象类特点：
   //1.无法实例化对象
   //2.抽象类的子类 必须重写父类的纯虚函数，否则也是抽象类
   virtual void func() = 0;
};
class Son : public Base
{
   public:
   virtual void func()
   {
      cout<<"dsjfalk"<<endl;
   }
};
void test01()
{
   //Base b;//抽象类无法实例化对象，报错
   Base *s = new Son;
   s->func();

}
int main()
{
   test01();
   system("pause");
   return 0;
}
