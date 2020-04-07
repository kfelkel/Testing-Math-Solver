#ifndef ELLIPSE_H
#define ELLIPSE_H
#include <iostream>
#include <corecrt_math_defines.h>
#include <iomanip>
#include <iterator>

namespace ellipse {
	class Ellipse {
	public:
		Ellipse();
		Ellipse(double, double);
		double getellipsemajoraxis()const;
		double getellipseminoraxis()const;
		double getellipsefoci();
		double getellipsedirectrix();
		double getellipsevertex();
		double getellipsearea();
		void ellipsesolve();
		void ellipsefoci();
		void ellipsedirectrix();
		void ellipsevertex();
		void ellipsearea();
		friend  std::ostream& operator<<(std::ostream&, const Ellipse);
		friend void operator>>(std::istream&, Ellipse&);
	protected:
		double majoraxis;
		double minoraxis;
		double foci;
		double vertex;
		double directrix;
	private:
		double area;
	};
}
#endif // ELLIPSE_H
