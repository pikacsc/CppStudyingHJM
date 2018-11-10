/*
HongJeongMo C++

Chapter 8_9
class, const member function
*/


#include <iostream>
#include "Something.h"

void print(Something st) // if you use this function then copy constructor will active
{
	std::cout << &st << std::endl;
	std::cout << st.m_value << std::endl;
}

void print2(const Something &st) // no copy
{
	std::cout << &st << std::endl;
	std::cout << st.getValue() << std::endl;
}


int main()
{
	using namespace std;
	const Something something; //if you declare const class then all variables of class will be const variables
	//something.setValue(3);  // not available


	cout << &something << endl;
	print(something);
	cout << something.getValue() << endl;
	cout << endl;

	something.getValue2();

	const Something something2;
	something2.getValue2(); // can't change, because of const


	return 0;
}