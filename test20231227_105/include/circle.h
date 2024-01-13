#ifndef _CIRCLE_H
#define _CIRCLE_H

#include<iostream>
#include<string>

using namespace std;

//点类
class point
{
private:
    /* data */
    int m_x;
    int m_y;
public:
    void setx(int x);//设置圆心的x坐标

    int getx();//获取圆心的y坐标

    void sety(int y);

    int gety();

};

//圆类
class circle
{
private:
    /* data */
    int m_r;
    point m_center;
public:
    //设置半径
    void setr(int r);
    //获取半径
    int getr();

    //设置圆心//
    void setcenter(point center);

    //获取圆心
    point getcenter();

};

#endif