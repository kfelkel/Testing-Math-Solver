#include "pch.h"
#include "slopeIntercept.h"

namespace slopeintercept {
	slopeIntercept::slopeIntercept():equation(""),x1(0),x2(0),y1(0),y2(0),b(0),m(0) {}
	std::string slopeintercept::slopeIntercept::getEquation() const
	{
		return equation;
	}
	double slopeIntercept::getx1() const
	{
		return x1;
	}
	double slopeIntercept::getx2() const
	{
		return x2;
	}
	double slopeIntercept::gety1() const
	{
		return y1;
	}
	double slopeIntercept::gety2() const
	{
		return y2;
	}
	double slopeIntercept::getm() const
	{
		return m;
	}
	double slopeIntercept::getb() const
	{
		return b;
	}
	void slopeintercept::slopeIntercept::solveSlope()
	{
		m = (y2 - y1) / (x2 - x1);
	}
	void slopeIntercept::solveB()
	{
		b = y1 - (m * x1);
	}
	void slopeIntercept::solveEquation()
	{
		equation = "y="+std::to_string(m)+"*x+"+std::to_string(b);
	}
}