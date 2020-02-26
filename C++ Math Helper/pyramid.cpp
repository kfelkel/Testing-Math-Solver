#include "pyramid.h"


namespace pyramid{
	Pyramid::Pyramid() :Polygon(), height(0), area(0), lateraledgelength(0), perimeter(0), volume(0) {}
	Pyramid::Pyramid(int a, double b, double c) : Polygon(a, b), height(c) {}
	double Pyramid::getpyramidheight()const{
		return height;
	}
	double Pyramid::getpyramidslantheight(){
		pyramidslantheight();
		return slantheight;
	}
	double Pyramid::getpyramidlateraledgelength(){
		pyramidlateraledgelength();
		return lateraledgelength;
	}
	double Pyramid::getpyramidarea(){
		pyramidarea();
		return area;
	}
	double Pyramid::getpyramidperimeter(){
		pyramidperimeter();
		return perimeter;
	}
	double Pyramid::getpyramidvolume(){
		pyramidvolume();
		return volume;
	}
	void Pyramid::pyramidsolve(){
		polygonsolve();
		pyramidslantheight();
		pyramidlateraledgelength();
		pyramidarea();
		pyramidperimeter();
		pyramidvolume();
	}
	void  Pyramid::pyramidslantheight(){
		slantheight = sqrt(pow(height, 2) + pow((length / 2), 2));
	}
	void Pyramid::pyramidarea(){
		area = (getpyramidslantheight() * length / 2 * sides) + getpolygonarea();
	}
	void Pyramid::pyramidlateraledgelength(){
		lateraledgelength = sqrt(pow(length / 2, 2) + pow(getpyramidslantheight(), 2));
	}
	void Pyramid::pyramidperimeter(){
		perimeter = (getpyramidlateraledgelength() * 4 + getpolygonperimeter());
	}
	void Pyramid::pyramidvolume(){
		volume = 0.3333 * getpolygonarea() * height;
	}
	std::ostream& operator<<(std::ostream& outs, const Pyramid a){
		system("CLS");
		std::cout << "Your solved values: " << std::endl << std::endl;
		outs << std::fixed;
		outs << std::setprecision(2);
		outs << "\n\t# of sides: \t\t";
		outs << a.sides;
		outs << "\n\tLength of each side: \t";
		outs << a.length;
		outs << "\n\tHeight: \t\t";
		outs << a.height;
		outs << "\n\n\tSlantheight: \t\t";
		outs << a.slantheight;
		outs << "\n\tLateral edge length: \t";
		outs << a.lateraledgelength;
		outs << "\n\tBase Apothem: \t\t";
		outs << a.apothem;
		outs << "\n\tBase Radius: \t\t";
		outs << a.radius;
		outs << "\n\n\tArea: \t\t\t";
		outs << a.area;
		outs << "\n\tPerimeter: \t\t";
		outs << a.perimeter;
		outs << "\n\tVolume: \t\t";
		outs << a.volume;
		return outs;
	}
	void operator>>(std::istream& ins, Pyramid& a){
		do{
			system("CLS");
			std::cout << "How many sides? ";
			ins >> a.sides;
			std::cout << "Length of each side? ";
			ins >> a.length;
			std::cout << "Height from center of base to tip? ";
			ins >> a.height;
		} while (a.sides <= 2 || a.length <= 0 || a.height <= 0);
	}
}
