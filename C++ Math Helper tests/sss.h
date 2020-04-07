#ifndef SSS_H
#define SSS_H

#include "triangle.h"
namespace sss
{
	class SSS :public triangle::Triangle
	{
		friend class Tests;
	public:
		SSS();
		SSS(double, double, double);
		void SSSsolve();
		void SSSangleA();
		void SSSangleB();
		void SSSangleC();
		friend void operator>>(std::istream&, SSS&);
	protected:
	private:
	};
}
#endif // SSS_H
