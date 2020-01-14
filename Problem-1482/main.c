#include <malloc.h>
#include <math.h>
#include <stdio.h>

/*
*   Declaration...
*/
struct Point;
struct Point *createPoint(double, double);
void freePoint(struct Point *);
double getDistance(struct Point *, struct Point *);
double getX(struct Point *);
double getY(struct Point *);

struct Point
{
    double x;
    double y;
};

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

int main()
{
    struct Point *p1 = createPoint(3, 4);
    struct Point *p2 = createPoint(1, 2);

    double distance = getDistance(p1, p2);

    printf("Point P1(%3.1f, %3.1f).\n", getX(p1), getY(p1));
    printf("Point P2(%3.1f, %3.1f).\n", getX(p2), getY(p2));

    freePoint(p1);
    freePoint(p2);

    printf("Distance: %3.4f\n", distance);

    return 0;
}