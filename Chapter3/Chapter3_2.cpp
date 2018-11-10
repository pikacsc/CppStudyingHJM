/*
HongJeongMo C++

Chapter 3_2
Arithmetic Operators
*/

#include <iostream>

int getChapter3_2()
{
	using namespace std;

	int x = 1;
	int y = -x; // -1 * x
	int z = x % y;


	cout << 1 - y << endl;
	cout << x / y << " " << z << endl;
	cout << endl;

	x = 7;
	y = 4;

	cout << x / y << endl;
	cout << endl;

	cout << float(x) / y << endl; // float 
	cout << x / float(y) << endl; // float
	cout << float(x) / float(y) << endl; // float
	cout << endl;

	cout << -5 / 2 << endl; // -2
	cout << endl;

	cout << 5 % -2 << endl; // 1, match with 5
	cout << -5 % 2 << endl; // -1
	cout << endl;

	z = x;
	z += y; // z = z + y;


	return 0;
}