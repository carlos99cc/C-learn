#include<iostream>
#include<string>
#include"circle.h"
using namespace std;

// //点类
// class point
// {
// private:
//     /* data */
//     int m_x;
//     int m_y;
// public:
//     void setx(int x)//设置圆心的x坐标
//     {
//         m_x = x;
//     }
//     int getx()//获取圆心的y坐标
//     {
//         return m_x;
//     }
//     void sety(int y)
//     {
//         m_y = y;
//     }
//     int gety()
//     {
//         return m_y;
//     }
// };

// //圆类
// class circle
// {
// private:
//     /* data */
//     int m_r;
//     point m_center;
// public:
//     //设置半径
//     void setr(int r)
//     {
//         m_r = r;
//     }

//     //获取半径
//     int getr()
//     {
//         return m_r;
//     }
//     //设置圆心//
//     void setcenter(point center)
//     {
//         m_center = center;
//     }
//     //获取圆心
//     point getcenter()
//     {
//         return m_center;
//     }
// };



void isincircle(circle &c,point &p)
{
    //计算两点之间距离的平方
    int distance = 
    (c.getcenter().getx()-p.getx())*(c.getcenter().getx()-p.getx())+(c.getcenter().gety()-p.gety())*(c.getcenter().gety()-p.gety());
    int rdistance = (c.getr())*(c.getr());
    //判断点和圆的关系
    if (distance == rdistance)
    {
        /* code */
        cout<<"点在圆上"<<endl;
    }
    else if (distance < rdistance)
    {
        /* code */
        cout<<"点在圆内"<<endl;
    }
    else
    {
        cout<<"点在圆外"<<endl;
    }


}


int main()
{
    //创建圆
    circle c;
    c.setr(10);
    point center;
    center.setx(0);
    center.sety(0);
    c.setcenter(center);
    //创建点
    point p;
    p.setx(1);
    p.sety(10);
    //判断关系
    isincircle(c,p);

    system("pause");
    return 0;
}

