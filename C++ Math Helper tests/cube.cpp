#include "pch.h"
#include "cube.h"

namespace cube {
	Cube::Cube() :Rectangle(), height(0), area(0), perimeter(0), volume(0) {}
	Cube::Cube(double a, double b, double c) : Rectangle(a, b), height(c) {}
	void Cube::cubesolve() {
		cubearea();
		cubeperimeter();
		cubevolume();
	}
	double Cube::getcubeheight()const {
		return height;
	}
	double Cube::getcubearea() {
		cubearea();
		return area;
	}
	double Cube::getcubeperimeter() {
		cubeperimeter();
		return perimeter;
	}
	double Cube::getcubevolume() {
		cubevolume();
		return volume;
	}
	void Cube::cubearea() {
		area = (getrectanglearea() * 2 + length * height * 2 + width * height * 2);
	}
	void Cube::cubeperimeter() {
		perimeter = (getrectangleperimeter() * 2 + height * 4);
	}
	void Cube::cubevolume() {
		volume = (getrectanglearea() * height);
	}
	std::ostream& operator<<(std::ostream& outs, const Cube a) {
		system("CLS");
		std::cout << "Your solved values: " << std::endl << std::endl;
		outs << "\n\tLength: ";
		outs << a.length;
		outs << "\n\tWidth: ";
		outs << a.width;
		outs << "\n\tHeight: ";
		outs << a.height;
		outs << "\n\n\tArea: ";
		outs << a.area;
		outs << "\n\tPerimeter: ";
		outs << a.perimeter;
		outs << "\n\tVolume: ";
		outs << a.volume;
		return outs;
	}
	void operator>>(std::istream& ins, Cube& a) {
	
			system("CLS");
			do {
				std::cout << "What is the length? ";
				ins >> a.length;
				std::cout << "What is the width? ";
				ins >> a.width;
				std::cout << "What is the height? ";
				ins >> a.height;
			} while (a.length <= 0 || a.width <= 0 || a.height <= 0);
	}
}

