#include "pch.h"
#include "CppUnitTest.h"
#include "..\C++ Math Helper\Tests.h"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestClass
{
	TEST_CLASS(TestClass)
	{
	public:
		TEST_METHOD(AASfindangleB)
		{
			Tests test;
			double actual = test.AASfindangleB();
			Assert::AreEqual(50.0, actual);
		}
	};
}
