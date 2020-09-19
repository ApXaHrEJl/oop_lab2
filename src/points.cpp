#include <iostream>
#include "points.h"
#include <math.h>
#define SCREEN_XSIZE 640
#define SCREEN_YSIZE 480
#define SPEED 8

tPoint::tPoint()
{
    x = rand() % SCREEN_XSIZE;
    y = rand() % SCREEN_YSIZE;
    set_dir(fmod(double(rand()),2 * M_PI));
}

void tPoint::set_dir(double value)
{
    dir =  value;
}

int tPoint::get_x()
{
    return x;
}

int tPoint::get_y()
{
    return y;
}

void tPoint::set_x(int value)
{
    x = value;
}

void tPoint::set_y(int value)
{
    y = value;
}

void tPoint::lmove()
{
    set_x(x + (SPEED * cos(dir)));
    set_y(y + (SPEED * sin(dir)));
    check_reflection();
}

void tPoint::rmove()
{
    set_dir(fmod(double(rand()),2 * M_PI));
    set_x(x + (SPEED * (rand() % 3) * cos(dir)));
    set_y(y + (SPEED * (rand() % 3) * sin(dir)));
    check_reflection();
}

void tPoint::check_x1()
{
    if (x < 0)
    {
        set_x(0);
        if (dir < M_PI)
        {
            set_dir(M_PI - dir);
        } else {
            set_dir((2 * M_PI) - (dir - M_PI));
        } 
    }
}

void tPoint::check_x2()
{
    if (x > SCREEN_XSIZE)
    {
        set_x(SCREEN_XSIZE);
        if (dir < M_PI)
        {
            set_dir(M_PI - dir);
        } else {
            set_dir(M_PI + ((2 * M_PI) - dir));
        } 
    }
}

void tPoint::check_y1()
{
    if (y < 0)
    {
        set_y(0);
        if (dir <= M_PI * 0.5)
        {
            set_dir((2 * M_PI) - dir);
        } else {
            set_dir(M_PI + (M_PI - dir));
        }
    }
}

void tPoint::check_y2()
{
    if (y > SCREEN_YSIZE)
    {
        set_y(SCREEN_YSIZE);
        if (dir <= M_PI * 1.5)
        {
            set_dir(M_PI - (dir - M_PI));
        } else {
            set_dir((2 * M_PI) - dir);
        }
    }
}

void tPoint::check_xy1()
{
    if (x<0 && y<0)
    {
        set_x(0);
        set_y(0);
        set_dir(5.5);
    }
}

void tPoint::check_xy2()
{
    if (x>SCREEN_XSIZE && y>SCREEN_YSIZE)
    {
        set_x(SCREEN_XSIZE);
        set_y(SCREEN_YSIZE);
        set_dir(3.92);
    }
}

void tPoint::check_reflection()
{
    check_xy1();
    check_xy2();
    check_x1();
    check_x2();
    check_y1();
    check_y2();
}
