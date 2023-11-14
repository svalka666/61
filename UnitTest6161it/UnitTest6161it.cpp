#include "pch.h"
#include "CppUnitTest.h"
#include "../61/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest6161it
{
	TEST_CLASS(UnitTest6161it)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			const int n = 5;
			int r[n] = { 2, 6,13,18,20 };
			int expS = 0;
			int k = 0;
			for (int i = 0; i < n; i++) {
				if (!((r[i] % 2 == 0) || (r[i] % 13 == 0)))
				{
					expS += r[i];
					r[i] = 0;
					k++;

				}
			}
			int s = Sum(r, n, k);
			Assert::AreEqual(s, expS);

		}
	};
}
