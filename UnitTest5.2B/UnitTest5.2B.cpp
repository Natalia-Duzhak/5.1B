#include "pch.h"
#include "CppUnitTest.h"
#include "../Project5.1B/Money.cpp"
#include "../Project5.1B/MyException.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest52B
{
	TEST_CLASS(UnitTest52B)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Money a(0,0,0,0,0,0,0,0,0,0,0);
			bool k = a.getk500();
			Assert::AreEqual(k, false);
		}
	};
}
