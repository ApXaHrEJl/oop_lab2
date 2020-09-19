#include "points.h"
#include <iostream>
#include "gfx.h"
#include <time.h>
#define SCREEN_XSIZE 640
#define SCREEN_YSIZE 480
#define N 100

void draw_point(int point_x, int point_y)
{
    gfx_color(rand() % 256, rand() % 256, rand() % 256);
    gfx_line(point_x-2,point_y-2,point_x+2,point_y+2);
    gfx_line(point_x+2+1,point_y-2-1,point_x-2,point_y+2);    
}

void screen_show(tPoint* points)
{
   struct timespec tw = {0,70000000};
   struct timespec tr;
   nanosleep (&tw, &tr);
   gfx_open(SCREEN_XSIZE, SCREEN_YSIZE, "OOP Lab 2");    
   char alarm = 'a';
   do {
        gfx_clear();
        for (int i = 0; i < N; i++)
        {
            if (alarm == '1')
            {
                 points[i].lmove();      
            }    
            if (alarm == '2')
            {      
                 points[i].rmove();      
            }    
            draw_point(points[i].get_x(),points[i].get_y());   
        }  
        if (gfx_event_waiting() == 1 ) {
            alarm = gfx_wait();
        }
        nanosleep (&tw, &tr);
    } while  ( alarm !='3');
}
