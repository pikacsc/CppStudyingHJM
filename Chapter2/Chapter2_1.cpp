/*
HongJeongMo C++

Chapter 2_1
FloatingPoint data type
*/

#include <iostream>

int getChapter2_1()
{
	using namespace std;
	
	bool bValue = false;
	char chValue = 65;
	float fValue = 3.141592f; //In literal of float, Don't forget 'f' end of the line  
	double dValue = 3.141592;
	auto aValue = 3.141592; 
	auto aValue2 = 3.141592f;


	cout << "bool : " << bValue << "  size : " << sizeof(bValue) << "byte" << endl;

	cout << "char : " << chValue << "  size : " << sizeof(chValue) << "byte" << endl;

	cout << "float : " << fValue << "  size : " << sizeof(fValue) << "byte" << endl;

	cout << "double : " << dValue << "  size : " << sizeof(dValue) << "byte" << endl;

	cout << "auto : " << aValue << "  size : " << sizeof(aValue) << "byte" << endl;


	//not like C, in C++, you can initialize variable 3 ways

	int x = 123; //common way

	int y(123); //direct initialization

	int z{ 123 }; //uniform initialization, nowadays recommended for OOP(Object Oriendted Programming)
	
	
	return 0;
}


