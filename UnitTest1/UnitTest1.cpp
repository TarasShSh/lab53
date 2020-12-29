#include "pch.h"
#include "CppUnitTest.h"
#include "../lab53/lab53.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			//double u = f(6.055);
			//Assert::AreEqual(u, 0.774);
			double u = f(60.);
			Assert::AreEqual(floor(u), floor(2.62438));
		}
	};
}
