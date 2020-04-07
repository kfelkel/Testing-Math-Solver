#include "pch.h"
#include "parabola.h"

namespace parabola {
	Parabola::Parabola() :valuea(0), valueb(0), valuec(0), vertexX(0), vertexY(0), directrix(0), focus(0) {}
	Parabola::Parabola(double a, double b, double c) : valuea(a), valueb(b), valuec(c) {}
	double Parabola::getparabolavaluea()const {
		return valuea;
	}
	double Parabola::getparabolavalueb()const {
		return valueb;
	}
	double Parabola::getparabolavaluec()const {
		return valuec;
	}
	double Parabola::getparabolavertexX() {
		parabolavertex();
		return vertexX;
	}
	double Parabola::getparabolavertexY() {
		parabolavertex();
		return vertexY;
	}
	double Parabola::getparaboladirectrix() {
		paraboladirectrix();
		return directrix;
	}
	double Parabola::getparabolafocus() {
		parabolafocus();
		return focus;
	}
	void Parabola::parabolasolve() {
		parabolavertex();
		parabolafocus();
		paraboladirectrix();
	}
	void Parabola::parabolavertex() {
		vertexX = -(valueb / 2 * valuea);
		vertexY = valuea * pow(vertexX, 2) + valueb * vertexX + valuec;
	}
	void Parabola::paraboladirectrix() {
		directrix = valuec - ((pow(valueb, 2) + 1) / (4 * valuea));
	}
	void Parabola::parabolafocus() {
		focus = valuec - ((pow(valueb, 2) - 1) / (4 * valuea));
	}
	std::ostream& operator<<(std::ostream& outs, const Parabola a) {
		system("CLS");
		std::cout << "Your solved values: " << std::endl << std::endl;
		outs << std::fixed;
		outs << std::setprecision(2);
		outs << "\n\tParobola Equation: y = ";
		outs << a.valuea;
		outs << "x^2 + ";
		outs << a.valueb;
		outs << "x + ";
		outs << a.valuec;
		outs << "\n\n\tVertex: (";
		outs << a.vertexX;
		outs << ",";
		outs << a.vertexY;
		outs << ")";
		outs << "\n\tDirectrix: x=";
		outs << a.directrix;
		outs << "\n\tFocus: (";
		outs << a.vertexX;
		outs << ",";
		outs << a.focus;
		outs << ")";
		return outs;
	}
	void operator>>(std::istream& ins, Parabola& a) {
		std::cout << "y=Ax^2+Bx+c" << std::endl << std::endl;
		std::cout << "What is the value of A? ";
		ins >> a.valuea;
		std::cout << "What is the value of B? ";
		ins >> a.valueb;
		std::cout << "What is the value of C? ";
		ins >> a.valuec;
	}
}

