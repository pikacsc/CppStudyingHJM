/*
HongJeongMo C++

Chapter 6_9
Pointer Operating, Array Indexing
*/

#include<iostream>

using namespace std;

int main_pointerOperating()
{
	char cValue = 'a';
	char *cPtr = &cValue;

	short sValue = 7;
	short *sPtr = &sValue;

	int value = 7;
	int *ptr = &value;

	double value2 = 7.0;
	double *ptr2 = &value2;

	cout << "char type" << endl;
	cout << uintptr_t(cPtr - 1) << endl;
	cout << uintptr_t(cPtr) << endl;
	cout << uintptr_t(cPtr + 1) << endl;
	cout << uintptr_t(cPtr + 2) << endl;
	cout << endl;


	cout << "short type" << endl;
	cout << uintptr_t(sPtr - 1) << endl;
	cout << uintptr_t(sPtr) << endl;
	cout << uintptr_t(sPtr + 1) << endl;
	cout << uintptr_t(sPtr + 2) << endl;
	cout << endl;


	cout << "int type" << endl;
	cout << uintptr_t(ptr - 1) << endl; 
	cout << uintptr_t(ptr) << endl;
	cout << uintptr_t(ptr + 1) << endl;
	cout << uintptr_t(ptr + 2) << endl;
	cout << endl;

	cout << "double type" << endl;
	cout << uintptr_t(ptr2 - 1) << endl;
	cout << uintptr_t(ptr2) << endl;
	cout << uintptr_t(ptr2 + 1) << endl;
	cout << uintptr_t(ptr2 + 2) << endl;
	cout << endl;


	int array[] = { 9, 7, 5, 3, 1 };
	int *aPtr = array;
	for (int i = 0; i < 5; i++) 
		cout << array[i] << " " << (uintptr_t)&array[i] << endl;
	cout << endl;
	for (int i = 0; i < 5; i++)
		cout << *(aPtr + i) << " " << (uintptr_t)(ptr + i) << endl;
	

	char name[] = "Jack jack";
	const int n_name = sizeof(name) / sizeof(char);

	for (int i = 0; i < n_name; i++)
	{
		cout << *(name + i) << endl;
	}


 	return 0;
}