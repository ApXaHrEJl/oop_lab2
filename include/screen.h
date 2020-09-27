#ifndef H_SCREEN
#define H_SCREEN
#include "points.h"

void draw_lines(tLine* lines, char alarm);

void draw_triangles(tTriangle* triangles);

void draw_rectangles(tRectangle* rectangles);

void draw_rhombuses(tRhombus* rhombuses);

void draw_circles(tCircle* circles, char alarm);

void draw_ellipses(tEllipse* ellipses);

void screen_show(tLine* lines, tTriangle* triangles, tRectangle* rectangles, tRhombus* rhombuses, tCircle* circles, tEllipse* ellipses);

#endif
