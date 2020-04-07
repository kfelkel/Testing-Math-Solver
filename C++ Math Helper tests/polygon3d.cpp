#include "pch.h"
#include "polygon3d.h"

namespace polygon3d {
	Polygon3D::Polygon3D() :Polygon(), height(0) {}
	Polygon3D::Polygon3D(int a, double b, double c) : Polygon(a, b), height(c) {}
	double Polygon3D::getpolygon3dheight()const {
		return height;
	}
	double Polygon3D::getpolygon3darea() {
		polygon3darea();
		return area;
	}
	double Polygon3D::getpolygon3dperimeter() {
		polygon3dperimeter();
		return perimeter;
	}
	double Polygon3D::getpolygon3dvolume() {
		polygon3dvolume();
		return volume;
	}
	void Polygon3D::polygon3dsolve() {
		polygonsolve();
		polygon3darea();
		polygon3dperimeter();
		polygon3dvolume();
	}
	void Polygon3D::polygon3darea() {
		area = (getpolygonarea() * 2) + (length * height * sides);
	}
	void Polygon3D::polygon3dperimeter() {
		perimeter = (getpolygonperimeter() * 2) + (height * sides);
	}
	void Polygon3D::polygon3dvolume() {
		volume = (getpolygonarea() * height);
	}
	std::ostream& operator<<(std::ostream& outs, const Polygon3D a) {
		system("CLS");
		std::cout << "Your solved values: " << std::endl << std::endl;
		outs << std::fixed;
		outs << std::setprecision(2);
		outs << "\n\t# of sides: ";
		outs << a.sides;
		outs << "\n\tLength of sides: ";
		outs << a.length;
		outs << "\n\tHeight from base: ";
		outs << a.height;
		outs << "\n\n\tBase Apothem: ";
		outs << a.apothem;
		outs << "\n\tBase Radius: ";
		outs << a.radius;
		outs << "\n\n\tArea: ";
		outs << a.area;
		outs << "\n\tPerimeter: ";
		outs << a.perimeter;
		outs << "\n\tVolume: ";
		outs << a.volume;
		return outs;
	}
	void operator>>(std::istream& ins, Polygon3D& a) {
		do {
			std::cout << "How many sides (3 or more)? ";
			ins >> a.sides;
			std::cout << "Length of each side? ";
			ins >> a.length;
			std::cout << "Height from the base? ";
			ins >> a.height;
		} while (a.sides <= 2 || a.length <= 0 || a.height <= 0);
	}
}

