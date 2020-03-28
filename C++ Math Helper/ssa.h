#ifndef SSA_H
#define SSA_H
#include "triangle.h"

namespace ssa
{
	class SSA :public triangle::Triangle
	{
	friend class TestClass;
	public:
		SSA();
		SSA(double, double, double);
		void SSAsolve();
		void SSAangleC();
		void SSAangleA();
		void SSAsidea();
		friend void operator>>(std::istream&, SSA&);
	};
}
#endif // SSA_H