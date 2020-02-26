#ifndef TRIANGLE_H
#define TRIANGLE_H
#include <iostream>
#include <corecrt_math_defines.h>
#include <iomanip>
#include <iterator>

namespace triangle
{
	class Triangle
	{
	public:
		Triangle();
		Triangle(double, double, double);
		Triangle(double, double, double, double, double, double);
		double gettrianglesidea()const;
		double gettrianglesideb()const;
		double gettrianglesidec()const;
		double gettriangleangleA()const;
		double gettriangleangleB()const;
		double gettriangleangleC()const;
		double gettriangleheighta()const;
		double gettriangleheightb()const;
		double gettriangleheightc()const;
		double gettrianglearea();
		double gettriangleperimeter();
		void trianglesolve();
		void triangleheighta();
		void triangleheightb();
		void triangleheightc();
		void trianglearea();
		void triangleperimeter();
		friend  std::ostream& operator<<(std::ostream&, const Triangle);
		friend void operator>>(std::istream&, Triangle&);
	protected:
		double sidea;
		double sideb;
		double sidec;
		double angleA;
		double angleB;
		double angleC;
		double heighta;
		double heightb;
		double heightc;
	private:
		double area;
		double perimeter;
	};
}
#endif // TRIANGLE_H
