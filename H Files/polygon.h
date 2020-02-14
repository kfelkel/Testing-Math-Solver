#ifndef POLYGON_H
#define POLYGON_H
#include <iostream>
#include <math.h>
#include <iomanip>

namespace polygon
{
class Polygon
{
public:
    Polygon();
    Polygon(int,double);
    double getpolygonsides()const;
    double getpolygonlength()const;
    double getpolygonapothem();
    double getpolygonradius();
    double getpolygonarea();
    double getpolygonperimeter();
    void polygonsolve();
    void polygonapothem();
    void polygonradius();
    void polygonarea();
    void polygonperimeter();
    friend  std::ostream& operator<<(std::ostream&,const Polygon);
    friend void operator>>(std::istream&,Polygon&);
protected:
    int sides;
    double length;
    double apothem;
    double radius;
private:
    double area;
    double perimeter;
};
}
#endif // POLYGON_H
