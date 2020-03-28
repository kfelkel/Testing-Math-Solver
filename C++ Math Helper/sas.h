#ifndef SAS_H
#define SAS_H
#include "triangle.h"

namespace sas
{
	class SAS :public triangle::Triangle
	{
	friend class TestClass;
	public:
		SAS();
		SAS(double, double, double);
		void SASsolve();
		void SASsidea();
		void SASangleB();
		void SASangleC();
		friend void operator>>(std::istream&, SAS&);
	};
}
#endif // SAS_H
