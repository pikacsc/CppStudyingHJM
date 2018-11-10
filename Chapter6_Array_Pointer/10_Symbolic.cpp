/*
HongJeongMo C++

Chapter 6_10

const char*, Symbolic

*/

#include <iostream>

using namespace std;

const char* getName()
{
	return "Jack Jack";
}

int main_constChar()
{

	//char name[] = "Jack Jack";
	const char *name = "Jack Jack";   
	const char *name2 = getName();
	
	int int_arr[5] = { 1,2,3,4,5 };
	char char_arr[] = "Hello, World!";
	char c = 'q';

	cout << &c << endl;
	cout << int_arr << endl;
	cout << char_arr << endl;
	cout << name << endl;
	cout << (uintptr_t)name << endl;
	cout << (uintptr_t)name2 << endl;



	return 0;
}