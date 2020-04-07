#include "pch.h"
#include "triangle.h"

namespace triangle
{
	Triangle::Triangle() :sidea(0), sideb(0), sidec(0),
		angleA(0), angleB(0), angleC(0),
		heighta(0), heightb(0), heightc(0),
		area(0), perimeter(0) {}
	Triangle::Triangle(double a, double b, double c, double A, double B, double C)
		: sidea(a), sideb(b), sidec(c), angleA(A), angleB(B), angleC(C) {}
	double Triangle::gettrianglesidea()const
	{
		return sidea;
	}
	double Triangle::gettrianglesideb()const
	{
		return sideb;
	}
	double Triangle::gettrianglesidec()const
	{
		return sidec;
	}
	double Triangle::gettriangleangleA()const
	{
		return angleA;
	}
	double Triangle::gettriangleangleB()const
	{
		return angleB;
	}
	double Triangle::gettriangleangleC()const
	{
		return angleC;
	}
	double Triangle::gettriangleheighta()const
	{
		return heighta;
	}
	double Triangle::gettriangleheightb()const
	{
		return heightb;
	}
	double Triangle::gettriangleheightc()const
	{
		return heightc;
	}
	double Triangle::gettrianglearea()
	{
		trianglearea();
		return area;
	}
	double Triangle::gettriangleperimeter()
	{
		triangleperimeter();
		return perimeter;
	}
	void Triangle::trianglesolve()
	{
		triangleheighta();
		triangleheightb();
		triangleheightc();
		trianglearea();
		triangleperimeter();
	}
	void Triangle::triangleheighta()
	{
		heighta = sidea / (cos(angleB * M_PI / 180) / sin(angleB * M_PI / 180) + cos(angleC * M_PI / 180) / sin(angleC * M_PI / 180));
	}
	void Triangle::triangleheightb()
	{
		heightb = sideb / (cos(angleA * M_PI / 180) / sin(angleA * M_PI / 180) + cos(angleC * M_PI / 180) / sin(angleC * M_PI / 180));
	}
	void Triangle::triangleheightc()
	{
		heightc = sidec / (cos(angleA * M_PI / 180) / sin(angleA * M_PI / 180) + cos(angleB * M_PI / 180) / sin(angleB * M_PI / 180));
	}
	void Triangle::trianglearea()
	{
		area = sidea * heighta / 2;
	}
	void Triangle::triangleperimeter()
	{
		perimeter = sidea + sideb + sidec;
	}

	std::ostream& operator<<(std::ostream& outs, const Triangle a)
	{
		system("CLS");
		std::cout << "Your solved values: " << std::endl << std::endl;
		outs << std::fixed;
		outs << std::setprecision(2);
		outs << "\n\tSide A: \t";
		outs << a.sidea;
		outs << "\n\tSide B: \t";
		outs << a.sideb;
		outs << "\n\tSide C: \t";
		outs << a.sidec;
		outs << "\n\n\tAngle A: \t";
		outs << a.angleA;
		outs << "\n\tAngle B: \t";
		outs << a.angleB;
		outs << "\n\tAngle C: \t";
		outs << a.angleC;
		outs << "\n\n\tHeight A: \t";
		outs << a.heighta;
		outs << "\n\tHeight B: \t";
		outs << a.heightb;
		outs << "\n\tHeight C: \t";
		outs << a.heightc;
		outs << "\n\n\tArea: \t\t";
		outs << a.area;
		outs << "\n\tPerimeter: \t";
		outs << a.perimeter;
		return outs;
	}
}

