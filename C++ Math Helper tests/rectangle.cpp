
#include "pch.h"
#include "rectangle.h"

namespace rectangle
{
	Rectangle::Rectangle() :length(0), width(0) {}
	Rectangle::Rectangle(double a, double b) : length(a), width(b) {}
	double Rectangle::getrectanglelenght()const
	{
		return length;
	}
	double Rectangle::getrectanglewidth()const
	{
		return width;
	}
	double Rectangle::getrectanglearea()
	{
		rectanglearea();
		return area;
	}
	double Rectangle::getrectangleperimeter()
	{
		rectangleperimeter();
		return perimeter;
	}
	void Rectangle::rectanglesolve()
	{
		rectanglearea();
		rectangleperimeter();
	}
	void Rectangle::rectanglearea()
	{
		area = length * width;
	}
	void Rectangle::rectangleperimeter()
	{
		perimeter = length * 2 + width * 2;
	}

	std::ostream& operator<<(std::ostream& outs, const Rectangle a)
	{
		system("CLS");
		std::cout << "Your solved values: " << std::endl << std::endl;
		outs << std::fixed;
		outs << std::setprecision(2);
		outs << "\n\tLength: \t";
		outs << a.length;
		outs << "\n\tWidth: \t\t";
		outs << a.width;
		outs << "\n\n\tArea: \t\t";
		outs << a.area;
		outs << "\n\tPerimeter: \t";
		outs << a.perimeter;
		return outs;
	}
	void operator>>(std::istream& ins, Rectangle& a)
	{
		do
		{
			system("CLS");
			std::cout << "What is the length? ";
			ins >> a.length;
			std::cout << "What is the width? ";
			ins >> a.width;
		} while (a.length <= 0 || a.width <= 0);
	}
}
