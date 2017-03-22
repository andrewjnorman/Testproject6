#include "stdafx.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

 class __declspec(dllimport) firstClass {

	 public:
		 int x;
		 int fn_1() { return 1; };
	 };

namespace Test_for_PlayTest
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			firstClass y;

			int z = y.fn_1();
			// TODO: Your test code here

			Assert::AreEqual(1, z, L"message", LINE_INFO());
		}

	};
}