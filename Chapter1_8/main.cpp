/*
HongJeongMo C++

Chapter 1_8 operator
literal
operand
unary
binary
ternary
*/

#include <iostream>

using namespace std;

int main()
{
	int x = 2; // x is a variable, 2 is a literal

	cout << x + 2 << endl;

	cout << -x << endl; // unary

	cout << 1 + 2 << endl; //binary

	int y = (x > 0) ? 1 : 2; //ternary, if x>0 is true then y = 1, false, then y = 2
	// condition ? true : false;



	cout << "Hello, World" << endl;
	return 0;
}