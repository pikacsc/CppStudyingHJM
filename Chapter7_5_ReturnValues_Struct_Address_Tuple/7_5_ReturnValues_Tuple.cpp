/*
HongJeongMo C++

Chapter 7_5
Returning Values, Sturct, Address, Tuple

*/


#include <iostream>
#include <array>
#include <tuple>

using namespace std;

tuple<int, double> getTuple() //std::tutple<return type, return type2> ¢º custom datatype
{
	int a = 10;
	int d = 3.14;
	return make_tuple(a, d);
}

struct S
{
	int a, b, c, d;
};


S getStrc()
{
	S my_s{ 1,2,3,4 };
	return my_s;
}


int& get(std::array<int, 100>& my_array, int ix)
{
	return my_array[ix];
}

int getValue(int x)
{
	int value = x * 2;
	return value;
}

int* getValue2(int x)
{
	int value = x * 2;
	return &value;
}

int& getValue3(int x)
{
	int value = x * 2;
	return value;
}


int* allocateMemory(int size)
{
	return new int[size];  //not safe, new and delete should be in same scope, otherwise, too complicated
}

int main()
{
	int value = getValue(3);
	int value2 = *getValue2(3); //not safe, return &value of getValue2() would be destroyed  
	int *value3 = getValue2(3); //not safe, variable already destroyed so it can be changed to garbage
	
	cout << value << endl;
	
	//no error, but not safe either
	cout << value2 << endl;
	cout << *value3 << endl;
	cout << endl;

	int *array = new int[10];

	int *array2 = allocateMemory(1024); //not safe, new and delete should be in same scope, otherwise, too complicated

	delete[] array;
	delete[] array2;
	array = nullptr;
	array2 = nullptr;
	cout << endl;

//	int &value4 = getValue3(5); //not safe
	int value4 = getValue3(10);

	cout << value4 << endl;
	cout << endl;

	std::array<int, 100> my_array;
	my_array[30] = 10;

	get(my_array, 30) = 1024;

	cout << my_array[30] << endl;
	cout << endl;

	S my_s = getStrc();
	cout << my_s.a << endl;
	cout << endl;

	tuple<int, double> my_tp = getTuple();
	cout << get<0>(my_tp) << endl; // a
	cout << get<1>(my_tp) << endl; // d
	
	//c++17 support
	auto[a, d] = getTuple(); //tuple<int, double> my_tp == auto[a,d] 
	cout << a << endl;
	cout << d << endl;

	return 0;
}