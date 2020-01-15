#if !defined(POINT)
#define POINT

struct Point;

struct Point *createPoint(double, double);
void freePoint(struct Point *);
double getDistance(struct Point *, struct Point *);
double getX(struct Point *);
double getY(struct Point *);

#endif