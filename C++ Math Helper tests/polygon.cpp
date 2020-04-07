#include "pch.h"
#include "polygon.h"

namespace polygon {
	Polygon::Polygon() :sides(0), length(0), area(0), perimeter(0), apothem(0), radius(0) {}
	Polygon::Polygon(int a, double b) : sides(a), length(b) {}
	double Polygon::getpolygonsides()const {
		return sides;
	}
	double Polygon::getpolygonlength()const {
		return length;
	}
	double Polygon::getpolygonapothem() {
		polygonapothem();
		return apothem;
	}
	double Polygon::getpolygonradius() {
		polygonradius();
		return radius;
	}
	double Polygon::getpolygonarea() {
		polygonarea();
		return area;
	}
	void Polygon::polygonsolve() {
		polygonapothem();
		polygonarea();
		polygonperimeter();
		polygonradius();
	}
	double Polygon::getpolygonperimeter() {
		polygonperimeter();
		return perimeter;
	}
	void Polygon::polygonapothem() {
		apothem = (length) / (2 * tan((180 / sides * M_PI / 180)));
	}
	void Polygon::polygonradius() {
		radius = sqrt(pow((length / 2.0), 2) + pow(getpolygonapothem(), 2));
	}
	void Polygon::polygonarea() {
		area = ((length * getpolygonapothem()) / 2) * sides;
	}
	void Polygon::polygonperimeter() {
		perimeter = sides * length;
	}
	std::ostream& operator<<(std::ostream& outs, const Polygon a) {
		system("CLS");
		std::cout << "Your solved values: " << std::endl << std::endl;
		outs << std::fixed;
		outs << std::setprecision(2);
		outs << "\n\t# of sides: ";
		outs << a.sides;
		outs << "\n\tLength of each side: ";
		outs << a.length;
		outs << "\n\n\tApothem: ";
		outs << a.apothem;
		outs << "\n\tRadius: ";
		outs << a.radius;
		outs << "\n\n\tArea: ";
		outs << a.area;
		outs << "\n\tPerimeter: ";
		outs << a.perimeter;
		return outs;
	}
	void operator>>(std::istream& ins, Polygon& a) {
		do {
			system("CLS");
			std::cout << "How many sides (3 or more)? ";
			ins >> a.sides;
			std::cout << "Length of each side? ";
			ins >> a.length;
		} while (a.sides < 2 || a.length <= 0);
	}
}

