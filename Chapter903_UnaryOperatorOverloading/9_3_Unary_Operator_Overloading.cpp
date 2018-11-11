/*
HongJeongMo C++

Chapter 9_3 Unary Operator Overloading

*/

#include <iostream>

using namespace std;

class Cents
{
private:
	int m_cents;

public:
	Cents(int cents = 0) 
	{
		m_cents = cents;
	}

	int getCents() const
	{
		return m_cents;
	}

	int & getCents()
	{
		return m_cents;
	}

	Cents operator - () const
	{
		return Cents(-m_cents);
	}

	bool operator ! () const
	{
		return (m_cents%2 == 0) ? true : false;
	}



	friend std::ostream& operator << (std::ostream &out, const Cents &cents)  // you can use it for fstream
	{
		out << cents.m_cents;
		return out;
	}

};


int main()
{
	Cents cents1(6);
	Cents cents2(0);

	cout << cents1 << endl;
	cout << -cents1 << endl;
	cout << -Cents(-10) << endl;

	cout << !Cents(10) << endl;
	cout << !Cents(7) << endl;
	return 0;
}