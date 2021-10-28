#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\Юра\source\repos\5.2\5.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest52
{
	TEST_CLASS(UnitTest52)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int result = A(3., 2., 3.);
			Assert::AreEqual(result, 16);
		}
	};
}