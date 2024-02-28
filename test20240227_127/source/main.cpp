#include <iostream>
#include <string>

using namespace std;

class Basepage
{

public:
   Basepage(/* args */);
   ~Basepage();
   void header()
   {
      cout<<"tou"<<endl;
   }
   void footer()
   {
      cout<<"wei"<<endl;
   }
};

Basepage::Basepage(/* args */)
{
}

Basepage::~Basepage()
{
}

class cpp : public Basepage
{

public:
   cpp(/* args */);
   ~cpp();
   void content()
   {
      cout<<"cpp"<<endl;
   }
};
cpp::cpp(/* args */)
{
}

cpp::~cpp()
{
}

class java : public Basepage
{
public:
   java(/* args */);
   ~java();
   void content()
   {
      cout<<"java"<<endl;
   }
};

java::java(/* args */)
{
}

java::~java()
{
}


void test()
{
cout<<"java如下："<<endl;
java ja;
ja.header();
ja.footer();
ja.content();
cout<<"----------------------"<<endl;

cout<<"CPP如下:"<<endl;
cpp c;
c.header();
c.footer();
c.content();
cout<<"----------------------"<<endl;

}

int main()
{
   test();
   system("pause");
   return 0;
}