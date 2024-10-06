#include "pch.h"
#include "CppUnitTest.h"
#include "../55555555/55555555.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest55plachu
{
	TEST_CLASS(UnitTest55plachu)
	{
	public:
        TEST_METHOD(TestBinomial)
        {
            Assert::AreEqual(binomial(5, 2), 10);
            Assert::AreEqual(binomial(6, 3), 20);
            Assert::AreEqual(binomial(7, 0), 1);
            Assert::AreEqual(binomial(7, 7), 1);
        }

        TEST_METHOD(TestFibonacci)
        {
            Assert::AreEqual(fib(0), 1);
            Assert::AreEqual(fib(1), 1);
            Assert::AreEqual(fib(2), 2);
            Assert::AreEqual(fib(3), 3);
            Assert::AreEqual(fib(4), 5);
            Assert::AreEqual(fib(5), 8);
            Assert::AreEqual(fib(6), 13);
            Assert::AreEqual(fib(7), 21);
    
		}
	};
}
