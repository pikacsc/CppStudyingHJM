/*
HongJeongMo C++

Chapter 8_8
headerfile
*/

#include "Calc.h"
int main()
{
	Simple s1(1), s2(2);

	s1.setId(2);
	s2.setId(4);

	cout << &s1 << " " << &s2 << endl;
	cout << endl;

	Calc cal(10);

	cal.add(10).sub(1).mult(2).print(); //chaning member functions

	return 0;
}