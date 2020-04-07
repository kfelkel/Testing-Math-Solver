#ifndef POLYGON_H
#define POLYGON_H
#include <corecrt_math_defines.h>
#include <iostream>
#include <iomanip>
#include <iterator>
namespace polygon {
	class Polygon {
		friend class Tests;
	public:
		Polygon();
		Polygon(int, double);
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
		friend  std::ostream& operator<<(std::ostream&, const Polygon);
		friend void operator>>(std::istream&, Polygon&);
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