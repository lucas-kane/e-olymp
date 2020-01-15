#ifndef POINT
#define POINT

class Point
{
    double x, y;

public:
    Point();
    Point(double, double);
    Point(const Point &);

    const Point &operator=(const Point &);

    void setPoint(double, double);

    double getX() const { return this->x; }
    double getY() const { return this->y; }

    double getDistance(const Point &);
};

#endif