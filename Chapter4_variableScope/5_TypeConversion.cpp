/*
HongJeongMo C++

Chapter 4_5
Implicit Type Conversion(coersion), Explicit Type Conversion(casting)

*/


#include <iostream>
#include <typeinfo>

int TypeConversion()
{
	using namespace std;

	double a = 123.45;
	int b = a;

	cout << typeid(a).name() << endl; // typeid(variable).name() ¢º return datatype of variable as a string 
	cout << typeid(b).name() << endl; 
	cout << endl;

	float c = 1.0f;
	double d = c; // sizeof(double) > sizeof(float), type promotion


	//numeric conversion, floatingpoint data to integer or size become smaller
	double e = 3; //
	short s = 2; //sizeof(short) < sizeof(int)
	int i = 30000;
	char j = i;

	cout << static_cast<int>(j) << endl;
	cout << endl;


	cout << 5u - 10 << endl;  //4294967291, unsigned 5 - signed 10
	cout << endl;


	cout << 5u - 10u << endl; //4294967291
	
	//compiler conversion perference 
	//int < unsigned int < long < unsigned long < long long < unsigned long long < float < double < long double 
	
	cout << endl;


	int castingA = int(4.0); // c++ style casting 
	int castingB = (int)(4.0); // c style casting
	int castingC = static_cast<int>(4.0); //show up error message when wrong casting, safe

	return 0;
}