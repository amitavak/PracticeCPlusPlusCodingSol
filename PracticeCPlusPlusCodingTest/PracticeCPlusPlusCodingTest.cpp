#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace PracticeCPlusPlusCodingTest
{
	TEST_CLASS(PracticeCPlusPlusCodingTest)
	{
	public:
		
		TEST_METHOD(DummyTest)
		{
			Assert::AreEqual(1, 1, L"1 should be equal to 1", LINE_INFO());
		}
	};
}
