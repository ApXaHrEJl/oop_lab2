#include "points.h"
#include "screen.h"
#define N 100

int main()
{    
    tPoint* points = new tPoint[N];
    screen_show(points);
    return 0;
}
