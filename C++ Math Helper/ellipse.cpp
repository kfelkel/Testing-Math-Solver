#include "ellipse.h"

namespace ellipse{
	Ellipse::Ellipse() :majoraxis(0), minoraxis(0), foci(0), vertex(0), directrix(0), area(0) {}
	Ellipse::Ellipse(double a, double b) : majoraxis(a), minoraxis(b) {}
	double Ellipse::getellipsemajoraxis()const{
		return majoraxis;
	}
	double Ellipse::getellipseminoraxis()const{
		return minoraxis;
	}
	double Ellipse::getellipsefoci(){
		ellipsefoci();
		return foci;
	}
	double Ellipse::getellipsedirectrix(){
		ellipsedirectrix();
		return directrix;
	}
	double Ellipse::getellipsevertex(){
		ellipsevertex();
		return vertex;
	}
	double Ellipse::getellipsearea(){
		ellipsearea();
		return area;
	}
	void Ellipse::ellipsesolve(){
		ellipsevertex();
		ellipsefoci();
		ellipsedirectrix();
		ellipsearea();
	}
	void Ellipse::ellipsefoci(){
		foci = sqrt(pow(majoraxis, 2) - pow(minoraxis, 2));
	}
	void Ellipse::ellipsedirectrix(){
		directrix = pow(majoraxis, 2) / foci;
	}
	void Ellipse::ellipsevertex(){
		vertex = majoraxis;
	}
	void Ellipse::ellipsearea(){
		area = M_PI * majoraxis * minoraxis;
	}
	std::ostream& operator<<(std::ostream& outs, const Ellipse a){
		system("CLS");
		std::cout << "Your solved values: " << std::endl << std::endl;
		outs << std::fixed;
		outs << std::setprecision(2);
		outs << "\n\tEllipse Equation: (x^2/";
		outs << pow(a.majoraxis, 2);
		outs << ") + (y^2/";
		outs << pow(a.minoraxis, 2);
		outs << ") = 1";
		outs << "\n\n\tMajor Axis: ";
		outs << a.majoraxis;
		outs << "\n\tMinor Axis: ";
		outs << a.minoraxis;
		outs << "\n\n\tFocal Length: ";
		outs << a.foci;
		outs << "\n\tDirectrix Length: ";
		outs << a.directrix;
		outs << "\n\tVertex Length: ";
		outs << a.vertex;
		outs << "\n\n\tArea: ";
		outs << a.area;

		return outs;
	}
	void operator>>(std::istream& ins, Ellipse& a){
		do{
			system("CLS");
			std::cout << "What is the Major Axis radius? ";
			ins >> a.majoraxis;
			std::cout << "What is the Minor Axis radius? ";
			ins >> a.minoraxis;
		} while (a.majoraxis < a.minoraxis || a.majoraxis <= 0 || a.minoraxis <= 0);
	}
}
