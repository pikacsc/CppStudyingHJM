/*
HongJeongMo C++

Chapter B_2 Inheritance(is-a relationship)_basic_2

in this project, Teacher, Student has same name functions and variable

so we gonna make base class named Person and is-a relationship(Inheritance)

Student is-a Person

Teacher is-a Person

*/

#include "Student.h"
#include "Teacher.h"

int main()
{
	Student student("jack");
	student.setName("Jacky");
	std::cout << student.getName() << std::endl;
	
	Teacher teacher1("Dr. H");
	teacher1.setName("Dr. K");
	std::cout << teacher1.getName() << std::endl;

	std::cout << student << std::endl;
	std::cout << teacher1 << std::endl;

	student.doNothing();
	teacher1.doNothing();

	student.study();
	teacher1.teach();

	Person person;
	person.setName("Mr. Incredible");
	person.doNothing();
	//person.study(); // X
	//person.teach(); // X
	return 0;
}