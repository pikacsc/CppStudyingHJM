/*
HongJeongMo C++

Chapter 9_9 Copy Constructor

*/

#include <iostream>
#include <cassert>

using namespace std;

class Fraction
{
private:
	int m_numerator;
	int m_denominator;

public:
	Fraction(int num = 0, int den = 1)
		:m_numerator(num), m_denominator(den)
	{
		assert(den != 0);
	}

	Fraction(const Fraction &fraction) // copy constructor, if you set private on copy constructor then can't copy
		: m_numerator(fraction.m_numerator), m_denominator(fraction.m_denominator)
	{
		cout << "Copy Constructor called" << endl;
	}

	friend ostream & operator << (ostream & out, const Fraction & f)
	{
		cout << f.m_numerator << " / " << f.m_denominator << endl;
		return out;
	}
};

Fraction doSomething()
{
	Fraction temp(1, 2);
	cout << &temp << endl;
	return temp;
}



int main()
{
	Fraction frac(3, 5);

	Fraction fr_copy = frac;

	Fraction fr_copy2(Fraction(3, 10)); // no copy constructor called

	cout << frac << " " << fr_copy << " " << fr_copy2 << endl;

	//in release mode, no copy constructor called, because of compiler's RVO(Return Value Optimization)
	Fraction result = doSomething();
	cout << &result << endl;
	cout << result << endl;


	return 0;
}