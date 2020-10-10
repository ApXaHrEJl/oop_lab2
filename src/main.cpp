#include "points.h"
#include "figures.h"
#include "screen.h"
#define SCREEN_XSIZE 640
#define SCREEN_YSIZE 480
#define N 10

int main()
{    
    tLine line; 
    tTriangle triangle; 
    tRectangle rectangle; 
    tRhombus rhombus;
    tCircle circle;
    tEllipse ellipse;
    tPoint* figures[] = { &line, &triangle, &rectangle, &rhombus, &circle, &ellipse };
    for (int i = 0; i < 6; i++) {
        figures[i]->spawn_figure(0,0,SCREEN_XSIZE,SCREEN_YSIZE);
    }
    screen_show(figures);
    return 0;
}
