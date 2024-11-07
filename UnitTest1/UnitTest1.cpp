#include "pch.h"
#include "CppUnitTest.h"
#include "../LR8.1 string/LR8.1 string.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			string t = "while123while";
			int result = CountWord(t);
			int expected = 2;
			Assert::AreEqual(result, expected);
		}
		TEST_METHOD(TestMethod2)
		{
			string t = "what the fox says";
			int result1 = CountLet(t, "s");
			int result2 = CountLet(t, "i");
			int expected1 = 2;
			int expected2 = 0;
			Assert::AreEqual(result1, expected1);
			Assert::AreEqual(result2, expected2);
		}
		TEST_METHOD(TestMethod3)
		{
			string t = "while123while";
			string result = Change(t);
			string expected = "**123**";

			Assert::AreEqual(result, expected);
		}
	};
}
