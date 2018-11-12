/*
HongJeongMo C++

Chapter 9_10 Converting Constructor, explicit, delete

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
	Fraction(char) = delete; // block contructor(char)

	explicit Fraction(int num = 0, int den = 1) // explicit, block converting constructor
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



void doSomething(Fraction frac)
{
	cout << frac << endl;
}



int main()
{
	//Fraction frac('c'); // X , because of Fraction(char) = delete;
	Fraction frac2(7);

	doSomething(frac2);

	return 0;
}