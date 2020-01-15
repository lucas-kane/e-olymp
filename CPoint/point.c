#include "point.h"

#include <malloc.h>
#include <math.h>

struct Point *createPoint(double x, double y)
{
    struct Point *point = (struct Point *)malloc(sizeof(struct Point));

    if (!point)
        return NULL;

    point->x = x;
    point->y = y;

    return point;
}

void freePoint(struct Point *p)
{
    if (p)
        free(p);
}

double getDistance(struct Point *p1, struct Point *p2)
{
    double dx = p1->x - p2->x;
    double dy = p1->y - p2->y;

    return sqrt(dx * dx + dy * dy);
}

double getX(struct Point *p) { return p->x; }
double getY(struct Point *p) { return p->y; }
