/*
HongJeongMo C++

Chapter 3_4
sizof Operator, Comma Operator, Conditional Operator
*/

#include <iostream>

int getChapter3_4()
{
	using namespace std;
	float f = 0.5f;
	sizeof(float); // == sizeof a, sizeof is not function but operator
	cout << f << endl;
	cout << endl; 

	//comma operator
	int x = 3;
	int y = 10;
	int z = (++x, ++y);
	/*
	++x;
	++y;
	int z = y;  */


	cout << x << " " << y << " " << z << endl;
	cout << endl;

	int a = 1, b = 10;

	z = a, b; // z == a
	cout << z << endl;
	cout << endl;

	z = (a, b); // z == b
	cout << z << endl;
	cout << endl;


	//conditional operator
	bool onSale = true;

	const int price = (onSale == true) ? 10 : 100;

	/*int price;

	if (onSale)
		price = 10;
	else
		price = 100;
*/
	cout << price << endl;
	cout << endl;

	x = 4;
	cout << ((x % 2 == 0) ? "even" : "odd") << endl;
	return 0;
}