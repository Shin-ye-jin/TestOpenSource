#include "pch.h"
#include "CppUnitTest.h"

#include "..//TestOpenSource/Triangle.cpp"


std::wstring ToString(struct Triangle t)
{
	return std::to_wstring(t.width) + std::wstring(L"*") + std::to_wstring(t.height);
}
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TriangleArea)
		{
			struct Triangle t1, result, compare;
			t1.width = 1;
			t1.height = 4;

			result = Triangle_area(t1);
			compare.width = 2;
			compare.height = 3;
			Assert::AreEqual(result, compare);
			
		}
	};
}
