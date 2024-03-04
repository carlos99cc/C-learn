#pragma once
#include<iostream>
using namespace std;
// 要求：
// 1. 对内置数据类类型以及自定义数据类型的数据进行存储
// 2. 数组中数据储存在堆区
// 3. 构造函数可以传入数组容量
// 4. 提供拷贝构造和operator=防止浅拷贝
// 5. 提供尾插法和尾减法对数组进行增加和删减
// 6. 通过下标访问数组中元素
// 7. 获取数组中当前元素个数和容量
//通用数组类
template<class T>
class MyArray
{
    private:
    int m_Capacity;//数组类的容量
    int m_Size;//数组类的大小
    T * pAddress;//数组的地址准备开辟到堆区
    public:
    //有参构造 参数：容量
    MyArray(int capacity)
    {
        cout<<"MyArray的有参构造"<<endl;
        this->m_Capacity=capacity;
        this->m_Size=0;
        this->pAddress = new T[this->m_Capacity];
    }
    //拷贝构造函数，防止浅拷贝问题
    MyArray(const MyArray &p)
    {
        cout<<"MyArray的拷贝构造"<<endl;
        this->m_Capacity=p.m_Capacity;
        this->m_Size=p.m_Size;
        //深拷贝
        this->pAddress = new T[p.m_Capacity];//在堆区开辟了空间
        //将数组中的数据拷贝过来
        for (int i = 0; i < this->m_Size; i++)
        {
            this->pAddress[i] = p.pAddress[i];
        }
        
    }
    //operator=的重载
    MyArray& operator=(const MyArray& p)
    {
        cout<<"MyArray的operator=重载"<<endl;
        //先判断原来的堆区是否有数据，若有先释放
        if (this->pAddress !=NULL)
        {
            delete[] this->pAddress;
            this->pAddress = NULL;
            this->m_Capacity=0;
            this->m_Size=0;
        }
        //深拷贝操作
        this->m_Capacity=p.m_Capacity;
        this->m_Size=p.m_Size;
        this->pAddress=new T[p.m_Capacity];
        //拷贝数据
        for (int i = 0; i < this->m_Size; i++)
        {
            this->pAddress[i] = p.pAddress[i];
        }
        return *this;
    }
    //尾插法
    void PushBack(const T &val)
    {
        //先判断数组的容量是否等于大小
        if (this->m_Capacity == this->m_Size)       
        {
            return;
        }
        this->pAddress[this->m_Size]=val;
        this->m_Size++;//更新数组的大小
        
    }
    //尾删法
    void PopBcak(const T &val)
    {
        if (this->pAddress[this->m_Size-1] !=val)
        {
            cout<<"输入错误！"<<endl;
            return;
        }
        delete this->pAddress[this->m_Size-1];
        this->pAddress[this->m_Size-1]=NULL;
        this->m_Size--;
        
    }
    //重载数组的【】,通过下标返回数组中的元素
    T& operator[](int index)
    {
        return this->pAddress[index];
    }
    //返回数组容量
    int GetCapacity()
    {
        return this->m_Capacity;
    }
    //返回数组大小
    int GetSize()
    {
        return this->m_Size;
    }
    //析构函数释放
    ~MyArray()
    {
        cout<<"MyArray的析构"<<endl;
        if (this->pAddress!=NULL)
        {
            delete[] this->pAddress;//数组的堆区数据释放
            this->pAddress=NULL;
        }
        
    }
};