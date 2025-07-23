#include "pch.h"
#include "CppUnitTest.h"
#include <vector>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace PracticeCPlusPlusCodingTest
{
	TEST_CLASS(MathTests)
	{
	public:
		
		// Structure to hold test data for integer addition tests
		struct IntegerTestData 
		{
			int input1;
			int input2;
			int expected;
			const wchar_t* description;
		};
		
		// Structure to hold test data for double addition tests
		struct DoubleTestData 
		{
			double input1;
			double input2;
			double expected;
			const wchar_t* description;
		};
		
		TEST_METHOD(TestMathAddIntegers)
		{
			// Test data - multiple sets of inputs and expected outputs
			std::vector<IntegerTestData> testCases = {
				{ 2, 3, 5, L"2 + 3 should equal 5" },
				{ 0, 0, 0, L"0 + 0 should equal 0" },
				{ -1, 1, 0, L"-1 + 1 should equal 0" },
				{ 10, -5, 5, L"10 + (-5) should equal 5" },
				{ 100, 200, 300, L"100 + 200 should equal 300" },
				{ -10, -20, -30, L"-10 + (-20) should equal -30" }
			};
			
			// Run the test for each set of test data
			for (const auto& testCase : testCases) 
			{
				int result = Math::add(testCase.input1, testCase.input2);
				Assert::AreEqual(testCase.expected, result, testCase.description, LINE_INFO());
			}
		}
		
		TEST_METHOD(TestMathAddDoubles)
		{
			// Test data - multiple sets of inputs and expected outputs
			std::vector<DoubleTestData> testCases = {
				{ 2.5, 3.7, 6.2, L"2.5 + 3.7 should equal 6.2" },
				{ 0.0, 0.0, 0.0, L"0.0 + 0.0 should equal 0.0" },
				{ -1.5, 1.5, 0.0, L"-1.5 + 1.5 should equal 0.0" },
				{ 10.25, -5.15, 5.1, L"10.25 + (-5.15) should equal 5.1" },
				{ 3.14159, 2.71828, 5.85987, L"3.14159 + 2.71828 should equal 5.85987" },
				{ -7.8, -2.2, -10.0, L"-7.8 + (-2.2) should equal -10.0" }
			};
			
			// Run the test for each set of test data
			// Use a small tolerance for floating point comparison
			const double tolerance = 0.001;
			for (const auto& testCase : testCases) 
			{
				double result = Math::add(testCase.input1, testCase.input2);
				Assert::AreEqual(testCase.expected, result, tolerance, testCase.description, LINE_INFO());
			}
		}
	};
}