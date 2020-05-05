#pragma once
#include <string>
namespace slopeintercept{
	class slopeIntercept
	{
		friend class Tests;
	public:
		slopeIntercept();
		std::string getEquation()const;
		double getx1()const;
		double getx2()const;
		double gety1()const;
		double gety2()const;
		double getm()const;
		double getb()const;
		void solveSlope();
		void solveB();
		void solveEquation();
	protected:
		double x1;
		double x2;
		double y1;
		double y2;
	private:
		std::string equation;
		double b;
		double m;
	};
}


