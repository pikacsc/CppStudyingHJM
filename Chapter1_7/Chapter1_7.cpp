/*
HongJeongMo C++

Chapter 1_7 local scope
*/
#include <iostream>
using namespace std;

void doSomething(int y);


int main()
{   // usually function's 'scope' is determined by { }
	int x(0); // int x = 0;
	cout << x << " " << &x << endl;
	
	{  
		//different memory reference
		//int x(1);

		//same memory reference
		x = 1;
		cout << x << " " << &x << endl;

	}

	cout << x << " " << &x << "\n\n\n\n" << endl;

	int y = 0;
	cout << y << endl; // 0
	doSomething(y);
	cout << y << endl; // 0


    return 0;
}


void doSomething(int y)
{
	y = 123;
	cout << y << endl; // 123
}