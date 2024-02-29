#include <iostream>
#include <string>
#include <fstream>
//将整型 字符型的数据进行排序
//规则：从小到大
using namespace std;
//利用模板提供通用交换函数
template<typename T>
void SwapData(T &a,T &b)
{
   T temp;
   temp = a;
   a = b;
   b = temp;
}

template<typename T>
void SortData(T arr[],int len)
{
   for (int i = 0; i < len; i++)
   {     
      int min =i;
      for (int j = i+1; j < len; j++)
      {
         //认定的最小值，比我们遍历出来的数值要大，说明j的下标才是真正的最小值
         if (arr[min]>arr[j])
         {
            min = j;
         }
         
      }
      if (min != i)
      {
         //交换min和i的元素
         SwapData(arr[min],arr[i]);
      }
      
   }
   
}
//提供打印数组模板
template<typename T>
void PrintArr(T arr[],int len)
{
   for (int i = 0; i < len; i++)
   {
      cout<<arr[i]<<"  ";
   }
   cout<<endl;
}

void test01()
{
   //测试char数组类型
   char CharArr[]="qwertyuieop";
   int num = sizeof(CharArr)/sizeof(char);
   SortData(CharArr,num);
   PrintArr(CharArr,num);
}
void test02()
{
   //测试char数组类型
   int IntArr[]={2,8,9,7,6,4,3,0};
   int num = sizeof(IntArr)/sizeof(int);
   SortData(IntArr,num);
   PrintArr(IntArr,num);
}

int main()
{
   test02();
   system("pause");
   return 0;
}
