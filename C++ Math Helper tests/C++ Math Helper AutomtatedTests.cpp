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
		TEST_METHOD(sample) {
			srand(seed);
			for (int i = 0; i < 10; i++) {
				int value = rand() % 100 + 1;
				double expected = value + value;
				double actual = Tests::Circle_getcirclediameter(value);
				Assert::AreEqual(expected, actual); 
			}
		}
	};
}