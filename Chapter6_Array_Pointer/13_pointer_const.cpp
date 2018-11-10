/*
HongJeongMo C++

Chapter 6_13

pointer and const

const means 
*/

#include <iostream>

using namespace std;

int main_pointer_and_const()
{
	int number = 3;
	int anotherNumber = 4;
	const int constNumber = 5;
	
	
	int * ptr0 = &number;
	*ptr0 = 4; // O
	ptr0 = &anotherNumber; // O, 'int*' can point 'int'
	//ptr0 = &constNumber; // X , 'int*' can't point 'const int'

	const int* ptr1 = &number; // O
	//*ptr1 = 5; // X, ptr1 can't point 'const int'
	ptr1 = &anotherNumber; // O
	ptr1 = &constNumber;// O

	//int *const ptr2;// X, '*const' should be initialized
	int *const ptr2 = &number; // O
	*ptr2 = 6; // O
	//ptr2 = &anotherNumber; // X, '*const' can't change pointing variable


	const int *const ptr3 = &number;
	//*ptr3 = 10; // X
	//ptr3 = &anotherNumber;// X

	return 0;
}