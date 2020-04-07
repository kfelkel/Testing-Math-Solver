#include "pch.h"
#include "ssa.h"

namespace ssa
{
	SSA::SSA() :Triangle() {}
	SSA::SSA(double b, double c, double B) : Triangle(0, b, c, 0, B, 0) {}
	void SSA::SSAsolve()
	{
		SSAangleC();
		SSAangleA();
		SSAsidea();
		trianglesolve();
	}
	void SSA::SSAangleC()
	{
		angleC = (180 / M_PI) * (asin((sidec * sin(angleB * M_PI / 180)) / sideb));
	}
	void SSA::SSAangleA()
	{
		angleA = 180 - angleB - angleC;
	}

	void SSA::SSAsidea()
	{
		sidea = (sidec * sin(angleA * M_PI / 180)) / (sin(angleC * M_PI / 180));
	}

	void operator>>(std::istream& ins, SSA& a)
	{
		do
		{
			system("CLS");
			std::cout << "What is side b? ";
			ins >> a.sideb;
			std::cout << "What is side c? ";
			ins >> a.sidec;
			std::cout << "What is angle B? ";
			ins >> a.angleB;
		} while (a.sidea <= 0 || a.sidec <= 0 || a.angleB <= 0);
	}
}

