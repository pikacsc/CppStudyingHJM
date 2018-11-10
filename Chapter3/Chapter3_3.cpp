/*
HongJeongMo C++

Chapter 3_3
increment/decrement operators
*/
#include <iostream>

int addNumbers(int a, int b);

int getChapter3_3()
{
	using namespace std;

	int x = 5;
	int y = ++x;
	int z = x--;
	cout << y << endl; //6
	cout << z << endl; //6
	cout << endl;

	x = 6;
	y = 6;

	cout << x << " " << y << endl; // 6 6
	cout << x++ << " " << y-- << endl;// 6 6
	cout << ++x << " " << --y << endl; // 8 4
	cout << endl;

	x = 1;
	int v = addNumbers(x, ++x); // do not use like this
	cout << v << endl;
	cout << endl;

	return 0;
}


int addNumbers(int a, int b)
{
	return a + b;
}