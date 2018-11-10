/*
HongJeongMo C++

Chapter 3_6
Logical Operators
*/

#include <iostream>

int getChapter3_6()
{
	using namespace std;

	// logical AND
	/*bool x = true;
	bool y = false;

	cout << (x && y) << endl;
*/

	bool hit = true;
	
	int health = 10;

	if (hit == true && health < 20)
	{
		cout << "die" << endl;
	}
	else
		health -= 20;

	//short circuit evaluation
	int x = 2;
	int y = 2;
	if ((x == 1) && (y++ == 2)) //if x == 1 is false then compiler wouldn't go to (y++ == 2)
	{
		//do something
	}

	cout << y << endl; //2


	//De Morgan's Law
	//!(x && y);
	//!x && !y;


	bool v1 = true;
	bool v2 = false;
	bool v3 = false;

	bool r1 = v1 || v2 && v3; // bool r1 = v1 || (v2 && v3);
	bool r2 = (v1 || v2) && v3;

	cout << r1 << endl; // 1
	cout << r2 << endl; // 0

	return 0;
}