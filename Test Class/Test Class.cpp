#include "pch.h"
#include "CppUnitTest.h"
#include <iostream>
#include "..\C++ Math Helper\aas.h"
#include "..\C++ Math Helper\rectangle.h"
#include "..\C++ Math Helper\triangle.h"
#include "..\C++ Math Helper\cube.h"
#include "..\C++ Math Helper\pyramid.h"
#include "..\C++ Math Helper\polygon.h"
#include "..\C++ Math Helper\aas.h"
#include "..\C++ Math Helper\sss.h"
#include "..\C++ Math Helper\sas.h"
#include "..\C++ Math Helper\ssa.h"
#include "..\C++ Math Helper\polygon3d.h"
#include "..\C++ Math Helper\circle.h"
#include "..\C++ Math Helper\ellipse.h"
#include "..\C++ Math Helper\parabola.h"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestClass
{
	TEST_CLASS(TestClass)
	{
	public:
		TEST_METHOD(AASfindangleB)
		{
			aas::AAS* aas = new aas::AAS;
			aas->angleA = 120;
			aas->angleC = 10;
			aas->AASangleB();
			double actual = aas->gettriangleangleB();
			Assert::AreEqual(50.0, actual);
			delete aas;
		}
		TEST_METHOD(AASfindsidea)
		{
			aas::AAS* aas = new aas::AAS;
			aas->angleA = 120;
			aas->angleC = 10;
			aas->sidec = 2;
			aas->AASsidea();
			double actual = aas->gettrianglesidea();
			Assert::AreEqual(9.9, actual, 0.1);
			delete aas;
		}
	};
}
