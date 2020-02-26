#ifndef PARABOLA_H
#define PARABOLA_H
#include <iostream>
#include <math.h>
#include <iomanip>
#include <iterator>

namespace parabola{
	class Parabola{
		public:
			Parabola();
			Parabola(double, double, double);
			double getparabolavaluea()const;
			double getparabolavalueb()const;
			double getparabolavaluec()const;
			double getparabolavertexX();
			double getparabolavertexY();
			double getparaboladirectrix();
			double getparabolafocus();
			void parabolasolve();
			void parabolavertex();
			void paraboladirectrix();
			void parabolafocus();
			friend std::ostream& operator<<(std::ostream&, const Parabola);
			friend void operator>>(std::istream&, Parabola&);
		private:
			double valuea;
			double valueb;
			double valuec;
			double vertexX;
			double vertexY;
			double directrix;
			double focus;
	};
}
#endif // PARABOLA_H
