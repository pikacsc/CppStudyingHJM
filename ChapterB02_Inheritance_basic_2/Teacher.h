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

class Teacher : public Person //Teacher is-a Person
{
private:


public:
	Teacher(const std::string & name_in = "No Name")
		: Person(name_in)
	{
	}

	void teach()
	{
		std::cout << getName() << " is teaching " << std::endl;
	}

	friend std::ostream & operator << (std::ostream & out, const Teacher & teacher)
	{
		out << teacher.getName();
		return out;
	}
};