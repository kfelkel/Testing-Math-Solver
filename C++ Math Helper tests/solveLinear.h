#pragma once
#include <string>

namespace solvelinear {
	class solveLinear
	{
		friend class Tests;
	public: 
		solveLinear();
		std::string solveEquation();
		std::string getEquation()const;
		
	private:
		std::string equation;
	};
}


