#include "stdafx.h"
#include "CppUnitTest.h"
#include "../BigInteger/BigInteger.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestOperators
{		
	
	TEST_CLASS(TestEquivalance)
	{
	public:
		
		TEST_METHOD(TestTrueValues)
		{
			Assert::IsTrue(BigInteger() == BigInteger(-0));
			Assert::IsTrue(BigInteger() == BigInteger(0));
			Assert::IsTrue(BigInteger(-0) == BigInteger(0));
			Assert::IsTrue(BigInteger(100) == BigInteger(100));
			Assert::IsTrue(BigInteger(-100) == BigInteger(-100));

		}
		TEST_METHOD(TestFalseValues)
		{
			Assert::IsFalse(BigInteger() == BigInteger(100));
			Assert::IsFalse(BigInteger(100) == BigInteger(-100));
			
		}
		//add more test as more constructors are added
	};

	TEST_CLASS(TestAssignment)
	{
		TEST_METHOD(TestNormalAssignment)
		{
			BigInteger bint = BigInteger(4);
			Assert::IsTrue(bint == BigInteger(4));
			BigInteger oint(bint);
			Assert::IsTrue(oint == bint);
		}
	};
}