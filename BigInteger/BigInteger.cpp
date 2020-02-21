#include "BigInteger.h"



BigInteger::BigInteger()
{
	this->sign = false;
	this->mNumber.push_back(0);
}

BigInteger::BigInteger(int num)
{
	this->sign = num < 0;
	this->mNumber.push_back(abs(num));
}

BigInteger::BigInteger(unsigned int num)
{
	sign = false;
	this->mNumber.push_back(sign);
}

BigInteger::BigInteger(long num)
{
	this->sign = num < 0;
	num = (unsigned)abs((long long)num);
	unsigned int* p = (unsigned int*) &num;
	mNumber.push_back(p[0]);
	mNumber.push_back(p[1]);

}
BigInteger::BigInteger(unsigned long num)
{
	unsigned int* p = (unsigned int*)&num;
	mNumber.push_back(p[0]);
	mNumber.push_back(p[1]);
}

BigInteger::BigInteger(const BigInteger & copy)
{
	this->mNumber = copy.mNumber;
	this->sign = copy.sign;
}

BigInteger::~BigInteger()
{
	mNumber.clear();
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


//properties
int BigInteger::countBits() const
{
	int i;
	int mostSigNum = mNumber[mNumber.size() - 1];
	if (mostSigNum == 0)
		i = 0;
	else
	{
		for (i = 7; i >= 0; --i)
		{
			if ((mNumber[mNumber.size() - 1] >> i) == 1)
				break;
		}
		i++;
	}
	
	return sizeof(int) * 8 * (mNumber.size() - 1) + i;
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

bool operator!=(const BigInteger &lhs, const BigInteger &rhs)
{
	return !(lhs == rhs);
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

BigInteger & BigInteger::operator=(const BigInteger &rhs)
{
	this->mNumber = rhs.mNumber;
	this->sign = rhs.sign;
	return *this;
}

