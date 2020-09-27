#include <iostream>
#include <time.h>
#include "points.h"
#include "figures.h"
#include "gfx.h"
#define SCREEN_XSIZE 640
#define SCREEN_YSIZE 480
#define N 10

void draw_lines(tLine* lines, char alarm)
{
    for (int i = 0; i < N; i++)
    {
        switch (alarm) {
            case '1': lines[i].lmove(); break;
            case '2': lines[i].rmove(); break;
            case '3': lines[i].emove(); break;
        }
        lines[i].draw_figure();   
    } 
}

void draw_triangles(tTriangle* triangles, char alarm)
{
    for (int i = 0; i < N; i++)
    {
        switch (alarm) {
            case '1': triangles[i].lmove(); break;
            case '2': triangles[i].rmove(); break;
            case '3': triangles[i].emove(); break;
        }
        triangles[i].draw_figure();   
    } 
}

void draw_rectangles(tRectangle* rectangles, char alarm)
{
    for (int i = 0; i < N; i++)
    {
        switch (alarm) {
            case '1': rectangles[i].lmove(); break;
            case '2': rectangles[i].rmove(); break;
            case '3': rectangles[i].emove(); break;
        }
        rectangles[i].draw_figure();   
    } 
}

void draw_rhombuses(tRhombus* rhombuses, char alarm)
{
    for (int i = 0; i < N; i++)
    {
        switch (alarm) {
            case '1': rhombuses[i].lmove(); break;
            case '2': rhombuses[i].rmove(); break;
            case '3': rhombuses[i].emove(); break;
        }
        rhombuses[i].draw_figure();   
    } 
}

void draw_circles(tCircle* circles, char alarm)
{
    for (int i = 0; i < N; i++)
    {
        switch (alarm) {
            case '1': circles[i].lmove(); break;
            case '2': circles[i].rmove(); break;
            case '3': circles[i].emove(); break;
        }
        circles[i].draw_figure();   
    } 
}

void draw_ellipses(tEllipse* ellipses, char alarm)
{
    for (int i = 0; i < N; i++)
    {
        switch (alarm) {
            case '1': ellipses[i].lmove(); break;
            case '2': ellipses[i].rmove(); break;
            case '3': ellipses[i].emove(); break;
        }
        ellipses[i].draw_figure();   
    } 
}

void screen_show(tLine* lines, tTriangle* triangles,
                tRectangle* rectangles, 
                tRhombus* rhombuses, 
                tCircle* circles, 
                tEllipse* ellipses)
{
   struct timespec tw = {0, 70000000};
   struct timespec tr;
   nanosleep (&tw, &tr);
   gfx_open(SCREEN_XSIZE, SCREEN_YSIZE, "OOP Lab 3");    
   char alarm = 'a';
   do {
        gfx_clear();
        draw_lines(lines, alarm);
        draw_triangles(triangles, alarm);
        draw_rectangles(rectangles, alarm);
        draw_rhombuses(rhombuses, alarm);
        draw_circles(circles, alarm);
        draw_ellipses(ellipses, alarm);
        if (gfx_event_waiting() == 1) {
            alarm = gfx_wait();
        }
        nanosleep (&tw, &tr);
    } while  ( alarm !='4');
}
