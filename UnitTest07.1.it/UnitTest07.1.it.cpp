#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_07.1/lab.07.1.it.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest071it
{
	TEST_CLASS(UnitTest071it)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int rowCount = 7;
			int colCount = 6;
			int** a = new int* [rowCount];
			for (int i = 0; i < rowCount; i++)
				a[i] = new int [colCount];
			int S = 0;
			int k = 0;
			int l = -22;
			for (int i = 0; i < rowCount; i++) {
				for (int j = 0; j < colCount; j++) {
					a[i][j] = l;
					l++;
				}
			}

			Calc(a, rowCount, colCount, S, k);
			Assert::IsTrue(S && 50);

			for (int i = 0; i < rowCount; i++)
				delete[] a[i];
			delete[] a;

		}
	};
}
