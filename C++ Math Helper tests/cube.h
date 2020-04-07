#ifndef CUBE_H
#define CUBE_H
#include "rectangle.h"

namespace cube {
	class Cube :public rectangle::Rectangle {
	public:
		Cube();
		Cube(double, double, double);
		double getcubeheight()const;
		double getcubearea();
		double getcubeperimeter();
		double getcubevolume();
		void cubesolve();
		void cubearea();
		void cubeperimeter();
		void cubevolume();
		friend  std::ostream& operator<<(std::ostream&, const Cube);
		friend void operator>>(std::istream&, Cube&);
	protected:
	private:
		double height;
		double area;
		double perimeter;
		double volume;
	};
}
#endif // CUBE_H
