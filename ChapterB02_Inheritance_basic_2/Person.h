/*
HongJeongMo C++

Chapter B_2 Inheritance(is-a relationship)_basic_2

in this project, Teacher, Student has same name functions and variable

so we gonna make base class named Person and is-a relationship(Inheritance)

Student is-a Person

Teacher is-a Person

*/
#pragma once
#include <string>
#include <iostream>

class Person
{
private:
	std::string m_name;

public:
	Person(const std::string & name_in = "No Name") 
		: m_name(name_in) //for initializing m_name
	{}

	//common functions
	void setName(const std::string & name_in)
	{
		m_name = name_in;
	}

	std::string getName() const
	{
		return m_name;
	}

	void doNothing() const
	{
		std::cout << m_name << " is doing nothing " << std::endl;
	}

};
