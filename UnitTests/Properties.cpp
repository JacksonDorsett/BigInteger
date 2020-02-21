#include "stdafx.h"
#include "CppUnitTest.h"
#include "../BigInteger/BigInteger.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTests
{
	TEST_CLASS(TestProperties)
	{
		TEST_METHOD(TestBitLength)
		{
			Assert::AreEqual(2, BigInteger(3).countBits());
			Assert::AreEqual(2, BigInteger(2).countBits());
			Assert::AreEqual(1, BigInteger(1).countBits());
			Assert::AreEqual(0, BigInteger().countBits());

			//needs test cases for numbers that require 2 ints to represent...
			//Implement after Addition is implemented
		}
	};
}