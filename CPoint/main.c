#include <stdio.h>

#include "point.h"

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
