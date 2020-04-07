#include "pch.h"
#include "CppUnitTest.h"
#include "Tests.h"
#include <corecrt_math_defines.h>
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace CMathHelpertests
{
	TEST_CLASS(CMathHelpertests)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Tests test;
			double actual = test.AASfindangleB();
			Assert::AreEqual(50.0, actual);
		}

		TEST_METHOD(Test_Circle_circleDiameter)
		{
			double expected = 50;
			Tests test;
			double actual = test.Circle_getcirclediameter(25);
			Assert::AreEqual(expected, actual);
		}
		TEST_METHOD(Test_Circle_getcirclecircumference)
		{
			double expected = 50*M_PI;
			Tests test;
			double actual = test.Circle_getcirclecircumference(25);
			Assert::AreEqual(expected, actual);
		}
	};
}
