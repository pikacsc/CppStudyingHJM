#pragma once
#include <string>

class Something
{
public:
	Something()
	{}


	Something(const Something& st_in) // copy constructor
	{
		m_value = st_in.m_value;
	}


	int m_value = 0;
	std::string m_string = "default";

	void setValue(int value);

	int getValue() const;


	//const overloading
	const std::string& getValue2() const;

	std::string& getValue2();

};