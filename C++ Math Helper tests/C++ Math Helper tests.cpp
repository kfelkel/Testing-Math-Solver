#include "pch.h"
#include "CppUnitTest.h"
#include "Tests.h"
#include <iostream>
#include <string>
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace CMathHelpertests
{
	TEST_CLASS(CMathHelpertests)
	{
	public:
		const double pi = 3.14159;
		
		TEST_METHOD(Test_AAS_AASangleB)
		{
			double expected = 50;
			Tests test;
			double actual = test.AAS_AASangleB(120, 10);
			Assert::AreEqual(expected, actual);
		}
		TEST_METHOD(AASfindsidea)
		{
			double expected = 9.9;
			Tests test;
			double actual = test.AAS_AASsidea(120, 10, 2);
			Assert::AreEqual(expected, actual, .1);
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
			double actual = test.SAS_SASsidea(2, 3, 47);
			Assert::AreEqual(expected, actual, .1);
		}
		TEST_METHOD(Test_SAS_SASangleB)
		{
			double expected = 28.9;
			Tests test;
			double actual = test.SAS_SASangleB(4, 2, 3);
			Assert::AreEqual(expected, actual, .1);
		}
		TEST_METHOD(Test_SAS_SASangleC)
		{
			double expected = 46.5;
			Tests test;
			double actual = test.SAS_SASangleC(4, 2, 3);
			Assert::AreEqual(expected, actual, .1);
		}
		TEST_METHOD(Test_SSA_SSAangleC)
		{
			double expected = 37.5;
			Tests test;
			double actual = test.SSA_SSAangleC(24, 2, 3);
			Assert::AreEqual(expected, actual, .1);
		}
		TEST_METHOD(Test_SSA_SSAangleA)
		{
			double expected = 90.0;
			Tests test;
			double actual = test.SSA_SSAangleA(24, 66);
			Assert::AreEqual(expected, actual, .1);
		}
		TEST_METHOD(Test_SSA_SSAsidea)
		{
			double expected = 1.3;
			Tests test;
			double actual = test.SSA_SSAsidea(24, 66, 3);
			Assert::AreEqual(expected, actual, .1);
		}
		TEST_METHOD(Test_SSS_SSSangleA)
		{
			double expected = 28.9;
			Tests test;
			double actual = test.SSS_SSSangleA(2, 3, 4);
			Assert::AreEqual(expected, actual, .1);
		}
		TEST_METHOD(Test_SSS_SSSangleB)
		{
			double expected = 46.5;
			Tests test;
			double actual = test.SSS_SSSangleB(2, 3, 4);
			Assert::AreEqual(expected, actual, .1);
		}
		TEST_METHOD(Test_SSS_SSSangleC)
		{
			double expected = 104.4;
			Tests test;
			double actual = test.SSS_SSSangleC(2, 3, 4);
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

		TEST_METHOD(Test_Triangle_gettrianglearea) {
			double expected = 14;
			Tests test;
			double actual = test.Triangle_gettrianglearea(7, 4);
			Assert::AreEqual(expected, actual, 0.1);
		}
		TEST_METHOD(Test_Triangle_gettriangleperimeter) {
			double expected = 24;
			Tests test;
			double actual = test.Triangle_gettriangleperimeter(4, 8, 12);
			Assert::AreEqual(expected, actual, 0.1);
		}
		TEST_METHOD(Test_Triangle_triangleheighta) {
			double expected = 1.8;
			Tests test;
			double actual = test.Triangle_triangleheighta(63, 29, 4);
			Assert::AreEqual(expected, actual, 0.1);
		}
		TEST_METHOD(Test_Triangle_triangleheightb) {
			double expected = .9;
			Tests test;
			double actual = test.Triangle_triangleheightb(34, 29, 3);
			Assert::AreEqual(expected, actual, 0.1);
		}
		TEST_METHOD(Test_Triangle_triangleheightc) {
			double expected = 0.9;
			Tests test;
			double actual = test.Triangle_triangleheightc(34, 29, 3);
			Assert::AreEqual(expected, actual, 0.1);
		}

		TEST_METHOD(Test_Triangle_triangleOstreamOoperator) {
			Tests test;
			std::string expected = "\n\tSide A: \t3.00\n\tSide B: \t3.00\n\tSide C: \t3.00\n\n\tAngle A: \t60.00\n\tAngle B: \t60.00\n\tAngle C: \t60.00\n\n\tHeight A: \t2.60\n\tHeight B: \t2.60\n\tHeight C: \t2.60\n\n\tArea: \t\t3.90\n\tPerimeter: \t9.00";
			std::string actual = test.Triangle_ostreamOperator(3, 3, 3, 60, 60, 60);
			//std::cout << "Hello world";
			Assert::AreEqual(expected, actual);
		}
		//Rectangle
		TEST_METHOD(Test_Rectangle_getrectanglelength) {
			double expected = 10;
			Tests test;
			double actual = test.Rectangle_getrectanglelength(10);
			Assert::AreEqual(expected, actual, 0.1);
		}
		TEST_METHOD(Test_Rectangle_getrectanglewidth) {
			double expected = 15;
			Tests test;
			double actual = test.Rectangle_getrectanglewidth(15);
			Assert::AreEqual(expected, actual, 0.1);
		}
		TEST_METHOD(Test_Rectangle_getrectanglearea) {
			double expected = 72;
			Tests test;
			double actual = test.Rectangle_getrectanglearea(8, 9);
			Assert::AreEqual(expected, actual, 0.1);
		}
		TEST_METHOD(Test_Rectangle_getrectangleperimeter) {
			double expected = 18;
			Tests test;
			double actual = test.Rectangle_getrectangleperimeter(4, 5);
			Assert::AreEqual(expected, actual, 0.1);
		}
		//solveLinear
		TEST_METHOD(Test_solveLinear_solveEquation)
		{
			std::string expected = "x=1";
			Tests test;
			std::string actual = test.solveLinear_solveEquation("5x-2=3");
			Assert::AreEqual(expected, actual);
		}
		//Circle
		TEST_METHOD(Test_Circle_circleDiameter)
		{
			double expected = 50;
			Tests test;
			double actual = test.Circle_getcirclediameter(25);
			Assert::AreEqual(expected, actual, 0.1);
		}
		TEST_METHOD(Test_Circle_getcirclecircumference)
		{
			double expected = 50*pi;
			Tests test;
			double actual = test.Circle_getcirclecircumference(25);
			Assert::AreEqual(expected, actual, 0.1);
		}
		TEST_METHOD(Test_Circle_circleradius)
		{
			double expected = 35;
			Tests test;
			double actual = test.Circle_getcircleradius(35);
			Assert::AreEqual(expected, actual, 0.1);
		}
		TEST_METHOD(Test_Circle_getcirclearea)
		{
			int radius = 12;
			double expected = radius * radius * pi;
			Tests test;
			double actual = test.Circle_getcirclearea(radius);
			Assert::AreEqual(expected, actual, 0.1);
		}

		//Ellipse
		TEST_METHOD(Test_Ellipse_getellipsemajoraxis)
		{
			double majorAxis = 5;
			double minorAxis = 3;
			double expected = 5;
			double actual = Tests::Ellipse_getellipsemajoraxis(majorAxis, minorAxis);
			Assert::AreEqual(expected, actual, 0.1);
		}
		TEST_METHOD(Test_Ellipse_getellipseminoraxis)
		{
			double majorAxis = 5;
			double minorAxis = 3;
			double expected = 3;
			double actual = Tests::Ellipse_getellipseminoraxis(majorAxis, minorAxis);
			Assert::AreEqual(expected, actual, 0.1);
		}
		TEST_METHOD(Test_Ellipse_getellipsefoci)
		{
			double majorAxis = 5;
			double minorAxis = 3;
			double expected = 4;
			double actual = Tests::Ellipse_getellipsefoci(majorAxis, minorAxis);
			Assert::AreEqual(expected, actual, 0.1);
		}
		TEST_METHOD(Test_Ellipse_getellipsedirectrix)
		{
			double majorAxis = 5;
			double minorAxis = 3;
			double expected = 6.25;
			double actual = Tests::Ellipse_getellipsedirectrix(majorAxis, minorAxis);
			Assert::AreEqual(expected, actual, 0.1);
		}
		TEST_METHOD(Test_Ellipse_getellipsevertex)
		{
			double majorAxis = 5;
			double minorAxis = 3;
			double expected = 5;
			double actual = Tests::Ellipse_getellipsevertex(majorAxis, minorAxis);
			Assert::AreEqual(expected, actual, 0.1);
		}		
		TEST_METHOD(Test_Ellipse_getellipsedarea)
		{
			double majorAxis = 5;
			double minorAxis = 3;
			double expected = 47.12;
			double actual = Tests::Ellipse_getellipsearea(majorAxis, minorAxis);
			Assert::AreEqual(expected, actual, 0.1);
		}

	};
		
}
