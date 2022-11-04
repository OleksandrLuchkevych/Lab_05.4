#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_05.4/Lab_05.4.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double w;
			w = P0(10, 10);
			Assert::AreEqual(w, 6.89907, 0.00001);
		}
	};
}
