#pragma once


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
	Calc(int init_value);

	Calc& add(int value);

	Calc& sub(int value);

	Calc& mult(int value);

	void print();
};
