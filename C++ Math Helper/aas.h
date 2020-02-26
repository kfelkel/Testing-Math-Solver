#ifndef AAS_H
#define AAS_H
#include "triangle.h"

namespace aas{
	class AAS :public triangle::Triangle{
		public:
			AAS();
			AAS(double, double, double);
			void AASsolve();
			void AASangleB();
			void AASsidea();
			void AASsideb();
			friend void operator>>(std::istream&, AAS&);
	};
}
#endif // AAS_H