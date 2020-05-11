#include "pch.h"
#include "CppUnitTest.h"
#include "Tests.h"
#include <iostream>
#include <string>
#include <random>
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace CMathHelper_AutomatedTests
{
	
	TEST_CLASS(CMathHelpe_AutomatedTests)
	{
	public:
		int seed = 127389;
		TEST_METHOD(Circle_Diamater_AutomatedInputs) {
			srand(seed);
			for (int i = 0; i < 10; i++) {
				double value = rand() % 100 + 1.0;
				double expected = value + value; //diameter = radius + radius
				double actual = Tests::Circle_getcirclediameter(value);
				Assert::AreEqual(expected, actual, 0.1); 
			}
		}
		TEST_METHOD(Circle_Area_AutomatedInputs) {
			srand(seed);
			for (int i = 0; i < 10; i++) {
				double value = rand() % 100 + 1.0;
				double expected = value * value * 3.14159; //area = radius * radius * pi
				double actual = Tests::Circle_getcirclearea(value);
				Assert::AreEqual(expected, actual, 1);
			}
		}
		TEST_METHOD(Rectangle_Area_AutomatedInputs) {
			srand(seed);
			for (int i = 0; i < 10; i++) {
				double length = rand() % 100 + 1.0;
				double width = rand() % 100 + 1.0;
				double expected = length * width; //area = length * width
				double actual = Tests::Rectangle_getrectanglearea(length,width);
				Assert::AreEqual(expected, actual, 0.1);
			}
		}
		TEST_METHOD(Rectangle_Perimeter_AutomatedInputs) {
			srand(seed);
			for (int i = 0; i < 10; i++) {
				double length = rand() % 100 + 1.0;
				double width = rand() % 100 + 1.0;
				double expected = length + width + length + width; //perimeter = 2 * (length + width)
				double actual = Tests::Rectangle_getrectangleperimeter(length, width);
				Assert::AreEqual(expected, actual, 0.1);
			}
		}
		TEST_METHOD(Cube_Perimeter_AutomatedInputs) {
			srand(seed);
			for (int i = 0; i < 10; i++) {
				double length = rand() % 100 + 1.0;
				double width = rand() % 100 + 1.0;
				double height = rand() % 100 + 1.0;
				double expected = 4 * (length + width + height); //perimeter = 4 * (length + width + height)
				double actual = Tests::Cube_getcubeperimeter(length, width, height);
				Assert::AreEqual(expected, actual, 0.1);
			}
		}
		TEST_METHOD(Cube_Area_AutomatedInputs) {
			srand(seed);
			for (int i = 0; i < 10; i++) {
				double length = rand() % 100 + 1.0;
				double width = rand() % 100 + 1.0;
				double height = rand() % 100 + 1.0;
				double expected = 2 * ((width * length) + (height*length) + (height*width)); //A = 2(wl+hl+hw)
				double actual = Tests::Cube_getcubearea(length, width, height);
				Assert::AreEqual(expected, actual, 0.1);
			}
		}
		TEST_METHOD(Cube_Volume_AutomatedInputs) {
			srand(seed);
			for (int i = 0; i < 10; i++) {
				double length = rand() % 100 + 1.0;
				double width = rand() % 100 + 1.0;
				double height = rand() % 100 + 1.0;
				double expected = length * width * height; //Volume = length * width * height
				double actual = Tests::Cube_getcubevolume(length, width, height);
				Assert::AreEqual(expected, actual, 0.1);
			}
		}
		TEST_METHOD(Rectangle_AreaGreaterThanPerimeter_Property) {
			srand(seed);
			for (int i = 0; i < 10; i++) {
				double length = rand() % 100 + 4.0; //Property only holds for values of length and width greater than 4
				double width = rand() % 100 + 4.0;
				double area = Tests::Rectangle_getrectanglearea(length, width);
				double perimeter = Tests::Rectangle_getrectangleperimeter(length, width);
				Assert::IsTrue(area > perimeter);
			}
		}
		TEST_METHOD(SSS_TriangleAnglesAddTo180_Property) {
			srand(seed);
			for (int i = 0; i < 10; i++) {
				double sidea = rand() % 100 + 1.0;
				double sideb = sidea;
				double sidec = sideb;//Equilateral triangle, verifying randomly generated sides can form a valid triangle is difficult
				double expected = 180;
				double angleA = Tests::SSS_SSSangleA(sidea, sideb, sidec);
				double angleB = Tests::SSS_SSSangleB(sidea, sideb, sidec);
				double angleC = Tests::SSS_SSSangleC(sidea, sideb, sidec);
				double actual = angleA + angleB + angleC;
				Assert::AreEqual(expected, actual, 1);
			}
		}

	};
}