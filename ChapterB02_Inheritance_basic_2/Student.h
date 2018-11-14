/*
HongJeongMo C++

Chapter B_2 Inheritance(is-a relationship)_basic_2

in this project, Teacher, Student has same name functions and variable

so we gonna make base class named Person and is-a relationship(Inheritance)

Student is-a Person

Teacher is-a Person

*/
#pragma once
#include "Person.h"


class Student : public Person //Student is-a Person
{
private:
	int m_intel; // intelligence;

public:
	Student(const std::string & name_in = "No Name", const int & intel_in = 0)
		//: m_name(name_in), m_intel(intel_in) // X  , m_name is belong to base class, so base class should initialize it not derived class
		:Person(name_in), m_intel(intel_in)  // O
	{}

	void setIntel(const int & intel_in)
	{
		m_intel = intel_in;
	}

	int getIntel()
	{
		return m_intel;
	}

	void study()
	{
		std::cout << getName() << " is studying " << std::endl;
	}

	friend std::ostream & operator << (std::ostream & out, const Student & student)
	{
		out << student.getName() << " " << student.m_intel;
		return out;
	}
};