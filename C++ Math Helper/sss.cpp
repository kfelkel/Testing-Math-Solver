#include "sss.h"

namespace sss
{
	SSS::SSS() :Triangle() {}
	SSS::SSS(double a, double b, double c) : Triangle(a, b, c, 0, 0, 0) {}
	void SSS::SSSsolve()
	{
		SSSangleA();
		SSSangleB();
		SSSangleC();
		trianglesolve();
	}
	void SSS::SSSangleA()
	{
		angleA = (180 / M_PI) * (acos((pow(sideb, 2) + pow(sidec, 2) - pow(sidea, 2)) / (2 * sideb * sidec)));
	}
	void SSS::SSSangleB()
	{
		angleB = (180 / M_PI) * (acos((pow(sidec, 2) + pow(sidea, 2) - pow(sideb, 2)) / (2 * sidec * sidea)));
	}
	void SSS::SSSangleC()
	{
		angleC = (180 / M_PI) * (acos((pow(sidea, 2) + pow(sideb, 2) - pow(sidec, 2)) / (2 * sidea * sideb)));
	}
	void operator>>(std::istream& ins, SSS& a)
	{
		do
		{
			system("CLS");
			std::cout << "What is side a? ";
			ins >> a.sidea;
			std::cout << "What is side b? ";
			ins >> a.sideb;
			std::cout << "What is side c? ";
			ins >> a.sidec;
		} while (a.sidea <= 0 || a.sideb <= 0 || a.sidec <= 0);
	}
}
