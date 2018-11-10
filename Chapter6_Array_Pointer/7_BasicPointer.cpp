/*
HongJeongMo C++

Chapter 6_7
Basic Pointer
pointer: the variable which has memory address as a value
*/


#include <iostream>

using namespace std;


struct Something
{
	int a, b, c, d;
};

int main_basicPointer()
{
	int x = 5; 
	double d = 1.0;

	int * ptr_x = &x;
	double *ptr_d = &d;

	cout << x << endl;
	cout << &x << endl; // & : address of operator
	cout << (int)&x << endl; 

	//de-reference operator (*)
	cout << *&x << endl; // *&x == x


	cout << ptr_x << endl;
	cout << *ptr_x << endl;
	cout << endl;

	cout << ptr_d << endl;
	cout << *ptr_d << endl;
	cout << endl;

	Something *ptr_s;

	cout << sizeof(Something) << endl;
	cout << sizeof(ptr_s) << endl;
	cout << endl;


	return 0;
}