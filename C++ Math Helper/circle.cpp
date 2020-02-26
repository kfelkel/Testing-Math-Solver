#include "circle.h"

namespace circle{
	Circle::Circle() :radius(0), diameter(0), circumference(0), area(0) {}
	Circle::Circle(double a) : radius(a) {}
	double Circle::getcircleradius()const{
		return radius;
	}
	double Circle::getcirclediameter(){
		circlediameter();
		return diameter;
	}
	double Circle::getcirclecircumference(){
		circlecircumference();
		return circumference;
	}
	double Circle::getcirclearea(){
		circlearea();
		return area;
	}
	void Circle::circlesolve(){
		circlediameter();
		circlearea();
		circlecircumference();
	}
	void Circle::circlediameter(){
		diameter = radius * 2;
	}
	void Circle::circlecircumference(){
		circumference = 2 * M_PI * radius;
	}
	void Circle::circlearea(){
		area = M_PI * pow(radius, 2);
	}
	std::ostream& operator<<(std::ostream& outs, const Circle a){
		system("CLS");
		std::cout << "Your solved values: " << std::endl << std::endl;
		outs << std::fixed;
		outs << std::setprecision(2);
		outs << "\n\tRadius: ";
		outs << a.radius;
		outs << "\n\tDiameter: ";
		outs << a.diameter;
		outs << "\n\n\tCircumference: ";
		outs << a.circumference;
		outs << "\n\tArea: ";
		outs << a.area;
		outs << "\n\n\tEquation: x^2+y^2=";
		outs << a.radius;
		outs << "^2";
		return outs;
	}
	void operator>>(std::istream& ins, Circle& a){
		do{
			system("CLS");
			std::cout << "What is the Radius? ";
			ins >> a.radius;
		} while (a.radius <= 0);
	}
}
