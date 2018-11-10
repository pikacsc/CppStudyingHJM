/*
HongJeongMo C++

Chapter 7_3
Passing Arguments by Reference (Call by Reference)

*/

#include <iostream>

using namespace std;

void addOne(int &x) // pass by reference, no copy
{
	cout << x << " " << &x << endl;
	x = x + 1;
}


void getSinCos(const double &degrees, double &sinOut, double &cos_out) // getSinCos(const input,output,output2)
{
	static const double pi = 3.141592 / 180.0;
	const double radians = degrees * pi ; //if 'radians' would never change then use it as a 'const'
	sinOut = sin(radians);
	cos_out = cos(radians);
}


void foo(const int &x)
{
	cout << x << endl;
}

void foo2(int *&ptr) // (int*)&ptr
{
	cout << ptr << " " << &ptr << endl;
}


void printElement(int(&arr)[4])
{
	for (int a : arr)
	{
		cout << a << endl;
	}
}


int main()
{
	int x = 5;
	cout << x << " " << &x << endl;

	addOne(x);
	cout << x << " " << &x << endl;

	cout << endl;

	double sin(0.0);
	double cos(0.0);
	
	getSinCos(30.0, sin, cos);
	cout << sin << " " << cos << endl;
	cout << endl;

	foo(6);
	cout << endl;

	int y = 10;
	int *ptr = &y;
	foo2(ptr);
	cout << endl;
	int arr[] = { 1,2,3,4 };
	printElement(arr);


	return 0;

}