/*
HongJeongMo C++

Chapter D_3 Non-type Parameters

*/

#include "MyArray.h"

int main()
{
	int i = 100; 
	MyClass::MyArray<double, 100> my_array; //std::array<double, 100>
	//MyClass::MyArray<double, i> my_array; // X


	for (int i = 0; i < my_array.getLength(); ++i)
		my_array[i] = i + 65;
	my_array.print();
	return 0;
}