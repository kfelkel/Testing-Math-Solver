#ifndef RECTANGLE_H
#define RECTANGLE_H
#include <iostream>
#include <iomanip>
#include <iterator>

namespace rectangle
{
	class Rectangle
	{
		friend class Tests;
	public:
		Rectangle();
		Rectangle(double, double);
		double getrectanglelenght()const;
		double getrectanglewidth()const;
		double getrectanglearea();
		double getrectangleperimeter();
		void rectanglesolve();
		void rectanglearea();
		void rectangleperimeter();
		friend  std::ostream& operator<<(std::ostream&, const Rectangle);
		friend void operator>>(std::istream&, Rectangle&);
	protected:
		double length;
		double width;
	private:
		double area;
		double perimeter;
	};
}
#endif // RECTANGLE_H
