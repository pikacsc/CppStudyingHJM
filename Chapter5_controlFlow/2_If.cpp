/*
HongJeongMo C++

Chapter 5_2
Conditional branches
¢ºif, switch case

*/

#include <iostream>
#include <string>

int main_if()
{
	using namespace std;
	int x;
	cin >> x;

	if (x > 10)  // if(any value except 0)
	{
		cout << x << " is greater than 10" << endl;
		cout << "Test 1" << endl;
	}

	else
	{
		cout << x << " is NOT greater than 10" << endl;
		cout << "Test 1" << endl;
		return 0; // exit(0);
	}

	if (1)
		//{  don't forget that block scope is exist like that
		cout << "x value : " + x << endl;
	//}
	else
	//{
		cout << "x value : " + x << endl;
	//}
	cout << endl;

	cout << "input the y number :";
	int y;
	cin >> y;

	if (y > 10)
		cout << "y is bigger than 10" << endl;
	else if (y < 10)
		cout << "y is less than 10" << endl;
	else // if( x == 10 )
		cout << "y is exactly 10" << endl;

	cout << y << endl;
	cout << endl;

	if (x >= 10)
	{
		if (x >= 20) 
		{
			cout << "x is 20 or bigger than that ";
			return 0; // exit(0);
		}
		cout << "x is between 10 and 20";
	}
	else
		cout << "x is lower than 10" << endl;



	return 0;
}