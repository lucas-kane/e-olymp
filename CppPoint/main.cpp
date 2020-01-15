#include <iostream>
using namespace std;

#include "point.h"

class Line
{
private:
    Point a;
    Point b;

public:
    Line();
    Line(const Point &, const Point &);
    ~Line();

    double len() { return a.getDistance(b); }
};

Line::Line()
{
}

Line::Line(const Point &p1, const Point &p2)
{
    a = p1;
    b = p2;
}

Line::~Line()
{
}

int main()
{
    Line l(Point(1, 2), Point(3, 4));
    cout << l.len() << endl;

    return 0;
}