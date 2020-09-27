#ifndef H_FIGURES
#define H_FIGURES
#include "points.h"

class tLine: public tPoint{
protected:
    int x1, x2;
    int y1, y2;
public:
    void set_top1(int x_value, int y_value);
    void set_top2(int x_value, int y_value);
    void draw_figure();
};

class tTriangle : public tLine
{
private:
    int x3;
    int y3;
public:
    void set_top3(int x_value, int y_value);
    void draw_figure();
};

class tQuadrangle : public tLine 
{
protected:
    int x3, x4;
    int y3, y4;
public:
    void set_top3(int x_value, int y_value);
    void set_top4(int x_value, int y_value);
    void draw_figure();
};

class tRectangle : public tQuadrangle 
{
public:
    void draw_figure();
};

class tRhombus : public tQuadrangle 
{
public:
    void draw_figure();
};

class tCircle : public tPoint 
{
protected:
    int r1;
public:
    void spawn_figure(int screen_x1, int screen_y1, int screen_width, int screen_height);
    void draw_figure();
};

class tEllipse : public tCircle 
{
private:
    int r2;
public:
    void spawn_figure(int screen_x1, int screen_y1, int screen_width, int screen_height);
    void draw_figure();
};

#endif
