/*
HongJeongMo C++

Chapter 3_1
Operator Precedence and Associativity

*/


#include <iostream>
#include <cmath>




int getChapter3_1()
{
	using namespace std;
	int x = (4 + 2) * 3;
	cout << x << endl;
	cout << endl;

	x = pow(2, 3);
	cout << x << endl;
	
	// r = 1 + 2 + 3 * 4
		// a = b = b
		// t/= --w+5
		// a||b&&c||d
	
	int r = 1 + 2 + 3 * 4; //15
	cout << "r == " << r << endl; 
	cout << endl;



	return 0;
}

