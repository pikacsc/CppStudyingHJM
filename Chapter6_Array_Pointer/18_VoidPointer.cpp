/*
HongJeongMo C++

Chapter 6_18
Void Pointer(Generic Pointer)
*/

#include <iostream>

enum Type
{
	INT,
	FLOAT,
	CHAR
};



int main_voidPointer()
{
	using namespace std;

	int i = 5;
	float f = 3.0f;
	char c = 'a';

	void *ptr = nullptr;
	int *ptr_i = nullptr;

	ptr = &i;
	ptr = &f;
	ptr = &c;

	ptr_i = &i;
//	ptr_i = &f; // X
//	ptr_i = &c; // X

	cout << ptr_i << endl;
	cout << ptr_i + 1 << endl; //O,ptr_i is 'int' type so you can move 4byte per +1 
	cout << ptr << endl;

	//because of 'void' type, so it's undefined datasize 
//	cout << ptr + 1 << endl; //x, 
//	cout << *ptr << endl; //x

	cout << &f << " " << ptr << endl;

	Type type = FLOAT;
	if (type == FLOAT)
		cout << "float type :"<< *static_cast<float*>(ptr) << endl;
	else if (type == INT)
		cout << "int type :" << *static_cast<int*>(ptr) << endl;
	else if (type = CHAR)
		cout << "char type :" << *static_cast<float*>(ptr) << endl;
	else
		cout << "undifined datatype " << endl;

	return 0;
}
