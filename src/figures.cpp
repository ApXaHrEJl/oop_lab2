#include "figures.h"
#include <iostream>
#include "gfx.h"
#include <math.h>

void tLine::set_top1(int x_value, int y_value)
{
    x1 = x_value;
    y1 = y_value;
}

void tLine::set_top2(int x_value, int y_value)
{
    x2 = x_value;
    y2 = y_value;
}

void tTriangle::set_top3(int x_value, int y_value)
{
    x3 = x_value;
    y3 = y_value;
}

void tQuadrangle::set_top3(int x_value, int y_value)
{
    x3 = x_value;
    y3 = y_value;
}

void tQuadrangle::set_top4(int x_value, int y_value)
{
    x4 = x_value;
    y4 = y_value;
}

void tLine::draw_figure()
{
    gfx_color(rand() % 256, rand() % 256, rand() % 256);
    set_top1(x-5, y-5);
    set_top2(x+5, y+5);
    gfx_line(x1, y1, x2, y2);
}

void tTriangle::draw_figure()
{
    gfx_color(rand() % 256, rand() % 256, rand() % 256);
    set_top1(x, y-5);
    set_top2(x-5, y+3);
    set_top3(x+5, y+3);
    gfx_line(x1, y1, x2, y2);
    gfx_line(x2, y2, x3, y3);
    gfx_line(x1, y1, x3, y3);
}

void tRectangle::draw_figure()
{
    gfx_color(rand() % 256, rand() % 256, rand() % 256);
    set_top1(x-5, y-5);
    set_top2(x-5, y+5);
    set_top3(x+5, y+5);
    set_top4(x+5, y-5);
    gfx_line(x1, y1, x2, y2);
    gfx_line(x2, y2, x3, y3);
    gfx_line(x3, y3, x4, y4);
    gfx_line(x4, y4, x1, y1);
}

void tRhombus::draw_figure()
{
    gfx_color(rand() % 256, rand() % 256, rand() % 256);
    set_top1(x, y-5);
    set_top2(x-5, y);
    set_top3(x, y+5);
    set_top4(x+5, y);
    gfx_line(x1, y1, x2, y2);
    gfx_line(x2, y2, x3, y3);
    gfx_line(x3, y3, x4, y4);
    gfx_line(x4, y4, x1, y1);
}


void tCircle::spawn_figure(int screen_x1, int screen_y1, int screen_width, int screen_height)
{
    x = screen_x1 + (rand() % screen_width);
    y = screen_y1 + (rand() % screen_height);
    set_dir(fmod(double(rand()),2 * M_PI));
    r1 = 5;
}

void tCircle::draw_figure()
{
    gfx_color(rand() % 256, rand() % 256, rand() % 256);
    double a = M_PI / 180;
    int j = 1;
    for(double i = a; i < 2 * M_PI; j++, i = a * j){
        gfx_point((cos(i) * r1) + x, (sin(i) * r1) + y);
    }
}

void tEllipse::spawn_figure(int screen_x1, int screen_y1, int screen_width, int screen_height)
{
    x = screen_x1 + (rand() % screen_width);
    y = screen_y1 + (rand() % screen_height);
    set_dir(fmod(double(rand()),2 * M_PI));
    r1 = 5;
    r2 = 3;
}

void tEllipse::draw_figure()
{
    gfx_color(rand() % 256, rand() % 256, rand() % 256);
    double a = M_PI / 180;
    int j = 1;
    for(double i = a; i < 2 * M_PI; j++, i = a * j){
        gfx_point((cos(i) * r1) + x, (sin(i) * r2) + y);
    }
}
