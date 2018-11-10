/*
HongJeongMo C++

Chapter 2_4
Void Type

*/

#include <iostream>


int getChapter2_4()
{
	using namespace std;
	int i = 123;
	float f = 123.456f;

	void * my_void; //pointer variable, reference
	
	my_void = (void*)&i; //casting
	cout << my_void << endl;

	my_void = (void*)&f;
	cout << my_void << endl;

	return 0;
}


