#include <iostream>
#include <string>
#include <fstream>

using namespace std;
class Persion
{
public:
   char m_name[64];
   int m_age;
};
//二进制文件的写文件
void test01()
{
   ofstream ofs;//创建流对象
   ofs.open("TXT1.txt",ios::out | ios::binary);
   Persion p = {"李四" , 20};
   ofs.write((const char*)&p,sizeof(p));
   ofs.close();//关闭文件
}
//二进制文件的读文件
void test02()
{
   ifstream ifs;
   ifs.open("TXT1.txt",ios::in | ios::binary);
   if (!ifs.is_open())//这个是bool数据类型，返回真或者假
   {
      cout<<"文件打开失败！"<<endl;
   }
   Persion p;
   ifs.read((char *)&p,sizeof(p));
   cout<<"姓名 ："<<p.m_name<<"  年龄 ："<<p.m_age<<endl;
   ifs.close();
}
int main()
{
   test02();
   system("pause");
   return 0;
}
