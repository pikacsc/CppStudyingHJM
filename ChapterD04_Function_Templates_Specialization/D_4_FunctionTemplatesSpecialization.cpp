/*
HongJeongMo C++

Chapter D_4 Function Templates Specialization

*/
#include <iostream>
#include "Storage.h"

using namespace std;

template<typename T>
T getMax(T x, T y)
{
	return (x > y) ? x : y;
}

//Function Templates Specialization, when arugment is char type, compiler will build below function 
template<>
char getMax(char x, char y)
{
	cout << "Warning : comparing chars" << endl;
	return (x > y) ? x : y;
}


int main()
{
	cout << getMax<double>(1, 2) << endl;
	cout << getMax('a', 'b') << endl;
	cout << endl;

	Storage<int> nValue(5);
	Storage<double> dValue(6.7);

	nValue.print();
	dValue.print();

	return 0;
}