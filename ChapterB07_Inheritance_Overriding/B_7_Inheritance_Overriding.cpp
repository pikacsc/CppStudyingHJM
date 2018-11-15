/*
HongJeongMo C++

Chapter B_7 Inherited Functions Overriding

*/

#include <iostream>
using namespace std;

class Base
{
protected:
	int m_i;

public:
	Base(int value)
		: m_i(value)
	{}

	void print()
	{
		cout << "I'm base" << endl;
	}

	friend std::ostream & operator << (std::ostream & out, const Base &b)
	{
		out << "This is base output" << endl;
		return out;
	}
};


class Derived : public Base
{
private:
	double m_d;
	
public:
	Derived(int value)
		: Base(value)
	{}

	void print() //Overriding
	{
		//but sometimes, if you wanna call base function then you can do like this
		Base::print(); 
		cout << "I'm derived" << endl;
	}

	friend std::ostream & operator << (std::ostream & out, const Derived &b)
	{
		cout << static_cast<Base>(b); // call base function 
		out << "This is derived output" << endl;
		return out;
	}

};


int main()
{
	Base base(5);
	cout << base;

	Derived derived(7);
	cout << derived;

	return 0;
}