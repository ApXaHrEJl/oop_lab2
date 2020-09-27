#include "points.h"
#include "figures.h"
#include "screen.h"
#define SCREEN_XSIZE 640
#define SCREEN_YSIZE 480
#define N 10

int main()
{    
    tLine* lines = new tLine[N];
    for (int i = 0; i < N; i++) {
        lines[i].spawn_figure(0,0,SCREEN_XSIZE,SCREEN_YSIZE);
    }
    tTriangle* triangles = new tTriangle[N];
    for (int i = 0; i < N; i++) {
        triangles[i].spawn_figure(0,0,SCREEN_XSIZE,SCREEN_YSIZE);
    }
    tRectangle* rectangles = new tRectangle[N];
    for (int i = 0; i < N; i++) {
        rectangles[i].spawn_figure(0,0,SCREEN_XSIZE,SCREEN_YSIZE);
    }
    tRhombus* rhombuses = new tRhombus[N];
    for (int i = 0; i < N; i++) {
        rhombuses[i].spawn_figure(0,0,SCREEN_XSIZE,SCREEN_YSIZE);
    }
    tCircle* circles = new tCircle[N];
    for (int i = 0; i < N; i++) {
        circles[i].spawn_figure(0,0,SCREEN_XSIZE,SCREEN_YSIZE);
    }
    tEllipse* ellipses = new tEllipse[N];
    for (int i = 0; i < N; i++) {
        ellipses[i].spawn_figure(0,0,SCREEN_XSIZE,SCREEN_YSIZE);
    }
    screen_show(lines, triangles, rectangles, rhombuses, circles, ellipses);
    return 0;
}
