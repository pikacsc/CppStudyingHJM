/*
HongJeongMo C++

Chapter B_6 derived class function

*/

#include <iostream>

using namespace std;

class Base
{
protected: //use protected
	int m_value;

public:
	Base(int value)
		:m_value(value)
	{

	}

	//you can make getter setter function here but, performance can be lower down, 
	//so sometimes, use protected specifier
};

class Derived : public Base
{
public:
	Derived(int value)
		: Base(value)
	{

	}

	void setBaseValue(int value)
	{
		Base::m_value = value;
		//do some work with the variables defined in Derived
	}

	int getBaseValue()
	{
		return Base::m_value;
	}
};

int main()
{
	cout << Derived(2).getBaseValue() << endl;
	return 0;
}