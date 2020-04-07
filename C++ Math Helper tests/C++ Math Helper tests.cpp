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
		
		TEST_METHOD(AASfindangleB)
		{
			Tests test;
			double actual = test.AASfindangleB();
			Assert::AreEqual(50.0, actual);
		}
		TEST_METHOD(AASfindsidea)
		{
			Tests test;
			double actual = test.AASfindsidea();
			Assert::AreEqual(9.9, actual,.1);
		}
		TEST_METHOD(AASfindsideb)
		{
			Tests test;
			double actual = test.AASfindsideb();
			Assert::AreEqual(9.9, actual, .1);
		}
		TEST_METHOD(SASfindsidea)
		{
			Tests test;
			double actual = test.SASfindsidea();
			Assert::AreEqual(2.1, actual, .1);
		}
		TEST_METHOD(SASfindangleB)
		{
			Tests test;
			double actual = test.SASfindangleB();
			Assert::AreEqual(28.9, actual, .1);
		}
		TEST_METHOD(SASfindangleC)
		{
			Tests test;
			double actual = test.SASfindangleC();
			Assert::AreEqual(46.5, actual, .1);
		}
		TEST_METHOD(SSAfindangleC)
		{
			Tests test;
			double actual = test.SSAfindangleC();
			Assert::AreEqual(37.5, actual, .1);
		}
		TEST_METHOD(SSAfindangleA)
		{
			Tests test;
			double actual = test.SSAfindangleA();
			Assert::AreEqual(90.0, actual, .1);
		}
		TEST_METHOD(SSAfindsidea)
		{
			Tests test;
			double actual = test.SSAfindsidea();
			Assert::AreEqual(1.3, actual, .1);
		}
		TEST_METHOD(SSSfindangleA)
		{
			Tests test;
			double actual = test.SSSfindangleA();
			Assert::AreEqual(28.9, actual, .1);
		}
		TEST_METHOD(SSSfindangleB)
		{
			Tests test;
			double actual = test.SSSfindangleB();
			Assert::AreEqual(46.5, actual, .1);
		}
		TEST_METHOD(SSSfindangleC)
		{
			Tests test;
			double actual = test.SSSfindangleC();
			Assert::AreEqual(104.4, actual, .1);
		}
		TEST_METHOD(TriangleGettera)
		{
			Tests test;
			double actual = test.TriangleGettera();
			Assert::AreEqual(1.0, actual);
		}
		TEST_METHOD(TriangleGetterb)
		{
			Tests test;
			double actual = test.TriangleGettera();
			Assert::AreEqual(1.0, actual);

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
