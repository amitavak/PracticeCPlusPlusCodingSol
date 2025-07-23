#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace PracticeCPlusPlusCodingTest
{
	TEST_CLASS(MathTests)
	{
	public:
		
		TEST_METHOD(TestMathAddIntegers)
		{
			// Test the Math::add method with integers
			int result = Math::add(2, 3);
			Assert::AreEqual(5, result, L"2 + 3 should equal 5", LINE_INFO());
		}
		
		TEST_METHOD(TestMathAddDoubles)
		{
			// Test the Math::add method with doubles
			double result = Math::add(2.5, 3.7);
			Assert::AreEqual(6.2, result, 0.001, L"2.5 + 3.7 should equal 6.2", LINE_INFO());
		}
	};
}