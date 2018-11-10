/*
HongJeongMo C++

Chapter 7_2
Passing Arguments by Value (Call by Value)

*/

#include <iostream>

using namespace std;

void doSomething(int x) // pass by value, declare new int x in 'doSomething()' and copy and assign to x 
{
	cout << "In func " << x << " " << &x << endl; // (In main int x) != (In doSomething int x)
}


int main()
{
	doSomething(5);

	int x = 6;

	cout << "In main " << x << " " << &x << endl;

	doSomething(x);
	doSomething(x + 1);


	return 0;
}