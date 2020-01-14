#include <math.h>
#include <stdio.h>
#include <stdlib.h>

struct Point;
struct Point *createPoint(double, double);
double getDistance(struct Point *, struct Point *);

struct Point
{
    double x;
    double y;
};

struct Point *createPoint(double x, double y)
{
    struct Point *point = malloc(sizeof(struct Point));

    point->x = x;
    point->y = y;

    return point;
}

double getDistance(struct Point *p1, struct Point *p2)
{
    double dx = p1->x - p2->x;
    double dy = p1->y - p2->y;

    return sqrt(dx * dx + dy * dy);
}

int main()
{
    struct Point *p1 = createPoint(3, 4);
    struct Point *p2 = createPoint(1, 2);

    p1->x = 1;
    p1->y = 1;
    p2->x = 2;
    p2->y = 2;

    double distance = getDistance(p1, p2);

    printf("%f\n", distance);

    return 0;
}