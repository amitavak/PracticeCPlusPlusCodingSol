#include "pch.h"
#include "CppUnitTest.h"
#include <vector>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace PracticeCPlusPlusCodingTest
{
    TEST_CLASS(FindMaxNumberTests)
    {
    public:
        
        // Structure to hold test data for array-based tests
        struct ArrayTestData
        {
            std::vector<int> input;
            int expected;
            const wchar_t* description;
        };

        TEST_METHOD(TestFindMaxWithCStyleArray_SimpleCase)
        {
            int array[] = { 1, 5, 3, 9, 2 };
            size_t size = sizeof(array) / sizeof(array[0]);
            
            int result = FindMaxNumber::findMax(array, size);
            Assert::AreEqual(9, result, L"Should find maximum value 9 from array", LINE_INFO());
        }

        TEST_METHOD(TestFindMaxWithCStyleArray_SingleElement)
        {
            int array[] = { 42 };
            size_t size = 1;
            
            int result = FindMaxNumber::findMax(array, size);
            Assert::AreEqual(42, result, L"Should return the single element as maximum", LINE_INFO());
        }

        TEST_METHOD(TestFindMaxWithCStyleArray_NegativeNumbers)
        {
            int array[] = { -10, -5, -20, -1 };
            size_t size = sizeof(array) / sizeof(array[0]);
            
            int result = FindMaxNumber::findMax(array, size);
            Assert::AreEqual(-1, result, L"Should find maximum value -1 from negative numbers", LINE_INFO());
        }

        TEST_METHOD(TestFindMaxWithCStyleArray_MixedNumbers)
        {
            int array[] = { -5, 10, -20, 15, 0 };
            size_t size = sizeof(array) / sizeof(array[0]);
            
            int result = FindMaxNumber::findMax(array, size);
            Assert::AreEqual(15, result, L"Should find maximum value 15 from mixed numbers", LINE_INFO());
        }

        TEST_METHOD(TestFindMaxWithCStyleArray_NullPointer)
        {
            Assert::ExpectException<std::invalid_argument>([&]()
            {
                FindMaxNumber::findMax(nullptr, 5);
            }, L"Should throw invalid_argument for null pointer", LINE_INFO());
        }

        TEST_METHOD(TestFindMaxWithCStyleArray_ZeroSize)
        {
            int array[] = { 1, 2, 3 };
            
            Assert::ExpectException<std::invalid_argument>([&]()
            {
                FindMaxNumber::findMax(array, 0);
            }, L"Should throw invalid_argument for zero size", LINE_INFO());
        }
    };
}