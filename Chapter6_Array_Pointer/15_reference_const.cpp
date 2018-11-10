/*
HongJeongMo C++

Chapter 6_15
reference and const

*/

#include<iostream>

using namespace std;


void doSomething(const int& x)
{
	cout << "In doSomething x value : " << x << " address : " << &x << endl;
}


int main_reference_const()
{
	int a = 1;
	cout << "In main a value : " << a << " address : " << &a << endl;
	doSomething(a);
	doSomething(1);
	doSomething(a + 3);
	doSomething(3 * 4);
	return 0;
}