#include "point.h"

#include <cmath>

Point::Point() {}
Point::Point(double x, double y) { setPoint(x, y); }
Point::Point(const Point &other)
{
    if (this != &other)
    {
        this->x = other.x;
        this->y = other.y;
    }
}

const Point &Point::operator=(const Point &other)
{
    if (this != &other)
    {
        this->x = other.getX();
        this->y = other.getY();
    }

    return *this;
}

void Point::setPoint(double x, double y)
{
    this->x = x;
    this->y = y;
}

double Point::getDistance(const Point &other)
{
    double dx = x - other.x;
    double dy = y - other.y;

    return sqrt(dx * dx + dy * dy);
}