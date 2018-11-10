/*
HongJeongMo C++

Chapter 1_10 declaration, definition
*/

#include <iostream>

using namespace std;


//forward declaration, if you don't, error "C3861" will occur
//F12, you can go to definition immediately 
int Add(int a, int b);

int Multiply(int a, int b);

int subtract(int a, int b);

int main() 
{
	cout << Add(1, 2) << endl;
	cout << Multiply(1, 2) << endl;
	cout << subtract(1, 2) << endl;
	return 0;
}

//definition
int Add(int a, int b)
{
	return a + b;
}

int Multiply(int a, int b)
{
	return a * b;
}

int subtract(int a, int b)
{
	return a - b;
}