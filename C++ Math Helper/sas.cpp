#include "sas.h"

namespace sas
{
	SAS::SAS() :Triangle() {}
	SAS::SAS(double b, double A, double c) : Triangle(0, b, c, A, 0, 0) {}
	void SAS::SASsolve()
	{
		SASsidea();
		SASangleB();
		SASangleC();
		trianglesolve();
	}
	void SAS::SASsidea()
	{
		sidea = sqrt((pow(sideb, 2) + pow(sidec, 2)) - (2 * sideb * sidec * cos(angleA * M_PI / 180)));
	}
	void SAS::SASangleB()
	{
		angleB = (180 / M_PI) * (acos((pow(sidec, 2) + pow(sidea, 2) - pow(sideb, 2)) / (2 * sidec * sidea)));
	}
	void SAS::SASangleC()
	{
		angleC = (180 / M_PI) * (acos((pow(sidea, 2) + pow(sideb, 2) - pow(sidec, 2)) / (2 * sidea * sideb)));
	}
	void operator>>(std::istream& ins, SAS& a)
	{
		do
		{
			system("CLS");
			std::cout << "What is side b? ";
			ins >> a.sideb;
			std::cout << "What is angle A? ";
			ins >> a.angleA;
			std::cout << "What is side c? ";
			ins >> a.sidec;
		} while (a.sideb <= 0 || a.angleA <= 0 || a.sidec <= 0);
	}
}
