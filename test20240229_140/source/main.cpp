#include <iostream>
#include <string>

using namespace std;

class Animal
{
public:
   //纯虚函数
  virtual void speak() = 0;
  Animal()
  {
   cout<<"父类的构造函数！"<<endl;
  }
//    virtual ~Animal()//虚析构函数解决父类指针释放子类对象
//   {
//    cout<<"父类的虚析构函数！"<<endl;
//   }
virtual ~Animal() = 0;//纯虚析构函数，类内声明
};
Animal:: ~Animal()//父类的纯虚析构的定义
{
    cout<<"父类的纯虚析构函数！"<<endl;
}
class Cat : public Animal
{
public:
   string *m_name;
   virtual void speak()
   {
      cout<<*m_name<<"小猫在说话"<<endl;
   }
   Cat(string name)
   {
      cout<<"子类的构造函数！"<<endl;
      m_name = new string(name);
   }
   ~Cat()
   {
       cout<<"子类的析构函数！"<<endl;
      if (m_name != NULL)
      {
         delete m_name;
         m_name = NULL;
      }
      
   }
};

void test01()
{
   Animal *a = new Cat("Tom");
   a->speak();
   //父类的指针在析构的时候，不会调用子类中析构函数，导致子类如果有堆区数据出现内存泄漏
   delete a;
}
int main()
{
   test01();
   system("pause");
   return 0;
}
