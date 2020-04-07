#include "pch.h"
#include "CppUnitTest.h"
#include "Tests.h"
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
	};
}
