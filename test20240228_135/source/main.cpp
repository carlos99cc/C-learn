#include <iostream>
#include <string>

using namespace std;
class Animal
{
public:
virtual void speak()
{
   cout<<"动物在说话！"<<endl;
}
};

class Cat : public Animal
{
public:
   void speak()
   {
      cout<<"小猫在说话！"<<endl;
   }
};
void dospeak(Animal &animal)
{
   animal.speak();
}

void test()
{
   Cat cat;
   dospeak(cat);
}

int main()
{
   test();
   system("pause");
   return 0;
}