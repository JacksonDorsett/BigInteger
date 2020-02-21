#include "BigInteger.h"



BigInteger::BigInteger()
{
	this->sign = false;
	this->mNumber.push_back(0);
}

BigInteger::BigInteger(int num)
{
	this->sign = num >= 0;
	this->mNumber.push_back(abs(num));
}

BigInteger::BigInteger(unsigned int num)
{

}

BigInteger::~BigInteger()
{
}

BigInteger BigInteger::Add(const BigInteger & lhs, const BigInteger & rhs)
{
	return BigInteger();
}

BigInteger BigInteger::Subtract(const BigInteger & lhs, const BigInteger & rhs)
{
	return BigInteger();
}

BigInteger BigInteger::Multiply(const BigInteger & lhs, const BigInteger & rhs)
{
	return BigInteger();
}

BigInteger BigInteger::Divide(const BigInteger & lhs, const BigInteger & rhs)
{
	return BigInteger();
}

bool operator==(const BigInteger & lhs, const BigInteger & rhs)
{
	if (lhs.mNumber.size() != lhs.mNumber.size())
	{
		return false;
	}
	else
	{
		if (lhs.sign != rhs.sign)
		{
			return false;
		}
		for (int i = 0; i < lhs.mNumber.size(); ++i)
		{
			if (lhs.mNumber[i] != rhs.mNumber[i])
				return false;
		}
	}
	return true;
}

bool operator>(const BigInteger & lhs, const BigInteger & rhs)
{
	return false;
}

bool operator<(const BigInteger & lhs, const BigInteger & rhs)
{
	return false;
}

bool operator>=(const BigInteger & lhs, const BigInteger & rhs)
{
	return false;
}

bool operator<=(const BigInteger & lhs, const BigInteger & rhs)
{
	return false;
}
