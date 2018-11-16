/*
HongJeongMo C++

Chapter D_4 Function Templates Specialization

*/

#pragma once

#include <iostream>

template <class T>
class Storage
{
private:
	T m_value;

public:
	Storage(T value)
	{
		m_value = value;
	}

	~Storage()
	{
	}

	void print()
	{
		std::cout << m_value << '\n';
	}
};

template<> //Member Function Templates Specialization
void Storage<double>::print()
{
	std::cout << "Double Type";
	std::cout << std::scientific << m_value << '\n';
}