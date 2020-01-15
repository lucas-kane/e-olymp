#if !defined(POINT)
#define POINT

struct Point
{
    double x;
    double y;
};

struct Point *createPoint(double, double);
void freePoint(struct Point *);
double getDistance(struct Point *, struct Point *);
double getX(struct Point *);
double getY(struct Point *);

#endif