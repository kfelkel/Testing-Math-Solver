#ifndef PYRAMID_H
#define PYRAMID_H
#include "polygon.h"

namespace pyramid
{
	class Pyramid :public polygon::Polygon
	{
		friend class Tests;
	public:
		Pyramid();
		Pyramid(int, double, double);
		double getpyramidheight()const;
		double getpyramidlateraledgelength();
		double getpyramidslantheight();
		double getpyramidarea();
		double getpyramidperimeter();
		double getpyramidvolume();
		void pyramidsolve();
		void pyramidslantheight();
		void pyramidarea();
		void pyramidlateraledgelength();
		void pyramidperimeter();
		void pyramidvolume();
		friend  std::ostream& operator<<(std::ostream&, const Pyramid);
		friend void operator>>(std::istream&, Pyramid&);
	protected:
		double height;
		double slantheight;
		double lateraledgelength;
	private:
		double area;
		double perimeter;
		double volume;
	};
}
#endif // PYRAMID_H