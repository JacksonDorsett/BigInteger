#pragma once
#include <vector>
class BigInteger
{
private:
	std::vector<int> mNumber;
	bool sign;
public:
	BigInteger();
	BigInteger(int num);
	BigInteger(unsigned int num);
	~BigInteger();
	
	//Equivalance operators
	friend bool operator==(const BigInteger &lhs, const BigInteger &rhs);
	friend bool operator>(const BigInteger &lhs, const BigInteger &rhs);
	friend bool operator<(const BigInteger &lhs, const BigInteger &rhs);
	friend bool operator>=(const BigInteger &lhs, const BigInteger &rhs);
	friend bool operator<=(const BigInteger &lhs, const BigInteger &rhs);

	//Static Operator Methods
	static BigInteger Add(const BigInteger &lhs,const BigInteger &rhs);
	static BigInteger Subtract(const BigInteger &lhs, const BigInteger &rhs);
	static BigInteger Multiply(const BigInteger &lhs, const BigInteger &rhs);
	static BigInteger Divide(const BigInteger &lhs, const BigInteger &rhs);
	

};

bool operator==(const BigInteger &lhs, const BigInteger &rhs);
bool operator>(const BigInteger &lhs, const BigInteger &rhs);
bool operator<(const BigInteger &lhs, const BigInteger &rhs);
bool operator>=(const BigInteger &lhs, const BigInteger &rhs);
bool operator<=(const BigInteger &lhs, const BigInteger &rhs);