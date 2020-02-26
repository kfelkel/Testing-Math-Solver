#ifndef POLYGON3D_H
#define POLYGON3D_H
#include "polygon.h"

namespace polygon3d{
	class Polygon3D :public polygon::Polygon{
		public:
			Polygon3D();
			Polygon3D(int, double, double);
			double getpolygon3dheight()const;
			double getpolygon3darea();
			double getpolygon3dperimeter();
			double getpolygon3dvolume();
			void polygon3dsolve();
			void polygon3darea();
			void polygon3dperimeter();
			void polygon3dvolume();
			friend  std::ostream& operator<<(std::ostream&, const Polygon3D);
			friend void operator>>(std::istream&, Polygon3D&);
		private:
			double height;
			double area;
			double perimeter;
			double volume;
	};
}
#endif // POLYGON3D_H