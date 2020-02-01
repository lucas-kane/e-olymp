#include <malloc.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

struct Point
{
    double x, y, z;
};

struct Point *createPoint(double, double, double);
double getDistance(const struct Point *, const struct Point *);
void freePoint(struct Point *);

int main()
{
    double a, b, c;

    struct Point *muscidae = createPoint(0, 0, 0);
    struct Point *spider = createPoint(0, 0, 0);

    scanf("%lf %lf %lf", &a, &b, &c);
    scanf("%lf %lf", &muscidae->x, &muscidae->y);
    scanf("%lf %lf %lf", &spider->x, &spider->y, &spider->z);

    if (spider->z == 0)
        printf("%.2lf\n", getDistance(spider, muscidae));
    else
    {
        if (spider->x == 0)
            spider->x = -(spider->z);
        if (spider->y == 0)
            spider->y = -(spider->z);
        if (spider->x == a)
            spider->x = a + spider->z;
        if (spider->y == b)
            spider->y = b + spider->z;
        
        spider->z = 0;

        printf("%.2lf\n", getDistance(spider, muscidae));
    }

    free(spider);
    free(muscidae);

    return 0;
}

struct Point *createPoint(double x, double y, double z)
{
    struct Point *p = (struct Point *)malloc(sizeof(struct Point));

    if (!p)
        return NULL;

    p->x = x;
    p->y = y;
    p->z = z;

    return p;
}

double getDistance(const struct Point *p1, const struct Point *p2)
{
    double dx = p2->x - p1->x;
    double dy = p2->y - p1->y;
    double dz = p2->z - p1->z;

    return sqrt(dx * dx + dy * dy + dz * dz);
}

void freePoint(struct Point *p)
{
    if (p)
        free(p);
}