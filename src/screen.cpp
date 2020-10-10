#include <iostream>
#include <time.h>
#include "points.h"
#include "figures.h"
#include "gfx.h"
#define SCREEN_XSIZE 640
#define SCREEN_YSIZE 480
#define N 10

void draw_figures(tPoint** figures, char alarm)
{
    for (int i = 0; i < 6; i++)
    {
        switch (alarm) {
            case '1': figures[i]->lmove(); break;
            case '2': figures[i]->rmove(); break;
            case '3': figures[i]->emove(); break;
        }
        figures[i]->draw_figure();   
    } 
}

void screen_show(tPoint** figures)
{
   struct timespec tw = {0, 70000000};
   struct timespec tr;
   nanosleep (&tw, &tr);
   gfx_open(SCREEN_XSIZE, SCREEN_YSIZE, "OOP Lab 3");    
   char alarm = 'a';
   do {
        gfx_clear();
        draw_figures(figures, alarm);
        if (gfx_event_waiting() == 1) {
            alarm = gfx_wait();
        }
        nanosleep (&tw, &tr);
    } while  ( alarm !='4');
}
