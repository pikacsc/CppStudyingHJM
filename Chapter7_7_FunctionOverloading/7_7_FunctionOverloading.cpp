/*
HongJeongMo C++

Chapter 7_7
Function Overloading
multi functions which have same name but different parameter
*/

#include <iostream>
#include <string>

using namespace std;


int add(int x, int y)
{
	return x + y;
}

double add(double x, double y)
{
	return x + y;
}


int main()
{
	add(1, 2);
	add(3.0, 4.0);

	return 0;
}