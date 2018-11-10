/*
HongJeongMo C++

Chapter 7_13
Defensive Programming
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string hello = "Hello, my name is Jack";
	cout << hello << endl;
	
	cout << "Input from 0 to " << hello.size() - 1 << endl;

	while (1)
	{
		int ix;
		cin >> ix; // if you input value bigger than hello.length then run-time error cause

		if (ix >= 0 && ix <= hello.size() - 1)
		{
			cout << hello[ix] << endl;
			break;
		}
		else
			cout << "Please try again" << endl;
	}
 
	return 0;
}