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
		
		TEST_METHOD(Test_AAS_AASangleB)
		{
			double expected = 50;
			Tests test;
			double actual = test.AAS_AASangleB(120,10);
			Assert::AreEqual(expected, actual);
		}
		TEST_METHOD(AASfindsidea)
		{
			double expected = 9.9;
			Tests test;
			double actual = test.AAS_AASsidea(120,10,2);
			Assert::AreEqual(expected, actual,.1);
		}
		TEST_METHOD(Test_AAS_AASsidea)
		{
			double expected = 9.9;
			Tests test;
			double actual = test.AAS_AASsideb(120, 10, 2);
			Assert::AreEqual(expected, actual, .1);
		}
		TEST_METHOD(Test_SAS_SASsidea)
		{
			double expected = 2.1;
			Tests test;
			double actual = test.SAS_SASsidea(2,3,47);
			Assert::AreEqual(expected, actual, .1);
		}
		TEST_METHOD(Test_SAS_SASangleB)
		{
			double expected = 28.9;
			Tests test;
			double actual = test.SAS_SASangleB(4,2,3);
			Assert::AreEqual(expected, actual, .1);
		}
		TEST_METHOD(Test_SAS_SASangleC)
		{
			double expected = 46.5;
			Tests test;
			double actual = test.SAS_SASangleC(4,2,3);
			Assert::AreEqual(expected, actual, .1);
		}
		TEST_METHOD(Test_SSA_SSAangleC)
		{
			double expected = 37.5;
			Tests test;
			double actual = test.SSA_SSAangleC(24,2,3);
			Assert::AreEqual(expected, actual, .1);
		}
		TEST_METHOD(Test_SSA_SSAangleA)
		{
			double expected = 90.0;
			Tests test;
			double actual = test.SSA_SSAangleA(24,66);
			Assert::AreEqual(expected, actual, .1);
		}
		TEST_METHOD(Test_SSA_SSAsidea)
		{
			double expected = 1.3;
			Tests test;
			double actual = test.SSA_SSAsidea(24,66,3);
			Assert::AreEqual(expected, actual, .1);
		}
		TEST_METHOD(Test_SSS_SSSangleA)
		{
			double expected = 28.9;
			Tests test;
			double actual = test.SSS_SSSangleA(2,3,4);
			Assert::AreEqual(expected, actual, .1);
		}
		TEST_METHOD(Test_SSS_SSSangleB)
		{
			double expected = 46.5;
			Tests test;
			double actual = test.SSS_SSSangleB(2,3,4);
			Assert::AreEqual(expected, actual, .1);
		}
		TEST_METHOD(Test_SSS_SSSangleC)
		{
			double expected = 104.4;
			Tests test;
			double actual = test.SSS_SSSangleC(2,3,4);
			Assert::AreEqual(expected, actual, .1);
		}
		TEST_METHOD(Triangle_Triangle_gettriangleangleA)
		{
			double expected = 60;
			Tests test;
			double actual = test.Triangle_gettriangleangleA(60);
			Assert::AreEqual(expected, actual, .1);
		}
		TEST_METHOD(Triangle_Triangle_gettriangleangleB)
		{
			double expected = 60;
			Tests test;
			double actual = test.Triangle_gettriangleangleB(60);
			Assert::AreEqual(expected, actual, .1);
		}
		TEST_METHOD(Triangle_Triangle_gettriangleangleC)
		{
			double expected = 60;
			Tests test;
			double actual = test.Triangle_gettriangleangleC(60);
			Assert::AreEqual(expected, actual, .1);
		}
		TEST_METHOD(Triangle_Triangle_gettrianglesidea)
		{
			double expected = 1;
			Tests test;
			double actual = test.Triangle_gettrianglesidea(1);
			Assert::AreEqual(expected, actual, .1);
		}
		TEST_METHOD(Triangle_Triangle_gettrianglesideb)
		{
			double expected = 2;
			Tests test;
			double actual = test.Triangle_gettrianglesideb(2);
			Assert::AreEqual(expected, actual, .1);
		}
		TEST_METHOD(Triangle_Triangle_gettrianglesidec)
		{
			double expected = 3;
			Tests test;
			double actual = test.Triangle_gettrianglesidec(3);
			Assert::AreEqual(expected, actual, .1);
		}
		TEST_METHOD(Triangle_Triangle_gettriangleheighta)
		{
			double expected = 1;
			Tests test;
			double actual = test.Triangle_gettriangleheighta(1);
			Assert::AreEqual(expected, actual, .1);
		}
		TEST_METHOD(Triangle_Triangle_gettriangleheightb)
		{
			double expected = 2;
			Tests test;
			double actual = test.Triangle_gettriangleheightb(2);
			Assert::AreEqual(expected, actual, .1);
		}
		TEST_METHOD(Triangle_Triangle_gettriangleheightc)
		{
			double expected = 3;
			Tests test;
			double actual = test.Triangle_gettriangleheightc(3);
			Assert::AreEqual(expected, actual, .1);
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
