#ifndef CIRCLE_H
#define CIRCLE_H
#include <iostream>
#include <corecrt_math_defines.h>
#include <iomanip>
#include <iterator>
namespace circle {
	class Circle {
	public:
		Circle();
		Circle(double);
		double getcircleradius()const;
		double getcirclediameter();
		double getcirclecircumference();
		double getcirclearea();
		void circlesolve();
		void circlediameter();
		void circlecircumference();
		void circlearea();
		friend  std::ostream& operator<<(std::ostream&, const Circle);
		friend void operator>>(std::istream&, Circle&);
	protected:
		double radius;
		double diameter;
	private:
		double circumference;
		double area;
	};
}
#endif // CIRCLE_H
