#include "pch.h"
#include "CppUnitTest.h"
#include "..\Lab6.3\Lab6.3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest631
{
	TEST_CLASS(UnitTest631)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a[4] = { 0,1,2,3 };
			int min = Min(a, 4);
			Assert::AreEqual(1, min);

		}
	};
}
