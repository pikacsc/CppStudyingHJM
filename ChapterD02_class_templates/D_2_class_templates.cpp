/*
HongJeongMo C++

Chapter D_2 class templates

*/

#include "MyArray.h"

int main()
{
	MyClass::MyArray<double> my_array(10);

	for (int i = 0; i < my_array.getLength(); ++i)
		my_array[i] = i * 0.5;
	my_array.print();

	MyClass::MyArray<int> my_array2(10);
	for (int i = 0; i < my_array.getLength(); ++i)
		my_array[i] = i * 10;
	my_array.print();


	return 0;
}