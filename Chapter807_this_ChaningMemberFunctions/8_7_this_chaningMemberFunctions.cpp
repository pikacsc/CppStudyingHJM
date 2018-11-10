/*
HongJeongMo C++

Chapter 8_7
this, chaningMemberFunctions
*/

#include <iostream>


class Simple
{

private:
	int m_id;
public:
	Simple(int id)
	{
		setId(id); // this->setId(id); (*this).setId(id);

		std::cout << this << std::endl;
	}

	void setId(int id)
	{
		m_id = id;
	}

	int getId()
	{
		return m_id;
	}
};


class Calc
{
private:
	int m_value;

public:
	Calc(int init_value)
		: m_value(init_value)
	{}

	Calc& add(int value)
	{
		m_value += value;
		return *this; //return *this, for chaning member functions
	}
	Calc& sub(int value)
	{
		m_value -= value;
		return *this;
	}
	Calc& mult(int value)
	{
		m_value *= value;
		return *this;
	}

	void print()
	{
		std::cout << m_value << std::endl;
	}
};


int main()
{
	Simple s1(1), s2(2);

	s1.setId(2);
	s2.setId(4);

	std::cout << &s1 << " " << &s2 << std::endl;
	std::cout << std::endl;

	Calc cal(10);

	cal.add(10).sub(1).mult(2).print(); //chaning member functions

	return 0;
}