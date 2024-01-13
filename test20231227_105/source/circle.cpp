#include"circle.h"

    void point::setx(int x)//设置圆心的x坐标
    {
        m_x = x;
    }
    int point::getx()//获取圆心的y坐标
    {
        return m_x;
    }
    void point::sety(int y)
    {
        m_y = y;
    }
    int point::gety()
    {
        return m_y;
    }
    void circle::setr(int r)
    {
        m_r = r;
    }

    //获取半径
    int circle::getr()
    {
        return m_r;
    }
    //设置圆心//
    void circle::setcenter(point center)
    {
        m_center = center;
    }
    //获取圆心
    point circle::getcenter()
    {
        return m_center;
    }