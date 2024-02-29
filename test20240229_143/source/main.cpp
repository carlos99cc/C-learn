#include <iostream>
#include <string>
#include <fstream>

using namespace std;

//文本文件的写文件
void test01()
{
   ofstream ofs;//创建流对象
   ofs.open("TXT.txt",ios::out);
   ofs<<"姓名：张三"<<endl;
   ofs<<"年龄：20"<<endl;
   ofs.close();//关闭文件
}
//文本文件的读文件
void test02()
{
   ifstream ifs;
   ifs.open("TXT.txt",ios::in);
   if (!ifs.is_open())//这个是bool数据类型，返回真或者假
   {
      cout<<"文件打开失败！"<<endl;
   }
   //开始读数据（4种）
   //第一种
   // char buf[1024]={0};
   // while (ifs>>buf)
   // {
   //    cout<<buf<<endl;
   // }
   //第二种
   // char buf[1024]={0};
   // while (ifs.getline(buf,sizeof(buf)))//一行一行的读取并输到buf中，需要buf的字节大小用sizeof
   // {
   //    cout<<buf<<endl;
   // }
   //第三种
   string buf;
   while (getline(ifs,buf))
   {
      cout<<buf<<endl;
   }
   //第四种
   // char c;
   // while ((c = ifs.get())!= EOF)
   // {
   //    cout<<c;
   // }
   //关闭文件
   ifs.close();
}
int main()
{
   test02();
   system("pause");
   return 0;
}
